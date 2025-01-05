`timescale 1ns/1ps

//assuming we want similar interface to that of switch... otherwise we can
//revert back to previous implementation
module torus_switch #(
  parameter X_W	= 2,	// X address width
  parameter Y_W	= 2,	// Y address width
  parameter D_W	= 32,	// data width
  parameter X = 2,
  parameter Y = 2
) (
	input  wire clk,		// clock
	input  wire rst,		// reset

	input  wire n_in_v,	        // north in valid
	input  wire [X_W-1:0] n_in_x,	// north in x
	input  wire [Y_W-1:0] n_in_y,	// north in y
	input  wire [D_W-1:0] n_in_data,	// north in data

	input  wire w_in_v,	        // west in valid
	input  wire [X_W-1:0] w_in_x,	// west in x
	input  wire [Y_W-1:0] w_in_y,	// west in y
	input  wire [D_W-1:0] w_in_data,	// west in data

	input  wire i_v,	        // in valid
	input  wire [X_W-1:0] i_x,	    // in x
	input  wire [Y_W-1:0] i_y,	    // in y
	input  wire [D_W-1:0] i_data,	// in data

	output wire i_ack,		// input accepted this cycle
	output wire o_v,		// s_out is valid output message for this node

  output wire s_out_v,
  output wire [X_W-1:0] s_out_x,	// north in x
	output wire [Y_W-1:0] s_out_y,	// north in y
	output wire [D_W-1:0] s_out_data,	// north in data

	output  wire      e_out_v,
	output  [X_W-1:0] e_out_x,
	output  [Y_W-1:0] e_out_y,
	output  [D_W-1:0] e_out_data,

  output wire done
);

// your lab3 code here

`define v		[X_W+Y_W+D_W]
`define xv		[X_W+Y_W+D_W-1 : 0]
`define x		[X_W+Y_W+D_W-1 : Y_W+D_W]
`define y		[    Y_W+D_W-1 :     D_W]
`define d		[        D_W-1 :       0]
`define msg_w   (X_W+Y_W+D_W+1)


	// Internal pipeline registers for inputs
	reg n_in_v_reg, w_in_v_reg;
	reg [X_W-1:0] n_in_x_reg, w_in_x_reg;
	reg [Y_W-1:0] n_in_y_reg, w_in_y_reg;
	reg [D_W-1:0] n_in_data_reg, w_in_data_reg;
	
	// Internal pipeline registers for outputs
	reg s_out_v_reg, e_out_v_reg, o_v_reg;
	reg [X_W-1:0] s_out_x_reg, e_out_x_reg;
	reg [Y_W-1:0] s_out_y_reg, e_out_y_reg;
	reg [D_W-1:0] s_out_data_reg, e_out_data_reg;
	

	// Pipeline the inputs on the rising edge of clk
	always @(posedge clk) begin
		if (rst) begin
			n_in_v_reg <= 0; w_in_v_reg <= 0; 
			n_in_x_reg <= 0; w_in_x_reg <= 0; 
			n_in_y_reg <= 0; w_in_y_reg <= 0; 
			n_in_data_reg <= 0; w_in_data_reg <= 0; 
		end else begin
			n_in_v_reg <= n_in_v; w_in_v_reg <= w_in_v; 
			n_in_x_reg <= n_in_x; w_in_x_reg <= w_in_x; 
			n_in_y_reg <= n_in_y; w_in_y_reg <= w_in_y; 
			n_in_data_reg <= n_in_data; w_in_data_reg <= w_in_data; 
		end
	end

	// Instantiate the DOR module
	wire dor_e_v, dor_s_v, dor_o_v;
	wire dor_n2s, dor_w2s, dor_w2e;

	dor #(
		.X_W(X_W), .Y_W(Y_W),
		.X(X), .Y(Y)
	) dor_inst (
		.n_x(n_in_x_reg), .n_y(n_in_y_reg), .n_v(n_in_v_reg),
		.w_x(w_in_x_reg), .w_y(w_in_y_reg), .w_v(w_in_v_reg),
		.i_x(i_x), .i_y(i_y), .i_v(i_v),
		.e_v(dor_e_v), .s_v(dor_s_v), .o_v(dor_o_v),
		.n2s(dor_n2s), .w2s(dor_w2s), .w2e(dor_w2e),
		.i_ack(i_ack)
	);

	// Message generation with pipelined registers
	wire [`msg_w-2:0] n_msg, w_msg, i_msg, e_msg, s_msg;
	assign n_msg = {n_in_x_reg, n_in_y_reg, n_in_data_reg};
	assign w_msg = {w_in_x_reg, w_in_y_reg, w_in_data_reg};
	assign i_msg = {i_x, i_y, i_data};

	// Crossbar instantiation
	genvar i;
	generate
		for (i = 0; i < `msg_w-1; i = i + 1) begin : xbar_gen
			torus_xbar_1b xbar_inst (	
				.w2e(dor_w2e),
				.w2s(dor_w2s),
				.n2s(dor_n2s),
				.p2s(1'b0), // ignore in standard-cell/FPGA flow but keep for custom cell compatibility
				.p2e(1'b0), // ignore in standard-cell/FPGA flow but keep for custom cell compatibility
				.ni(n_msg[i]),
				.wi(w_msg[i]),
				.pi(i_msg[i]),
				.so(s_msg[i]),
				.eo(e_msg[i])
			);
		end
	endgenerate
	
	// Pipeline the outputs on the rising edge of clk
	always @(posedge clk) begin
		if (rst) begin
			s_out_v_reg <= 0; e_out_v_reg <= 0; o_v_reg <= 0; 
			s_out_x_reg <= 0; s_out_y_reg <= 0; s_out_data_reg <= 0;
			e_out_x_reg <= 0; e_out_y_reg <= 0; e_out_data_reg <= 0;
		end else begin
			s_out_v_reg <= dor_s_v; e_out_v_reg <= dor_e_v; o_v_reg <= dor_o_v;
			s_out_x_reg <= s_msg`x; s_out_y_reg <= s_msg`y; s_out_data_reg <= s_msg`d;
			e_out_x_reg <= e_msg`x; e_out_y_reg <= e_msg`y; e_out_data_reg <= e_msg`d;
		end
	end

	// Assign pipelined outputs to the actual outputs
	assign s_out_v = s_out_v_reg;
	assign e_out_v = e_out_v_reg;
	assign o_v = o_v_reg;

	assign s_out_x = s_out_x_reg;
	assign s_out_y = s_out_y_reg;
	assign s_out_data = s_out_data_reg;

	assign e_out_x = e_out_x_reg;
	assign e_out_y = e_out_y_reg;
	assign e_out_data = e_out_data_reg;


  assign done = !(dor_o_v | dor_e_v| dor_s_v | o_v | s_out_v | e_out_v | n_in_v_reg | w_in_v_reg | i_v | n_in_v | w_in_v);

endmodule
