//IGNORE PARAMETERS, UNUSED

module client #(parameter SIGMA = 3, parameter RATE = 20, parameter VC_W = 3, parameter X_W = 2, parameter Y_W = 2, parameter X= 2,  parameter Y= 2, parameter D_W = 256, parameter N_PACKETS = 128, parameter X_MAX = 1 << X_W, parameter Y_MAX = 1 << Y_W) (clk, rst, i_ack, i_v, i_vc, i_x, i_y, i_data, done, o_v, o_x, o_y, o_data);
  wire [2:0] _00_;
  wire [1:0] _01_;
  wire [1:0] _02_;
  wire [31:0] _03_;
  wire _04_;
  wire [511:0] _05_;
  wire _06_;
  wire _07_;
  wire _08_;
  wire _09_;
  wire _10_;
  wire _11_;
  wire _12_;
  wire _13_;
  wire [1:0] _14_;
  input clk;
  wire clk;
  wire consume;
  output done;
  wire done;
  reg done_r;
  input i_ack;
  wire i_ack;
  reg [511:0] i_d_r;
  output [511:0] i_data;
  wire [511:0] i_data;
  output i_v;
  wire i_v;
  reg i_v_r;
  output [2:0] i_vc;
  wire [2:0] i_vc;
  reg [2:0] i_vc_r;
  output [1:0] i_x;
  wire [1:0] i_x;
  reg [1:0] i_x_r;
  output [1:0] i_y;
  wire [1:0] i_y;
  reg [1:0] i_y_r;
  input [511:0] o_data;
  wire [511:0] o_data;
  input o_v;
  wire o_v;
  input [1:0] o_x;
  wire [1:0] o_x;
  input [1:0] o_y;
  wire [1:0] o_y;
  reg [31:0] packet_num;
  input rst;
  wire rst;
  wire token_avail;
  reg waiting_for_ack;
  assign _00_ = { consume, consume, consume } + { o_data[0], o_data[0], o_data[0] };
  assign _01_ = i_ack + o_v;
  assign _02_ = o_y + consume;
  assign _03_ = $signed(packet_num) + $signed(32'd1);
  assign _04_ = token_avail & _13_;
  assign consume = _04_ & _12_;
  assign _05_ = o_data & { o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v, o_v };
  always @(posedge clk)
    if (rst) packet_num <= 32'd0;
    else if (consume) packet_num <= _03_;
  always @(posedge clk)
    if (rst) waiting_for_ack <= 1'h0;
    else if (_10_) waiting_for_ack <= consume;
  always @(posedge clk)
    if (_07_) i_v_r <= 1'h0;
    else if (_10_) i_v_r <= consume;
  always @(posedge clk)
    if (rst) i_vc_r <= 3'h0;
    else if (_10_) i_vc_r <= _00_;
  always @(posedge clk)
    if (rst) i_y_r <= 2'h0;
    else if (_10_) i_y_r <= _02_;
  always @(posedge clk)
    if (rst) i_x_r <= 2'h0;
    else if (_10_) i_x_r <= _14_;
  always @(posedge clk)
    if (rst) i_d_r <= 512'h00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
    else if (_10_) i_d_r <= _05_;
  always @(posedge clk)
    if (rst) done_r <= 1'h0;
    else if (_06_) done_r <= 1'h1;
  assign _06_ = & { _08_, i_ack };
  assign _07_ = | { _09_, rst };
  assign _08_ = $signed(packet_num) == $signed(32'd128);
  assign _09_ = $signed(packet_num) >= $signed(32'd128);
  assign _10_ = _13_ && _12_;
  assign _11_ = ! waiting_for_ack;
  assign _12_ = $signed(packet_num) < $signed(32'd128);
  assign _13_ = _11_ | i_ack;
  assign _14_ = o_x ^ _01_;
  token_bucket #(
    .RATE(32'sd20),
    .SIGMA(32'sd3)
  ) regulator (
    .clk(clk),
    .consume(consume),
    .rst(rst),
    .token_available(token_avail)
  );
  assign done = done_r;
  assign i_data = i_d_r;
  assign i_v = i_v_r;
  assign i_vc = i_vc_r;
  assign i_x = i_x_r;
  assign i_y = i_y_r;
endmodule
