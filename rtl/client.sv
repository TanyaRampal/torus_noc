`timescale 1ns/1ps

module client #(
  parameter SIGMA = 3,   // max burst length, (token bucket depth)
  parameter RATE  = 20,  // one packet every RATE CYCLES
	parameter VC_W  = 3,
	parameter X_W   = 2,
	parameter Y_W   = 2,
	parameter X     = 2,
	parameter Y     = 2,
	parameter D_W   = 28,
	parameter N_PACKETS = 128,
	parameter X_MAX = 1 << X_W,
	parameter Y_MAX = 1 << Y_W
) (
    input  wire clk,
    input  wire rst,
    input  wire i_ack,

    output wire i_v,
    output wire [VC_W-1:0] i_vc,
    output wire [X_W-1:0]  i_x,
    output wire [Y_W-1:0]  i_y,
    output wire [D_W-1:0]  i_data,

    output wire done,

    input  wire o_v,
    input  wire [X_W-1:0] o_x,
    input  wire [Y_W-1:0] o_y,
    input  wire [D_W-1:0] o_data
);

`define vc		[VC_W+X_W+Y_W+D_W-1 : Y_W+D_W+X_W]
`define x		[X_W+Y_W+D_W-1 : Y_W+D_W]
`define y		[    Y_W+D_W-1 :     D_W]
`define d		[        D_W-1 :       0]

    reg [VC_W+X_W+Y_W+D_W-1:0] packets[X_MAX*Y_MAX*N_PACKETS];
    integer cycle_num = 0;
    integer __TEST_trace_fd;

    string trace_file_str;
    string packet_file_str;
    initial begin
        $sformat(packet_file_str, "%s_%0d_%0d", `PACKET_TRACE_PATH, X, Y);
        $readmemh(packet_file_str, packets);
        $sformat(trace_file_str, "%s_%0d_%0d", `TRACE_FILE, X, Y);
        __TEST_trace_fd = $fopen(trace_file_str, "w");
    end

    always @(posedge clk) begin
        if(rst) begin
            cycle_num <= 0;
        end else begin
            cycle_num <= cycle_num + 1;
        end
    end

    wire consume;
    wire token_avail;
    integer packet_num;
    reg waiting_for_ack;

    // Your Lab4 code here

    // Add following condition to your always block carefully to check if you have sent all packets into your lab4 logic
// if(i_ack) begin
//   if(packet_num == N_PACKETS) begin
//     done_r <= 1;
//   end
// end

	token_bucket #(.SIGMA(SIGMA), .RATE(RATE)) regulator (
        .clk(clk),
        .rst(rst),
        .consume(consume),
        .token_available(token_avail)
    );

    // 1. write combinational assign statement for consume logic.
    assign consume = token_avail && ((waiting_for_ack && i_ack) || !waiting_for_ack) && (packet_num<N_PACKETS);

    reg i_v_r;
    reg [VC_W-1:0] i_vc_r;
    reg [X_W-1:0] i_x_r;
    reg [Y_W-1:0] i_y_r;
    reg [D_W-1:0] i_d_r;
    reg done_r;

    always @(posedge clk) begin
        if(rst) begin
            i_v_r <= 0;
            i_vc_r <= 0;
            i_x_r <= 0;
            i_y_r <= 0;
            i_d_r <= 0;
            waiting_for_ack <= 0;
            packet_num <= 0;
            done_r<=0;
        end else begin
            // 2. write your sequntial code here
            if (consume) begin
                i_vc_r <= packets[packet_num]`vc;
                i_x_r <= packets[packet_num]`x;
                i_y_r <= packets[packet_num]`y;
                i_d_r <= packets[packet_num]`d;
                i_v_r <= 1;
                packet_num <= packet_num+1;
                waiting_for_ack <= 1;
            end else if (i_ack) begin
                waiting_for_ack<=0;
                i_v_r<=0;
				if(packet_num == N_PACKETS) begin
					done_r <= 1;
				end
            end

            // do not delete this section
            if(consume) begin
                $fwrite(__TEST_trace_fd,"A,%0d,%x,%x,%x\n",cycle_num,packets[packet_num]`x,packets[packet_num]`y,packets[packet_num]`d);
            end

            if(i_ack) begin
                $fwrite(__TEST_trace_fd,"S,%0d,%x,%x,%x\n",cycle_num-1,i_x_r,i_y_r,i_d_r);
            end

            if(o_v) begin
                $fwrite(__TEST_trace_fd,"R,%0d,%x,%x,%x\n",cycle_num,o_x,o_y,o_data);
            end
        end
    end

    assign i_v = i_v_r;
    assign i_vc = i_vc_r;
    assign i_x = i_x_r;
    assign i_y = i_y_r;
    assign i_data = i_d_r;


    assign done   = done_r;
endmodule
