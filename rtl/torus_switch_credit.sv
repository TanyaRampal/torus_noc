`timescale 1ns/1ps

//pure hoplite_bp with no fifo from W->S

module torus_switch_credit #(
  parameter VC_W  = 3,                // Virtual Channel Width
  parameter X_W	= 2,	            // X address width
  parameter Y_W	= 2,	            // Y address width
  parameter D_W	= 32,	    // data width
  parameter X_MAX	= 1<<X_W,
  parameter Y_MAX	= 1<<Y_W,
  parameter X	= 2,	                // X address of this node
  parameter Y	= 2,		                // Y address of this node
  parameter DEPTH = 32
) (
  input  wire clk,		            // clock
  input  wire rst,		            // reset

  input  wire i_v,	                // in valid
  input  wire [X_W-1:0] i_x,	        // in x
  input  wire [Y_W-1:0] i_y,	        // in y
  input  wire [D_W-1:0] i_data,	    // in data
  input  wire [VC_W-1:0] i_vc,        // one hot vc encoding

  output wire i_ack,		            // input accepted this cycle
  output wire o_v,		            // s_out is valid output message for this node
  // assume unlimited client buffer

  noc_if.transmitter to_east_rx,
  noc_if.receiver from_west_tx,

  input wire n_in_v,
  input wire [X_W-1:0] n_in_x,
  input wire [Y_W-1:0] n_in_y,
  input wire [D_W-1:0] n_in_data,

  output wire s_out_v,
  output wire [X_W-1:0] s_out_x,
  output wire [Y_W-1:0] s_out_y,
  output wire [D_W-1:0] s_out_data,

  output wire done
);

// Your lab3 code here

`define last    [X_W+Y_W+D_W]
`define x		[X_W+Y_W+D_W-1 : Y_W+D_W]
`define y		[    Y_W+D_W-1 :     D_W]
`define d		[        D_W-1 :       0]
`define addr    [X_W+Y_W+D_W-1 :     D_W]
`define msg_w   (X_W+Y_W+D_W+1)

// Internal pipeline registers for inputs (except w_in and i_ack)
reg n_in_v_reg;
reg [X_W-1:0] n_in_x_reg;
reg [Y_W-1:0] n_in_y_reg;
reg [D_W-1:0] n_in_data_reg;

// Internal pipeline registers for outputs
reg s_out_v_reg, o_v_reg;
reg [X_W-1:0] s_out_x_reg;
reg [Y_W-1:0] s_out_y_reg;
reg [D_W-1:0] s_out_data_reg;

// Pipeline the inputs (except west input and i_ack) on the rising edge of clk
always @(posedge clk) begin
    if (rst) begin
        n_in_v_reg <= 0;
		n_in_x_reg <= 0; n_in_y_reg <= 0;
        n_in_data_reg <= 0;
    end else begin
        n_in_v_reg <= n_in_v;
        n_in_x_reg <= n_in_x; n_in_y_reg <= n_in_y;
        n_in_data_reg <= n_in_data;
    end
end


wire [VC_W-1:0] e_v, e_b, w_in_v;
wire [`msg_w-1:0] e_out_c;

wire [X_W-1:0] w_in_x;
wire [Y_W-1:0] w_in_y;
wire [D_W-1:0] w_in_data;
wire w_b;


// wiring up credit interfaces
credit_bp_tx #(.VC_W(VC_W), .D_W(D_W), .X_W(X_W), .Y_W(Y_W), .A_W(X_W+Y_W), .DEPTH(DEPTH))
    east_conn_tx(.clk(clk), .rst(rst), .to_rx(to_east_rx), .i_v(e_v), .i_x(e_out_c`x), .i_y(e_out_c`y), .i_d(e_out_c`d), .o_b(e_b));
credit_bp_rx #(.VC_W(VC_W), .D_W(D_W), .X_W(X_W), .Y_W(Y_W), .A_W(X_W+Y_W), .DEPTH(DEPTH))
    west_conn_rx(.clk(clk), .rst(rst), .from_tx(from_west_tx), .o_v(w_in_v), .o_x(w_in_x), .o_y(w_in_y), .o_d(w_in_data), .i_b(w_b));

    // instantiate dor_credit logic

    // pipeline outputs (only really N->S)

wire dor_e_v, dor_s_v, dor_o_v;
wire dor_n2s, dor_w2s, dor_w2e;

	DOR_CREDIT #(
		.X_W(X_W), .Y_W(Y_W),
		.X(X), .Y(Y)
	) dor_credit_inst (
		.n_x(n_in_x_reg), .n_y(n_in_y_reg), .n_v(n_in_v_reg),
		.w_x(w_in_x), .w_y(w_in_y), .w_v(w_in_v),
		.i_x(i_x), .i_y(i_y), .i_v(i_v), .i_vc(i_vc),
		.e_b(e_b), .w_b(w_b),
		.e_v(e_v), .s_v(dor_s_v), .o_v(dor_o_v),
		.n2s(dor_n2s), .w2s(dor_w2s), .w2e(dor_w2e),
		.i_ack(i_ack)
	);


	// Message generation with pipelined registers
wire [`msg_w-2:0] n_msg, i_msg, e_msg, s_msg, w_msg;
assign n_msg = {n_in_x_reg, n_in_y_reg, n_in_data_reg};
assign i_msg = {i_x, i_y, i_data};
assign w_msg = {w_in_x, w_in_y, w_in_data};

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
				.eo(e_out_c[i])
			);
		end
	endgenerate

	// Pipeline the outputs on the rising edge of clk
	always @(posedge clk) begin
		if (rst) begin
			s_out_v_reg <= 0; o_v_reg <= 0;
			s_out_x_reg <= 0; s_out_y_reg <= 0; s_out_data_reg <= 0;
		end else begin
			s_out_v_reg <= dor_s_v; s_out_data_reg <= s_msg`d;
			s_out_x_reg <= s_msg`x; s_out_y_reg <= s_msg`y;
			o_v_reg <= dor_o_v;
		end
	end

	// Assign pipelined outputs to the actual outputs
	assign s_out_v = s_out_v_reg;
	assign o_v = o_v_reg;

	assign s_out_x = s_out_x_reg;
	assign s_out_y = s_out_y_reg;
	assign s_out_data = s_out_data_reg;



  assign done = !(dor_o_v | dor_s_v | o_v | s_out_v | n_in_v | n_in_v_reg | i_v | (|e_v) | (|w_in_v) | (|from_west_tx.vc_target));
endmodule
