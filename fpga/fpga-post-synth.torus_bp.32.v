// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2022.1 (lin64) Build 3526262 Mon Apr 18 15:47:01 MDT 2022
// Date        : Fri Dec  6 14:37:12 2024
// Host        : ECEUBUNTU2 running 64-bit Red Hat Enterprise Linux release 8.10 (Ootpa)
// Command     : write_verilog -force -mode funcsim fpga-post-synth.torus_bp.32.v
// Design      : torus_bp
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7z020clg400-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module client
   (\i[0][0]_36 ,
    e_v115_out__1,
    e_v214_in,
    number_tokens_reg,
    dor_o_v,
    \i_y_r_reg[1]_0 ,
    dor_s_v,
    \i_x_r_reg[1]_0 ,
    dor_e_v,
    rst,
    clk,
    D,
    waiting_for_ack_reg_0,
    \i_y_r_reg[0]_0 ,
    Q,
    w_b,
    dor_w2e,
    o_v_reg_reg,
    s_out_v_reg_reg,
    waiting_for_ack_reg_1,
    \i_x_r_reg[1]_1 ,
    number_tokens_reg_0_sp_1);
  output \i[0][0]_36 ;
  output e_v115_out__1;
  output e_v214_in;
  output [1:0]number_tokens_reg;
  output dor_o_v;
  output [1:0]\i_y_r_reg[1]_0 ;
  output dor_s_v;
  output [1:0]\i_x_r_reg[1]_0 ;
  output dor_e_v;
  input rst;
  input clk;
  input [0:0]D;
  input waiting_for_ack_reg_0;
  input \i_y_r_reg[0]_0 ;
  input [0:0]Q;
  input w_b;
  input dor_w2e;
  input o_v_reg_reg;
  input s_out_v_reg_reg;
  input waiting_for_ack_reg_1;
  input [1:0]\i_x_r_reg[1]_1 ;
  input number_tokens_reg_0_sp_1;

  wire [0:0]D;
  wire [0:0]Q;
  wire [0:0]_02_;
  wire _05_;
  wire clk;
  wire consume;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[0][0]_36 ;
  wire [1:0]\i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire \i_y_r_reg[0]_0 ;
  wire [1:0]\i_y_r_reg[1]_0 ;
  wire [1:0]number_tokens_reg;
  wire number_tokens_reg_0_sn_1;
  wire o_v_reg_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire w_b;
  wire waiting_for_ack_reg_0;
  wire waiting_for_ack_reg_1;

  assign number_tokens_reg_0_sn_1 = number_tokens_reg_0_sp_1;
  LUT3 #(
    .INIT(8'hF4)) 
    e_out_v_reg_i_2
       (.I0(e_v214_in),
        .I1(\i[0][0]_36 ),
        .I2(dor_w2e),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [0]),
        .Q(\i_x_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [1]),
        .Q(\i_x_r_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(_02_),
        .Q(\i_y_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(D),
        .Q(\i_y_r_reg[1]_0 [1]),
        .R(rst));
  LUT6 #(
    .INIT(64'hFFFFFFFF01000000)) 
    o_v_reg_i_1
       (.I0(waiting_for_ack_reg_0),
        .I1(\i_y_r_reg[1]_0 [1]),
        .I2(\i_y_r_reg[1]_0 [0]),
        .I3(e_v214_in),
        .I4(\i[0][0]_36 ),
        .I5(o_v_reg_reg),
        .O(dor_o_v));
  token_bucket_29 regulator
       (.D(_02_),
        .Q(Q),
        .clk(clk),
        .consume(consume),
        .\i_x_r_reg[0] (e_v214_in),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_0 ),
        .\i_y_r_reg[1] (e_v115_out__1),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[0]_1 (number_tokens_reg_0_sn_1),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[0][0]_36 ),
        .waiting_for_ack_reg_1(\i_y_r_reg[1]_0 ),
        .waiting_for_ack_reg_2(\i_x_r_reg[1]_0 ),
        .waiting_for_ack_reg_3(waiting_for_ack_reg_1));
  LUT6 #(
    .INIT(64'hFFFFFFFF00E00000)) 
    s_out_v_reg_i_1
       (.I0(\i_y_r_reg[1]_0 [1]),
        .I1(\i_y_r_reg[1]_0 [0]),
        .I2(e_v214_in),
        .I3(waiting_for_ack_reg_0),
        .I4(\i[0][0]_36 ),
        .I5(s_out_v_reg_reg),
        .O(dor_s_v));
  LUT6 #(
    .INIT(64'h32323237FFFFFFFF)) 
    waiting_for_ack_i_1
       (.I0(e_v115_out__1),
        .I1(waiting_for_ack_reg_0),
        .I2(e_v214_in),
        .I3(w_b),
        .I4(dor_w2e),
        .I5(\i[0][0]_36 ),
        .O(_05_));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(_05_),
        .D(consume),
        .Q(\i[0][0]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized0
   (\i[1][0]_36 ,
    e_v115_out__1,
    \i_x_r_reg[0]_0 ,
    number_tokens_reg,
    dor_o_v,
    \i_y_r_reg[1]_0 ,
    dor_s_v,
    \i_x_r_reg[1]_0 ,
    dor_e_v,
    rst,
    clk,
    D,
    waiting_for_ack_reg_0,
    \i_y_r_reg[0]_0 ,
    Q,
    w_b,
    dor_w2e,
    o_v_reg_reg,
    s_out_v_reg_reg,
    waiting_for_ack_reg_1,
    \i_x_r_reg[1]_1 ,
    number_tokens_reg_0_sp_1);
  output \i[1][0]_36 ;
  output e_v115_out__1;
  output \i_x_r_reg[0]_0 ;
  output [1:0]number_tokens_reg;
  output dor_o_v;
  output [1:0]\i_y_r_reg[1]_0 ;
  output dor_s_v;
  output [1:0]\i_x_r_reg[1]_0 ;
  output dor_e_v;
  input rst;
  input clk;
  input [0:0]D;
  input waiting_for_ack_reg_0;
  input \i_y_r_reg[0]_0 ;
  input [0:0]Q;
  input w_b;
  input dor_w2e;
  input o_v_reg_reg;
  input s_out_v_reg_reg;
  input waiting_for_ack_reg_1;
  input [1:0]\i_x_r_reg[1]_1 ;
  input number_tokens_reg_0_sp_1;

  wire [0:0]D;
  wire [0:0]Q;
  wire [0:0]_02_;
  wire _05_;
  wire clk;
  wire consume;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire e_v115_out__1;
  wire \i[1][0]_36 ;
  wire \i_x_r_reg[0]_0 ;
  wire [1:0]\i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire \i_y_r_reg[0]_0 ;
  wire [1:0]\i_y_r_reg[1]_0 ;
  wire [1:0]number_tokens_reg;
  wire number_tokens_reg_0_sn_1;
  wire o_v_reg_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire w_b;
  wire waiting_for_ack_reg_0;
  wire waiting_for_ack_reg_1;

  assign number_tokens_reg_0_sn_1 = number_tokens_reg_0_sp_1;
  LUT3 #(
    .INIT(8'hF4)) 
    e_out_v_reg_i_2__0
       (.I0(\i_x_r_reg[0]_0 ),
        .I1(\i[1][0]_36 ),
        .I2(dor_w2e),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [0]),
        .Q(\i_x_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [1]),
        .Q(\i_x_r_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(_02_),
        .Q(\i_y_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(D),
        .Q(\i_y_r_reg[1]_0 [1]),
        .R(rst));
  LUT6 #(
    .INIT(64'hFFFFFFFF01000000)) 
    o_v_reg_i_1__0
       (.I0(waiting_for_ack_reg_0),
        .I1(\i_y_r_reg[1]_0 [1]),
        .I2(\i_y_r_reg[1]_0 [0]),
        .I3(\i_x_r_reg[0]_0 ),
        .I4(\i[1][0]_36 ),
        .I5(o_v_reg_reg),
        .O(dor_o_v));
  token_bucket_27 regulator
       (.D(_02_),
        .Q(Q),
        .clk(clk),
        .consume(consume),
        .\i_x_r_reg[0] (\i_x_r_reg[0]_0 ),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_0 ),
        .\i_y_r_reg[1] (e_v115_out__1),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[0]_1 (number_tokens_reg_0_sn_1),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[1][0]_36 ),
        .waiting_for_ack_reg_1(\i_y_r_reg[1]_0 ),
        .waiting_for_ack_reg_2(\i_x_r_reg[1]_0 ),
        .waiting_for_ack_reg_3(waiting_for_ack_reg_1));
  LUT6 #(
    .INIT(64'hFFFFFFFF00E00000)) 
    s_out_v_reg_i_1__0
       (.I0(\i_y_r_reg[1]_0 [1]),
        .I1(\i_y_r_reg[1]_0 [0]),
        .I2(\i_x_r_reg[0]_0 ),
        .I3(waiting_for_ack_reg_0),
        .I4(\i[1][0]_36 ),
        .I5(s_out_v_reg_reg),
        .O(dor_s_v));
  LUT6 #(
    .INIT(64'h32323237FFFFFFFF)) 
    waiting_for_ack_i_1__0
       (.I0(e_v115_out__1),
        .I1(waiting_for_ack_reg_0),
        .I2(\i_x_r_reg[0]_0 ),
        .I3(w_b),
        .I4(dor_w2e),
        .I5(\i[1][0]_36 ),
        .O(_05_));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(_05_),
        .D(consume),
        .Q(\i[1][0]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized1
   (\i[2][0]_36 ,
    e_v115_out__1,
    \i_x_r_reg[1]_0 ,
    number_tokens_reg,
    dor_o_v,
    \i_y_r_reg[1]_0 ,
    dor_s_v,
    \i_x_r_reg[1]_1 ,
    dor_e_v,
    rst,
    clk,
    D,
    waiting_for_ack_reg_0,
    \i_y_r_reg[0]_0 ,
    Q,
    w_b,
    dor_w2e,
    o_v_reg_reg,
    s_out_v_reg_reg,
    waiting_for_ack_reg_1,
    \i_x_r_reg[1]_2 ,
    number_tokens_reg_0_sp_1);
  output \i[2][0]_36 ;
  output e_v115_out__1;
  output \i_x_r_reg[1]_0 ;
  output [1:0]number_tokens_reg;
  output dor_o_v;
  output [1:0]\i_y_r_reg[1]_0 ;
  output dor_s_v;
  output [1:0]\i_x_r_reg[1]_1 ;
  output dor_e_v;
  input rst;
  input clk;
  input [0:0]D;
  input waiting_for_ack_reg_0;
  input \i_y_r_reg[0]_0 ;
  input [0:0]Q;
  input w_b;
  input dor_w2e;
  input o_v_reg_reg;
  input s_out_v_reg_reg;
  input waiting_for_ack_reg_1;
  input [1:0]\i_x_r_reg[1]_2 ;
  input number_tokens_reg_0_sp_1;

  wire [0:0]D;
  wire [0:0]Q;
  wire [0:0]_02_;
  wire _05_;
  wire clk;
  wire consume;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire e_v115_out__1;
  wire \i[2][0]_36 ;
  wire \i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire [1:0]\i_x_r_reg[1]_2 ;
  wire \i_y_r_reg[0]_0 ;
  wire [1:0]\i_y_r_reg[1]_0 ;
  wire [1:0]number_tokens_reg;
  wire number_tokens_reg_0_sn_1;
  wire o_v_reg_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire w_b;
  wire waiting_for_ack_reg_0;
  wire waiting_for_ack_reg_1;

  assign number_tokens_reg_0_sn_1 = number_tokens_reg_0_sp_1;
  LUT3 #(
    .INIT(8'hF4)) 
    e_out_v_reg_i_2__1
       (.I0(\i_x_r_reg[1]_0 ),
        .I1(\i[2][0]_36 ),
        .I2(dor_w2e),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_2 [0]),
        .Q(\i_x_r_reg[1]_1 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_2 [1]),
        .Q(\i_x_r_reg[1]_1 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(_02_),
        .Q(\i_y_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(D),
        .Q(\i_y_r_reg[1]_0 [1]),
        .R(rst));
  LUT6 #(
    .INIT(64'hFFFFFFFF01000000)) 
    o_v_reg_i_1__1
       (.I0(waiting_for_ack_reg_0),
        .I1(\i_y_r_reg[1]_0 [1]),
        .I2(\i_y_r_reg[1]_0 [0]),
        .I3(\i_x_r_reg[1]_0 ),
        .I4(\i[2][0]_36 ),
        .I5(o_v_reg_reg),
        .O(dor_o_v));
  token_bucket_25 regulator
       (.D(_02_),
        .Q(Q),
        .clk(clk),
        .consume(consume),
        .\i_x_r_reg[1] (\i_x_r_reg[1]_0 ),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_0 ),
        .\i_y_r_reg[1] (e_v115_out__1),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[0]_1 (number_tokens_reg_0_sn_1),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[2][0]_36 ),
        .waiting_for_ack_reg_1(\i_y_r_reg[1]_0 ),
        .waiting_for_ack_reg_2(\i_x_r_reg[1]_1 ),
        .waiting_for_ack_reg_3(waiting_for_ack_reg_1));
  LUT6 #(
    .INIT(64'hFFFFFFFF00E00000)) 
    s_out_v_reg_i_1__1
       (.I0(\i_y_r_reg[1]_0 [1]),
        .I1(\i_y_r_reg[1]_0 [0]),
        .I2(\i_x_r_reg[1]_0 ),
        .I3(waiting_for_ack_reg_0),
        .I4(\i[2][0]_36 ),
        .I5(s_out_v_reg_reg),
        .O(dor_s_v));
  LUT6 #(
    .INIT(64'h32323237FFFFFFFF)) 
    waiting_for_ack_i_1__1
       (.I0(e_v115_out__1),
        .I1(waiting_for_ack_reg_0),
        .I2(\i_x_r_reg[1]_0 ),
        .I3(w_b),
        .I4(dor_w2e),
        .I5(\i[2][0]_36 ),
        .O(_05_));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(_05_),
        .D(consume),
        .Q(\i[2][0]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized10
   (\i[3][2]_36 ,
    e_v115_out__1,
    e_v214_in,
    number_tokens_reg,
    dor_o_v,
    \i_y_r_reg[1]_0 ,
    dor_s_v,
    \i_x_r_reg[1]_0 ,
    dor_e_v,
    rst,
    clk,
    D,
    waiting_for_ack_reg_0,
    \i_y_r_reg[0]_0 ,
    Q,
    \w_b[0][2] ,
    dor_w2e,
    o_v_reg_reg,
    s_out_v_reg_reg,
    waiting_for_ack_reg_1,
    \i_x_r_reg[1]_1 ,
    number_tokens_reg_0_sp_1);
  output \i[3][2]_36 ;
  output e_v115_out__1;
  output e_v214_in;
  output [1:0]number_tokens_reg;
  output dor_o_v;
  output [1:0]\i_y_r_reg[1]_0 ;
  output dor_s_v;
  output [1:0]\i_x_r_reg[1]_0 ;
  output dor_e_v;
  input rst;
  input clk;
  input [0:0]D;
  input waiting_for_ack_reg_0;
  input \i_y_r_reg[0]_0 ;
  input [0:0]Q;
  input \w_b[0][2] ;
  input dor_w2e;
  input o_v_reg_reg;
  input s_out_v_reg_reg;
  input waiting_for_ack_reg_1;
  input [1:0]\i_x_r_reg[1]_1 ;
  input number_tokens_reg_0_sp_1;

  wire [0:0]D;
  wire [0:0]Q;
  wire [0:0]_02_;
  wire _05_;
  wire clk;
  wire consume;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[3][2]_36 ;
  wire [1:0]\i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire \i_y_r_reg[0]_0 ;
  wire [1:0]\i_y_r_reg[1]_0 ;
  wire [1:0]number_tokens_reg;
  wire number_tokens_reg_0_sn_1;
  wire o_v_reg_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire \w_b[0][2] ;
  wire waiting_for_ack_reg_0;
  wire waiting_for_ack_reg_1;

  assign number_tokens_reg_0_sn_1 = number_tokens_reg_0_sp_1;
  LUT3 #(
    .INIT(8'hF4)) 
    e_out_v_reg_i_2__10
       (.I0(e_v214_in),
        .I1(\i[3][2]_36 ),
        .I2(dor_w2e),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [0]),
        .Q(\i_x_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [1]),
        .Q(\i_x_r_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(_02_),
        .Q(\i_y_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(D),
        .Q(\i_y_r_reg[1]_0 [1]),
        .R(rst));
  LUT6 #(
    .INIT(64'hFFFFFFFF10000000)) 
    o_v_reg_i_1__10
       (.I0(waiting_for_ack_reg_0),
        .I1(\i_y_r_reg[1]_0 [0]),
        .I2(\i_y_r_reg[1]_0 [1]),
        .I3(e_v214_in),
        .I4(\i[3][2]_36 ),
        .I5(o_v_reg_reg),
        .O(dor_o_v));
  token_bucket_7 regulator
       (.D(_02_),
        .Q(Q),
        .clk(clk),
        .consume(consume),
        .\i_x_r_reg[0] (e_v214_in),
        .\i_y_r_reg[0] (e_v115_out__1),
        .\i_y_r_reg[0]_0 (\i_y_r_reg[0]_0 ),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[0]_1 (number_tokens_reg_0_sn_1),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[3][2]_36 ),
        .waiting_for_ack_reg_1(\i_y_r_reg[1]_0 ),
        .waiting_for_ack_reg_2(\i_x_r_reg[1]_0 ),
        .waiting_for_ack_reg_3(waiting_for_ack_reg_1));
  LUT6 #(
    .INIT(64'hFFFFFFFF00B00000)) 
    s_out_v_reg_i_1__10
       (.I0(\i_y_r_reg[1]_0 [0]),
        .I1(\i_y_r_reg[1]_0 [1]),
        .I2(e_v214_in),
        .I3(waiting_for_ack_reg_0),
        .I4(\i[3][2]_36 ),
        .I5(s_out_v_reg_reg),
        .O(dor_s_v));
  LUT6 #(
    .INIT(64'h32323237FFFFFFFF)) 
    waiting_for_ack_i_1__10
       (.I0(e_v115_out__1),
        .I1(waiting_for_ack_reg_0),
        .I2(e_v214_in),
        .I3(\w_b[0][2] ),
        .I4(dor_w2e),
        .I5(\i[3][2]_36 ),
        .O(_05_));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(_05_),
        .D(consume),
        .Q(\i[3][2]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized11
   (\i[0][3]_36 ,
    e_v115_out__1,
    e_v214_in,
    number_tokens_reg,
    dor_o_v,
    \i_y_r_reg[1]_0 ,
    dor_s_v,
    \i_x_r_reg[1]_0 ,
    dor_e_v,
    rst,
    clk,
    D,
    waiting_for_ack_reg_0,
    \i_y_r_reg[0]_0 ,
    Q,
    w_b,
    dor_w2e,
    o_v_reg_reg,
    s_out_v_reg_reg,
    waiting_for_ack_reg_1,
    \i_x_r_reg[1]_1 ,
    number_tokens_reg_0_sp_1);
  output \i[0][3]_36 ;
  output e_v115_out__1;
  output e_v214_in;
  output [1:0]number_tokens_reg;
  output dor_o_v;
  output [1:0]\i_y_r_reg[1]_0 ;
  output dor_s_v;
  output [1:0]\i_x_r_reg[1]_0 ;
  output dor_e_v;
  input rst;
  input clk;
  input [0:0]D;
  input waiting_for_ack_reg_0;
  input \i_y_r_reg[0]_0 ;
  input [0:0]Q;
  input w_b;
  input dor_w2e;
  input o_v_reg_reg;
  input s_out_v_reg_reg;
  input waiting_for_ack_reg_1;
  input [1:0]\i_x_r_reg[1]_1 ;
  input number_tokens_reg_0_sp_1;

  wire [0:0]D;
  wire [0:0]Q;
  wire [0:0]_02_;
  wire _05_;
  wire clk;
  wire consume;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[0][3]_36 ;
  wire [1:0]\i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire \i_y_r_reg[0]_0 ;
  wire [1:0]\i_y_r_reg[1]_0 ;
  wire [1:0]number_tokens_reg;
  wire number_tokens_reg_0_sn_1;
  wire o_v_reg_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire w_b;
  wire waiting_for_ack_reg_0;
  wire waiting_for_ack_reg_1;

  assign number_tokens_reg_0_sn_1 = number_tokens_reg_0_sp_1;
  LUT3 #(
    .INIT(8'hF4)) 
    e_out_v_reg_i_2__11
       (.I0(e_v214_in),
        .I1(\i[0][3]_36 ),
        .I2(dor_w2e),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [0]),
        .Q(\i_x_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [1]),
        .Q(\i_x_r_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(_02_),
        .Q(\i_y_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(D),
        .Q(\i_y_r_reg[1]_0 [1]),
        .R(rst));
  LUT6 #(
    .INIT(64'hFFFFFFFF40000000)) 
    o_v_reg_i_1__11
       (.I0(waiting_for_ack_reg_0),
        .I1(\i_y_r_reg[1]_0 [1]),
        .I2(\i_y_r_reg[1]_0 [0]),
        .I3(e_v214_in),
        .I4(\i[0][3]_36 ),
        .I5(o_v_reg_reg),
        .O(dor_o_v));
  token_bucket_5 regulator
       (.D(_02_),
        .Q(Q),
        .clk(clk),
        .consume(consume),
        .\i_x_r_reg[0] (e_v214_in),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_0 ),
        .\i_y_r_reg[1] (e_v115_out__1),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[0]_1 (number_tokens_reg_0_sn_1),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[0][3]_36 ),
        .waiting_for_ack_reg_1(\i_y_r_reg[1]_0 ),
        .waiting_for_ack_reg_2(\i_x_r_reg[1]_0 ),
        .waiting_for_ack_reg_3(waiting_for_ack_reg_1));
  LUT6 #(
    .INIT(64'hFFFFFFFF00700000)) 
    s_out_v_reg_i_1__11
       (.I0(\i_y_r_reg[1]_0 [1]),
        .I1(\i_y_r_reg[1]_0 [0]),
        .I2(e_v214_in),
        .I3(waiting_for_ack_reg_0),
        .I4(\i[0][3]_36 ),
        .I5(s_out_v_reg_reg),
        .O(dor_s_v));
  LUT6 #(
    .INIT(64'h32323237FFFFFFFF)) 
    waiting_for_ack_i_1__11
       (.I0(e_v115_out__1),
        .I1(waiting_for_ack_reg_0),
        .I2(e_v214_in),
        .I3(w_b),
        .I4(dor_w2e),
        .I5(\i[0][3]_36 ),
        .O(_05_));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(_05_),
        .D(consume),
        .Q(\i[0][3]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized12
   (\i[1][3]_36 ,
    e_v115_out__1,
    \i_x_r_reg[0]_0 ,
    number_tokens_reg,
    dor_o_v,
    \i_y_r_reg[1]_0 ,
    dor_s_v,
    \i_x_r_reg[1]_0 ,
    dor_e_v,
    rst,
    clk,
    D,
    waiting_for_ack_reg_0,
    \i_y_r_reg[0]_0 ,
    Q,
    w_b,
    dor_w2e,
    o_v_reg_reg,
    s_out_v_reg_reg,
    waiting_for_ack_reg_1,
    \i_x_r_reg[1]_1 ,
    number_tokens_reg_0_sp_1);
  output \i[1][3]_36 ;
  output e_v115_out__1;
  output \i_x_r_reg[0]_0 ;
  output [1:0]number_tokens_reg;
  output dor_o_v;
  output [1:0]\i_y_r_reg[1]_0 ;
  output dor_s_v;
  output [1:0]\i_x_r_reg[1]_0 ;
  output dor_e_v;
  input rst;
  input clk;
  input [0:0]D;
  input waiting_for_ack_reg_0;
  input \i_y_r_reg[0]_0 ;
  input [0:0]Q;
  input w_b;
  input dor_w2e;
  input o_v_reg_reg;
  input s_out_v_reg_reg;
  input waiting_for_ack_reg_1;
  input [1:0]\i_x_r_reg[1]_1 ;
  input number_tokens_reg_0_sp_1;

  wire [0:0]D;
  wire [0:0]Q;
  wire [0:0]_02_;
  wire _05_;
  wire clk;
  wire consume;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire e_v115_out__1;
  wire \i[1][3]_36 ;
  wire \i_x_r_reg[0]_0 ;
  wire [1:0]\i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire \i_y_r_reg[0]_0 ;
  wire [1:0]\i_y_r_reg[1]_0 ;
  wire [1:0]number_tokens_reg;
  wire number_tokens_reg_0_sn_1;
  wire o_v_reg_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire w_b;
  wire waiting_for_ack_reg_0;
  wire waiting_for_ack_reg_1;

  assign number_tokens_reg_0_sn_1 = number_tokens_reg_0_sp_1;
  LUT3 #(
    .INIT(8'hF4)) 
    e_out_v_reg_i_2__12
       (.I0(\i_x_r_reg[0]_0 ),
        .I1(\i[1][3]_36 ),
        .I2(dor_w2e),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [0]),
        .Q(\i_x_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [1]),
        .Q(\i_x_r_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(_02_),
        .Q(\i_y_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(D),
        .Q(\i_y_r_reg[1]_0 [1]),
        .R(rst));
  LUT6 #(
    .INIT(64'hFFFFFFFF40000000)) 
    o_v_reg_i_1__12
       (.I0(waiting_for_ack_reg_0),
        .I1(\i_y_r_reg[1]_0 [1]),
        .I2(\i_y_r_reg[1]_0 [0]),
        .I3(\i_x_r_reg[0]_0 ),
        .I4(\i[1][3]_36 ),
        .I5(o_v_reg_reg),
        .O(dor_o_v));
  token_bucket_3 regulator
       (.D(_02_),
        .Q(Q),
        .clk(clk),
        .consume(consume),
        .\i_x_r_reg[0] (\i_x_r_reg[0]_0 ),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_0 ),
        .\i_y_r_reg[1] (e_v115_out__1),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[0]_1 (number_tokens_reg_0_sn_1),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[1][3]_36 ),
        .waiting_for_ack_reg_1(\i_y_r_reg[1]_0 ),
        .waiting_for_ack_reg_2(\i_x_r_reg[1]_0 ),
        .waiting_for_ack_reg_3(waiting_for_ack_reg_1));
  LUT6 #(
    .INIT(64'hFFFFFFFF00700000)) 
    s_out_v_reg_i_1__12
       (.I0(\i_y_r_reg[1]_0 [1]),
        .I1(\i_y_r_reg[1]_0 [0]),
        .I2(\i_x_r_reg[0]_0 ),
        .I3(waiting_for_ack_reg_0),
        .I4(\i[1][3]_36 ),
        .I5(s_out_v_reg_reg),
        .O(dor_s_v));
  LUT6 #(
    .INIT(64'h32323237FFFFFFFF)) 
    waiting_for_ack_i_1__12
       (.I0(e_v115_out__1),
        .I1(waiting_for_ack_reg_0),
        .I2(\i_x_r_reg[0]_0 ),
        .I3(w_b),
        .I4(dor_w2e),
        .I5(\i[1][3]_36 ),
        .O(_05_));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(_05_),
        .D(consume),
        .Q(\i[1][3]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized13
   (\i[2][3]_36 ,
    e_v115_out__1,
    \i_x_r_reg[1]_0 ,
    number_tokens_reg,
    dor_o_v,
    \i_y_r_reg[1]_0 ,
    dor_s_v,
    \i_x_r_reg[1]_1 ,
    dor_e_v,
    rst,
    clk,
    D,
    waiting_for_ack_reg_0,
    \i_y_r_reg[0]_0 ,
    Q,
    w_b,
    dor_w2e,
    o_v_reg_reg,
    s_out_v_reg_reg,
    waiting_for_ack_reg_1,
    \i_x_r_reg[1]_2 ,
    number_tokens_reg_0_sp_1);
  output \i[2][3]_36 ;
  output e_v115_out__1;
  output \i_x_r_reg[1]_0 ;
  output [1:0]number_tokens_reg;
  output dor_o_v;
  output [1:0]\i_y_r_reg[1]_0 ;
  output dor_s_v;
  output [1:0]\i_x_r_reg[1]_1 ;
  output dor_e_v;
  input rst;
  input clk;
  input [0:0]D;
  input waiting_for_ack_reg_0;
  input \i_y_r_reg[0]_0 ;
  input [0:0]Q;
  input w_b;
  input dor_w2e;
  input o_v_reg_reg;
  input s_out_v_reg_reg;
  input waiting_for_ack_reg_1;
  input [1:0]\i_x_r_reg[1]_2 ;
  input number_tokens_reg_0_sp_1;

  wire [0:0]D;
  wire [0:0]Q;
  wire [0:0]_02_;
  wire _05_;
  wire clk;
  wire consume;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire e_v115_out__1;
  wire \i[2][3]_36 ;
  wire \i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire [1:0]\i_x_r_reg[1]_2 ;
  wire \i_y_r_reg[0]_0 ;
  wire [1:0]\i_y_r_reg[1]_0 ;
  wire [1:0]number_tokens_reg;
  wire number_tokens_reg_0_sn_1;
  wire o_v_reg_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire w_b;
  wire waiting_for_ack_reg_0;
  wire waiting_for_ack_reg_1;

  assign number_tokens_reg_0_sn_1 = number_tokens_reg_0_sp_1;
  LUT3 #(
    .INIT(8'hF4)) 
    e_out_v_reg_i_2__13
       (.I0(\i_x_r_reg[1]_0 ),
        .I1(\i[2][3]_36 ),
        .I2(dor_w2e),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_2 [0]),
        .Q(\i_x_r_reg[1]_1 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_2 [1]),
        .Q(\i_x_r_reg[1]_1 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(_02_),
        .Q(\i_y_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(D),
        .Q(\i_y_r_reg[1]_0 [1]),
        .R(rst));
  LUT6 #(
    .INIT(64'hFFFFFFFF40000000)) 
    o_v_reg_i_1__13
       (.I0(waiting_for_ack_reg_0),
        .I1(\i_y_r_reg[1]_0 [1]),
        .I2(\i_y_r_reg[1]_0 [0]),
        .I3(\i_x_r_reg[1]_0 ),
        .I4(\i[2][3]_36 ),
        .I5(o_v_reg_reg),
        .O(dor_o_v));
  token_bucket_1 regulator
       (.D(_02_),
        .Q(Q),
        .clk(clk),
        .consume(consume),
        .\i_x_r_reg[1] (\i_x_r_reg[1]_0 ),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_0 ),
        .\i_y_r_reg[1] (e_v115_out__1),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[0]_1 (number_tokens_reg_0_sn_1),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[2][3]_36 ),
        .waiting_for_ack_reg_1(\i_y_r_reg[1]_0 ),
        .waiting_for_ack_reg_2(\i_x_r_reg[1]_1 ),
        .waiting_for_ack_reg_3(waiting_for_ack_reg_1));
  LUT6 #(
    .INIT(64'hFFFFFFFF00700000)) 
    s_out_v_reg_i_1__13
       (.I0(\i_y_r_reg[1]_0 [1]),
        .I1(\i_y_r_reg[1]_0 [0]),
        .I2(\i_x_r_reg[1]_0 ),
        .I3(waiting_for_ack_reg_0),
        .I4(\i[2][3]_36 ),
        .I5(s_out_v_reg_reg),
        .O(dor_s_v));
  LUT6 #(
    .INIT(64'h32323237FFFFFFFF)) 
    waiting_for_ack_i_1__13
       (.I0(e_v115_out__1),
        .I1(waiting_for_ack_reg_0),
        .I2(\i_x_r_reg[1]_0 ),
        .I3(w_b),
        .I4(dor_w2e),
        .I5(\i[2][3]_36 ),
        .O(_05_));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(_05_),
        .D(consume),
        .Q(\i[2][3]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized14
   (\i[3][3]_36 ,
    e_v115_out__1,
    e_v214_in,
    number_tokens_reg,
    dor_o_v,
    \i_y_r_reg[1]_0 ,
    dor_s_v,
    \i_x_r_reg[1]_0 ,
    dor_e_v,
    rst,
    clk,
    D,
    waiting_for_ack_reg_0,
    \i_y_r_reg[0]_0 ,
    Q,
    \w_b[0][3] ,
    dor_w2e,
    o_v_reg_reg,
    s_out_v_reg_reg,
    waiting_for_ack_reg_1,
    \i_x_r_reg[1]_1 ,
    number_tokens_reg_0_sp_1);
  output \i[3][3]_36 ;
  output e_v115_out__1;
  output e_v214_in;
  output [1:0]number_tokens_reg;
  output dor_o_v;
  output [1:0]\i_y_r_reg[1]_0 ;
  output dor_s_v;
  output [1:0]\i_x_r_reg[1]_0 ;
  output dor_e_v;
  input rst;
  input clk;
  input [0:0]D;
  input waiting_for_ack_reg_0;
  input \i_y_r_reg[0]_0 ;
  input [0:0]Q;
  input \w_b[0][3] ;
  input dor_w2e;
  input o_v_reg_reg;
  input s_out_v_reg_reg;
  input waiting_for_ack_reg_1;
  input [1:0]\i_x_r_reg[1]_1 ;
  input number_tokens_reg_0_sp_1;

  wire [0:0]D;
  wire [0:0]Q;
  wire [0:0]_02_;
  wire _05_;
  wire clk;
  wire consume;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[3][3]_36 ;
  wire [1:0]\i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire \i_y_r_reg[0]_0 ;
  wire [1:0]\i_y_r_reg[1]_0 ;
  wire [1:0]number_tokens_reg;
  wire number_tokens_reg_0_sn_1;
  wire o_v_reg_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire \w_b[0][3] ;
  wire waiting_for_ack_reg_0;
  wire waiting_for_ack_reg_1;

  assign number_tokens_reg_0_sn_1 = number_tokens_reg_0_sp_1;
  LUT3 #(
    .INIT(8'hF4)) 
    e_out_v_reg_i_2__14
       (.I0(e_v214_in),
        .I1(\i[3][3]_36 ),
        .I2(dor_w2e),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [0]),
        .Q(\i_x_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [1]),
        .Q(\i_x_r_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(_02_),
        .Q(\i_y_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(D),
        .Q(\i_y_r_reg[1]_0 [1]),
        .R(rst));
  LUT6 #(
    .INIT(64'hFFFFFFFF40000000)) 
    o_v_reg_i_1__14
       (.I0(waiting_for_ack_reg_0),
        .I1(\i_y_r_reg[1]_0 [1]),
        .I2(\i_y_r_reg[1]_0 [0]),
        .I3(e_v214_in),
        .I4(\i[3][3]_36 ),
        .I5(o_v_reg_reg),
        .O(dor_o_v));
  token_bucket regulator
       (.D(_02_),
        .Q(Q),
        .clk(clk),
        .consume(consume),
        .\i_x_r_reg[0] (e_v214_in),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_0 ),
        .\i_y_r_reg[1] (e_v115_out__1),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[0]_1 (number_tokens_reg_0_sn_1),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[3][3]_36 ),
        .waiting_for_ack_reg_1(\i_y_r_reg[1]_0 ),
        .waiting_for_ack_reg_2(\i_x_r_reg[1]_0 ),
        .waiting_for_ack_reg_3(waiting_for_ack_reg_1));
  LUT6 #(
    .INIT(64'hFFFFFFFF00700000)) 
    s_out_v_reg_i_1__14
       (.I0(\i_y_r_reg[1]_0 [1]),
        .I1(\i_y_r_reg[1]_0 [0]),
        .I2(e_v214_in),
        .I3(waiting_for_ack_reg_0),
        .I4(\i[3][3]_36 ),
        .I5(s_out_v_reg_reg),
        .O(dor_s_v));
  LUT6 #(
    .INIT(64'h32323237FFFFFFFF)) 
    waiting_for_ack_i_1__14
       (.I0(e_v115_out__1),
        .I1(waiting_for_ack_reg_0),
        .I2(e_v214_in),
        .I3(\w_b[0][3] ),
        .I4(dor_w2e),
        .I5(\i[3][3]_36 ),
        .O(_05_));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(_05_),
        .D(consume),
        .Q(\i[3][3]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized2
   (\i[3][0]_36 ,
    e_v115_out__1,
    e_v214_in,
    number_tokens_reg,
    dor_o_v,
    \i_y_r_reg[1]_0 ,
    dor_s_v,
    \i_x_r_reg[1]_0 ,
    dor_e_v,
    rst,
    clk,
    D,
    waiting_for_ack_reg_0,
    \i_y_r_reg[0]_0 ,
    Q,
    \w_b[0][0] ,
    dor_w2e,
    o_v_reg_reg,
    s_out_v_reg_reg,
    waiting_for_ack_reg_1,
    \i_x_r_reg[1]_1 ,
    number_tokens_reg_0_sp_1);
  output \i[3][0]_36 ;
  output e_v115_out__1;
  output e_v214_in;
  output [1:0]number_tokens_reg;
  output dor_o_v;
  output [1:0]\i_y_r_reg[1]_0 ;
  output dor_s_v;
  output [1:0]\i_x_r_reg[1]_0 ;
  output dor_e_v;
  input rst;
  input clk;
  input [0:0]D;
  input waiting_for_ack_reg_0;
  input \i_y_r_reg[0]_0 ;
  input [0:0]Q;
  input \w_b[0][0] ;
  input dor_w2e;
  input o_v_reg_reg;
  input s_out_v_reg_reg;
  input waiting_for_ack_reg_1;
  input [1:0]\i_x_r_reg[1]_1 ;
  input number_tokens_reg_0_sp_1;

  wire [0:0]D;
  wire [0:0]Q;
  wire [0:0]_02_;
  wire _05_;
  wire clk;
  wire consume;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[3][0]_36 ;
  wire [1:0]\i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire \i_y_r_reg[0]_0 ;
  wire [1:0]\i_y_r_reg[1]_0 ;
  wire [1:0]number_tokens_reg;
  wire number_tokens_reg_0_sn_1;
  wire o_v_reg_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire \w_b[0][0] ;
  wire waiting_for_ack_reg_0;
  wire waiting_for_ack_reg_1;

  assign number_tokens_reg_0_sn_1 = number_tokens_reg_0_sp_1;
  LUT3 #(
    .INIT(8'hF4)) 
    e_out_v_reg_i_2__2
       (.I0(e_v214_in),
        .I1(\i[3][0]_36 ),
        .I2(dor_w2e),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [0]),
        .Q(\i_x_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [1]),
        .Q(\i_x_r_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(_02_),
        .Q(\i_y_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(D),
        .Q(\i_y_r_reg[1]_0 [1]),
        .R(rst));
  LUT6 #(
    .INIT(64'hFFFFFFFF01000000)) 
    o_v_reg_i_1__2
       (.I0(waiting_for_ack_reg_0),
        .I1(\i_y_r_reg[1]_0 [1]),
        .I2(\i_y_r_reg[1]_0 [0]),
        .I3(e_v214_in),
        .I4(\i[3][0]_36 ),
        .I5(o_v_reg_reg),
        .O(dor_o_v));
  token_bucket_23 regulator
       (.D(_02_),
        .Q(Q),
        .clk(clk),
        .consume(consume),
        .\i_x_r_reg[0] (e_v214_in),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_0 ),
        .\i_y_r_reg[1] (e_v115_out__1),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[0]_1 (number_tokens_reg_0_sn_1),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[3][0]_36 ),
        .waiting_for_ack_reg_1(\i_y_r_reg[1]_0 ),
        .waiting_for_ack_reg_2(\i_x_r_reg[1]_0 ),
        .waiting_for_ack_reg_3(waiting_for_ack_reg_1));
  LUT6 #(
    .INIT(64'hFFFFFFFF00E00000)) 
    s_out_v_reg_i_1__2
       (.I0(\i_y_r_reg[1]_0 [1]),
        .I1(\i_y_r_reg[1]_0 [0]),
        .I2(e_v214_in),
        .I3(waiting_for_ack_reg_0),
        .I4(\i[3][0]_36 ),
        .I5(s_out_v_reg_reg),
        .O(dor_s_v));
  LUT6 #(
    .INIT(64'h32323237FFFFFFFF)) 
    waiting_for_ack_i_1__2
       (.I0(e_v115_out__1),
        .I1(waiting_for_ack_reg_0),
        .I2(e_v214_in),
        .I3(\w_b[0][0] ),
        .I4(dor_w2e),
        .I5(\i[3][0]_36 ),
        .O(_05_));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(_05_),
        .D(consume),
        .Q(\i[3][0]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized3
   (\i[0][1]_36 ,
    e_v115_out__1,
    e_v214_in,
    number_tokens_reg,
    dor_o_v,
    \i_y_r_reg[1]_0 ,
    dor_s_v,
    \i_x_r_reg[1]_0 ,
    dor_e_v,
    rst,
    clk,
    D,
    waiting_for_ack_reg_0,
    \i_y_r_reg[0]_0 ,
    Q,
    w_b,
    dor_w2e,
    o_v_reg_reg,
    s_out_v_reg_reg,
    waiting_for_ack_reg_1,
    \i_x_r_reg[1]_1 ,
    number_tokens_reg_0_sp_1);
  output \i[0][1]_36 ;
  output e_v115_out__1;
  output e_v214_in;
  output [1:0]number_tokens_reg;
  output dor_o_v;
  output [1:0]\i_y_r_reg[1]_0 ;
  output dor_s_v;
  output [1:0]\i_x_r_reg[1]_0 ;
  output dor_e_v;
  input rst;
  input clk;
  input [0:0]D;
  input waiting_for_ack_reg_0;
  input \i_y_r_reg[0]_0 ;
  input [0:0]Q;
  input w_b;
  input dor_w2e;
  input o_v_reg_reg;
  input s_out_v_reg_reg;
  input waiting_for_ack_reg_1;
  input [1:0]\i_x_r_reg[1]_1 ;
  input number_tokens_reg_0_sp_1;

  wire [0:0]D;
  wire [0:0]Q;
  wire [0:0]_02_;
  wire _05_;
  wire clk;
  wire consume;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[0][1]_36 ;
  wire [1:0]\i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire \i_y_r_reg[0]_0 ;
  wire [1:0]\i_y_r_reg[1]_0 ;
  wire [1:0]number_tokens_reg;
  wire number_tokens_reg_0_sn_1;
  wire o_v_reg_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire w_b;
  wire waiting_for_ack_reg_0;
  wire waiting_for_ack_reg_1;

  assign number_tokens_reg_0_sn_1 = number_tokens_reg_0_sp_1;
  LUT3 #(
    .INIT(8'hF4)) 
    e_out_v_reg_i_2__3
       (.I0(e_v214_in),
        .I1(\i[0][1]_36 ),
        .I2(dor_w2e),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [0]),
        .Q(\i_x_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [1]),
        .Q(\i_x_r_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(_02_),
        .Q(\i_y_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(D),
        .Q(\i_y_r_reg[1]_0 [1]),
        .R(rst));
  LUT6 #(
    .INIT(64'hFFFFFFFF10000000)) 
    o_v_reg_i_1__3
       (.I0(waiting_for_ack_reg_0),
        .I1(\i_y_r_reg[1]_0 [1]),
        .I2(\i_y_r_reg[1]_0 [0]),
        .I3(e_v214_in),
        .I4(\i[0][1]_36 ),
        .I5(o_v_reg_reg),
        .O(dor_o_v));
  token_bucket_21 regulator
       (.D(_02_),
        .Q(Q),
        .clk(clk),
        .consume(consume),
        .\i_x_r_reg[0] (e_v214_in),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_0 ),
        .\i_y_r_reg[1] (e_v115_out__1),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[0]_1 (number_tokens_reg_0_sn_1),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[0][1]_36 ),
        .waiting_for_ack_reg_1(\i_y_r_reg[1]_0 ),
        .waiting_for_ack_reg_2(\i_x_r_reg[1]_0 ),
        .waiting_for_ack_reg_3(waiting_for_ack_reg_1));
  LUT6 #(
    .INIT(64'hFFFFFFFF00B00000)) 
    s_out_v_reg_i_1__3
       (.I0(\i_y_r_reg[1]_0 [1]),
        .I1(\i_y_r_reg[1]_0 [0]),
        .I2(e_v214_in),
        .I3(waiting_for_ack_reg_0),
        .I4(\i[0][1]_36 ),
        .I5(s_out_v_reg_reg),
        .O(dor_s_v));
  LUT6 #(
    .INIT(64'h32323237FFFFFFFF)) 
    waiting_for_ack_i_1__3
       (.I0(e_v115_out__1),
        .I1(waiting_for_ack_reg_0),
        .I2(e_v214_in),
        .I3(w_b),
        .I4(dor_w2e),
        .I5(\i[0][1]_36 ),
        .O(_05_));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(_05_),
        .D(consume),
        .Q(\i[0][1]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized4
   (\i[1][1]_36 ,
    e_v115_out__1,
    \i_x_r_reg[0]_0 ,
    number_tokens_reg,
    dor_o_v,
    \i_y_r_reg[1]_0 ,
    dor_s_v,
    \i_x_r_reg[1]_0 ,
    dor_e_v,
    rst,
    clk,
    D,
    waiting_for_ack_reg_0,
    \i_y_r_reg[0]_0 ,
    Q,
    w_b,
    dor_w2e,
    o_v_reg_reg,
    s_out_v_reg_reg,
    waiting_for_ack_reg_1,
    \i_x_r_reg[1]_1 ,
    number_tokens_reg_0_sp_1);
  output \i[1][1]_36 ;
  output e_v115_out__1;
  output \i_x_r_reg[0]_0 ;
  output [1:0]number_tokens_reg;
  output dor_o_v;
  output [1:0]\i_y_r_reg[1]_0 ;
  output dor_s_v;
  output [1:0]\i_x_r_reg[1]_0 ;
  output dor_e_v;
  input rst;
  input clk;
  input [0:0]D;
  input waiting_for_ack_reg_0;
  input \i_y_r_reg[0]_0 ;
  input [0:0]Q;
  input w_b;
  input dor_w2e;
  input o_v_reg_reg;
  input s_out_v_reg_reg;
  input waiting_for_ack_reg_1;
  input [1:0]\i_x_r_reg[1]_1 ;
  input number_tokens_reg_0_sp_1;

  wire [0:0]D;
  wire [0:0]Q;
  wire [0:0]_02_;
  wire _05_;
  wire clk;
  wire consume;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire e_v115_out__1;
  wire \i[1][1]_36 ;
  wire \i_x_r_reg[0]_0 ;
  wire [1:0]\i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire \i_y_r_reg[0]_0 ;
  wire [1:0]\i_y_r_reg[1]_0 ;
  wire [1:0]number_tokens_reg;
  wire number_tokens_reg_0_sn_1;
  wire o_v_reg_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire w_b;
  wire waiting_for_ack_reg_0;
  wire waiting_for_ack_reg_1;

  assign number_tokens_reg_0_sn_1 = number_tokens_reg_0_sp_1;
  LUT3 #(
    .INIT(8'hF4)) 
    e_out_v_reg_i_2__4
       (.I0(\i_x_r_reg[0]_0 ),
        .I1(\i[1][1]_36 ),
        .I2(dor_w2e),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [0]),
        .Q(\i_x_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [1]),
        .Q(\i_x_r_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(_02_),
        .Q(\i_y_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(D),
        .Q(\i_y_r_reg[1]_0 [1]),
        .R(rst));
  LUT6 #(
    .INIT(64'hFFFFFFFF10000000)) 
    o_v_reg_i_1__4
       (.I0(waiting_for_ack_reg_0),
        .I1(\i_y_r_reg[1]_0 [1]),
        .I2(\i_y_r_reg[1]_0 [0]),
        .I3(\i_x_r_reg[0]_0 ),
        .I4(\i[1][1]_36 ),
        .I5(o_v_reg_reg),
        .O(dor_o_v));
  token_bucket_19 regulator
       (.D(_02_),
        .Q(Q),
        .clk(clk),
        .consume(consume),
        .\i_x_r_reg[0] (\i_x_r_reg[0]_0 ),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_0 ),
        .\i_y_r_reg[1] (e_v115_out__1),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[0]_1 (number_tokens_reg_0_sn_1),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[1][1]_36 ),
        .waiting_for_ack_reg_1(\i_y_r_reg[1]_0 ),
        .waiting_for_ack_reg_2(\i_x_r_reg[1]_0 ),
        .waiting_for_ack_reg_3(waiting_for_ack_reg_1));
  LUT6 #(
    .INIT(64'hFFFFFFFF00B00000)) 
    s_out_v_reg_i_1__4
       (.I0(\i_y_r_reg[1]_0 [1]),
        .I1(\i_y_r_reg[1]_0 [0]),
        .I2(\i_x_r_reg[0]_0 ),
        .I3(waiting_for_ack_reg_0),
        .I4(\i[1][1]_36 ),
        .I5(s_out_v_reg_reg),
        .O(dor_s_v));
  LUT6 #(
    .INIT(64'h32323237FFFFFFFF)) 
    waiting_for_ack_i_1__4
       (.I0(e_v115_out__1),
        .I1(waiting_for_ack_reg_0),
        .I2(\i_x_r_reg[0]_0 ),
        .I3(w_b),
        .I4(dor_w2e),
        .I5(\i[1][1]_36 ),
        .O(_05_));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(_05_),
        .D(consume),
        .Q(\i[1][1]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized5
   (\i[2][1]_36 ,
    e_v115_out__1,
    \i_x_r_reg[1]_0 ,
    number_tokens_reg,
    dor_o_v,
    \i_y_r_reg[1]_0 ,
    dor_s_v,
    \i_x_r_reg[1]_1 ,
    dor_e_v,
    rst,
    clk,
    D,
    waiting_for_ack_reg_0,
    \i_y_r_reg[0]_0 ,
    Q,
    w_b,
    dor_w2e,
    o_v_reg_reg,
    s_out_v_reg_reg,
    waiting_for_ack_reg_1,
    \i_x_r_reg[1]_2 ,
    number_tokens_reg_0_sp_1);
  output \i[2][1]_36 ;
  output e_v115_out__1;
  output \i_x_r_reg[1]_0 ;
  output [1:0]number_tokens_reg;
  output dor_o_v;
  output [1:0]\i_y_r_reg[1]_0 ;
  output dor_s_v;
  output [1:0]\i_x_r_reg[1]_1 ;
  output dor_e_v;
  input rst;
  input clk;
  input [0:0]D;
  input waiting_for_ack_reg_0;
  input \i_y_r_reg[0]_0 ;
  input [0:0]Q;
  input w_b;
  input dor_w2e;
  input o_v_reg_reg;
  input s_out_v_reg_reg;
  input waiting_for_ack_reg_1;
  input [1:0]\i_x_r_reg[1]_2 ;
  input number_tokens_reg_0_sp_1;

  wire [0:0]D;
  wire [0:0]Q;
  wire [0:0]_02_;
  wire _05_;
  wire clk;
  wire consume;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire e_v115_out__1;
  wire \i[2][1]_36 ;
  wire \i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire [1:0]\i_x_r_reg[1]_2 ;
  wire \i_y_r_reg[0]_0 ;
  wire [1:0]\i_y_r_reg[1]_0 ;
  wire [1:0]number_tokens_reg;
  wire number_tokens_reg_0_sn_1;
  wire o_v_reg_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire w_b;
  wire waiting_for_ack_reg_0;
  wire waiting_for_ack_reg_1;

  assign number_tokens_reg_0_sn_1 = number_tokens_reg_0_sp_1;
  LUT3 #(
    .INIT(8'hF4)) 
    e_out_v_reg_i_2__5
       (.I0(\i_x_r_reg[1]_0 ),
        .I1(\i[2][1]_36 ),
        .I2(dor_w2e),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_2 [0]),
        .Q(\i_x_r_reg[1]_1 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_2 [1]),
        .Q(\i_x_r_reg[1]_1 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(_02_),
        .Q(\i_y_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(D),
        .Q(\i_y_r_reg[1]_0 [1]),
        .R(rst));
  LUT6 #(
    .INIT(64'hFFFFFFFF10000000)) 
    o_v_reg_i_1__5
       (.I0(waiting_for_ack_reg_0),
        .I1(\i_y_r_reg[1]_0 [1]),
        .I2(\i_y_r_reg[1]_0 [0]),
        .I3(\i_x_r_reg[1]_0 ),
        .I4(\i[2][1]_36 ),
        .I5(o_v_reg_reg),
        .O(dor_o_v));
  token_bucket_17 regulator
       (.D(_02_),
        .Q(Q),
        .clk(clk),
        .consume(consume),
        .\i_x_r_reg[1] (\i_x_r_reg[1]_0 ),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_0 ),
        .\i_y_r_reg[1] (e_v115_out__1),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[0]_1 (number_tokens_reg_0_sn_1),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[2][1]_36 ),
        .waiting_for_ack_reg_1(\i_y_r_reg[1]_0 ),
        .waiting_for_ack_reg_2(\i_x_r_reg[1]_1 ),
        .waiting_for_ack_reg_3(waiting_for_ack_reg_1));
  LUT6 #(
    .INIT(64'hFFFFFFFF00B00000)) 
    s_out_v_reg_i_1__5
       (.I0(\i_y_r_reg[1]_0 [1]),
        .I1(\i_y_r_reg[1]_0 [0]),
        .I2(\i_x_r_reg[1]_0 ),
        .I3(waiting_for_ack_reg_0),
        .I4(\i[2][1]_36 ),
        .I5(s_out_v_reg_reg),
        .O(dor_s_v));
  LUT6 #(
    .INIT(64'h32323237FFFFFFFF)) 
    waiting_for_ack_i_1__5
       (.I0(e_v115_out__1),
        .I1(waiting_for_ack_reg_0),
        .I2(\i_x_r_reg[1]_0 ),
        .I3(w_b),
        .I4(dor_w2e),
        .I5(\i[2][1]_36 ),
        .O(_05_));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(_05_),
        .D(consume),
        .Q(\i[2][1]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized6
   (\i[3][1]_36 ,
    e_v115_out__1,
    e_v214_in,
    number_tokens_reg,
    dor_o_v,
    \i_y_r_reg[1]_0 ,
    dor_s_v,
    \i_x_r_reg[1]_0 ,
    dor_e_v,
    rst,
    clk,
    D,
    waiting_for_ack_reg_0,
    \i_y_r_reg[0]_0 ,
    Q,
    \w_b[0][1] ,
    dor_w2e,
    o_v_reg_reg,
    s_out_v_reg_reg,
    waiting_for_ack_reg_1,
    \i_x_r_reg[1]_1 ,
    number_tokens_reg_0_sp_1);
  output \i[3][1]_36 ;
  output e_v115_out__1;
  output e_v214_in;
  output [1:0]number_tokens_reg;
  output dor_o_v;
  output [1:0]\i_y_r_reg[1]_0 ;
  output dor_s_v;
  output [1:0]\i_x_r_reg[1]_0 ;
  output dor_e_v;
  input rst;
  input clk;
  input [0:0]D;
  input waiting_for_ack_reg_0;
  input \i_y_r_reg[0]_0 ;
  input [0:0]Q;
  input \w_b[0][1] ;
  input dor_w2e;
  input o_v_reg_reg;
  input s_out_v_reg_reg;
  input waiting_for_ack_reg_1;
  input [1:0]\i_x_r_reg[1]_1 ;
  input number_tokens_reg_0_sp_1;

  wire [0:0]D;
  wire [0:0]Q;
  wire [0:0]_02_;
  wire _05_;
  wire clk;
  wire consume;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[3][1]_36 ;
  wire [1:0]\i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire \i_y_r_reg[0]_0 ;
  wire [1:0]\i_y_r_reg[1]_0 ;
  wire [1:0]number_tokens_reg;
  wire number_tokens_reg_0_sn_1;
  wire o_v_reg_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire \w_b[0][1] ;
  wire waiting_for_ack_reg_0;
  wire waiting_for_ack_reg_1;

  assign number_tokens_reg_0_sn_1 = number_tokens_reg_0_sp_1;
  LUT3 #(
    .INIT(8'hF4)) 
    e_out_v_reg_i_2__6
       (.I0(e_v214_in),
        .I1(\i[3][1]_36 ),
        .I2(dor_w2e),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [0]),
        .Q(\i_x_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [1]),
        .Q(\i_x_r_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(_02_),
        .Q(\i_y_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(D),
        .Q(\i_y_r_reg[1]_0 [1]),
        .R(rst));
  LUT6 #(
    .INIT(64'hFFFFFFFF10000000)) 
    o_v_reg_i_1__6
       (.I0(waiting_for_ack_reg_0),
        .I1(\i_y_r_reg[1]_0 [1]),
        .I2(\i_y_r_reg[1]_0 [0]),
        .I3(e_v214_in),
        .I4(\i[3][1]_36 ),
        .I5(o_v_reg_reg),
        .O(dor_o_v));
  token_bucket_15 regulator
       (.D(_02_),
        .Q(Q),
        .clk(clk),
        .consume(consume),
        .\i_x_r_reg[0] (e_v214_in),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_0 ),
        .\i_y_r_reg[1] (e_v115_out__1),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[0]_1 (number_tokens_reg_0_sn_1),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[3][1]_36 ),
        .waiting_for_ack_reg_1(\i_y_r_reg[1]_0 ),
        .waiting_for_ack_reg_2(\i_x_r_reg[1]_0 ),
        .waiting_for_ack_reg_3(waiting_for_ack_reg_1));
  LUT6 #(
    .INIT(64'hFFFFFFFF00B00000)) 
    s_out_v_reg_i_1__6
       (.I0(\i_y_r_reg[1]_0 [1]),
        .I1(\i_y_r_reg[1]_0 [0]),
        .I2(e_v214_in),
        .I3(waiting_for_ack_reg_0),
        .I4(\i[3][1]_36 ),
        .I5(s_out_v_reg_reg),
        .O(dor_s_v));
  LUT6 #(
    .INIT(64'h32323237FFFFFFFF)) 
    waiting_for_ack_i_1__6
       (.I0(e_v115_out__1),
        .I1(waiting_for_ack_reg_0),
        .I2(e_v214_in),
        .I3(\w_b[0][1] ),
        .I4(dor_w2e),
        .I5(\i[3][1]_36 ),
        .O(_05_));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(_05_),
        .D(consume),
        .Q(\i[3][1]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized7
   (\i[0][2]_36 ,
    e_v115_out__1,
    e_v214_in,
    number_tokens_reg,
    dor_o_v,
    \i_y_r_reg[1]_0 ,
    dor_s_v,
    \i_x_r_reg[1]_0 ,
    dor_e_v,
    rst,
    clk,
    D,
    waiting_for_ack_reg_0,
    \i_y_r_reg[0]_0 ,
    Q,
    w_b,
    dor_w2e,
    o_v_reg_reg,
    s_out_v_reg_reg,
    waiting_for_ack_reg_1,
    \i_x_r_reg[1]_1 ,
    number_tokens_reg_0_sp_1);
  output \i[0][2]_36 ;
  output e_v115_out__1;
  output e_v214_in;
  output [1:0]number_tokens_reg;
  output dor_o_v;
  output [1:0]\i_y_r_reg[1]_0 ;
  output dor_s_v;
  output [1:0]\i_x_r_reg[1]_0 ;
  output dor_e_v;
  input rst;
  input clk;
  input [0:0]D;
  input waiting_for_ack_reg_0;
  input \i_y_r_reg[0]_0 ;
  input [0:0]Q;
  input w_b;
  input dor_w2e;
  input o_v_reg_reg;
  input s_out_v_reg_reg;
  input waiting_for_ack_reg_1;
  input [1:0]\i_x_r_reg[1]_1 ;
  input number_tokens_reg_0_sp_1;

  wire [0:0]D;
  wire [0:0]Q;
  wire [0:0]_02_;
  wire _05_;
  wire clk;
  wire consume;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[0][2]_36 ;
  wire [1:0]\i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire \i_y_r_reg[0]_0 ;
  wire [1:0]\i_y_r_reg[1]_0 ;
  wire [1:0]number_tokens_reg;
  wire number_tokens_reg_0_sn_1;
  wire o_v_reg_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire w_b;
  wire waiting_for_ack_reg_0;
  wire waiting_for_ack_reg_1;

  assign number_tokens_reg_0_sn_1 = number_tokens_reg_0_sp_1;
  LUT3 #(
    .INIT(8'hF4)) 
    e_out_v_reg_i_2__7
       (.I0(e_v214_in),
        .I1(\i[0][2]_36 ),
        .I2(dor_w2e),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [0]),
        .Q(\i_x_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [1]),
        .Q(\i_x_r_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(_02_),
        .Q(\i_y_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(D),
        .Q(\i_y_r_reg[1]_0 [1]),
        .R(rst));
  LUT6 #(
    .INIT(64'hFFFFFFFF10000000)) 
    o_v_reg_i_1__7
       (.I0(waiting_for_ack_reg_0),
        .I1(\i_y_r_reg[1]_0 [0]),
        .I2(\i_y_r_reg[1]_0 [1]),
        .I3(e_v214_in),
        .I4(\i[0][2]_36 ),
        .I5(o_v_reg_reg),
        .O(dor_o_v));
  token_bucket_13 regulator
       (.D(_02_),
        .Q(Q),
        .clk(clk),
        .consume(consume),
        .\i_x_r_reg[0] (e_v214_in),
        .\i_y_r_reg[0] (e_v115_out__1),
        .\i_y_r_reg[0]_0 (\i_y_r_reg[0]_0 ),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[0]_1 (number_tokens_reg_0_sn_1),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[0][2]_36 ),
        .waiting_for_ack_reg_1(\i_y_r_reg[1]_0 ),
        .waiting_for_ack_reg_2(\i_x_r_reg[1]_0 ),
        .waiting_for_ack_reg_3(waiting_for_ack_reg_1));
  LUT6 #(
    .INIT(64'hFFFFFFFF00B00000)) 
    s_out_v_reg_i_1__7
       (.I0(\i_y_r_reg[1]_0 [0]),
        .I1(\i_y_r_reg[1]_0 [1]),
        .I2(e_v214_in),
        .I3(waiting_for_ack_reg_0),
        .I4(\i[0][2]_36 ),
        .I5(s_out_v_reg_reg),
        .O(dor_s_v));
  LUT6 #(
    .INIT(64'h32323237FFFFFFFF)) 
    waiting_for_ack_i_1__7
       (.I0(e_v115_out__1),
        .I1(waiting_for_ack_reg_0),
        .I2(e_v214_in),
        .I3(w_b),
        .I4(dor_w2e),
        .I5(\i[0][2]_36 ),
        .O(_05_));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(_05_),
        .D(consume),
        .Q(\i[0][2]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized8
   (\i[1][2]_36 ,
    e_v115_out__1,
    \i_x_r_reg[0]_0 ,
    number_tokens_reg,
    dor_o_v,
    \i_y_r_reg[1]_0 ,
    dor_s_v,
    \i_x_r_reg[1]_0 ,
    dor_e_v,
    rst,
    clk,
    D,
    waiting_for_ack_reg_0,
    \i_y_r_reg[0]_0 ,
    Q,
    w_b,
    dor_w2e,
    o_v_reg_reg,
    s_out_v_reg_reg,
    waiting_for_ack_reg_1,
    \i_x_r_reg[1]_1 ,
    number_tokens_reg_0_sp_1);
  output \i[1][2]_36 ;
  output e_v115_out__1;
  output \i_x_r_reg[0]_0 ;
  output [1:0]number_tokens_reg;
  output dor_o_v;
  output [1:0]\i_y_r_reg[1]_0 ;
  output dor_s_v;
  output [1:0]\i_x_r_reg[1]_0 ;
  output dor_e_v;
  input rst;
  input clk;
  input [0:0]D;
  input waiting_for_ack_reg_0;
  input \i_y_r_reg[0]_0 ;
  input [0:0]Q;
  input w_b;
  input dor_w2e;
  input o_v_reg_reg;
  input s_out_v_reg_reg;
  input waiting_for_ack_reg_1;
  input [1:0]\i_x_r_reg[1]_1 ;
  input number_tokens_reg_0_sp_1;

  wire [0:0]D;
  wire [0:0]Q;
  wire [0:0]_02_;
  wire _05_;
  wire clk;
  wire consume;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire e_v115_out__1;
  wire \i[1][2]_36 ;
  wire \i_x_r_reg[0]_0 ;
  wire [1:0]\i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire \i_y_r_reg[0]_0 ;
  wire [1:0]\i_y_r_reg[1]_0 ;
  wire [1:0]number_tokens_reg;
  wire number_tokens_reg_0_sn_1;
  wire o_v_reg_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire w_b;
  wire waiting_for_ack_reg_0;
  wire waiting_for_ack_reg_1;

  assign number_tokens_reg_0_sn_1 = number_tokens_reg_0_sp_1;
  LUT3 #(
    .INIT(8'hF4)) 
    e_out_v_reg_i_2__8
       (.I0(\i_x_r_reg[0]_0 ),
        .I1(\i[1][2]_36 ),
        .I2(dor_w2e),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [0]),
        .Q(\i_x_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_1 [1]),
        .Q(\i_x_r_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(_02_),
        .Q(\i_y_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(D),
        .Q(\i_y_r_reg[1]_0 [1]),
        .R(rst));
  LUT6 #(
    .INIT(64'hFFFFFFFF10000000)) 
    o_v_reg_i_1__8
       (.I0(waiting_for_ack_reg_0),
        .I1(\i_y_r_reg[1]_0 [0]),
        .I2(\i_y_r_reg[1]_0 [1]),
        .I3(\i_x_r_reg[0]_0 ),
        .I4(\i[1][2]_36 ),
        .I5(o_v_reg_reg),
        .O(dor_o_v));
  token_bucket_11 regulator
       (.D(_02_),
        .Q(Q),
        .clk(clk),
        .consume(consume),
        .\i_x_r_reg[0] (\i_x_r_reg[0]_0 ),
        .\i_y_r_reg[0] (e_v115_out__1),
        .\i_y_r_reg[0]_0 (\i_y_r_reg[0]_0 ),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[0]_1 (number_tokens_reg_0_sn_1),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[1][2]_36 ),
        .waiting_for_ack_reg_1(\i_y_r_reg[1]_0 ),
        .waiting_for_ack_reg_2(\i_x_r_reg[1]_0 ),
        .waiting_for_ack_reg_3(waiting_for_ack_reg_1));
  LUT6 #(
    .INIT(64'hFFFFFFFF00B00000)) 
    s_out_v_reg_i_1__8
       (.I0(\i_y_r_reg[1]_0 [0]),
        .I1(\i_y_r_reg[1]_0 [1]),
        .I2(\i_x_r_reg[0]_0 ),
        .I3(waiting_for_ack_reg_0),
        .I4(\i[1][2]_36 ),
        .I5(s_out_v_reg_reg),
        .O(dor_s_v));
  LUT6 #(
    .INIT(64'h32323237FFFFFFFF)) 
    waiting_for_ack_i_1__8
       (.I0(e_v115_out__1),
        .I1(waiting_for_ack_reg_0),
        .I2(\i_x_r_reg[0]_0 ),
        .I3(w_b),
        .I4(dor_w2e),
        .I5(\i[1][2]_36 ),
        .O(_05_));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(_05_),
        .D(consume),
        .Q(\i[1][2]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized9
   (\i[2][2]_36 ,
    e_v115_out__1,
    \i_x_r_reg[1]_0 ,
    number_tokens_reg,
    dor_o_v,
    \i_y_r_reg[1]_0 ,
    dor_s_v,
    \i_x_r_reg[1]_1 ,
    dor_e_v,
    rst,
    clk,
    D,
    waiting_for_ack_reg_0,
    \i_y_r_reg[0]_0 ,
    Q,
    w_b,
    dor_w2e,
    o_v_reg_reg,
    s_out_v_reg_reg,
    waiting_for_ack_reg_1,
    \i_x_r_reg[1]_2 ,
    number_tokens_reg_0_sp_1);
  output \i[2][2]_36 ;
  output e_v115_out__1;
  output \i_x_r_reg[1]_0 ;
  output [1:0]number_tokens_reg;
  output dor_o_v;
  output [1:0]\i_y_r_reg[1]_0 ;
  output dor_s_v;
  output [1:0]\i_x_r_reg[1]_1 ;
  output dor_e_v;
  input rst;
  input clk;
  input [0:0]D;
  input waiting_for_ack_reg_0;
  input \i_y_r_reg[0]_0 ;
  input [0:0]Q;
  input w_b;
  input dor_w2e;
  input o_v_reg_reg;
  input s_out_v_reg_reg;
  input waiting_for_ack_reg_1;
  input [1:0]\i_x_r_reg[1]_2 ;
  input number_tokens_reg_0_sp_1;

  wire [0:0]D;
  wire [0:0]Q;
  wire [0:0]_02_;
  wire _05_;
  wire clk;
  wire consume;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire e_v115_out__1;
  wire \i[2][2]_36 ;
  wire \i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire [1:0]\i_x_r_reg[1]_2 ;
  wire \i_y_r_reg[0]_0 ;
  wire [1:0]\i_y_r_reg[1]_0 ;
  wire [1:0]number_tokens_reg;
  wire number_tokens_reg_0_sn_1;
  wire o_v_reg_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire w_b;
  wire waiting_for_ack_reg_0;
  wire waiting_for_ack_reg_1;

  assign number_tokens_reg_0_sn_1 = number_tokens_reg_0_sp_1;
  LUT3 #(
    .INIT(8'hF4)) 
    e_out_v_reg_i_2__9
       (.I0(\i_x_r_reg[1]_0 ),
        .I1(\i[2][2]_36 ),
        .I2(dor_w2e),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_2 [0]),
        .Q(\i_x_r_reg[1]_1 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_2 [1]),
        .Q(\i_x_r_reg[1]_1 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(_02_),
        .Q(\i_y_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(D),
        .Q(\i_y_r_reg[1]_0 [1]),
        .R(rst));
  LUT6 #(
    .INIT(64'hFFFFFFFF10000000)) 
    o_v_reg_i_1__9
       (.I0(waiting_for_ack_reg_0),
        .I1(\i_y_r_reg[1]_0 [0]),
        .I2(\i_y_r_reg[1]_0 [1]),
        .I3(\i_x_r_reg[1]_0 ),
        .I4(\i[2][2]_36 ),
        .I5(o_v_reg_reg),
        .O(dor_o_v));
  token_bucket_9 regulator
       (.D(_02_),
        .Q(Q),
        .clk(clk),
        .consume(consume),
        .\i_x_r_reg[1] (\i_x_r_reg[1]_0 ),
        .\i_y_r_reg[0] (e_v115_out__1),
        .\i_y_r_reg[0]_0 (\i_y_r_reg[0]_0 ),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[0]_1 (number_tokens_reg_0_sn_1),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[2][2]_36 ),
        .waiting_for_ack_reg_1(\i_y_r_reg[1]_0 ),
        .waiting_for_ack_reg_2(\i_x_r_reg[1]_1 ),
        .waiting_for_ack_reg_3(waiting_for_ack_reg_1));
  LUT6 #(
    .INIT(64'hFFFFFFFF00B00000)) 
    s_out_v_reg_i_1__9
       (.I0(\i_y_r_reg[1]_0 [0]),
        .I1(\i_y_r_reg[1]_0 [1]),
        .I2(\i_x_r_reg[1]_0 ),
        .I3(waiting_for_ack_reg_0),
        .I4(\i[2][2]_36 ),
        .I5(s_out_v_reg_reg),
        .O(dor_s_v));
  LUT6 #(
    .INIT(64'h32323237FFFFFFFF)) 
    waiting_for_ack_i_1__9
       (.I0(e_v115_out__1),
        .I1(waiting_for_ack_reg_0),
        .I2(\i_x_r_reg[1]_0 ),
        .I3(w_b),
        .I4(dor_w2e),
        .I5(\i[2][2]_36 ),
        .O(_05_));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(_05_),
        .D(consume),
        .Q(\i[2][2]_36 ),
        .R(rst));
endmodule

module shadow_reg_combi
   (o_b_r_reg_0,
    o_b_r_reg_1,
    D,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg,
    n_in_v_reg_reg_0,
    e_msg,
    o_b_r_reg_2,
    s_msg,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    o_b_r_reg_3,
    rst,
    clk,
    Q,
    \i[3][3]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \o_v[3][3] ,
    \i_x_r_reg[1] ,
    \e[2][3]_36 ,
    \e[2][3] ,
    \s_out_x_reg_reg[1] ,
    \s_out_y_reg_reg[1] ,
    n_msg,
    n_in_v_reg,
    \w_b[0][3] ,
    e_v214_in);
  output o_b_r_reg_0;
  output [0:0]o_b_r_reg_1;
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg;
  output n_in_v_reg_reg_0;
  output [3:0]e_msg;
  output o_b_r_reg_2;
  output [3:0]s_msg;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output o_b_r_reg_3;
  input rst;
  input clk;
  input [1:0]Q;
  input \i[3][3]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \o_v[3][3] ;
  input [1:0]\i_x_r_reg[1] ;
  input \e[2][3]_36 ;
  input [3:0]\e[2][3] ;
  input [1:0]\s_out_x_reg_reg[1] ;
  input [1:0]\s_out_y_reg_reg[1] ;
  input [3:0]n_msg;
  input n_in_v_reg;
  input \w_b[0][3] ;
  input e_v214_in;

  wire [0:0]D;
  wire [1:0]Q;
  wire clk;
  wire dor_w2s;
  wire [3:0]\e[2][3] ;
  wire \e[2][3]_36 ;
  wire [3:0]e_msg;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[3][3]_36 ;
  wire [1:0]\i_x_r_reg[1] ;
  wire \i_y_r[1]_i_3__14_n_0 ;
  wire \i_y_r_reg[1] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [3:0]n_msg;
  wire [1:0]number_tokens_reg;
  wire o_b_r_i_3__14_n_0;
  wire o_b_r_reg_0;
  wire [0:0]o_b_r_reg_1;
  wire o_b_r_reg_2;
  wire o_b_r_reg_3;
  wire \o_v[3][3] ;
  wire rst;
  wire [35:32]s_d_r;
  wire s_d_r_0;
  wire [3:0]s_msg;
  wire [1:0]\s_out_x_reg_reg[1] ;
  wire [1:0]\s_out_y_reg_reg[1] ;
  wire s_v_r;
  wire s_v_r_i_1__14_n_0;
  wire w_b220_in;
  wire \w_b[0][3] ;
  wire w_b_c;
  wire [35:32]w_d_c;
  wire w_v_c;
  wire [1:0]waiting_for_ack_reg;

  (* SOFT_HLUTNM = "soft_lutpair188" *) 
  LUT1 #(
    .INIT(2'h1)) 
    e_out_v_reg_i_1__14
       (.I0(o_b_r_reg_0),
        .O(o_b_r_reg_1));
  (* SOFT_HLUTNM = "soft_lutpair188" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[0]_i_1__14 
       (.I0(s_d_r[34]),
        .I1(\e[2][3] [2]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(e_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair187" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[1]_i_1__14 
       (.I0(s_d_r[35]),
        .I1(\e[2][3] [3]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(e_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair190" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[0]_i_1__14 
       (.I0(s_d_r[32]),
        .I1(\e[2][3] [0]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(e_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair189" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[1]_i_1__14 
       (.I0(s_d_r[33]),
        .I1(\e[2][3] [1]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(e_msg[1]));
  LUT6 #(
    .INIT(64'h2E00D1FFD1FF2E00)) 
    \i_x_r[0]_i_1__14 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[3][3]_36 ),
        .I4(\i_x_r_reg[1] [0]),
        .I5(\o_v[3][3] ),
        .O(waiting_for_ack_reg[0]));
  LUT6 #(
    .INIT(64'hD1FFFFFF2E000000)) 
    \i_x_r[1]_i_1__14 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[3][3]_36 ),
        .I4(\o_v[3][3] ),
        .I5(\i_x_r_reg[1] [1]),
        .O(waiting_for_ack_reg[1]));
  LUT5 #(
    .INIT(32'h05222727)) 
    \i_x_r[1]_i_2__14 
       (.I0(e_v214_in),
        .I1(n_in_v_reg),
        .I2(\w_b[0][3] ),
        .I3(o_b_r_i_3__14_n_0),
        .I4(w_v_c),
        .O(n_in_v_reg_reg));
  LUT6 #(
    .INIT(64'h5D5D5DFFA2A2A200)) 
    \i_y_r[1]_i_1__14 
       (.I0(Q[0]),
        .I1(\i[3][3]_36 ),
        .I2(\i_y_r_reg[1] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(Q[1]),
        .O(D));
  LUT5 #(
    .INIT(32'h0000757F)) 
    \i_y_r[1]_i_3__14 
       (.I0(o_b_r_i_3__14_n_0),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[2][3]_36 ),
        .I4(n_in_v_reg),
        .O(\i_y_r[1]_i_3__14_n_0 ));
  MUXF7 \i_y_r_reg[1]_i_2__14 
       (.I0(n_in_v_reg_reg),
        .I1(\i_y_r[1]_i_3__14_n_0 ),
        .O(\i_y_r_reg[1] ),
        .S(e_v115_out__1));
  (* SOFT_HLUTNM = "soft_lutpair191" *) 
  LUT4 #(
    .INIT(16'hA808)) 
    o_b_r_i_1__14
       (.I0(w_v_c),
        .I1(\w_b[0][3] ),
        .I2(o_b_r_i_3__14_n_0),
        .I3(n_in_v_reg),
        .O(w_b_c));
  (* SOFT_HLUTNM = "soft_lutpair186" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    o_b_r_i_2__14
       (.I0(s_v_r),
        .I1(o_b_r_reg_0),
        .I2(\e[2][3]_36 ),
        .O(w_v_c));
  (* SOFT_HLUTNM = "soft_lutpair185" *) 
  LUT5 #(
    .INIT(32'hCAC00A00)) 
    o_b_r_i_3__14
       (.I0(\e[2][3] [2]),
        .I1(s_d_r[34]),
        .I2(o_b_r_reg_0),
        .I3(\e[2][3] [3]),
        .I4(s_d_r[35]),
        .O(o_b_r_i_3__14_n_0));
  FDRE #(
    .INIT(1'b0)) 
    o_b_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(w_b_c),
        .Q(o_b_r_reg_0),
        .R(rst));
  LUT6 #(
    .INIT(64'hFF80008000800080)) 
    o_v_reg_i_2__14
       (.I0(o_b_r_i_3__14_n_0),
        .I1(w_b220_in),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[1]),
        .I5(n_msg[0]),
        .O(n_in_v_reg_reg_2));
  LUT5 #(
    .INIT(32'hCAC00A00)) 
    o_v_reg_i_3__14
       (.I0(\e[2][3] [0]),
        .I1(s_d_r[32]),
        .I2(o_b_r_reg_0),
        .I3(\e[2][3] [1]),
        .I4(s_d_r[33]),
        .O(w_b220_in));
  LUT3 #(
    .INIT(8'h04)) 
    \s_d_r[35]_i_1__14 
       (.I0(o_b_r_reg_0),
        .I1(w_b_c),
        .I2(rst),
        .O(s_d_r_0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[32] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[2][3] [0]),
        .Q(s_d_r[32]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[33] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[2][3] [1]),
        .Q(s_d_r[33]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[34] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[2][3] [2]),
        .Q(s_d_r[34]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[35] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[2][3] [3]),
        .Q(s_d_r[35]),
        .R(1'b0));
  LUT6 #(
    .INIT(64'h0040FF40FF40FF40)) 
    s_out_v_reg_i_2__14
       (.I0(w_b220_in),
        .I1(o_b_r_i_3__14_n_0),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[1]),
        .I5(n_msg[0]),
        .O(n_in_v_reg_reg_1));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[0]_i_1__14 
       (.I0(n_msg[2]),
        .I1(n_in_v_reg),
        .I2(w_d_c[34]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(s_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair185" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[0]_i_2__14 
       (.I0(s_d_r[34]),
        .I1(\e[2][3] [2]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[34]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[1]_i_1__14 
       (.I0(n_msg[3]),
        .I1(n_in_v_reg),
        .I2(w_d_c[35]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(s_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair187" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[1]_i_2__14 
       (.I0(s_d_r[35]),
        .I1(\e[2][3] [3]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[35]));
  (* SOFT_HLUTNM = "soft_lutpair184" *) 
  LUT5 #(
    .INIT(32'h00008A80)) 
    \s_out_x_reg[1]_i_3__14 
       (.I0(o_b_r_i_3__14_n_0),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[2][3]_36 ),
        .I4(n_in_v_reg),
        .O(dor_w2s));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__14 
       (.I0(n_msg[0]),
        .I1(n_in_v_reg),
        .I2(w_d_c[32]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(s_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair190" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[0]_i_2__14 
       (.I0(s_d_r[32]),
        .I1(\e[2][3] [0]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__14 
       (.I0(n_msg[1]),
        .I1(n_in_v_reg),
        .I2(w_d_c[33]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(s_msg[1]));
  (* SOFT_HLUTNM = "soft_lutpair189" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[1]_i_2__14 
       (.I0(s_d_r[33]),
        .I1(\e[2][3] [1]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[33]));
  (* SOFT_HLUTNM = "soft_lutpair186" *) 
  LUT5 #(
    .INIT(32'h0000E200)) 
    s_v_r_i_1__14
       (.I0(\e[2][3]_36 ),
        .I1(o_b_r_reg_0),
        .I2(s_v_r),
        .I3(w_b_c),
        .I4(rst),
        .O(s_v_r_i_1__14_n_0));
  FDRE #(
    .INIT(1'b0)) 
    s_v_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(s_v_r_i_1__14_n_0),
        .Q(s_v_r),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair184" *) 
  LUT5 #(
    .INIT(32'hFEAEAAAA)) 
    waiting_for_ack_i_4__14
       (.I0(n_in_v_reg),
        .I1(\e[2][3]_36 ),
        .I2(o_b_r_reg_0),
        .I3(s_v_r),
        .I4(o_b_r_i_3__14_n_0),
        .O(n_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair191" *) 
  LUT3 #(
    .INIT(8'h02)) 
    waiting_for_ack_i_6__13
       (.I0(w_v_c),
        .I1(o_b_r_i_3__14_n_0),
        .I2(\w_b[0][3] ),
        .O(o_b_r_reg_2));
  LUT3 #(
    .INIT(8'h45)) 
    waiting_for_ack_i_8__2
       (.I0(\w_b[0][3] ),
        .I1(o_b_r_i_3__14_n_0),
        .I2(w_v_c),
        .O(o_b_r_reg_3));
endmodule

(* ORIG_REF_NAME = "shadow_reg_combi" *) 
module shadow_reg_combi_0
   (o_b_r_reg_0,
    o_b_r_reg_1,
    D,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg,
    n_in_v_reg_reg_0,
    e_msg,
    o_b_r_reg_2,
    s_msg,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    o_b_r_reg_3,
    rst,
    clk,
    Q,
    \i[2][3]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \o_v[2][3] ,
    \i_x_r_reg[1] ,
    \e[1][3]_36 ,
    \e[1][3] ,
    \s_out_x_reg_reg[1] ,
    \s_out_y_reg_reg[1] ,
    n_msg,
    n_in_v_reg,
    w_b,
    \i_x_r_reg[0] );
  output o_b_r_reg_0;
  output [0:0]o_b_r_reg_1;
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg;
  output n_in_v_reg_reg_0;
  output [3:0]e_msg;
  output o_b_r_reg_2;
  output [3:0]s_msg;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output o_b_r_reg_3;
  input rst;
  input clk;
  input [1:0]Q;
  input \i[2][3]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \o_v[2][3] ;
  input [1:0]\i_x_r_reg[1] ;
  input \e[1][3]_36 ;
  input [3:0]\e[1][3] ;
  input [1:0]\s_out_x_reg_reg[1] ;
  input [1:0]\s_out_y_reg_reg[1] ;
  input [3:0]n_msg;
  input n_in_v_reg;
  input w_b;
  input \i_x_r_reg[0] ;

  wire [0:0]D;
  wire [1:0]Q;
  wire clk;
  wire \dor_bp_inst/w_b1__0 ;
  wire dor_w2s;
  wire [3:0]\e[1][3] ;
  wire \e[1][3]_36 ;
  wire [3:0]e_msg;
  wire e_v115_out__1;
  wire \i[2][3]_36 ;
  wire \i_x_r_reg[0] ;
  wire [1:0]\i_x_r_reg[1] ;
  wire \i_y_r[1]_i_3__13_n_0 ;
  wire \i_y_r_reg[1] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [3:0]n_msg;
  wire [1:0]number_tokens_reg;
  wire o_b_r_reg_0;
  wire [0:0]o_b_r_reg_1;
  wire o_b_r_reg_2;
  wire o_b_r_reg_3;
  wire \o_v[2][3] ;
  wire rst;
  wire [35:32]s_d_r;
  wire s_d_r_0;
  wire [3:0]s_msg;
  wire [1:0]\s_out_x_reg_reg[1] ;
  wire [1:0]\s_out_y_reg_reg[1] ;
  wire s_v_r;
  wire s_v_r_i_1__13_n_0;
  wire w_b;
  wire w_b217_in;
  wire w_b_c;
  wire [35:32]w_d_c;
  wire w_v_c;
  wire [1:0]waiting_for_ack_reg;

  (* SOFT_HLUTNM = "soft_lutpair176" *) 
  LUT1 #(
    .INIT(2'h1)) 
    e_out_v_reg_i_1__13
       (.I0(o_b_r_reg_0),
        .O(o_b_r_reg_1));
  (* SOFT_HLUTNM = "soft_lutpair176" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[0]_i_1__13 
       (.I0(s_d_r[34]),
        .I1(\e[1][3] [2]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(e_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair175" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[1]_i_1__13 
       (.I0(s_d_r[35]),
        .I1(\e[1][3] [3]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(e_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair178" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[0]_i_1__13 
       (.I0(s_d_r[32]),
        .I1(\e[1][3] [0]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(e_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair177" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[1]_i_1__13 
       (.I0(s_d_r[33]),
        .I1(\e[1][3] [1]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(e_msg[1]));
  LUT6 #(
    .INIT(64'h2E00D1FFD1FF2E00)) 
    \i_x_r[0]_i_1__13 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[2][3]_36 ),
        .I4(\i_x_r_reg[1] [0]),
        .I5(\o_v[2][3] ),
        .O(waiting_for_ack_reg[0]));
  LUT6 #(
    .INIT(64'hD1FFFFFF2E000000)) 
    \i_x_r[1]_i_1__13 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[2][3]_36 ),
        .I4(\o_v[2][3] ),
        .I5(\i_x_r_reg[1] [1]),
        .O(waiting_for_ack_reg[1]));
  LUT5 #(
    .INIT(32'h22052727)) 
    \i_x_r[1]_i_2__13 
       (.I0(\i_x_r_reg[0] ),
        .I1(n_in_v_reg),
        .I2(w_b),
        .I3(\dor_bp_inst/w_b1__0 ),
        .I4(w_v_c),
        .O(n_in_v_reg_reg));
  LUT6 #(
    .INIT(64'h5D5D5DFFA2A2A200)) 
    \i_y_r[1]_i_1__13 
       (.I0(Q[0]),
        .I1(\i[2][3]_36 ),
        .I2(\i_y_r_reg[1] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(Q[1]),
        .O(D));
  LUT5 #(
    .INIT(32'h0000BABF)) 
    \i_y_r[1]_i_3__13 
       (.I0(\dor_bp_inst/w_b1__0 ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[1][3]_36 ),
        .I4(n_in_v_reg),
        .O(\i_y_r[1]_i_3__13_n_0 ));
  MUXF7 \i_y_r_reg[1]_i_2__13 
       (.I0(n_in_v_reg_reg),
        .I1(\i_y_r[1]_i_3__13_n_0 ),
        .O(\i_y_r_reg[1] ),
        .S(e_v115_out__1));
  (* SOFT_HLUTNM = "soft_lutpair179" *) 
  LUT4 #(
    .INIT(16'h8A80)) 
    o_b_r_i_1__13
       (.I0(w_v_c),
        .I1(w_b),
        .I2(\dor_bp_inst/w_b1__0 ),
        .I3(n_in_v_reg),
        .O(w_b_c));
  (* SOFT_HLUTNM = "soft_lutpair174" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    o_b_r_i_2__13
       (.I0(s_v_r),
        .I1(o_b_r_reg_0),
        .I2(\e[1][3]_36 ),
        .O(w_v_c));
  (* SOFT_HLUTNM = "soft_lutpair172" *) 
  LUT5 #(
    .INIT(32'hCACFFAFF)) 
    o_b_r_i_3__11
       (.I0(\e[1][3] [2]),
        .I1(s_d_r[34]),
        .I2(o_b_r_reg_0),
        .I3(\e[1][3] [3]),
        .I4(s_d_r[35]),
        .O(\dor_bp_inst/w_b1__0 ));
  FDRE #(
    .INIT(1'b0)) 
    o_b_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(w_b_c),
        .Q(o_b_r_reg_0),
        .R(rst));
  LUT6 #(
    .INIT(64'hFF10001000100010)) 
    o_v_reg_i_2__13
       (.I0(\dor_bp_inst/w_b1__0 ),
        .I1(w_b217_in),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[1]),
        .I5(n_msg[0]),
        .O(n_in_v_reg_reg_2));
  LUT5 #(
    .INIT(32'h353FF5FF)) 
    o_v_reg_i_3__13
       (.I0(\e[1][3] [0]),
        .I1(s_d_r[32]),
        .I2(o_b_r_reg_0),
        .I3(\e[1][3] [1]),
        .I4(s_d_r[33]),
        .O(w_b217_in));
  LUT3 #(
    .INIT(8'h04)) 
    \s_d_r[35]_i_1__13 
       (.I0(o_b_r_reg_0),
        .I1(w_b_c),
        .I2(rst),
        .O(s_d_r_0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[32] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[1][3] [0]),
        .Q(s_d_r[32]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[33] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[1][3] [1]),
        .Q(s_d_r[33]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[34] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[1][3] [2]),
        .Q(s_d_r[34]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[35] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[1][3] [3]),
        .Q(s_d_r[35]),
        .R(1'b0));
  LUT6 #(
    .INIT(64'h0020FF20FF20FF20)) 
    s_out_v_reg_i_2__13
       (.I0(w_b217_in),
        .I1(\dor_bp_inst/w_b1__0 ),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[1]),
        .I5(n_msg[0]),
        .O(n_in_v_reg_reg_1));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[0]_i_1__13 
       (.I0(n_msg[2]),
        .I1(n_in_v_reg),
        .I2(w_d_c[34]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(s_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair172" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[0]_i_2__13 
       (.I0(s_d_r[34]),
        .I1(\e[1][3] [2]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[34]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[1]_i_1__13 
       (.I0(n_msg[3]),
        .I1(n_in_v_reg),
        .I2(w_d_c[35]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(s_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair175" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[1]_i_2__13 
       (.I0(s_d_r[35]),
        .I1(\e[1][3] [3]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[35]));
  (* SOFT_HLUTNM = "soft_lutpair173" *) 
  LUT5 #(
    .INIT(32'h00004540)) 
    \s_out_x_reg[1]_i_3__13 
       (.I0(\dor_bp_inst/w_b1__0 ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[1][3]_36 ),
        .I4(n_in_v_reg),
        .O(dor_w2s));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__13 
       (.I0(n_msg[0]),
        .I1(n_in_v_reg),
        .I2(w_d_c[32]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(s_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair178" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[0]_i_2__13 
       (.I0(s_d_r[32]),
        .I1(\e[1][3] [0]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__13 
       (.I0(n_msg[1]),
        .I1(n_in_v_reg),
        .I2(w_d_c[33]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(s_msg[1]));
  (* SOFT_HLUTNM = "soft_lutpair177" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[1]_i_2__13 
       (.I0(s_d_r[33]),
        .I1(\e[1][3] [1]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[33]));
  (* SOFT_HLUTNM = "soft_lutpair174" *) 
  LUT5 #(
    .INIT(32'h0000E200)) 
    s_v_r_i_1__13
       (.I0(\e[1][3]_36 ),
        .I1(o_b_r_reg_0),
        .I2(s_v_r),
        .I3(w_b_c),
        .I4(rst),
        .O(s_v_r_i_1__13_n_0));
  FDRE #(
    .INIT(1'b0)) 
    s_v_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(s_v_r_i_1__13_n_0),
        .Q(s_v_r),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair173" *) 
  LUT5 #(
    .INIT(32'hAAAAFEAE)) 
    waiting_for_ack_i_4__13
       (.I0(n_in_v_reg),
        .I1(\e[1][3]_36 ),
        .I2(o_b_r_reg_0),
        .I3(s_v_r),
        .I4(\dor_bp_inst/w_b1__0 ),
        .O(n_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair179" *) 
  LUT3 #(
    .INIT(8'h08)) 
    waiting_for_ack_i_6__12
       (.I0(w_v_c),
        .I1(\dor_bp_inst/w_b1__0 ),
        .I2(w_b),
        .O(o_b_r_reg_2));
  LUT3 #(
    .INIT(8'h15)) 
    waiting_for_ack_i_8__5
       (.I0(w_b),
        .I1(\dor_bp_inst/w_b1__0 ),
        .I2(w_v_c),
        .O(o_b_r_reg_3));
endmodule

(* ORIG_REF_NAME = "shadow_reg_combi" *) 
module shadow_reg_combi_10
   (o_b_r_reg_0,
    o_b_r_reg_1,
    D,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg,
    n_in_v_reg_reg_0,
    e_msg,
    o_b_r_reg_2,
    s_msg,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    o_b_r_reg_3,
    rst,
    clk,
    Q,
    \i[1][2]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \o_v[1][2] ,
    \i_x_r_reg[1] ,
    \e[0][2]_36 ,
    \e[0][2] ,
    \s_out_x_reg_reg[1] ,
    \s_out_y_reg_reg[1] ,
    n_msg,
    n_in_v_reg,
    o_b_r_reg_4,
    \i_x_r_reg[0] );
  output o_b_r_reg_0;
  output [0:0]o_b_r_reg_1;
  output [0:0]D;
  output \i_y_r_reg[0] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg;
  output n_in_v_reg_reg_0;
  output [3:0]e_msg;
  output o_b_r_reg_2;
  output [3:0]s_msg;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output o_b_r_reg_3;
  input rst;
  input clk;
  input [1:0]Q;
  input \i[1][2]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \o_v[1][2] ;
  input [1:0]\i_x_r_reg[1] ;
  input \e[0][2]_36 ;
  input [3:0]\e[0][2] ;
  input [1:0]\s_out_x_reg_reg[1] ;
  input [1:0]\s_out_y_reg_reg[1] ;
  input [3:0]n_msg;
  input n_in_v_reg;
  input o_b_r_reg_4;
  input \i_x_r_reg[0] ;

  wire [0:0]D;
  wire [1:0]Q;
  wire clk;
  wire \dor_bp_inst/w_b218_in ;
  wire dor_w2s;
  wire [3:0]\e[0][2] ;
  wire \e[0][2]_36 ;
  wire [3:0]e_msg;
  wire e_v115_out__1;
  wire \i[1][2]_36 ;
  wire \i_x_r_reg[0] ;
  wire [1:0]\i_x_r_reg[1] ;
  wire \i_y_r[1]_i_3__8_n_0 ;
  wire \i_y_r_reg[0] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [3:0]n_msg;
  wire [1:0]number_tokens_reg;
  wire o_b_r_reg_0;
  wire [0:0]o_b_r_reg_1;
  wire o_b_r_reg_2;
  wire o_b_r_reg_3;
  wire o_b_r_reg_4;
  wire \o_v[1][2] ;
  wire o_v_reg_i_3__8_n_0;
  wire rst;
  wire [35:32]s_d_r;
  wire s_d_r_0;
  wire [3:0]s_msg;
  wire [1:0]\s_out_x_reg_reg[1] ;
  wire [1:0]\s_out_y_reg_reg[1] ;
  wire s_v_r;
  wire s_v_r_i_1__8_n_0;
  wire w_b_c;
  wire [35:32]w_d_c;
  wire w_v_c;
  wire [1:0]waiting_for_ack_reg;

  (* SOFT_HLUTNM = "soft_lutpair116" *) 
  LUT1 #(
    .INIT(2'h1)) 
    e_out_v_reg_i_1__8
       (.I0(o_b_r_reg_0),
        .O(o_b_r_reg_1));
  (* SOFT_HLUTNM = "soft_lutpair116" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[0]_i_1__8 
       (.I0(s_d_r[34]),
        .I1(\e[0][2] [2]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(e_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair115" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[1]_i_1__8 
       (.I0(s_d_r[35]),
        .I1(\e[0][2] [3]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(e_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair118" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[0]_i_1__8 
       (.I0(s_d_r[32]),
        .I1(\e[0][2] [0]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(e_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair117" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[1]_i_1__8 
       (.I0(s_d_r[33]),
        .I1(\e[0][2] [1]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(e_msg[1]));
  LUT6 #(
    .INIT(64'h2E00D1FFD1FF2E00)) 
    \i_x_r[0]_i_1__8 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[1][2]_36 ),
        .I4(\i_x_r_reg[1] [0]),
        .I5(\o_v[1][2] ),
        .O(waiting_for_ack_reg[0]));
  LUT6 #(
    .INIT(64'hD1FFFFFF2E000000)) 
    \i_x_r[1]_i_1__8 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[1][2]_36 ),
        .I4(\o_v[1][2] ),
        .I5(\i_x_r_reg[1] [1]),
        .O(waiting_for_ack_reg[1]));
  LUT5 #(
    .INIT(32'h02522277)) 
    \i_x_r[1]_i_2__8 
       (.I0(\i_x_r_reg[0] ),
        .I1(n_in_v_reg),
        .I2(\dor_bp_inst/w_b218_in ),
        .I3(o_b_r_reg_4),
        .I4(w_v_c),
        .O(n_in_v_reg_reg));
  LUT6 #(
    .INIT(64'h5D5D5DFFA2A2A200)) 
    \i_y_r[1]_i_1__8 
       (.I0(Q[0]),
        .I1(\i[1][2]_36 ),
        .I2(\i_y_r_reg[0] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(Q[1]),
        .O(D));
  LUT5 #(
    .INIT(32'h0000757F)) 
    \i_y_r[1]_i_3__8 
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[0][2]_36 ),
        .I4(n_in_v_reg),
        .O(\i_y_r[1]_i_3__8_n_0 ));
  MUXF7 \i_y_r_reg[1]_i_2__8 
       (.I0(n_in_v_reg_reg),
        .I1(\i_y_r[1]_i_3__8_n_0 ),
        .O(\i_y_r_reg[0] ),
        .S(e_v115_out__1));
  (* SOFT_HLUTNM = "soft_lutpair119" *) 
  LUT4 #(
    .INIT(16'hA808)) 
    o_b_r_i_1__8
       (.I0(w_v_c),
        .I1(o_b_r_reg_4),
        .I2(\dor_bp_inst/w_b218_in ),
        .I3(n_in_v_reg),
        .O(w_b_c));
  (* SOFT_HLUTNM = "soft_lutpair114" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    o_b_r_i_2__8
       (.I0(s_v_r),
        .I1(o_b_r_reg_0),
        .I2(\e[0][2]_36 ),
        .O(w_v_c));
  (* SOFT_HLUTNM = "soft_lutpair112" *) 
  LUT5 #(
    .INIT(32'h000AC0CA)) 
    o_b_r_i_3__7
       (.I0(\e[0][2] [2]),
        .I1(s_d_r[34]),
        .I2(o_b_r_reg_0),
        .I3(\e[0][2] [3]),
        .I4(s_d_r[35]),
        .O(\dor_bp_inst/w_b218_in ));
  FDRE #(
    .INIT(1'b0)) 
    o_b_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(w_b_c),
        .Q(o_b_r_reg_0),
        .R(rst));
  LUT6 #(
    .INIT(64'h00200020FF200020)) 
    o_v_reg_i_2__8
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(o_v_reg_i_3__8_n_0),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[1]),
        .I5(n_msg[0]),
        .O(n_in_v_reg_reg_1));
  LUT5 #(
    .INIT(32'hCACFFAFF)) 
    o_v_reg_i_3__8
       (.I0(\e[0][2] [0]),
        .I1(s_d_r[32]),
        .I2(o_b_r_reg_0),
        .I3(\e[0][2] [1]),
        .I4(s_d_r[33]),
        .O(o_v_reg_i_3__8_n_0));
  LUT3 #(
    .INIT(8'h04)) 
    \s_d_r[35]_i_1__8 
       (.I0(o_b_r_reg_0),
        .I1(w_b_c),
        .I2(rst),
        .O(s_d_r_0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[32] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[0][2] [0]),
        .Q(s_d_r[32]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[33] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[0][2] [1]),
        .Q(s_d_r[33]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[34] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[0][2] [2]),
        .Q(s_d_r[34]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[35] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[0][2] [3]),
        .Q(s_d_r[35]),
        .R(1'b0));
  LUT6 #(
    .INIT(64'hFF80FF800080FF80)) 
    s_out_v_reg_i_2__8
       (.I0(o_v_reg_i_3__8_n_0),
        .I1(\dor_bp_inst/w_b218_in ),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[1]),
        .I5(n_msg[0]),
        .O(n_in_v_reg_reg_2));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[0]_i_1__8 
       (.I0(n_msg[2]),
        .I1(n_in_v_reg),
        .I2(w_d_c[34]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(s_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair112" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[0]_i_2__8 
       (.I0(s_d_r[34]),
        .I1(\e[0][2] [2]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[34]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[1]_i_1__8 
       (.I0(n_msg[3]),
        .I1(n_in_v_reg),
        .I2(w_d_c[35]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(s_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair115" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[1]_i_2__8 
       (.I0(s_d_r[35]),
        .I1(\e[0][2] [3]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[35]));
  (* SOFT_HLUTNM = "soft_lutpair113" *) 
  LUT5 #(
    .INIT(32'h00008A80)) 
    \s_out_x_reg[1]_i_3__8 
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[0][2]_36 ),
        .I4(n_in_v_reg),
        .O(dor_w2s));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__8 
       (.I0(n_msg[0]),
        .I1(n_in_v_reg),
        .I2(w_d_c[32]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(s_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair118" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[0]_i_2__8 
       (.I0(s_d_r[32]),
        .I1(\e[0][2] [0]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__8 
       (.I0(n_msg[1]),
        .I1(n_in_v_reg),
        .I2(w_d_c[33]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(s_msg[1]));
  (* SOFT_HLUTNM = "soft_lutpair117" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[1]_i_2__8 
       (.I0(s_d_r[33]),
        .I1(\e[0][2] [1]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[33]));
  (* SOFT_HLUTNM = "soft_lutpair114" *) 
  LUT5 #(
    .INIT(32'h0000E200)) 
    s_v_r_i_1__8
       (.I0(\e[0][2]_36 ),
        .I1(o_b_r_reg_0),
        .I2(s_v_r),
        .I3(w_b_c),
        .I4(rst),
        .O(s_v_r_i_1__8_n_0));
  FDRE #(
    .INIT(1'b0)) 
    s_v_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(s_v_r_i_1__8_n_0),
        .Q(s_v_r),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair113" *) 
  LUT5 #(
    .INIT(32'hFEAEAAAA)) 
    waiting_for_ack_i_4__8
       (.I0(n_in_v_reg),
        .I1(\e[0][2]_36 ),
        .I2(o_b_r_reg_0),
        .I3(s_v_r),
        .I4(\dor_bp_inst/w_b218_in ),
        .O(n_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair119" *) 
  LUT3 #(
    .INIT(8'h02)) 
    waiting_for_ack_i_6__7
       (.I0(w_v_c),
        .I1(o_b_r_reg_4),
        .I2(\dor_bp_inst/w_b218_in ),
        .O(o_b_r_reg_2));
  LUT3 #(
    .INIT(8'h23)) 
    waiting_for_ack_i_8__8
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(o_b_r_reg_4),
        .I2(w_v_c),
        .O(o_b_r_reg_3));
endmodule

(* ORIG_REF_NAME = "shadow_reg_combi" *) 
module shadow_reg_combi_12
   (o_b_r_reg_0,
    D,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg,
    n_in_v_reg_reg_0,
    e_msg,
    o_b_r_reg_1,
    s_msg,
    o_b_r_reg_2,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    o_b_r_reg_3,
    rst,
    clk,
    Q,
    \i[0][2]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \o_v[0][2] ,
    \i_x_r_reg[1] ,
    e_out_v,
    \e[3][2] ,
    \s_out_x_reg_reg[1] ,
    \s_out_y_reg_reg[1] ,
    n_msg,
    n_in_v_reg,
    w_b,
    e_v214_in);
  output o_b_r_reg_0;
  output [0:0]D;
  output \i_y_r_reg[0] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg;
  output n_in_v_reg_reg_0;
  output [3:0]e_msg;
  output o_b_r_reg_1;
  output [3:0]s_msg;
  output [0:0]o_b_r_reg_2;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output o_b_r_reg_3;
  input rst;
  input clk;
  input [1:0]Q;
  input \i[0][2]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \o_v[0][2] ;
  input [1:0]\i_x_r_reg[1] ;
  input e_out_v;
  input [3:0]\e[3][2] ;
  input [1:0]\s_out_x_reg_reg[1] ;
  input [1:0]\s_out_y_reg_reg[1] ;
  input [3:0]n_msg;
  input n_in_v_reg;
  input w_b;
  input e_v214_in;

  wire [0:0]D;
  wire [1:0]Q;
  wire clk;
  wire \dor_bp_inst/w_b218_in ;
  wire dor_w2s;
  wire [3:0]\e[3][2] ;
  wire [3:0]e_msg;
  wire e_out_v;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[0][2]_36 ;
  wire [1:0]\i_x_r_reg[1] ;
  wire \i_y_r[1]_i_3__7_n_0 ;
  wire \i_y_r_reg[0] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [3:0]n_msg;
  wire [1:0]number_tokens_reg;
  wire o_b_r_reg_0;
  wire o_b_r_reg_1;
  wire [0:0]o_b_r_reg_2;
  wire o_b_r_reg_3;
  wire \o_v[0][2] ;
  wire o_v_reg_i_3__7_n_0;
  wire rst;
  wire [35:32]s_d_r;
  wire s_d_r_0;
  wire [3:0]s_msg;
  wire [1:0]\s_out_x_reg_reg[1] ;
  wire [1:0]\s_out_y_reg_reg[1] ;
  wire s_v_r;
  wire s_v_r_i_1__7_n_0;
  wire w_b;
  wire w_b_c;
  wire [35:32]w_d_c;
  wire w_v_c;
  wire [1:0]waiting_for_ack_reg;

  (* SOFT_HLUTNM = "soft_lutpair103" *) 
  LUT1 #(
    .INIT(2'h1)) 
    e_out_v_reg_i_1__7
       (.I0(o_b_r_reg_0),
        .O(o_b_r_reg_2));
  (* SOFT_HLUTNM = "soft_lutpair104" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[0]_i_1__7 
       (.I0(s_d_r[34]),
        .I1(\e[3][2] [2]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_1),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(e_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair103" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[1]_i_1__7 
       (.I0(s_d_r[35]),
        .I1(\e[3][2] [3]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_1),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(e_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair106" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[0]_i_1__7 
       (.I0(s_d_r[32]),
        .I1(\e[3][2] [0]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_1),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(e_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair105" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[1]_i_1__7 
       (.I0(s_d_r[33]),
        .I1(\e[3][2] [1]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_1),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(e_msg[1]));
  LUT6 #(
    .INIT(64'h2E00D1FFD1FF2E00)) 
    \i_x_r[0]_i_1__7 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[0][2]_36 ),
        .I4(\i_x_r_reg[1] [0]),
        .I5(\o_v[0][2] ),
        .O(waiting_for_ack_reg[0]));
  LUT6 #(
    .INIT(64'hD1FFFFFF2E000000)) 
    \i_x_r[1]_i_1__7 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[0][2]_36 ),
        .I4(\o_v[0][2] ),
        .I5(\i_x_r_reg[1] [1]),
        .O(waiting_for_ack_reg[1]));
  LUT5 #(
    .INIT(32'h02522277)) 
    \i_x_r[1]_i_2__7 
       (.I0(e_v214_in),
        .I1(n_in_v_reg),
        .I2(\dor_bp_inst/w_b218_in ),
        .I3(w_b),
        .I4(w_v_c),
        .O(n_in_v_reg_reg));
  LUT6 #(
    .INIT(64'h5D5D5DFFA2A2A200)) 
    \i_y_r[1]_i_1__7 
       (.I0(Q[0]),
        .I1(\i[0][2]_36 ),
        .I2(\i_y_r_reg[0] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(Q[1]),
        .O(D));
  LUT5 #(
    .INIT(32'h0000757F)) 
    \i_y_r[1]_i_3__7 
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(e_out_v),
        .I4(n_in_v_reg),
        .O(\i_y_r[1]_i_3__7_n_0 ));
  MUXF7 \i_y_r_reg[1]_i_2__7 
       (.I0(n_in_v_reg_reg),
        .I1(\i_y_r[1]_i_3__7_n_0 ),
        .O(\i_y_r_reg[0] ),
        .S(e_v115_out__1));
  (* SOFT_HLUTNM = "soft_lutpair107" *) 
  LUT4 #(
    .INIT(16'hA808)) 
    o_b_r_i_1__7
       (.I0(w_v_c),
        .I1(w_b),
        .I2(\dor_bp_inst/w_b218_in ),
        .I3(n_in_v_reg),
        .O(w_b_c));
  (* SOFT_HLUTNM = "soft_lutpair102" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    o_b_r_i_2__7
       (.I0(s_v_r),
        .I1(o_b_r_reg_0),
        .I2(e_out_v),
        .O(w_v_c));
  (* SOFT_HLUTNM = "soft_lutpair100" *) 
  LUT5 #(
    .INIT(32'h00053035)) 
    o_b_r_i_3__6
       (.I0(\e[3][2] [3]),
        .I1(s_d_r[35]),
        .I2(o_b_r_reg_0),
        .I3(\e[3][2] [2]),
        .I4(s_d_r[34]),
        .O(\dor_bp_inst/w_b218_in ));
  FDRE #(
    .INIT(1'b0)) 
    o_b_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(w_b_c),
        .Q(o_b_r_reg_0),
        .R(rst));
  LUT6 #(
    .INIT(64'h00200020FF200020)) 
    o_v_reg_i_2__7
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(o_v_reg_i_3__7_n_0),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[1]),
        .I5(n_msg[0]),
        .O(n_in_v_reg_reg_1));
  LUT5 #(
    .INIT(32'hCACFFAFF)) 
    o_v_reg_i_3__7
       (.I0(\e[3][2] [0]),
        .I1(s_d_r[32]),
        .I2(o_b_r_reg_0),
        .I3(\e[3][2] [1]),
        .I4(s_d_r[33]),
        .O(o_v_reg_i_3__7_n_0));
  LUT3 #(
    .INIT(8'h04)) 
    \s_d_r[35]_i_1__7 
       (.I0(o_b_r_reg_0),
        .I1(w_b_c),
        .I2(rst),
        .O(s_d_r_0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[32] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[3][2] [0]),
        .Q(s_d_r[32]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[33] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[3][2] [1]),
        .Q(s_d_r[33]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[34] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[3][2] [2]),
        .Q(s_d_r[34]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[35] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[3][2] [3]),
        .Q(s_d_r[35]),
        .R(1'b0));
  LUT6 #(
    .INIT(64'hFF80FF800080FF80)) 
    s_out_v_reg_i_2__7
       (.I0(o_v_reg_i_3__7_n_0),
        .I1(\dor_bp_inst/w_b218_in ),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[1]),
        .I5(n_msg[0]),
        .O(n_in_v_reg_reg_2));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[0]_i_1__7 
       (.I0(n_msg[2]),
        .I1(n_in_v_reg),
        .I2(w_d_c[34]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(s_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair104" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[0]_i_2__7 
       (.I0(s_d_r[34]),
        .I1(\e[3][2] [2]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[34]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[1]_i_1__7 
       (.I0(n_msg[3]),
        .I1(n_in_v_reg),
        .I2(w_d_c[35]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(s_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair100" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[1]_i_2__7 
       (.I0(s_d_r[35]),
        .I1(\e[3][2] [3]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[35]));
  (* SOFT_HLUTNM = "soft_lutpair101" *) 
  LUT5 #(
    .INIT(32'h00008A80)) 
    \s_out_x_reg[1]_i_3__7 
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(e_out_v),
        .I4(n_in_v_reg),
        .O(dor_w2s));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__7 
       (.I0(n_msg[0]),
        .I1(n_in_v_reg),
        .I2(w_d_c[32]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(s_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair106" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[0]_i_2__7 
       (.I0(s_d_r[32]),
        .I1(\e[3][2] [0]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__7 
       (.I0(n_msg[1]),
        .I1(n_in_v_reg),
        .I2(w_d_c[33]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(s_msg[1]));
  (* SOFT_HLUTNM = "soft_lutpair105" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[1]_i_2__7 
       (.I0(s_d_r[33]),
        .I1(\e[3][2] [1]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[33]));
  (* SOFT_HLUTNM = "soft_lutpair102" *) 
  LUT5 #(
    .INIT(32'h0000E200)) 
    s_v_r_i_1__7
       (.I0(e_out_v),
        .I1(o_b_r_reg_0),
        .I2(s_v_r),
        .I3(w_b_c),
        .I4(rst),
        .O(s_v_r_i_1__7_n_0));
  FDRE #(
    .INIT(1'b0)) 
    s_v_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(s_v_r_i_1__7_n_0),
        .Q(s_v_r),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair101" *) 
  LUT5 #(
    .INIT(32'hFEAEAAAA)) 
    waiting_for_ack_i_4__7
       (.I0(n_in_v_reg),
        .I1(e_out_v),
        .I2(o_b_r_reg_0),
        .I3(s_v_r),
        .I4(\dor_bp_inst/w_b218_in ),
        .O(n_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair107" *) 
  LUT3 #(
    .INIT(8'h02)) 
    waiting_for_ack_i_6__6
       (.I0(w_v_c),
        .I1(w_b),
        .I2(\dor_bp_inst/w_b218_in ),
        .O(o_b_r_reg_1));
  LUT3 #(
    .INIT(8'h23)) 
    waiting_for_ack_i_8__4
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(w_b),
        .I2(w_v_c),
        .O(o_b_r_reg_3));
endmodule

(* ORIG_REF_NAME = "shadow_reg_combi" *) 
module shadow_reg_combi_14
   (o_b_r_reg_0,
    o_b_r_reg_1,
    D,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg,
    n_in_v_reg_reg_0,
    e_msg,
    o_b_r_reg_2,
    s_msg,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    o_b_r_reg_3,
    rst,
    clk,
    Q,
    \i[3][1]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \o_v[3][1] ,
    \i_x_r_reg[1] ,
    \e[2][1]_36 ,
    \e[2][1] ,
    \s_out_x_reg_reg[1] ,
    \s_out_y_reg_reg[1] ,
    n_msg,
    n_in_v_reg,
    \w_b[0][1] ,
    e_v214_in);
  output o_b_r_reg_0;
  output [0:0]o_b_r_reg_1;
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg;
  output n_in_v_reg_reg_0;
  output [3:0]e_msg;
  output o_b_r_reg_2;
  output [3:0]s_msg;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output o_b_r_reg_3;
  input rst;
  input clk;
  input [1:0]Q;
  input \i[3][1]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \o_v[3][1] ;
  input [1:0]\i_x_r_reg[1] ;
  input \e[2][1]_36 ;
  input [3:0]\e[2][1] ;
  input [1:0]\s_out_x_reg_reg[1] ;
  input [1:0]\s_out_y_reg_reg[1] ;
  input [3:0]n_msg;
  input n_in_v_reg;
  input \w_b[0][1] ;
  input e_v214_in;

  wire [0:0]D;
  wire [1:0]Q;
  wire clk;
  wire dor_w2s;
  wire [3:0]\e[2][1] ;
  wire \e[2][1]_36 ;
  wire [3:0]e_msg;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[3][1]_36 ;
  wire [1:0]\i_x_r_reg[1] ;
  wire \i_y_r[1]_i_3__6_n_0 ;
  wire \i_y_r_reg[1] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [3:0]n_msg;
  wire [1:0]number_tokens_reg;
  wire o_b_r_i_3__12_n_0;
  wire o_b_r_reg_0;
  wire [0:0]o_b_r_reg_1;
  wire o_b_r_reg_2;
  wire o_b_r_reg_3;
  wire \o_v[3][1] ;
  wire o_v_reg_i_3__6_n_0;
  wire rst;
  wire [35:32]s_d_r;
  wire s_d_r_0;
  wire [3:0]s_msg;
  wire [1:0]\s_out_x_reg_reg[1] ;
  wire [1:0]\s_out_y_reg_reg[1] ;
  wire s_v_r;
  wire s_v_r_i_1__6_n_0;
  wire \w_b[0][1] ;
  wire w_b_c;
  wire [35:32]w_d_c;
  wire w_v_c;
  wire [1:0]waiting_for_ack_reg;

  (* SOFT_HLUTNM = "soft_lutpair92" *) 
  LUT1 #(
    .INIT(2'h1)) 
    e_out_v_reg_i_1__6
       (.I0(o_b_r_reg_0),
        .O(o_b_r_reg_1));
  (* SOFT_HLUTNM = "soft_lutpair92" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[0]_i_1__6 
       (.I0(s_d_r[34]),
        .I1(\e[2][1] [2]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(e_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair91" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[1]_i_1__6 
       (.I0(s_d_r[35]),
        .I1(\e[2][1] [3]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(e_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair94" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[0]_i_1__6 
       (.I0(s_d_r[32]),
        .I1(\e[2][1] [0]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(e_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair93" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[1]_i_1__6 
       (.I0(s_d_r[33]),
        .I1(\e[2][1] [1]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(e_msg[1]));
  LUT6 #(
    .INIT(64'h2E00D1FFD1FF2E00)) 
    \i_x_r[0]_i_1__6 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[3][1]_36 ),
        .I4(\i_x_r_reg[1] [0]),
        .I5(\o_v[3][1] ),
        .O(waiting_for_ack_reg[0]));
  LUT6 #(
    .INIT(64'hD1FFFFFF2E000000)) 
    \i_x_r[1]_i_1__6 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[3][1]_36 ),
        .I4(\o_v[3][1] ),
        .I5(\i_x_r_reg[1] [1]),
        .O(waiting_for_ack_reg[1]));
  LUT5 #(
    .INIT(32'h05222727)) 
    \i_x_r[1]_i_2__6 
       (.I0(e_v214_in),
        .I1(n_in_v_reg),
        .I2(\w_b[0][1] ),
        .I3(o_b_r_i_3__12_n_0),
        .I4(w_v_c),
        .O(n_in_v_reg_reg));
  LUT6 #(
    .INIT(64'h5D5D5DFFA2A2A200)) 
    \i_y_r[1]_i_1__6 
       (.I0(Q[0]),
        .I1(\i[3][1]_36 ),
        .I2(\i_y_r_reg[1] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(Q[1]),
        .O(D));
  LUT5 #(
    .INIT(32'h0000757F)) 
    \i_y_r[1]_i_3__6 
       (.I0(o_b_r_i_3__12_n_0),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[2][1]_36 ),
        .I4(n_in_v_reg),
        .O(\i_y_r[1]_i_3__6_n_0 ));
  MUXF7 \i_y_r_reg[1]_i_2__6 
       (.I0(n_in_v_reg_reg),
        .I1(\i_y_r[1]_i_3__6_n_0 ),
        .O(\i_y_r_reg[1] ),
        .S(e_v115_out__1));
  (* SOFT_HLUTNM = "soft_lutpair95" *) 
  LUT4 #(
    .INIT(16'hA808)) 
    o_b_r_i_1__6
       (.I0(w_v_c),
        .I1(\w_b[0][1] ),
        .I2(o_b_r_i_3__12_n_0),
        .I3(n_in_v_reg),
        .O(w_b_c));
  (* SOFT_HLUTNM = "soft_lutpair90" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    o_b_r_i_2__6
       (.I0(s_v_r),
        .I1(o_b_r_reg_0),
        .I2(\e[2][1]_36 ),
        .O(w_v_c));
  (* SOFT_HLUTNM = "soft_lutpair89" *) 
  LUT5 #(
    .INIT(32'hCAC00A00)) 
    o_b_r_i_3__12
       (.I0(\e[2][1] [2]),
        .I1(s_d_r[34]),
        .I2(o_b_r_reg_0),
        .I3(\e[2][1] [3]),
        .I4(s_d_r[35]),
        .O(o_b_r_i_3__12_n_0));
  FDRE #(
    .INIT(1'b0)) 
    o_b_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(w_b_c),
        .Q(o_b_r_reg_0),
        .R(rst));
  LUT6 #(
    .INIT(64'h00800080FF800080)) 
    o_v_reg_i_2__6
       (.I0(o_b_r_i_3__12_n_0),
        .I1(o_v_reg_i_3__6_n_0),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[0]),
        .I5(n_msg[1]),
        .O(n_in_v_reg_reg_2));
  LUT5 #(
    .INIT(32'h000AC0CA)) 
    o_v_reg_i_3__6
       (.I0(\e[2][1] [0]),
        .I1(s_d_r[32]),
        .I2(o_b_r_reg_0),
        .I3(\e[2][1] [1]),
        .I4(s_d_r[33]),
        .O(o_v_reg_i_3__6_n_0));
  LUT3 #(
    .INIT(8'h04)) 
    \s_d_r[35]_i_1__6 
       (.I0(o_b_r_reg_0),
        .I1(w_b_c),
        .I2(rst),
        .O(s_d_r_0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[32] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[2][1] [0]),
        .Q(s_d_r[32]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[33] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[2][1] [1]),
        .Q(s_d_r[33]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[34] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[2][1] [2]),
        .Q(s_d_r[34]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[35] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[2][1] [3]),
        .Q(s_d_r[35]),
        .R(1'b0));
  LUT6 #(
    .INIT(64'hFF40FF400040FF40)) 
    s_out_v_reg_i_2__6
       (.I0(o_v_reg_i_3__6_n_0),
        .I1(o_b_r_i_3__12_n_0),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[0]),
        .I5(n_msg[1]),
        .O(n_in_v_reg_reg_1));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[0]_i_1__6 
       (.I0(n_msg[2]),
        .I1(n_in_v_reg),
        .I2(w_d_c[34]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(s_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair89" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[0]_i_2__6 
       (.I0(s_d_r[34]),
        .I1(\e[2][1] [2]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[34]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[1]_i_1__6 
       (.I0(n_msg[3]),
        .I1(n_in_v_reg),
        .I2(w_d_c[35]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(s_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair91" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[1]_i_2__6 
       (.I0(s_d_r[35]),
        .I1(\e[2][1] [3]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[35]));
  (* SOFT_HLUTNM = "soft_lutpair88" *) 
  LUT5 #(
    .INIT(32'h00008A80)) 
    \s_out_x_reg[1]_i_3__6 
       (.I0(o_b_r_i_3__12_n_0),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[2][1]_36 ),
        .I4(n_in_v_reg),
        .O(dor_w2s));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__6 
       (.I0(n_msg[0]),
        .I1(n_in_v_reg),
        .I2(w_d_c[32]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(s_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair94" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[0]_i_2__6 
       (.I0(s_d_r[32]),
        .I1(\e[2][1] [0]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__6 
       (.I0(n_msg[1]),
        .I1(n_in_v_reg),
        .I2(w_d_c[33]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(s_msg[1]));
  (* SOFT_HLUTNM = "soft_lutpair93" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[1]_i_2__6 
       (.I0(s_d_r[33]),
        .I1(\e[2][1] [1]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[33]));
  (* SOFT_HLUTNM = "soft_lutpair90" *) 
  LUT5 #(
    .INIT(32'h0000E200)) 
    s_v_r_i_1__6
       (.I0(\e[2][1]_36 ),
        .I1(o_b_r_reg_0),
        .I2(s_v_r),
        .I3(w_b_c),
        .I4(rst),
        .O(s_v_r_i_1__6_n_0));
  FDRE #(
    .INIT(1'b0)) 
    s_v_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(s_v_r_i_1__6_n_0),
        .Q(s_v_r),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair88" *) 
  LUT5 #(
    .INIT(32'hFEAEAAAA)) 
    waiting_for_ack_i_4__6
       (.I0(n_in_v_reg),
        .I1(\e[2][1]_36 ),
        .I2(o_b_r_reg_0),
        .I3(s_v_r),
        .I4(o_b_r_i_3__12_n_0),
        .O(n_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair95" *) 
  LUT3 #(
    .INIT(8'h02)) 
    waiting_for_ack_i_6__5
       (.I0(w_v_c),
        .I1(o_b_r_i_3__12_n_0),
        .I2(\w_b[0][1] ),
        .O(o_b_r_reg_2));
  LUT3 #(
    .INIT(8'h45)) 
    waiting_for_ack_i_8__11
       (.I0(\w_b[0][1] ),
        .I1(o_b_r_i_3__12_n_0),
        .I2(w_v_c),
        .O(o_b_r_reg_3));
endmodule

(* ORIG_REF_NAME = "shadow_reg_combi" *) 
module shadow_reg_combi_16
   (o_b_r_reg_0,
    o_b_r_reg_1,
    D,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg,
    n_in_v_reg_reg_0,
    e_msg,
    o_b_r_reg_2,
    s_msg,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    o_b_r_reg_3,
    rst,
    clk,
    Q,
    \i[2][1]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \o_v[2][1] ,
    \i_x_r_reg[1] ,
    \e[1][1]_36 ,
    \e[1][1] ,
    \s_out_x_reg_reg[1] ,
    \s_out_y_reg_reg[1] ,
    n_msg,
    n_in_v_reg,
    w_b,
    \i_x_r_reg[0] );
  output o_b_r_reg_0;
  output [0:0]o_b_r_reg_1;
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg;
  output n_in_v_reg_reg_0;
  output [3:0]e_msg;
  output o_b_r_reg_2;
  output [3:0]s_msg;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output o_b_r_reg_3;
  input rst;
  input clk;
  input [1:0]Q;
  input \i[2][1]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \o_v[2][1] ;
  input [1:0]\i_x_r_reg[1] ;
  input \e[1][1]_36 ;
  input [3:0]\e[1][1] ;
  input [1:0]\s_out_x_reg_reg[1] ;
  input [1:0]\s_out_y_reg_reg[1] ;
  input [3:0]n_msg;
  input n_in_v_reg;
  input w_b;
  input \i_x_r_reg[0] ;

  wire [0:0]D;
  wire [1:0]Q;
  wire clk;
  wire \dor_bp_inst/w_b218_in ;
  wire dor_w2s;
  wire [3:0]\e[1][1] ;
  wire \e[1][1]_36 ;
  wire [3:0]e_msg;
  wire e_v115_out__1;
  wire \i[2][1]_36 ;
  wire \i_x_r_reg[0] ;
  wire [1:0]\i_x_r_reg[1] ;
  wire \i_y_r[1]_i_3__5_n_0 ;
  wire \i_y_r_reg[1] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [3:0]n_msg;
  wire [1:0]number_tokens_reg;
  wire o_b_r_reg_0;
  wire [0:0]o_b_r_reg_1;
  wire o_b_r_reg_2;
  wire o_b_r_reg_3;
  wire \o_v[2][1] ;
  wire o_v_reg_i_3__5_n_0;
  wire rst;
  wire [35:32]s_d_r;
  wire s_d_r_0;
  wire [3:0]s_msg;
  wire [1:0]\s_out_x_reg_reg[1] ;
  wire [1:0]\s_out_y_reg_reg[1] ;
  wire s_v_r;
  wire s_v_r_i_1__5_n_0;
  wire w_b;
  wire w_b_c;
  wire [35:32]w_d_c;
  wire w_v_c;
  wire [1:0]waiting_for_ack_reg;

  (* SOFT_HLUTNM = "soft_lutpair79" *) 
  LUT1 #(
    .INIT(2'h1)) 
    e_out_v_reg_i_1__5
       (.I0(o_b_r_reg_0),
        .O(o_b_r_reg_1));
  (* SOFT_HLUTNM = "soft_lutpair80" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[0]_i_1__5 
       (.I0(s_d_r[34]),
        .I1(\e[1][1] [2]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(e_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair79" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[1]_i_1__5 
       (.I0(s_d_r[35]),
        .I1(\e[1][1] [3]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(e_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair82" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[0]_i_1__5 
       (.I0(s_d_r[32]),
        .I1(\e[1][1] [0]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(e_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair81" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[1]_i_1__5 
       (.I0(s_d_r[33]),
        .I1(\e[1][1] [1]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(e_msg[1]));
  LUT6 #(
    .INIT(64'h2E00D1FFD1FF2E00)) 
    \i_x_r[0]_i_1__5 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[2][1]_36 ),
        .I4(\i_x_r_reg[1] [0]),
        .I5(\o_v[2][1] ),
        .O(waiting_for_ack_reg[0]));
  LUT6 #(
    .INIT(64'hD1FFFFFF2E000000)) 
    \i_x_r[1]_i_1__5 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[2][1]_36 ),
        .I4(\o_v[2][1] ),
        .I5(\i_x_r_reg[1] [1]),
        .O(waiting_for_ack_reg[1]));
  LUT5 #(
    .INIT(32'h02522277)) 
    \i_x_r[1]_i_2__5 
       (.I0(\i_x_r_reg[0] ),
        .I1(n_in_v_reg),
        .I2(\dor_bp_inst/w_b218_in ),
        .I3(w_b),
        .I4(w_v_c),
        .O(n_in_v_reg_reg));
  LUT6 #(
    .INIT(64'h5D5D5DFFA2A2A200)) 
    \i_y_r[1]_i_1__5 
       (.I0(Q[0]),
        .I1(\i[2][1]_36 ),
        .I2(\i_y_r_reg[1] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(Q[1]),
        .O(D));
  LUT5 #(
    .INIT(32'h0000757F)) 
    \i_y_r[1]_i_3__5 
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[1][1]_36 ),
        .I4(n_in_v_reg),
        .O(\i_y_r[1]_i_3__5_n_0 ));
  MUXF7 \i_y_r_reg[1]_i_2__5 
       (.I0(n_in_v_reg_reg),
        .I1(\i_y_r[1]_i_3__5_n_0 ),
        .O(\i_y_r_reg[1] ),
        .S(e_v115_out__1));
  (* SOFT_HLUTNM = "soft_lutpair83" *) 
  LUT4 #(
    .INIT(16'hA808)) 
    o_b_r_i_1__5
       (.I0(w_v_c),
        .I1(w_b),
        .I2(\dor_bp_inst/w_b218_in ),
        .I3(n_in_v_reg),
        .O(w_b_c));
  (* SOFT_HLUTNM = "soft_lutpair78" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    o_b_r_i_2__5
       (.I0(s_v_r),
        .I1(o_b_r_reg_0),
        .I2(\e[1][1]_36 ),
        .O(w_v_c));
  (* SOFT_HLUTNM = "soft_lutpair76" *) 
  LUT5 #(
    .INIT(32'h000AC0CA)) 
    o_b_r_i_3__5
       (.I0(\e[1][1] [3]),
        .I1(s_d_r[35]),
        .I2(o_b_r_reg_0),
        .I3(\e[1][1] [2]),
        .I4(s_d_r[34]),
        .O(\dor_bp_inst/w_b218_in ));
  FDRE #(
    .INIT(1'b0)) 
    o_b_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(w_b_c),
        .Q(o_b_r_reg_0),
        .R(rst));
  LUT6 #(
    .INIT(64'h00200020FF200020)) 
    o_v_reg_i_2__5
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(o_v_reg_i_3__5_n_0),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[0]),
        .I5(n_msg[1]),
        .O(n_in_v_reg_reg_1));
  LUT5 #(
    .INIT(32'hCACFFAFF)) 
    o_v_reg_i_3__5
       (.I0(\e[1][1] [1]),
        .I1(s_d_r[33]),
        .I2(o_b_r_reg_0),
        .I3(\e[1][1] [0]),
        .I4(s_d_r[32]),
        .O(o_v_reg_i_3__5_n_0));
  LUT3 #(
    .INIT(8'h04)) 
    \s_d_r[35]_i_1__5 
       (.I0(o_b_r_reg_0),
        .I1(w_b_c),
        .I2(rst),
        .O(s_d_r_0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[32] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[1][1] [0]),
        .Q(s_d_r[32]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[33] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[1][1] [1]),
        .Q(s_d_r[33]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[34] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[1][1] [2]),
        .Q(s_d_r[34]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[35] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[1][1] [3]),
        .Q(s_d_r[35]),
        .R(1'b0));
  LUT6 #(
    .INIT(64'hFF80FF800080FF80)) 
    s_out_v_reg_i_2__5
       (.I0(o_v_reg_i_3__5_n_0),
        .I1(\dor_bp_inst/w_b218_in ),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[0]),
        .I5(n_msg[1]),
        .O(n_in_v_reg_reg_2));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[0]_i_1__5 
       (.I0(n_msg[2]),
        .I1(n_in_v_reg),
        .I2(w_d_c[34]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(s_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair80" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[0]_i_2__5 
       (.I0(s_d_r[34]),
        .I1(\e[1][1] [2]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[34]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[1]_i_1__5 
       (.I0(n_msg[3]),
        .I1(n_in_v_reg),
        .I2(w_d_c[35]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(s_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair76" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[1]_i_2__5 
       (.I0(s_d_r[35]),
        .I1(\e[1][1] [3]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[35]));
  (* SOFT_HLUTNM = "soft_lutpair77" *) 
  LUT5 #(
    .INIT(32'h00008A80)) 
    \s_out_x_reg[1]_i_3__5 
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[1][1]_36 ),
        .I4(n_in_v_reg),
        .O(dor_w2s));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__5 
       (.I0(n_msg[0]),
        .I1(n_in_v_reg),
        .I2(w_d_c[32]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(s_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair82" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[0]_i_2__5 
       (.I0(s_d_r[32]),
        .I1(\e[1][1] [0]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__5 
       (.I0(n_msg[1]),
        .I1(n_in_v_reg),
        .I2(w_d_c[33]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(s_msg[1]));
  (* SOFT_HLUTNM = "soft_lutpair81" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[1]_i_2__5 
       (.I0(s_d_r[33]),
        .I1(\e[1][1] [1]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[33]));
  (* SOFT_HLUTNM = "soft_lutpair78" *) 
  LUT5 #(
    .INIT(32'h0000E200)) 
    s_v_r_i_1__5
       (.I0(\e[1][1]_36 ),
        .I1(o_b_r_reg_0),
        .I2(s_v_r),
        .I3(w_b_c),
        .I4(rst),
        .O(s_v_r_i_1__5_n_0));
  FDRE #(
    .INIT(1'b0)) 
    s_v_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(s_v_r_i_1__5_n_0),
        .Q(s_v_r),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair77" *) 
  LUT5 #(
    .INIT(32'hFEAEAAAA)) 
    waiting_for_ack_i_4__5
       (.I0(n_in_v_reg),
        .I1(\e[1][1]_36 ),
        .I2(o_b_r_reg_0),
        .I3(s_v_r),
        .I4(\dor_bp_inst/w_b218_in ),
        .O(n_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair83" *) 
  LUT3 #(
    .INIT(8'h02)) 
    waiting_for_ack_i_6__4
       (.I0(w_v_c),
        .I1(w_b),
        .I2(\dor_bp_inst/w_b218_in ),
        .O(o_b_r_reg_2));
  LUT3 #(
    .INIT(8'h23)) 
    waiting_for_ack_i_8__13
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(w_b),
        .I2(w_v_c),
        .O(o_b_r_reg_3));
endmodule

(* ORIG_REF_NAME = "shadow_reg_combi" *) 
module shadow_reg_combi_18
   (o_b_r_reg_0,
    o_b_r_reg_1,
    D,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg,
    n_in_v_reg_reg_0,
    e_msg,
    o_b_r_reg_2,
    s_msg,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    o_b_r_reg_3,
    rst,
    clk,
    Q,
    \i[1][1]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \o_v[1][1] ,
    \i_x_r_reg[1] ,
    \e[0][1]_36 ,
    \e[0][1] ,
    \s_out_x_reg_reg[1] ,
    \s_out_y_reg_reg[1] ,
    n_msg,
    n_in_v_reg,
    o_b_r_reg_4,
    \i_x_r_reg[0] );
  output o_b_r_reg_0;
  output [0:0]o_b_r_reg_1;
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg;
  output n_in_v_reg_reg_0;
  output [3:0]e_msg;
  output o_b_r_reg_2;
  output [3:0]s_msg;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output o_b_r_reg_3;
  input rst;
  input clk;
  input [1:0]Q;
  input \i[1][1]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \o_v[1][1] ;
  input [1:0]\i_x_r_reg[1] ;
  input \e[0][1]_36 ;
  input [3:0]\e[0][1] ;
  input [1:0]\s_out_x_reg_reg[1] ;
  input [1:0]\s_out_y_reg_reg[1] ;
  input [3:0]n_msg;
  input n_in_v_reg;
  input o_b_r_reg_4;
  input \i_x_r_reg[0] ;

  wire [0:0]D;
  wire [1:0]Q;
  wire clk;
  wire \dor_bp_inst/w_b218_in ;
  wire dor_w2s;
  wire [3:0]\e[0][1] ;
  wire \e[0][1]_36 ;
  wire [3:0]e_msg;
  wire e_v115_out__1;
  wire \i[1][1]_36 ;
  wire \i_x_r_reg[0] ;
  wire [1:0]\i_x_r_reg[1] ;
  wire \i_y_r[1]_i_3__4_n_0 ;
  wire \i_y_r_reg[1] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [3:0]n_msg;
  wire [1:0]number_tokens_reg;
  wire o_b_r_reg_0;
  wire [0:0]o_b_r_reg_1;
  wire o_b_r_reg_2;
  wire o_b_r_reg_3;
  wire o_b_r_reg_4;
  wire \o_v[1][1] ;
  wire o_v_reg_i_3__4_n_0;
  wire rst;
  wire [35:32]s_d_r;
  wire s_d_r_0;
  wire [3:0]s_msg;
  wire [1:0]\s_out_x_reg_reg[1] ;
  wire [1:0]\s_out_y_reg_reg[1] ;
  wire s_v_r;
  wire s_v_r_i_1__4_n_0;
  wire w_b_c;
  wire [35:32]w_d_c;
  wire w_v_c;
  wire [1:0]waiting_for_ack_reg;

  (* SOFT_HLUTNM = "soft_lutpair68" *) 
  LUT1 #(
    .INIT(2'h1)) 
    e_out_v_reg_i_1__4
       (.I0(o_b_r_reg_0),
        .O(o_b_r_reg_1));
  (* SOFT_HLUTNM = "soft_lutpair68" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[0]_i_1__4 
       (.I0(s_d_r[34]),
        .I1(\e[0][1] [2]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(e_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair67" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[1]_i_1__4 
       (.I0(s_d_r[35]),
        .I1(\e[0][1] [3]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(e_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair70" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[0]_i_1__4 
       (.I0(s_d_r[32]),
        .I1(\e[0][1] [0]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(e_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair69" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[1]_i_1__4 
       (.I0(s_d_r[33]),
        .I1(\e[0][1] [1]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(e_msg[1]));
  LUT6 #(
    .INIT(64'h2E00D1FFD1FF2E00)) 
    \i_x_r[0]_i_1__4 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[1][1]_36 ),
        .I4(\i_x_r_reg[1] [0]),
        .I5(\o_v[1][1] ),
        .O(waiting_for_ack_reg[0]));
  LUT6 #(
    .INIT(64'hD1FFFFFF2E000000)) 
    \i_x_r[1]_i_1__4 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[1][1]_36 ),
        .I4(\o_v[1][1] ),
        .I5(\i_x_r_reg[1] [1]),
        .O(waiting_for_ack_reg[1]));
  LUT5 #(
    .INIT(32'h02522277)) 
    \i_x_r[1]_i_2__4 
       (.I0(\i_x_r_reg[0] ),
        .I1(n_in_v_reg),
        .I2(\dor_bp_inst/w_b218_in ),
        .I3(o_b_r_reg_4),
        .I4(w_v_c),
        .O(n_in_v_reg_reg));
  LUT6 #(
    .INIT(64'h5D5D5DFFA2A2A200)) 
    \i_y_r[1]_i_1__4 
       (.I0(Q[0]),
        .I1(\i[1][1]_36 ),
        .I2(\i_y_r_reg[1] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(Q[1]),
        .O(D));
  LUT5 #(
    .INIT(32'h0000757F)) 
    \i_y_r[1]_i_3__4 
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[0][1]_36 ),
        .I4(n_in_v_reg),
        .O(\i_y_r[1]_i_3__4_n_0 ));
  MUXF7 \i_y_r_reg[1]_i_2__4 
       (.I0(n_in_v_reg_reg),
        .I1(\i_y_r[1]_i_3__4_n_0 ),
        .O(\i_y_r_reg[1] ),
        .S(e_v115_out__1));
  (* SOFT_HLUTNM = "soft_lutpair71" *) 
  LUT4 #(
    .INIT(16'hA808)) 
    o_b_r_i_1__4
       (.I0(w_v_c),
        .I1(o_b_r_reg_4),
        .I2(\dor_bp_inst/w_b218_in ),
        .I3(n_in_v_reg),
        .O(w_b_c));
  (* SOFT_HLUTNM = "soft_lutpair66" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    o_b_r_i_2__4
       (.I0(s_v_r),
        .I1(o_b_r_reg_0),
        .I2(\e[0][1]_36 ),
        .O(w_v_c));
  (* SOFT_HLUTNM = "soft_lutpair64" *) 
  LUT5 #(
    .INIT(32'h000AC0CA)) 
    o_b_r_i_3__4
       (.I0(\e[0][1] [2]),
        .I1(s_d_r[34]),
        .I2(o_b_r_reg_0),
        .I3(\e[0][1] [3]),
        .I4(s_d_r[35]),
        .O(\dor_bp_inst/w_b218_in ));
  FDRE #(
    .INIT(1'b0)) 
    o_b_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(w_b_c),
        .Q(o_b_r_reg_0),
        .R(rst));
  LUT6 #(
    .INIT(64'h00800080FF800080)) 
    o_v_reg_i_2__4
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(o_v_reg_i_3__4_n_0),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[0]),
        .I5(n_msg[1]),
        .O(n_in_v_reg_reg_2));
  LUT5 #(
    .INIT(32'h000AC0CA)) 
    o_v_reg_i_3__4
       (.I0(\e[0][1] [0]),
        .I1(s_d_r[32]),
        .I2(o_b_r_reg_0),
        .I3(\e[0][1] [1]),
        .I4(s_d_r[33]),
        .O(o_v_reg_i_3__4_n_0));
  LUT3 #(
    .INIT(8'h04)) 
    \s_d_r[35]_i_1__4 
       (.I0(o_b_r_reg_0),
        .I1(w_b_c),
        .I2(rst),
        .O(s_d_r_0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[32] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[0][1] [0]),
        .Q(s_d_r[32]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[33] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[0][1] [1]),
        .Q(s_d_r[33]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[34] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[0][1] [2]),
        .Q(s_d_r[34]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[35] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[0][1] [3]),
        .Q(s_d_r[35]),
        .R(1'b0));
  LUT6 #(
    .INIT(64'hFF40FF400040FF40)) 
    s_out_v_reg_i_2__4
       (.I0(o_v_reg_i_3__4_n_0),
        .I1(\dor_bp_inst/w_b218_in ),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[0]),
        .I5(n_msg[1]),
        .O(n_in_v_reg_reg_1));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[0]_i_1__4 
       (.I0(n_msg[2]),
        .I1(n_in_v_reg),
        .I2(w_d_c[34]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(s_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair64" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[0]_i_2__4 
       (.I0(s_d_r[34]),
        .I1(\e[0][1] [2]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[34]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[1]_i_1__4 
       (.I0(n_msg[3]),
        .I1(n_in_v_reg),
        .I2(w_d_c[35]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(s_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair67" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[1]_i_2__4 
       (.I0(s_d_r[35]),
        .I1(\e[0][1] [3]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[35]));
  (* SOFT_HLUTNM = "soft_lutpair65" *) 
  LUT5 #(
    .INIT(32'h00008A80)) 
    \s_out_x_reg[1]_i_3__4 
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[0][1]_36 ),
        .I4(n_in_v_reg),
        .O(dor_w2s));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__4 
       (.I0(n_msg[0]),
        .I1(n_in_v_reg),
        .I2(w_d_c[32]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(s_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair70" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[0]_i_2__4 
       (.I0(s_d_r[32]),
        .I1(\e[0][1] [0]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__4 
       (.I0(n_msg[1]),
        .I1(n_in_v_reg),
        .I2(w_d_c[33]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(s_msg[1]));
  (* SOFT_HLUTNM = "soft_lutpair69" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[1]_i_2__4 
       (.I0(s_d_r[33]),
        .I1(\e[0][1] [1]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[33]));
  (* SOFT_HLUTNM = "soft_lutpair66" *) 
  LUT5 #(
    .INIT(32'h0000E200)) 
    s_v_r_i_1__4
       (.I0(\e[0][1]_36 ),
        .I1(o_b_r_reg_0),
        .I2(s_v_r),
        .I3(w_b_c),
        .I4(rst),
        .O(s_v_r_i_1__4_n_0));
  FDRE #(
    .INIT(1'b0)) 
    s_v_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(s_v_r_i_1__4_n_0),
        .Q(s_v_r),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair65" *) 
  LUT5 #(
    .INIT(32'hFEAEAAAA)) 
    waiting_for_ack_i_4__4
       (.I0(n_in_v_reg),
        .I1(\e[0][1]_36 ),
        .I2(o_b_r_reg_0),
        .I3(s_v_r),
        .I4(\dor_bp_inst/w_b218_in ),
        .O(n_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair71" *) 
  LUT3 #(
    .INIT(8'h02)) 
    waiting_for_ack_i_6__3
       (.I0(w_v_c),
        .I1(o_b_r_reg_4),
        .I2(\dor_bp_inst/w_b218_in ),
        .O(o_b_r_reg_2));
  LUT3 #(
    .INIT(8'h23)) 
    waiting_for_ack_i_8__12
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(o_b_r_reg_4),
        .I2(w_v_c),
        .O(o_b_r_reg_3));
endmodule

(* ORIG_REF_NAME = "shadow_reg_combi" *) 
module shadow_reg_combi_2
   (o_b_r_reg_0,
    o_b_r_reg_1,
    D,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg,
    n_in_v_reg_reg_0,
    e_msg,
    o_b_r_reg_2,
    s_msg,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    o_b_r_reg_3,
    rst,
    clk,
    Q,
    \i[1][3]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \o_v[1][3] ,
    \i_x_r_reg[1] ,
    \e[0][3]_36 ,
    \e[0][3] ,
    \s_out_x_reg_reg[1] ,
    \s_out_y_reg_reg[1] ,
    n_msg,
    n_in_v_reg,
    o_b_r_reg_4,
    \i_x_r_reg[0] );
  output o_b_r_reg_0;
  output [0:0]o_b_r_reg_1;
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg;
  output n_in_v_reg_reg_0;
  output [3:0]e_msg;
  output o_b_r_reg_2;
  output [3:0]s_msg;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output o_b_r_reg_3;
  input rst;
  input clk;
  input [1:0]Q;
  input \i[1][3]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \o_v[1][3] ;
  input [1:0]\i_x_r_reg[1] ;
  input \e[0][3]_36 ;
  input [3:0]\e[0][3] ;
  input [1:0]\s_out_x_reg_reg[1] ;
  input [1:0]\s_out_y_reg_reg[1] ;
  input [3:0]n_msg;
  input n_in_v_reg;
  input o_b_r_reg_4;
  input \i_x_r_reg[0] ;

  wire [0:0]D;
  wire [1:0]Q;
  wire clk;
  wire \dor_bp_inst/w_b218_in ;
  wire dor_w2s;
  wire [3:0]\e[0][3] ;
  wire \e[0][3]_36 ;
  wire [3:0]e_msg;
  wire e_v115_out__1;
  wire \i[1][3]_36 ;
  wire \i_x_r_reg[0] ;
  wire [1:0]\i_x_r_reg[1] ;
  wire \i_y_r[1]_i_3__12_n_0 ;
  wire \i_y_r_reg[1] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [3:0]n_msg;
  wire [1:0]number_tokens_reg;
  wire o_b_r_reg_0;
  wire [0:0]o_b_r_reg_1;
  wire o_b_r_reg_2;
  wire o_b_r_reg_3;
  wire o_b_r_reg_4;
  wire \o_v[1][3] ;
  wire rst;
  wire [35:32]s_d_r;
  wire s_d_r_0;
  wire [3:0]s_msg;
  wire [1:0]\s_out_x_reg_reg[1] ;
  wire [1:0]\s_out_y_reg_reg[1] ;
  wire s_v_r;
  wire s_v_r_i_1__12_n_0;
  wire w_b220_in;
  wire w_b_c;
  wire [35:32]w_d_c;
  wire w_v_c;
  wire [1:0]waiting_for_ack_reg;

  (* SOFT_HLUTNM = "soft_lutpair164" *) 
  LUT1 #(
    .INIT(2'h1)) 
    e_out_v_reg_i_1__12
       (.I0(o_b_r_reg_0),
        .O(o_b_r_reg_1));
  (* SOFT_HLUTNM = "soft_lutpair164" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[0]_i_1__12 
       (.I0(s_d_r[34]),
        .I1(\e[0][3] [2]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(e_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair163" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[1]_i_1__12 
       (.I0(s_d_r[35]),
        .I1(\e[0][3] [3]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(e_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair166" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[0]_i_1__12 
       (.I0(s_d_r[32]),
        .I1(\e[0][3] [0]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(e_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair165" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[1]_i_1__12 
       (.I0(s_d_r[33]),
        .I1(\e[0][3] [1]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(e_msg[1]));
  LUT6 #(
    .INIT(64'h2E00D1FFD1FF2E00)) 
    \i_x_r[0]_i_1__12 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[1][3]_36 ),
        .I4(\i_x_r_reg[1] [0]),
        .I5(\o_v[1][3] ),
        .O(waiting_for_ack_reg[0]));
  LUT6 #(
    .INIT(64'hD1FFFFFF2E000000)) 
    \i_x_r[1]_i_1__12 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[1][3]_36 ),
        .I4(\o_v[1][3] ),
        .I5(\i_x_r_reg[1] [1]),
        .O(waiting_for_ack_reg[1]));
  LUT5 #(
    .INIT(32'h02522277)) 
    \i_x_r[1]_i_2__12 
       (.I0(\i_x_r_reg[0] ),
        .I1(n_in_v_reg),
        .I2(\dor_bp_inst/w_b218_in ),
        .I3(o_b_r_reg_4),
        .I4(w_v_c),
        .O(n_in_v_reg_reg));
  LUT6 #(
    .INIT(64'h5D5D5DFFA2A2A200)) 
    \i_y_r[1]_i_1__12 
       (.I0(Q[0]),
        .I1(\i[1][3]_36 ),
        .I2(\i_y_r_reg[1] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(Q[1]),
        .O(D));
  LUT5 #(
    .INIT(32'h0000757F)) 
    \i_y_r[1]_i_3__12 
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[0][3]_36 ),
        .I4(n_in_v_reg),
        .O(\i_y_r[1]_i_3__12_n_0 ));
  MUXF7 \i_y_r_reg[1]_i_2__12 
       (.I0(n_in_v_reg_reg),
        .I1(\i_y_r[1]_i_3__12_n_0 ),
        .O(\i_y_r_reg[1] ),
        .S(e_v115_out__1));
  (* SOFT_HLUTNM = "soft_lutpair167" *) 
  LUT4 #(
    .INIT(16'hA808)) 
    o_b_r_i_1__12
       (.I0(w_v_c),
        .I1(o_b_r_reg_4),
        .I2(\dor_bp_inst/w_b218_in ),
        .I3(n_in_v_reg),
        .O(w_b_c));
  (* SOFT_HLUTNM = "soft_lutpair162" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    o_b_r_i_2__12
       (.I0(s_v_r),
        .I1(o_b_r_reg_0),
        .I2(\e[0][3]_36 ),
        .O(w_v_c));
  (* SOFT_HLUTNM = "soft_lutpair160" *) 
  LUT5 #(
    .INIT(32'h000AC0CA)) 
    o_b_r_i_3__10
       (.I0(\e[0][3] [2]),
        .I1(s_d_r[34]),
        .I2(o_b_r_reg_0),
        .I3(\e[0][3] [3]),
        .I4(s_d_r[35]),
        .O(\dor_bp_inst/w_b218_in ));
  FDRE #(
    .INIT(1'b0)) 
    o_b_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(w_b_c),
        .Q(o_b_r_reg_0),
        .R(rst));
  LUT6 #(
    .INIT(64'hFF80008000800080)) 
    o_v_reg_i_2__12
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(w_b220_in),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[1]),
        .I5(n_msg[0]),
        .O(n_in_v_reg_reg_2));
  LUT5 #(
    .INIT(32'hCAC00A00)) 
    o_v_reg_i_3__12
       (.I0(\e[0][3] [0]),
        .I1(s_d_r[32]),
        .I2(o_b_r_reg_0),
        .I3(\e[0][3] [1]),
        .I4(s_d_r[33]),
        .O(w_b220_in));
  LUT3 #(
    .INIT(8'h04)) 
    \s_d_r[35]_i_1__12 
       (.I0(o_b_r_reg_0),
        .I1(w_b_c),
        .I2(rst),
        .O(s_d_r_0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[32] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[0][3] [0]),
        .Q(s_d_r[32]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[33] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[0][3] [1]),
        .Q(s_d_r[33]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[34] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[0][3] [2]),
        .Q(s_d_r[34]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[35] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[0][3] [3]),
        .Q(s_d_r[35]),
        .R(1'b0));
  LUT6 #(
    .INIT(64'h0040FF40FF40FF40)) 
    s_out_v_reg_i_2__12
       (.I0(w_b220_in),
        .I1(\dor_bp_inst/w_b218_in ),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[1]),
        .I5(n_msg[0]),
        .O(n_in_v_reg_reg_1));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[0]_i_1__12 
       (.I0(n_msg[2]),
        .I1(n_in_v_reg),
        .I2(w_d_c[34]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(s_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair160" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[0]_i_2__12 
       (.I0(s_d_r[34]),
        .I1(\e[0][3] [2]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[34]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[1]_i_1__12 
       (.I0(n_msg[3]),
        .I1(n_in_v_reg),
        .I2(w_d_c[35]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(s_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair163" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[1]_i_2__12 
       (.I0(s_d_r[35]),
        .I1(\e[0][3] [3]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[35]));
  (* SOFT_HLUTNM = "soft_lutpair161" *) 
  LUT5 #(
    .INIT(32'h00008A80)) 
    \s_out_x_reg[1]_i_3__12 
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[0][3]_36 ),
        .I4(n_in_v_reg),
        .O(dor_w2s));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__12 
       (.I0(n_msg[0]),
        .I1(n_in_v_reg),
        .I2(w_d_c[32]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(s_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair166" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[0]_i_2__12 
       (.I0(s_d_r[32]),
        .I1(\e[0][3] [0]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__12 
       (.I0(n_msg[1]),
        .I1(n_in_v_reg),
        .I2(w_d_c[33]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(s_msg[1]));
  (* SOFT_HLUTNM = "soft_lutpair165" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[1]_i_2__12 
       (.I0(s_d_r[33]),
        .I1(\e[0][3] [1]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[33]));
  (* SOFT_HLUTNM = "soft_lutpair162" *) 
  LUT5 #(
    .INIT(32'h0000E200)) 
    s_v_r_i_1__12
       (.I0(\e[0][3]_36 ),
        .I1(o_b_r_reg_0),
        .I2(s_v_r),
        .I3(w_b_c),
        .I4(rst),
        .O(s_v_r_i_1__12_n_0));
  FDRE #(
    .INIT(1'b0)) 
    s_v_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(s_v_r_i_1__12_n_0),
        .Q(s_v_r),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair161" *) 
  LUT5 #(
    .INIT(32'hFEAEAAAA)) 
    waiting_for_ack_i_4__12
       (.I0(n_in_v_reg),
        .I1(\e[0][3]_36 ),
        .I2(o_b_r_reg_0),
        .I3(s_v_r),
        .I4(\dor_bp_inst/w_b218_in ),
        .O(n_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair167" *) 
  LUT3 #(
    .INIT(8'h02)) 
    waiting_for_ack_i_6__11
       (.I0(w_v_c),
        .I1(o_b_r_reg_4),
        .I2(\dor_bp_inst/w_b218_in ),
        .O(o_b_r_reg_2));
  LUT3 #(
    .INIT(8'h23)) 
    waiting_for_ack_i_8__6
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(o_b_r_reg_4),
        .I2(w_v_c),
        .O(o_b_r_reg_3));
endmodule

(* ORIG_REF_NAME = "shadow_reg_combi" *) 
module shadow_reg_combi_20
   (o_b_r_reg_0,
    D,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg,
    n_in_v_reg_reg_0,
    e_msg,
    o_b_r_reg_1,
    s_msg,
    o_b_r_reg_2,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    o_b_r_reg_3,
    rst,
    clk,
    Q,
    \i[0][1]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \o_v[0][1] ,
    \i_x_r_reg[1] ,
    e_out_v,
    \e[3][1] ,
    \s_out_x_reg_reg[1] ,
    \s_out_y_reg_reg[1] ,
    n_msg,
    n_in_v_reg,
    w_b,
    e_v214_in);
  output o_b_r_reg_0;
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg;
  output n_in_v_reg_reg_0;
  output [3:0]e_msg;
  output o_b_r_reg_1;
  output [3:0]s_msg;
  output [0:0]o_b_r_reg_2;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output o_b_r_reg_3;
  input rst;
  input clk;
  input [1:0]Q;
  input \i[0][1]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \o_v[0][1] ;
  input [1:0]\i_x_r_reg[1] ;
  input e_out_v;
  input [3:0]\e[3][1] ;
  input [1:0]\s_out_x_reg_reg[1] ;
  input [1:0]\s_out_y_reg_reg[1] ;
  input [3:0]n_msg;
  input n_in_v_reg;
  input w_b;
  input e_v214_in;

  wire [0:0]D;
  wire [1:0]Q;
  wire clk;
  wire \dor_bp_inst/w_b218_in ;
  wire dor_w2s;
  wire [3:0]\e[3][1] ;
  wire [3:0]e_msg;
  wire e_out_v;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[0][1]_36 ;
  wire [1:0]\i_x_r_reg[1] ;
  wire \i_y_r[1]_i_3__3_n_0 ;
  wire \i_y_r_reg[1] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [3:0]n_msg;
  wire [1:0]number_tokens_reg;
  wire o_b_r_reg_0;
  wire o_b_r_reg_1;
  wire [0:0]o_b_r_reg_2;
  wire o_b_r_reg_3;
  wire \o_v[0][1] ;
  wire o_v_reg_i_3__3_n_0;
  wire rst;
  wire [35:32]s_d_r;
  wire s_d_r_0;
  wire [3:0]s_msg;
  wire [1:0]\s_out_x_reg_reg[1] ;
  wire [1:0]\s_out_y_reg_reg[1] ;
  wire s_v_r;
  wire s_v_r_i_1__3_n_0;
  wire w_b;
  wire w_b_c;
  wire [35:32]w_d_c;
  wire w_v_c;
  wire [1:0]waiting_for_ack_reg;

  (* SOFT_HLUTNM = "soft_lutpair55" *) 
  LUT1 #(
    .INIT(2'h1)) 
    e_out_v_reg_i_1__3
       (.I0(o_b_r_reg_0),
        .O(o_b_r_reg_2));
  (* SOFT_HLUTNM = "soft_lutpair56" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[0]_i_1__3 
       (.I0(s_d_r[34]),
        .I1(\e[3][1] [2]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_1),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(e_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair55" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[1]_i_1__3 
       (.I0(s_d_r[35]),
        .I1(\e[3][1] [3]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_1),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(e_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair58" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[0]_i_1__3 
       (.I0(s_d_r[32]),
        .I1(\e[3][1] [0]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_1),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(e_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair57" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[1]_i_1__3 
       (.I0(s_d_r[33]),
        .I1(\e[3][1] [1]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_1),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(e_msg[1]));
  LUT6 #(
    .INIT(64'h2E00D1FFD1FF2E00)) 
    \i_x_r[0]_i_1__3 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[0][1]_36 ),
        .I4(\i_x_r_reg[1] [0]),
        .I5(\o_v[0][1] ),
        .O(waiting_for_ack_reg[0]));
  LUT6 #(
    .INIT(64'hD1FFFFFF2E000000)) 
    \i_x_r[1]_i_1__3 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[0][1]_36 ),
        .I4(\o_v[0][1] ),
        .I5(\i_x_r_reg[1] [1]),
        .O(waiting_for_ack_reg[1]));
  LUT5 #(
    .INIT(32'h02522277)) 
    \i_x_r[1]_i_2__3 
       (.I0(e_v214_in),
        .I1(n_in_v_reg),
        .I2(\dor_bp_inst/w_b218_in ),
        .I3(w_b),
        .I4(w_v_c),
        .O(n_in_v_reg_reg));
  LUT6 #(
    .INIT(64'h5D5D5DFFA2A2A200)) 
    \i_y_r[1]_i_1__3 
       (.I0(Q[0]),
        .I1(\i[0][1]_36 ),
        .I2(\i_y_r_reg[1] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(Q[1]),
        .O(D));
  LUT5 #(
    .INIT(32'h0000757F)) 
    \i_y_r[1]_i_3__3 
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(e_out_v),
        .I4(n_in_v_reg),
        .O(\i_y_r[1]_i_3__3_n_0 ));
  MUXF7 \i_y_r_reg[1]_i_2__3 
       (.I0(n_in_v_reg_reg),
        .I1(\i_y_r[1]_i_3__3_n_0 ),
        .O(\i_y_r_reg[1] ),
        .S(e_v115_out__1));
  (* SOFT_HLUTNM = "soft_lutpair59" *) 
  LUT4 #(
    .INIT(16'hA808)) 
    o_b_r_i_1__3
       (.I0(w_v_c),
        .I1(w_b),
        .I2(\dor_bp_inst/w_b218_in ),
        .I3(n_in_v_reg),
        .O(w_b_c));
  (* SOFT_HLUTNM = "soft_lutpair54" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    o_b_r_i_2__3
       (.I0(s_v_r),
        .I1(o_b_r_reg_0),
        .I2(e_out_v),
        .O(w_v_c));
  (* SOFT_HLUTNM = "soft_lutpair52" *) 
  LUT5 #(
    .INIT(32'h00053035)) 
    o_b_r_i_3__3
       (.I0(\e[3][1] [3]),
        .I1(s_d_r[35]),
        .I2(o_b_r_reg_0),
        .I3(\e[3][1] [2]),
        .I4(s_d_r[34]),
        .O(\dor_bp_inst/w_b218_in ));
  FDRE #(
    .INIT(1'b0)) 
    o_b_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(w_b_c),
        .Q(o_b_r_reg_0),
        .R(rst));
  LUT6 #(
    .INIT(64'h00800080FF800080)) 
    o_v_reg_i_2__3
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(o_v_reg_i_3__3_n_0),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[0]),
        .I5(n_msg[1]),
        .O(n_in_v_reg_reg_2));
  LUT5 #(
    .INIT(32'h000AC0CA)) 
    o_v_reg_i_3__3
       (.I0(\e[3][1] [0]),
        .I1(s_d_r[32]),
        .I2(o_b_r_reg_0),
        .I3(\e[3][1] [1]),
        .I4(s_d_r[33]),
        .O(o_v_reg_i_3__3_n_0));
  LUT3 #(
    .INIT(8'h04)) 
    \s_d_r[35]_i_1__3 
       (.I0(o_b_r_reg_0),
        .I1(w_b_c),
        .I2(rst),
        .O(s_d_r_0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[32] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[3][1] [0]),
        .Q(s_d_r[32]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[33] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[3][1] [1]),
        .Q(s_d_r[33]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[34] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[3][1] [2]),
        .Q(s_d_r[34]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[35] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[3][1] [3]),
        .Q(s_d_r[35]),
        .R(1'b0));
  LUT6 #(
    .INIT(64'hFF40FF400040FF40)) 
    s_out_v_reg_i_2__3
       (.I0(o_v_reg_i_3__3_n_0),
        .I1(\dor_bp_inst/w_b218_in ),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[0]),
        .I5(n_msg[1]),
        .O(n_in_v_reg_reg_1));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[0]_i_1__3 
       (.I0(n_msg[2]),
        .I1(n_in_v_reg),
        .I2(w_d_c[34]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(s_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair56" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[0]_i_2__3 
       (.I0(s_d_r[34]),
        .I1(\e[3][1] [2]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[34]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[1]_i_1__3 
       (.I0(n_msg[3]),
        .I1(n_in_v_reg),
        .I2(w_d_c[35]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(s_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair52" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[1]_i_2__3 
       (.I0(s_d_r[35]),
        .I1(\e[3][1] [3]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[35]));
  (* SOFT_HLUTNM = "soft_lutpair53" *) 
  LUT5 #(
    .INIT(32'h00008A80)) 
    \s_out_x_reg[1]_i_3__3 
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(e_out_v),
        .I4(n_in_v_reg),
        .O(dor_w2s));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__3 
       (.I0(n_msg[0]),
        .I1(n_in_v_reg),
        .I2(w_d_c[32]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(s_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair58" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[0]_i_2__3 
       (.I0(s_d_r[32]),
        .I1(\e[3][1] [0]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__3 
       (.I0(n_msg[1]),
        .I1(n_in_v_reg),
        .I2(w_d_c[33]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(s_msg[1]));
  (* SOFT_HLUTNM = "soft_lutpair57" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[1]_i_2__3 
       (.I0(s_d_r[33]),
        .I1(\e[3][1] [1]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[33]));
  (* SOFT_HLUTNM = "soft_lutpair54" *) 
  LUT5 #(
    .INIT(32'h0000E200)) 
    s_v_r_i_1__3
       (.I0(e_out_v),
        .I1(o_b_r_reg_0),
        .I2(s_v_r),
        .I3(w_b_c),
        .I4(rst),
        .O(s_v_r_i_1__3_n_0));
  FDRE #(
    .INIT(1'b0)) 
    s_v_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(s_v_r_i_1__3_n_0),
        .Q(s_v_r),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair53" *) 
  LUT5 #(
    .INIT(32'hFEAEAAAA)) 
    waiting_for_ack_i_4__3
       (.I0(n_in_v_reg),
        .I1(e_out_v),
        .I2(o_b_r_reg_0),
        .I3(s_v_r),
        .I4(\dor_bp_inst/w_b218_in ),
        .O(n_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair59" *) 
  LUT3 #(
    .INIT(8'h02)) 
    waiting_for_ack_i_6__2
       (.I0(w_v_c),
        .I1(w_b),
        .I2(\dor_bp_inst/w_b218_in ),
        .O(o_b_r_reg_1));
  LUT3 #(
    .INIT(8'h23)) 
    waiting_for_ack_i_8__9
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(w_b),
        .I2(w_v_c),
        .O(o_b_r_reg_3));
endmodule

(* ORIG_REF_NAME = "shadow_reg_combi" *) 
module shadow_reg_combi_22
   (o_b_r_reg_0,
    o_b_r_reg_1,
    D,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg,
    n_in_v_reg_reg_0,
    e_msg,
    o_b_r_reg_2,
    \n_in_y_reg_reg[1] ,
    n_in_v_reg_reg_1,
    s_msg,
    o_b_r_reg_3,
    rst,
    clk,
    Q,
    \i[3][0]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \o_v[3][0] ,
    \i_x_r_reg[1] ,
    \e[2][0]_36 ,
    \e[2][0] ,
    \s_out_x_reg_reg[1] ,
    \s_out_y_reg_reg[1] ,
    n_msg,
    n_in_v_reg,
    \w_b[0][0] ,
    e_v214_in);
  output o_b_r_reg_0;
  output [0:0]o_b_r_reg_1;
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg;
  output n_in_v_reg_reg_0;
  output [3:0]e_msg;
  output o_b_r_reg_2;
  output \n_in_y_reg_reg[1] ;
  output n_in_v_reg_reg_1;
  output [3:0]s_msg;
  output o_b_r_reg_3;
  input rst;
  input clk;
  input [1:0]Q;
  input \i[3][0]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \o_v[3][0] ;
  input [1:0]\i_x_r_reg[1] ;
  input \e[2][0]_36 ;
  input [3:0]\e[2][0] ;
  input [1:0]\s_out_x_reg_reg[1] ;
  input [1:0]\s_out_y_reg_reg[1] ;
  input [3:0]n_msg;
  input n_in_v_reg;
  input \w_b[0][0] ;
  input e_v214_in;

  wire [0:0]D;
  wire [1:0]Q;
  wire clk;
  wire \dor_bp_inst/w_b1__0 ;
  wire dor_w2s;
  wire [3:0]\e[2][0] ;
  wire \e[2][0]_36 ;
  wire [3:0]e_msg;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[3][0]_36 ;
  wire [1:0]\i_x_r_reg[1] ;
  wire \i_y_r[1]_i_3__2_n_0 ;
  wire \i_y_r_reg[1] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire \n_in_y_reg_reg[1] ;
  wire [3:0]n_msg;
  wire [1:0]number_tokens_reg;
  wire o_b_r_reg_0;
  wire [0:0]o_b_r_reg_1;
  wire o_b_r_reg_2;
  wire o_b_r_reg_3;
  wire \o_v[3][0] ;
  wire rst;
  wire [35:32]s_d_r;
  wire s_d_r_0;
  wire [3:0]s_msg;
  wire [1:0]\s_out_x_reg_reg[1] ;
  wire [1:0]\s_out_y_reg_reg[1] ;
  wire s_v_r;
  wire s_v_r_i_1__2_n_0;
  wire w_b217_in;
  wire \w_b[0][0] ;
  wire w_b_c;
  wire [35:32]w_d_c;
  wire w_v_c;
  wire [1:0]waiting_for_ack_reg;

  (* SOFT_HLUTNM = "soft_lutpair43" *) 
  LUT1 #(
    .INIT(2'h1)) 
    e_out_v_reg_i_1__2
       (.I0(o_b_r_reg_0),
        .O(o_b_r_reg_1));
  (* SOFT_HLUTNM = "soft_lutpair44" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[0]_i_1__2 
       (.I0(s_d_r[34]),
        .I1(\e[2][0] [2]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(e_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair43" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[1]_i_1__2 
       (.I0(s_d_r[35]),
        .I1(\e[2][0] [3]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(e_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair46" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[0]_i_1__2 
       (.I0(s_d_r[32]),
        .I1(\e[2][0] [0]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(e_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair45" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[1]_i_1__2 
       (.I0(s_d_r[33]),
        .I1(\e[2][0] [1]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(e_msg[1]));
  LUT6 #(
    .INIT(64'h2E00D1FFD1FF2E00)) 
    \i_x_r[0]_i_1__2 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[3][0]_36 ),
        .I4(\i_x_r_reg[1] [0]),
        .I5(\o_v[3][0] ),
        .O(waiting_for_ack_reg[0]));
  LUT6 #(
    .INIT(64'hD1FFFFFF2E000000)) 
    \i_x_r[1]_i_1__2 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[3][0]_36 ),
        .I4(\o_v[3][0] ),
        .I5(\i_x_r_reg[1] [1]),
        .O(waiting_for_ack_reg[1]));
  LUT5 #(
    .INIT(32'h22052727)) 
    \i_x_r[1]_i_2__2 
       (.I0(e_v214_in),
        .I1(n_in_v_reg),
        .I2(\w_b[0][0] ),
        .I3(\dor_bp_inst/w_b1__0 ),
        .I4(w_v_c),
        .O(n_in_v_reg_reg));
  LUT6 #(
    .INIT(64'h5D5D5DFFA2A2A200)) 
    \i_y_r[1]_i_1__2 
       (.I0(Q[0]),
        .I1(\i[3][0]_36 ),
        .I2(\i_y_r_reg[1] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(Q[1]),
        .O(D));
  LUT5 #(
    .INIT(32'h0000BABF)) 
    \i_y_r[1]_i_3__2 
       (.I0(\dor_bp_inst/w_b1__0 ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[2][0]_36 ),
        .I4(n_in_v_reg),
        .O(\i_y_r[1]_i_3__2_n_0 ));
  MUXF7 \i_y_r_reg[1]_i_2__2 
       (.I0(n_in_v_reg_reg),
        .I1(\i_y_r[1]_i_3__2_n_0 ),
        .O(\i_y_r_reg[1] ),
        .S(e_v115_out__1));
  (* SOFT_HLUTNM = "soft_lutpair47" *) 
  LUT4 #(
    .INIT(16'h8A80)) 
    o_b_r_i_1__2
       (.I0(w_v_c),
        .I1(\w_b[0][0] ),
        .I2(\dor_bp_inst/w_b1__0 ),
        .I3(n_in_v_reg),
        .O(w_b_c));
  (* SOFT_HLUTNM = "soft_lutpair42" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    o_b_r_i_2__2
       (.I0(s_v_r),
        .I1(o_b_r_reg_0),
        .I2(\e[2][0]_36 ),
        .O(w_v_c));
  (* SOFT_HLUTNM = "soft_lutpair40" *) 
  LUT5 #(
    .INIT(32'h353FF5FF)) 
    o_b_r_i_3__2
       (.I0(\e[2][0] [3]),
        .I1(s_d_r[35]),
        .I2(o_b_r_reg_0),
        .I3(\e[2][0] [2]),
        .I4(s_d_r[34]),
        .O(\dor_bp_inst/w_b1__0 ));
  FDRE #(
    .INIT(1'b0)) 
    o_b_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(w_b_c),
        .Q(o_b_r_reg_0),
        .R(rst));
  LUT6 #(
    .INIT(64'h000000FF10101010)) 
    o_v_reg_i_2__2
       (.I0(\dor_bp_inst/w_b1__0 ),
        .I1(w_b217_in),
        .I2(w_v_c),
        .I3(n_msg[1]),
        .I4(n_msg[0]),
        .I5(n_in_v_reg),
        .O(\n_in_y_reg_reg[1] ));
  LUT5 #(
    .INIT(32'hFFFACFCA)) 
    o_v_reg_i_3__2
       (.I0(\e[2][0] [0]),
        .I1(s_d_r[32]),
        .I2(o_b_r_reg_0),
        .I3(\e[2][0] [1]),
        .I4(s_d_r[33]),
        .O(w_b217_in));
  LUT3 #(
    .INIT(8'h04)) 
    \s_d_r[35]_i_1__2 
       (.I0(o_b_r_reg_0),
        .I1(w_b_c),
        .I2(rst),
        .O(s_d_r_0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[32] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[2][0] [0]),
        .Q(s_d_r[32]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[33] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[2][0] [1]),
        .Q(s_d_r[33]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[34] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[2][0] [2]),
        .Q(s_d_r[34]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[35] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[2][0] [3]),
        .Q(s_d_r[35]),
        .R(1'b0));
  LUT6 #(
    .INIT(64'hFF20FF20FF200020)) 
    s_out_v_reg_i_2__2
       (.I0(w_b217_in),
        .I1(\dor_bp_inst/w_b1__0 ),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[1]),
        .I5(n_msg[0]),
        .O(n_in_v_reg_reg_1));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[0]_i_1__2 
       (.I0(n_msg[2]),
        .I1(n_in_v_reg),
        .I2(w_d_c[34]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(s_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair44" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[0]_i_2__2 
       (.I0(s_d_r[34]),
        .I1(\e[2][0] [2]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[34]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[1]_i_1__2 
       (.I0(n_msg[3]),
        .I1(n_in_v_reg),
        .I2(w_d_c[35]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(s_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair40" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[1]_i_2__2 
       (.I0(s_d_r[35]),
        .I1(\e[2][0] [3]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[35]));
  (* SOFT_HLUTNM = "soft_lutpair41" *) 
  LUT5 #(
    .INIT(32'h00004540)) 
    \s_out_x_reg[1]_i_3__2 
       (.I0(\dor_bp_inst/w_b1__0 ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[2][0]_36 ),
        .I4(n_in_v_reg),
        .O(dor_w2s));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__2 
       (.I0(n_msg[0]),
        .I1(n_in_v_reg),
        .I2(w_d_c[32]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(s_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair46" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[0]_i_2__2 
       (.I0(s_d_r[32]),
        .I1(\e[2][0] [0]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__2 
       (.I0(n_msg[1]),
        .I1(n_in_v_reg),
        .I2(w_d_c[33]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(s_msg[1]));
  (* SOFT_HLUTNM = "soft_lutpair45" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[1]_i_2__2 
       (.I0(s_d_r[33]),
        .I1(\e[2][0] [1]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[33]));
  (* SOFT_HLUTNM = "soft_lutpair42" *) 
  LUT5 #(
    .INIT(32'h0000E200)) 
    s_v_r_i_1__2
       (.I0(\e[2][0]_36 ),
        .I1(o_b_r_reg_0),
        .I2(s_v_r),
        .I3(w_b_c),
        .I4(rst),
        .O(s_v_r_i_1__2_n_0));
  FDRE #(
    .INIT(1'b0)) 
    s_v_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(s_v_r_i_1__2_n_0),
        .Q(s_v_r),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair41" *) 
  LUT5 #(
    .INIT(32'hAAAAFEAE)) 
    waiting_for_ack_i_4__2
       (.I0(n_in_v_reg),
        .I1(\e[2][0]_36 ),
        .I2(o_b_r_reg_0),
        .I3(s_v_r),
        .I4(\dor_bp_inst/w_b1__0 ),
        .O(n_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair47" *) 
  LUT3 #(
    .INIT(8'h08)) 
    waiting_for_ack_i_6__1
       (.I0(w_v_c),
        .I1(\dor_bp_inst/w_b1__0 ),
        .I2(\w_b[0][0] ),
        .O(o_b_r_reg_2));
  LUT3 #(
    .INIT(8'h15)) 
    waiting_for_ack_i_8
       (.I0(\w_b[0][0] ),
        .I1(\dor_bp_inst/w_b1__0 ),
        .I2(w_v_c),
        .O(o_b_r_reg_3));
endmodule

(* ORIG_REF_NAME = "shadow_reg_combi" *) 
module shadow_reg_combi_24
   (o_b_r_reg_0,
    o_b_r_reg_1,
    D,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg,
    n_in_v_reg_reg_0,
    e_msg,
    o_b_r_reg_2,
    s_msg,
    n_in_v_reg_reg_1,
    \n_in_y_reg_reg[1] ,
    o_b_r_reg_3,
    rst,
    clk,
    Q,
    \i[2][0]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \o_v[2][0] ,
    \i_x_r_reg[1] ,
    \e[1][0]_36 ,
    \e[1][0] ,
    \s_out_x_reg_reg[1] ,
    \s_out_y_reg_reg[1] ,
    n_msg,
    n_in_v_reg,
    w_b,
    \i_x_r_reg[0] );
  output o_b_r_reg_0;
  output [0:0]o_b_r_reg_1;
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg;
  output n_in_v_reg_reg_0;
  output [3:0]e_msg;
  output o_b_r_reg_2;
  output [3:0]s_msg;
  output n_in_v_reg_reg_1;
  output \n_in_y_reg_reg[1] ;
  output o_b_r_reg_3;
  input rst;
  input clk;
  input [1:0]Q;
  input \i[2][0]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \o_v[2][0] ;
  input [1:0]\i_x_r_reg[1] ;
  input \e[1][0]_36 ;
  input [3:0]\e[1][0] ;
  input [1:0]\s_out_x_reg_reg[1] ;
  input [1:0]\s_out_y_reg_reg[1] ;
  input [3:0]n_msg;
  input n_in_v_reg;
  input w_b;
  input \i_x_r_reg[0] ;

  wire [0:0]D;
  wire [1:0]Q;
  wire clk;
  wire \dor_bp_inst/w_b1__0 ;
  wire dor_w2s;
  wire [3:0]\e[1][0] ;
  wire \e[1][0]_36 ;
  wire [3:0]e_msg;
  wire e_v115_out__1;
  wire \i[2][0]_36 ;
  wire \i_x_r_reg[0] ;
  wire [1:0]\i_x_r_reg[1] ;
  wire \i_y_r[1]_i_3__1_n_0 ;
  wire \i_y_r_reg[1] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire \n_in_y_reg_reg[1] ;
  wire [3:0]n_msg;
  wire [1:0]number_tokens_reg;
  wire o_b_r_reg_0;
  wire [0:0]o_b_r_reg_1;
  wire o_b_r_reg_2;
  wire o_b_r_reg_3;
  wire \o_v[2][0] ;
  wire rst;
  wire [35:32]s_d_r;
  wire s_d_r_0;
  wire [3:0]s_msg;
  wire [1:0]\s_out_x_reg_reg[1] ;
  wire [1:0]\s_out_y_reg_reg[1] ;
  wire s_v_r;
  wire s_v_r_i_1__1_n_0;
  wire w_b;
  wire w_b217_in;
  wire w_b_c;
  wire [35:32]w_d_c;
  wire w_v_c;
  wire [1:0]waiting_for_ack_reg;

  (* SOFT_HLUTNM = "soft_lutpair32" *) 
  LUT1 #(
    .INIT(2'h1)) 
    e_out_v_reg_i_1__1
       (.I0(o_b_r_reg_0),
        .O(o_b_r_reg_1));
  (* SOFT_HLUTNM = "soft_lutpair32" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[0]_i_1__1 
       (.I0(s_d_r[34]),
        .I1(\e[1][0] [2]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(e_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair31" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[1]_i_1__1 
       (.I0(s_d_r[35]),
        .I1(\e[1][0] [3]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(e_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair34" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[0]_i_1__1 
       (.I0(s_d_r[32]),
        .I1(\e[1][0] [0]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(e_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair33" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[1]_i_1__1 
       (.I0(s_d_r[33]),
        .I1(\e[1][0] [1]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(e_msg[1]));
  LUT6 #(
    .INIT(64'h2E00D1FFD1FF2E00)) 
    \i_x_r[0]_i_1__1 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[2][0]_36 ),
        .I4(\i_x_r_reg[1] [0]),
        .I5(\o_v[2][0] ),
        .O(waiting_for_ack_reg[0]));
  LUT6 #(
    .INIT(64'hD1FFFFFF2E000000)) 
    \i_x_r[1]_i_1__1 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[2][0]_36 ),
        .I4(\o_v[2][0] ),
        .I5(\i_x_r_reg[1] [1]),
        .O(waiting_for_ack_reg[1]));
  LUT5 #(
    .INIT(32'h22052727)) 
    \i_x_r[1]_i_2__1 
       (.I0(\i_x_r_reg[0] ),
        .I1(n_in_v_reg),
        .I2(w_b),
        .I3(\dor_bp_inst/w_b1__0 ),
        .I4(w_v_c),
        .O(n_in_v_reg_reg));
  LUT6 #(
    .INIT(64'h5D5D5DFFA2A2A200)) 
    \i_y_r[1]_i_1__1 
       (.I0(Q[0]),
        .I1(\i[2][0]_36 ),
        .I2(\i_y_r_reg[1] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(Q[1]),
        .O(D));
  LUT5 #(
    .INIT(32'h0000BABF)) 
    \i_y_r[1]_i_3__1 
       (.I0(\dor_bp_inst/w_b1__0 ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[1][0]_36 ),
        .I4(n_in_v_reg),
        .O(\i_y_r[1]_i_3__1_n_0 ));
  MUXF7 \i_y_r_reg[1]_i_2__1 
       (.I0(n_in_v_reg_reg),
        .I1(\i_y_r[1]_i_3__1_n_0 ),
        .O(\i_y_r_reg[1] ),
        .S(e_v115_out__1));
  (* SOFT_HLUTNM = "soft_lutpair35" *) 
  LUT4 #(
    .INIT(16'h8A80)) 
    o_b_r_i_1__1
       (.I0(w_v_c),
        .I1(w_b),
        .I2(\dor_bp_inst/w_b1__0 ),
        .I3(n_in_v_reg),
        .O(w_b_c));
  (* SOFT_HLUTNM = "soft_lutpair30" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    o_b_r_i_2__1
       (.I0(s_v_r),
        .I1(o_b_r_reg_0),
        .I2(\e[1][0]_36 ),
        .O(w_v_c));
  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT5 #(
    .INIT(32'hCACFFAFF)) 
    o_b_r_i_3__1
       (.I0(\e[1][0] [2]),
        .I1(s_d_r[34]),
        .I2(o_b_r_reg_0),
        .I3(\e[1][0] [3]),
        .I4(s_d_r[35]),
        .O(\dor_bp_inst/w_b1__0 ));
  FDRE #(
    .INIT(1'b0)) 
    o_b_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(w_b_c),
        .Q(o_b_r_reg_0),
        .R(rst));
  LUT6 #(
    .INIT(64'h000000FF10101010)) 
    o_v_reg_i_2__1
       (.I0(\dor_bp_inst/w_b1__0 ),
        .I1(w_b217_in),
        .I2(w_v_c),
        .I3(n_msg[1]),
        .I4(n_msg[0]),
        .I5(n_in_v_reg),
        .O(\n_in_y_reg_reg[1] ));
  LUT5 #(
    .INIT(32'hFFFACFCA)) 
    o_v_reg_i_3__1
       (.I0(\e[1][0] [0]),
        .I1(s_d_r[32]),
        .I2(o_b_r_reg_0),
        .I3(\e[1][0] [1]),
        .I4(s_d_r[33]),
        .O(w_b217_in));
  LUT3 #(
    .INIT(8'h04)) 
    \s_d_r[35]_i_1__1 
       (.I0(o_b_r_reg_0),
        .I1(w_b_c),
        .I2(rst),
        .O(s_d_r_0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[32] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[1][0] [0]),
        .Q(s_d_r[32]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[33] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[1][0] [1]),
        .Q(s_d_r[33]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[34] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[1][0] [2]),
        .Q(s_d_r[34]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[35] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[1][0] [3]),
        .Q(s_d_r[35]),
        .R(1'b0));
  LUT6 #(
    .INIT(64'hFF20FF20FF200020)) 
    s_out_v_reg_i_2__1
       (.I0(w_b217_in),
        .I1(\dor_bp_inst/w_b1__0 ),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[1]),
        .I5(n_msg[0]),
        .O(n_in_v_reg_reg_1));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[0]_i_1__1 
       (.I0(n_msg[2]),
        .I1(n_in_v_reg),
        .I2(w_d_c[34]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(s_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[0]_i_2__1 
       (.I0(s_d_r[34]),
        .I1(\e[1][0] [2]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[34]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[1]_i_1__1 
       (.I0(n_msg[3]),
        .I1(n_in_v_reg),
        .I2(w_d_c[35]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(s_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair31" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[1]_i_2__1 
       (.I0(s_d_r[35]),
        .I1(\e[1][0] [3]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[35]));
  (* SOFT_HLUTNM = "soft_lutpair29" *) 
  LUT5 #(
    .INIT(32'h00004540)) 
    \s_out_x_reg[1]_i_3__1 
       (.I0(\dor_bp_inst/w_b1__0 ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[1][0]_36 ),
        .I4(n_in_v_reg),
        .O(dor_w2s));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__1 
       (.I0(n_msg[0]),
        .I1(n_in_v_reg),
        .I2(w_d_c[32]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(s_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair34" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[0]_i_2__1 
       (.I0(s_d_r[32]),
        .I1(\e[1][0] [0]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__1 
       (.I0(n_msg[1]),
        .I1(n_in_v_reg),
        .I2(w_d_c[33]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(s_msg[1]));
  (* SOFT_HLUTNM = "soft_lutpair33" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[1]_i_2__1 
       (.I0(s_d_r[33]),
        .I1(\e[1][0] [1]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[33]));
  (* SOFT_HLUTNM = "soft_lutpair30" *) 
  LUT5 #(
    .INIT(32'h0000E200)) 
    s_v_r_i_1__1
       (.I0(\e[1][0]_36 ),
        .I1(o_b_r_reg_0),
        .I2(s_v_r),
        .I3(w_b_c),
        .I4(rst),
        .O(s_v_r_i_1__1_n_0));
  FDRE #(
    .INIT(1'b0)) 
    s_v_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(s_v_r_i_1__1_n_0),
        .Q(s_v_r),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair29" *) 
  LUT5 #(
    .INIT(32'hAAAAFEAE)) 
    waiting_for_ack_i_4__1
       (.I0(n_in_v_reg),
        .I1(\e[1][0]_36 ),
        .I2(o_b_r_reg_0),
        .I3(s_v_r),
        .I4(\dor_bp_inst/w_b1__0 ),
        .O(n_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair35" *) 
  LUT3 #(
    .INIT(8'h08)) 
    waiting_for_ack_i_6__0
       (.I0(w_v_c),
        .I1(\dor_bp_inst/w_b1__0 ),
        .I2(w_b),
        .O(o_b_r_reg_2));
  LUT3 #(
    .INIT(8'h15)) 
    waiting_for_ack_i_8__1
       (.I0(w_b),
        .I1(\dor_bp_inst/w_b1__0 ),
        .I2(w_v_c),
        .O(o_b_r_reg_3));
endmodule

(* ORIG_REF_NAME = "shadow_reg_combi" *) 
module shadow_reg_combi_26
   (o_b_r_reg_0,
    o_b_r_reg_1,
    D,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg,
    n_in_v_reg_reg_0,
    e_msg,
    o_b_r_reg_2,
    s_msg,
    n_in_v_reg_reg_1,
    \n_in_y_reg_reg[1] ,
    o_b_r_reg_3,
    rst,
    clk,
    Q,
    \i[1][0]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \o_v[1][0] ,
    \i_x_r_reg[1] ,
    \e[0][0]_36 ,
    \e[0][0] ,
    \s_out_x_reg_reg[1] ,
    \s_out_y_reg_reg[1] ,
    n_msg,
    n_in_v_reg,
    o_b_r_reg_4,
    \i_x_r_reg[0] );
  output o_b_r_reg_0;
  output [0:0]o_b_r_reg_1;
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg;
  output n_in_v_reg_reg_0;
  output [3:0]e_msg;
  output o_b_r_reg_2;
  output [3:0]s_msg;
  output n_in_v_reg_reg_1;
  output \n_in_y_reg_reg[1] ;
  output o_b_r_reg_3;
  input rst;
  input clk;
  input [1:0]Q;
  input \i[1][0]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \o_v[1][0] ;
  input [1:0]\i_x_r_reg[1] ;
  input \e[0][0]_36 ;
  input [3:0]\e[0][0] ;
  input [1:0]\s_out_x_reg_reg[1] ;
  input [1:0]\s_out_y_reg_reg[1] ;
  input [3:0]n_msg;
  input n_in_v_reg;
  input o_b_r_reg_4;
  input \i_x_r_reg[0] ;

  wire [0:0]D;
  wire [1:0]Q;
  wire clk;
  wire \dor_bp_inst/w_b1__0 ;
  wire dor_w2s;
  wire [3:0]\e[0][0] ;
  wire \e[0][0]_36 ;
  wire [3:0]e_msg;
  wire e_v115_out__1;
  wire \i[1][0]_36 ;
  wire \i_x_r_reg[0] ;
  wire [1:0]\i_x_r_reg[1] ;
  wire \i_y_r[1]_i_3__0_n_0 ;
  wire \i_y_r_reg[1] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire \n_in_y_reg_reg[1] ;
  wire [3:0]n_msg;
  wire [1:0]number_tokens_reg;
  wire o_b_r_reg_0;
  wire [0:0]o_b_r_reg_1;
  wire o_b_r_reg_2;
  wire o_b_r_reg_3;
  wire o_b_r_reg_4;
  wire \o_v[1][0] ;
  wire rst;
  wire [35:32]s_d_r;
  wire s_d_r_0;
  wire [3:0]s_msg;
  wire [1:0]\s_out_x_reg_reg[1] ;
  wire [1:0]\s_out_y_reg_reg[1] ;
  wire s_v_r;
  wire s_v_r_i_1__0_n_0;
  wire w_b217_in;
  wire w_b_c;
  wire [35:32]w_d_c;
  wire w_v_c;
  wire [1:0]waiting_for_ack_reg;

  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT1 #(
    .INIT(2'h1)) 
    e_out_v_reg_i_1__0
       (.I0(o_b_r_reg_0),
        .O(o_b_r_reg_1));
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[0]_i_1__0 
       (.I0(s_d_r[34]),
        .I1(\e[0][0] [2]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(e_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[1]_i_1__0 
       (.I0(s_d_r[35]),
        .I1(\e[0][0] [3]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(e_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[0]_i_1__0 
       (.I0(s_d_r[32]),
        .I1(\e[0][0] [0]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(e_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[1]_i_1__0 
       (.I0(s_d_r[33]),
        .I1(\e[0][0] [1]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(e_msg[1]));
  LUT6 #(
    .INIT(64'h2E00D1FFD1FF2E00)) 
    \i_x_r[0]_i_1__0 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[1][0]_36 ),
        .I4(\i_x_r_reg[1] [0]),
        .I5(\o_v[1][0] ),
        .O(waiting_for_ack_reg[0]));
  LUT6 #(
    .INIT(64'hD1FFFFFF2E000000)) 
    \i_x_r[1]_i_1__0 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[1][0]_36 ),
        .I4(\o_v[1][0] ),
        .I5(\i_x_r_reg[1] [1]),
        .O(waiting_for_ack_reg[1]));
  LUT5 #(
    .INIT(32'h22052727)) 
    \i_x_r[1]_i_2__0 
       (.I0(\i_x_r_reg[0] ),
        .I1(n_in_v_reg),
        .I2(o_b_r_reg_4),
        .I3(\dor_bp_inst/w_b1__0 ),
        .I4(w_v_c),
        .O(n_in_v_reg_reg));
  LUT6 #(
    .INIT(64'h5D5D5DFFA2A2A200)) 
    \i_y_r[1]_i_1__0 
       (.I0(Q[0]),
        .I1(\i[1][0]_36 ),
        .I2(\i_y_r_reg[1] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(Q[1]),
        .O(D));
  LUT5 #(
    .INIT(32'h0000BABF)) 
    \i_y_r[1]_i_3__0 
       (.I0(\dor_bp_inst/w_b1__0 ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[0][0]_36 ),
        .I4(n_in_v_reg),
        .O(\i_y_r[1]_i_3__0_n_0 ));
  MUXF7 \i_y_r_reg[1]_i_2__0 
       (.I0(n_in_v_reg_reg),
        .I1(\i_y_r[1]_i_3__0_n_0 ),
        .O(\i_y_r_reg[1] ),
        .S(e_v115_out__1));
  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT4 #(
    .INIT(16'h8A80)) 
    o_b_r_i_1__0
       (.I0(w_v_c),
        .I1(o_b_r_reg_4),
        .I2(\dor_bp_inst/w_b1__0 ),
        .I3(n_in_v_reg),
        .O(w_b_c));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    o_b_r_i_2__0
       (.I0(s_v_r),
        .I1(o_b_r_reg_0),
        .I2(\e[0][0]_36 ),
        .O(w_v_c));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT5 #(
    .INIT(32'hCACFFAFF)) 
    o_b_r_i_3__0
       (.I0(\e[0][0] [3]),
        .I1(s_d_r[35]),
        .I2(o_b_r_reg_0),
        .I3(\e[0][0] [2]),
        .I4(s_d_r[34]),
        .O(\dor_bp_inst/w_b1__0 ));
  FDRE #(
    .INIT(1'b0)) 
    o_b_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(w_b_c),
        .Q(o_b_r_reg_0),
        .R(rst));
  LUT6 #(
    .INIT(64'h000000FF10101010)) 
    o_v_reg_i_2__0
       (.I0(\dor_bp_inst/w_b1__0 ),
        .I1(w_b217_in),
        .I2(w_v_c),
        .I3(n_msg[1]),
        .I4(n_msg[0]),
        .I5(n_in_v_reg),
        .O(\n_in_y_reg_reg[1] ));
  LUT5 #(
    .INIT(32'hFFFACFCA)) 
    o_v_reg_i_3__0
       (.I0(\e[0][0] [0]),
        .I1(s_d_r[32]),
        .I2(o_b_r_reg_0),
        .I3(\e[0][0] [1]),
        .I4(s_d_r[33]),
        .O(w_b217_in));
  LUT3 #(
    .INIT(8'h04)) 
    \s_d_r[35]_i_1__0 
       (.I0(o_b_r_reg_0),
        .I1(w_b_c),
        .I2(rst),
        .O(s_d_r_0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[32] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[0][0] [0]),
        .Q(s_d_r[32]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[33] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[0][0] [1]),
        .Q(s_d_r[33]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[34] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[0][0] [2]),
        .Q(s_d_r[34]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[35] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[0][0] [3]),
        .Q(s_d_r[35]),
        .R(1'b0));
  LUT6 #(
    .INIT(64'hFF20FF20FF200020)) 
    s_out_v_reg_i_2__0
       (.I0(w_b217_in),
        .I1(\dor_bp_inst/w_b1__0 ),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[1]),
        .I5(n_msg[0]),
        .O(n_in_v_reg_reg_1));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[0]_i_1__0 
       (.I0(n_msg[2]),
        .I1(n_in_v_reg),
        .I2(w_d_c[34]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(s_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[0]_i_2__0 
       (.I0(s_d_r[34]),
        .I1(\e[0][0] [2]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[34]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[1]_i_1__0 
       (.I0(n_msg[3]),
        .I1(n_in_v_reg),
        .I2(w_d_c[35]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(s_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[1]_i_2__0 
       (.I0(s_d_r[35]),
        .I1(\e[0][0] [3]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[35]));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT5 #(
    .INIT(32'h00004540)) 
    \s_out_x_reg[1]_i_3__0 
       (.I0(\dor_bp_inst/w_b1__0 ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[0][0]_36 ),
        .I4(n_in_v_reg),
        .O(dor_w2s));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__0 
       (.I0(n_msg[0]),
        .I1(n_in_v_reg),
        .I2(w_d_c[32]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(s_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[0]_i_2__0 
       (.I0(s_d_r[32]),
        .I1(\e[0][0] [0]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__0 
       (.I0(n_msg[1]),
        .I1(n_in_v_reg),
        .I2(w_d_c[33]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(s_msg[1]));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[1]_i_2__0 
       (.I0(s_d_r[33]),
        .I1(\e[0][0] [1]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[33]));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT5 #(
    .INIT(32'h0000E200)) 
    s_v_r_i_1__0
       (.I0(\e[0][0]_36 ),
        .I1(o_b_r_reg_0),
        .I2(s_v_r),
        .I3(w_b_c),
        .I4(rst),
        .O(s_v_r_i_1__0_n_0));
  FDRE #(
    .INIT(1'b0)) 
    s_v_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(s_v_r_i_1__0_n_0),
        .Q(s_v_r),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT5 #(
    .INIT(32'hAAAAFEAE)) 
    waiting_for_ack_i_4__0
       (.I0(n_in_v_reg),
        .I1(\e[0][0]_36 ),
        .I2(o_b_r_reg_0),
        .I3(s_v_r),
        .I4(\dor_bp_inst/w_b1__0 ),
        .O(n_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT3 #(
    .INIT(8'h08)) 
    waiting_for_ack_i_6
       (.I0(w_v_c),
        .I1(\dor_bp_inst/w_b1__0 ),
        .I2(o_b_r_reg_4),
        .O(o_b_r_reg_2));
  LUT3 #(
    .INIT(8'h15)) 
    waiting_for_ack_i_8__3
       (.I0(o_b_r_reg_4),
        .I1(\dor_bp_inst/w_b1__0 ),
        .I2(w_v_c),
        .O(o_b_r_reg_3));
endmodule

(* ORIG_REF_NAME = "shadow_reg_combi" *) 
module shadow_reg_combi_28
   (o_b_r_reg_0,
    D,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg,
    n_in_v_reg_reg_0,
    e_msg,
    o_b_r_reg_1,
    s_msg,
    o_b_r_reg_2,
    n_in_v_reg_reg_1,
    \n_in_y_reg_reg[1] ,
    o_b_r_reg_3,
    rst,
    clk,
    Q,
    \i[0][0]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    out_v,
    \i_x_r_reg[1] ,
    e_out_v,
    \e[3][0] ,
    \s_out_x_reg_reg[1] ,
    \s_out_y_reg_reg[1] ,
    n_msg,
    n_in_v_reg,
    w_b,
    e_v214_in);
  output o_b_r_reg_0;
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg;
  output n_in_v_reg_reg_0;
  output [3:0]e_msg;
  output o_b_r_reg_1;
  output [3:0]s_msg;
  output [0:0]o_b_r_reg_2;
  output n_in_v_reg_reg_1;
  output \n_in_y_reg_reg[1] ;
  output o_b_r_reg_3;
  input rst;
  input clk;
  input [1:0]Q;
  input \i[0][0]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input out_v;
  input [1:0]\i_x_r_reg[1] ;
  input e_out_v;
  input [3:0]\e[3][0] ;
  input [1:0]\s_out_x_reg_reg[1] ;
  input [1:0]\s_out_y_reg_reg[1] ;
  input [3:0]n_msg;
  input n_in_v_reg;
  input w_b;
  input e_v214_in;

  wire [0:0]D;
  wire [1:0]Q;
  wire clk;
  wire \dor_bp_inst/w_b218_in ;
  wire dor_w2s;
  wire [3:0]\e[3][0] ;
  wire [3:0]e_msg;
  wire e_out_v;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[0][0]_36 ;
  wire [1:0]\i_x_r_reg[1] ;
  wire \i_y_r[1]_i_3_n_0 ;
  wire \i_y_r_reg[1] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire \n_in_y_reg_reg[1] ;
  wire [3:0]n_msg;
  wire [1:0]number_tokens_reg;
  wire o_b_r_reg_0;
  wire o_b_r_reg_1;
  wire [0:0]o_b_r_reg_2;
  wire o_b_r_reg_3;
  wire out_v;
  wire rst;
  wire [35:32]s_d_r;
  wire s_d_r_0;
  wire [3:0]s_msg;
  wire [1:0]\s_out_x_reg_reg[1] ;
  wire [1:0]\s_out_y_reg_reg[1] ;
  wire s_v_r;
  wire s_v_r_i_1_n_0;
  wire w_b;
  wire w_b220_in;
  wire w_b_c;
  wire [35:32]w_d_c;
  wire w_v_c;
  wire [1:0]waiting_for_ack_reg;

  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT1 #(
    .INIT(2'h1)) 
    e_out_v_reg_i_1
       (.I0(o_b_r_reg_0),
        .O(o_b_r_reg_2));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[0]_i_1 
       (.I0(s_d_r[34]),
        .I1(\e[3][0] [2]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_1),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(e_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[1]_i_1 
       (.I0(s_d_r[35]),
        .I1(\e[3][0] [3]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_1),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(e_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[0]_i_1 
       (.I0(s_d_r[32]),
        .I1(\e[3][0] [0]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_1),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(e_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[1]_i_1 
       (.I0(s_d_r[33]),
        .I1(\e[3][0] [1]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_1),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(e_msg[1]));
  LUT6 #(
    .INIT(64'h2E00D1FFD1FF2E00)) 
    \i_x_r[0]_i_1 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[0][0]_36 ),
        .I4(\i_x_r_reg[1] [0]),
        .I5(out_v),
        .O(waiting_for_ack_reg[0]));
  LUT6 #(
    .INIT(64'hD1FFFFFF2E000000)) 
    \i_x_r[1]_i_1 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[0][0]_36 ),
        .I4(out_v),
        .I5(\i_x_r_reg[1] [1]),
        .O(waiting_for_ack_reg[1]));
  LUT5 #(
    .INIT(32'h02522277)) 
    \i_x_r[1]_i_2 
       (.I0(e_v214_in),
        .I1(n_in_v_reg),
        .I2(\dor_bp_inst/w_b218_in ),
        .I3(w_b),
        .I4(w_v_c),
        .O(n_in_v_reg_reg));
  LUT6 #(
    .INIT(64'h5D5D5DFFA2A2A200)) 
    \i_y_r[1]_i_1 
       (.I0(Q[0]),
        .I1(\i[0][0]_36 ),
        .I2(\i_y_r_reg[1] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(Q[1]),
        .O(D));
  LUT5 #(
    .INIT(32'h0000757F)) 
    \i_y_r[1]_i_3 
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(e_out_v),
        .I4(n_in_v_reg),
        .O(\i_y_r[1]_i_3_n_0 ));
  MUXF7 \i_y_r_reg[1]_i_2 
       (.I0(n_in_v_reg_reg),
        .I1(\i_y_r[1]_i_3_n_0 ),
        .O(\i_y_r_reg[1] ),
        .S(e_v115_out__1));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT4 #(
    .INIT(16'hA808)) 
    o_b_r_i_1
       (.I0(w_v_c),
        .I1(w_b),
        .I2(\dor_bp_inst/w_b218_in ),
        .I3(n_in_v_reg),
        .O(w_b_c));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    o_b_r_i_2
       (.I0(s_v_r),
        .I1(o_b_r_reg_0),
        .I2(e_out_v),
        .O(w_v_c));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT5 #(
    .INIT(32'h00053035)) 
    o_b_r_i_3
       (.I0(\e[3][0] [3]),
        .I1(s_d_r[35]),
        .I2(o_b_r_reg_0),
        .I3(\e[3][0] [2]),
        .I4(s_d_r[34]),
        .O(\dor_bp_inst/w_b218_in ));
  FDRE #(
    .INIT(1'b0)) 
    o_b_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(w_b_c),
        .Q(o_b_r_reg_0),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT5 #(
    .INIT(32'hFEAEAAAA)) 
    o_v_reg_i_2
       (.I0(n_in_v_reg),
        .I1(e_out_v),
        .I2(o_b_r_reg_0),
        .I3(s_v_r),
        .I4(\dor_bp_inst/w_b218_in ),
        .O(n_in_v_reg_reg_0));
  LUT6 #(
    .INIT(64'h000000FF80808080)) 
    o_v_reg_i_4
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(w_b220_in),
        .I2(w_v_c),
        .I3(n_msg[1]),
        .I4(n_msg[0]),
        .I5(n_in_v_reg),
        .O(\n_in_y_reg_reg[1] ));
  LUT5 #(
    .INIT(32'h00053035)) 
    o_v_reg_i_5
       (.I0(\e[3][0] [0]),
        .I1(s_d_r[32]),
        .I2(o_b_r_reg_0),
        .I3(\e[3][0] [1]),
        .I4(s_d_r[33]),
        .O(w_b220_in));
  LUT3 #(
    .INIT(8'h04)) 
    \s_d_r[35]_i_1 
       (.I0(o_b_r_reg_0),
        .I1(w_b_c),
        .I2(rst),
        .O(s_d_r_0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[32] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[3][0] [0]),
        .Q(s_d_r[32]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[33] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[3][0] [1]),
        .Q(s_d_r[33]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[34] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[3][0] [2]),
        .Q(s_d_r[34]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[35] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[3][0] [3]),
        .Q(s_d_r[35]),
        .R(1'b0));
  LUT6 #(
    .INIT(64'hFF40FF40FF400040)) 
    s_out_v_reg_i_2
       (.I0(w_b220_in),
        .I1(\dor_bp_inst/w_b218_in ),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[1]),
        .I5(n_msg[0]),
        .O(n_in_v_reg_reg_1));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[0]_i_1 
       (.I0(n_msg[2]),
        .I1(n_in_v_reg),
        .I2(w_d_c[34]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(s_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[0]_i_2 
       (.I0(s_d_r[34]),
        .I1(\e[3][0] [2]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[34]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[1]_i_1 
       (.I0(n_msg[3]),
        .I1(n_in_v_reg),
        .I2(w_d_c[35]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(s_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[1]_i_2 
       (.I0(s_d_r[35]),
        .I1(\e[3][0] [3]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[35]));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT5 #(
    .INIT(32'h00008A80)) 
    \s_out_x_reg[1]_i_3 
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(e_out_v),
        .I4(n_in_v_reg),
        .O(dor_w2s));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1 
       (.I0(n_msg[0]),
        .I1(n_in_v_reg),
        .I2(w_d_c[32]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(s_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[0]_i_2 
       (.I0(s_d_r[32]),
        .I1(\e[3][0] [0]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1 
       (.I0(n_msg[1]),
        .I1(n_in_v_reg),
        .I2(w_d_c[33]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(s_msg[1]));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[1]_i_2 
       (.I0(s_d_r[33]),
        .I1(\e[3][0] [1]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[33]));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT5 #(
    .INIT(32'h0000E200)) 
    s_v_r_i_1
       (.I0(e_out_v),
        .I1(o_b_r_reg_0),
        .I2(s_v_r),
        .I3(w_b_c),
        .I4(rst),
        .O(s_v_r_i_1_n_0));
  FDRE #(
    .INIT(1'b0)) 
    s_v_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(s_v_r_i_1_n_0),
        .Q(s_v_r),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT3 #(
    .INIT(8'h02)) 
    waiting_for_ack_i_4
       (.I0(w_v_c),
        .I1(w_b),
        .I2(\dor_bp_inst/w_b218_in ),
        .O(o_b_r_reg_1));
  LUT3 #(
    .INIT(8'h23)) 
    waiting_for_ack_i_6__14
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(w_b),
        .I2(w_v_c),
        .O(o_b_r_reg_3));
endmodule

(* ORIG_REF_NAME = "shadow_reg_combi" *) 
module shadow_reg_combi_4
   (o_b_r_reg_0,
    D,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg,
    n_in_v_reg_reg_0,
    e_msg,
    o_b_r_reg_1,
    s_msg,
    o_b_r_reg_2,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    o_b_r_reg_3,
    rst,
    clk,
    Q,
    \i[0][3]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \o_v[0][3] ,
    \i_x_r_reg[1] ,
    e_out_v,
    \e[3][3] ,
    \s_out_x_reg_reg[1] ,
    \s_out_y_reg_reg[1] ,
    n_msg,
    n_in_v_reg,
    w_b,
    e_v214_in);
  output o_b_r_reg_0;
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg;
  output n_in_v_reg_reg_0;
  output [3:0]e_msg;
  output o_b_r_reg_1;
  output [3:0]s_msg;
  output [0:0]o_b_r_reg_2;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output o_b_r_reg_3;
  input rst;
  input clk;
  input [1:0]Q;
  input \i[0][3]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \o_v[0][3] ;
  input [1:0]\i_x_r_reg[1] ;
  input e_out_v;
  input [3:0]\e[3][3] ;
  input [1:0]\s_out_x_reg_reg[1] ;
  input [1:0]\s_out_y_reg_reg[1] ;
  input [3:0]n_msg;
  input n_in_v_reg;
  input w_b;
  input e_v214_in;

  wire [0:0]D;
  wire [1:0]Q;
  wire clk;
  wire \dor_bp_inst/w_b218_in ;
  wire dor_w2s;
  wire [3:0]\e[3][3] ;
  wire [3:0]e_msg;
  wire e_out_v;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[0][3]_36 ;
  wire [1:0]\i_x_r_reg[1] ;
  wire \i_y_r[1]_i_3__11_n_0 ;
  wire \i_y_r_reg[1] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [3:0]n_msg;
  wire [1:0]number_tokens_reg;
  wire o_b_r_reg_0;
  wire o_b_r_reg_1;
  wire [0:0]o_b_r_reg_2;
  wire o_b_r_reg_3;
  wire \o_v[0][3] ;
  wire rst;
  wire [35:32]s_d_r;
  wire s_d_r_0;
  wire [3:0]s_msg;
  wire [1:0]\s_out_x_reg_reg[1] ;
  wire [1:0]\s_out_y_reg_reg[1] ;
  wire s_v_r;
  wire s_v_r_i_1__11_n_0;
  wire w_b;
  wire w_b220_in;
  wire w_b_c;
  wire [35:32]w_d_c;
  wire w_v_c;
  wire [1:0]waiting_for_ack_reg;

  (* SOFT_HLUTNM = "soft_lutpair151" *) 
  LUT1 #(
    .INIT(2'h1)) 
    e_out_v_reg_i_1__11
       (.I0(o_b_r_reg_0),
        .O(o_b_r_reg_2));
  (* SOFT_HLUTNM = "soft_lutpair152" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[0]_i_1__11 
       (.I0(s_d_r[34]),
        .I1(\e[3][3] [2]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_1),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(e_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair151" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[1]_i_1__11 
       (.I0(s_d_r[35]),
        .I1(\e[3][3] [3]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_1),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(e_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair154" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[0]_i_1__11 
       (.I0(s_d_r[32]),
        .I1(\e[3][3] [0]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_1),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(e_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair153" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[1]_i_1__11 
       (.I0(s_d_r[33]),
        .I1(\e[3][3] [1]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_1),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(e_msg[1]));
  LUT6 #(
    .INIT(64'h2E00D1FFD1FF2E00)) 
    \i_x_r[0]_i_1__11 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[0][3]_36 ),
        .I4(\i_x_r_reg[1] [0]),
        .I5(\o_v[0][3] ),
        .O(waiting_for_ack_reg[0]));
  LUT6 #(
    .INIT(64'hD1FFFFFF2E000000)) 
    \i_x_r[1]_i_1__11 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[0][3]_36 ),
        .I4(\o_v[0][3] ),
        .I5(\i_x_r_reg[1] [1]),
        .O(waiting_for_ack_reg[1]));
  LUT5 #(
    .INIT(32'h02522277)) 
    \i_x_r[1]_i_2__11 
       (.I0(e_v214_in),
        .I1(n_in_v_reg),
        .I2(\dor_bp_inst/w_b218_in ),
        .I3(w_b),
        .I4(w_v_c),
        .O(n_in_v_reg_reg));
  LUT6 #(
    .INIT(64'h5D5D5DFFA2A2A200)) 
    \i_y_r[1]_i_1__11 
       (.I0(Q[0]),
        .I1(\i[0][3]_36 ),
        .I2(\i_y_r_reg[1] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(Q[1]),
        .O(D));
  LUT5 #(
    .INIT(32'h0000757F)) 
    \i_y_r[1]_i_3__11 
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(e_out_v),
        .I4(n_in_v_reg),
        .O(\i_y_r[1]_i_3__11_n_0 ));
  MUXF7 \i_y_r_reg[1]_i_2__11 
       (.I0(n_in_v_reg_reg),
        .I1(\i_y_r[1]_i_3__11_n_0 ),
        .O(\i_y_r_reg[1] ),
        .S(e_v115_out__1));
  (* SOFT_HLUTNM = "soft_lutpair155" *) 
  LUT4 #(
    .INIT(16'hA808)) 
    o_b_r_i_1__11
       (.I0(w_v_c),
        .I1(w_b),
        .I2(\dor_bp_inst/w_b218_in ),
        .I3(n_in_v_reg),
        .O(w_b_c));
  (* SOFT_HLUTNM = "soft_lutpair150" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    o_b_r_i_2__11
       (.I0(s_v_r),
        .I1(o_b_r_reg_0),
        .I2(e_out_v),
        .O(w_v_c));
  (* SOFT_HLUTNM = "soft_lutpair148" *) 
  LUT5 #(
    .INIT(32'h00053035)) 
    o_b_r_i_3__9
       (.I0(\e[3][3] [3]),
        .I1(s_d_r[35]),
        .I2(o_b_r_reg_0),
        .I3(\e[3][3] [2]),
        .I4(s_d_r[34]),
        .O(\dor_bp_inst/w_b218_in ));
  FDRE #(
    .INIT(1'b0)) 
    o_b_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(w_b_c),
        .Q(o_b_r_reg_0),
        .R(rst));
  LUT6 #(
    .INIT(64'hFF80008000800080)) 
    o_v_reg_i_2__11
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(w_b220_in),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[1]),
        .I5(n_msg[0]),
        .O(n_in_v_reg_reg_2));
  LUT5 #(
    .INIT(32'hCAC00A00)) 
    o_v_reg_i_3__11
       (.I0(\e[3][3] [0]),
        .I1(s_d_r[32]),
        .I2(o_b_r_reg_0),
        .I3(\e[3][3] [1]),
        .I4(s_d_r[33]),
        .O(w_b220_in));
  LUT3 #(
    .INIT(8'h04)) 
    \s_d_r[35]_i_1__11 
       (.I0(o_b_r_reg_0),
        .I1(w_b_c),
        .I2(rst),
        .O(s_d_r_0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[32] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[3][3] [0]),
        .Q(s_d_r[32]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[33] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[3][3] [1]),
        .Q(s_d_r[33]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[34] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[3][3] [2]),
        .Q(s_d_r[34]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[35] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[3][3] [3]),
        .Q(s_d_r[35]),
        .R(1'b0));
  LUT6 #(
    .INIT(64'h0040FF40FF40FF40)) 
    s_out_v_reg_i_2__11
       (.I0(w_b220_in),
        .I1(\dor_bp_inst/w_b218_in ),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[1]),
        .I5(n_msg[0]),
        .O(n_in_v_reg_reg_1));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[0]_i_1__11 
       (.I0(n_msg[2]),
        .I1(n_in_v_reg),
        .I2(w_d_c[34]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(s_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair152" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[0]_i_2__11 
       (.I0(s_d_r[34]),
        .I1(\e[3][3] [2]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[34]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[1]_i_1__11 
       (.I0(n_msg[3]),
        .I1(n_in_v_reg),
        .I2(w_d_c[35]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(s_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair148" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[1]_i_2__11 
       (.I0(s_d_r[35]),
        .I1(\e[3][3] [3]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[35]));
  (* SOFT_HLUTNM = "soft_lutpair149" *) 
  LUT5 #(
    .INIT(32'h00008A80)) 
    \s_out_x_reg[1]_i_3__11 
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(e_out_v),
        .I4(n_in_v_reg),
        .O(dor_w2s));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__11 
       (.I0(n_msg[0]),
        .I1(n_in_v_reg),
        .I2(w_d_c[32]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(s_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair154" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[0]_i_2__11 
       (.I0(s_d_r[32]),
        .I1(\e[3][3] [0]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__11 
       (.I0(n_msg[1]),
        .I1(n_in_v_reg),
        .I2(w_d_c[33]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(s_msg[1]));
  (* SOFT_HLUTNM = "soft_lutpair153" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[1]_i_2__11 
       (.I0(s_d_r[33]),
        .I1(\e[3][3] [1]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[33]));
  (* SOFT_HLUTNM = "soft_lutpair150" *) 
  LUT5 #(
    .INIT(32'h0000E200)) 
    s_v_r_i_1__11
       (.I0(e_out_v),
        .I1(o_b_r_reg_0),
        .I2(s_v_r),
        .I3(w_b_c),
        .I4(rst),
        .O(s_v_r_i_1__11_n_0));
  FDRE #(
    .INIT(1'b0)) 
    s_v_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(s_v_r_i_1__11_n_0),
        .Q(s_v_r),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair149" *) 
  LUT5 #(
    .INIT(32'hFEAEAAAA)) 
    waiting_for_ack_i_4__11
       (.I0(n_in_v_reg),
        .I1(e_out_v),
        .I2(o_b_r_reg_0),
        .I3(s_v_r),
        .I4(\dor_bp_inst/w_b218_in ),
        .O(n_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair155" *) 
  LUT3 #(
    .INIT(8'h02)) 
    waiting_for_ack_i_6__10
       (.I0(w_v_c),
        .I1(w_b),
        .I2(\dor_bp_inst/w_b218_in ),
        .O(o_b_r_reg_1));
  LUT3 #(
    .INIT(8'h23)) 
    waiting_for_ack_i_8__0
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(w_b),
        .I2(w_v_c),
        .O(o_b_r_reg_3));
endmodule

(* ORIG_REF_NAME = "shadow_reg_combi" *) 
module shadow_reg_combi_6
   (o_b_r_reg_0,
    o_b_r_reg_1,
    D,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg,
    n_in_v_reg_reg_0,
    e_msg,
    o_b_r_reg_2,
    s_msg,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    o_b_r_reg_3,
    rst,
    clk,
    Q,
    \i[3][2]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \o_v[3][2] ,
    \i_x_r_reg[1] ,
    \e[2][2]_36 ,
    \e[2][2] ,
    \s_out_x_reg_reg[1] ,
    \s_out_y_reg_reg[1] ,
    n_msg,
    n_in_v_reg,
    \w_b[0][2] ,
    e_v214_in);
  output o_b_r_reg_0;
  output [0:0]o_b_r_reg_1;
  output [0:0]D;
  output \i_y_r_reg[0] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg;
  output n_in_v_reg_reg_0;
  output [3:0]e_msg;
  output o_b_r_reg_2;
  output [3:0]s_msg;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output o_b_r_reg_3;
  input rst;
  input clk;
  input [1:0]Q;
  input \i[3][2]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \o_v[3][2] ;
  input [1:0]\i_x_r_reg[1] ;
  input \e[2][2]_36 ;
  input [3:0]\e[2][2] ;
  input [1:0]\s_out_x_reg_reg[1] ;
  input [1:0]\s_out_y_reg_reg[1] ;
  input [3:0]n_msg;
  input n_in_v_reg;
  input \w_b[0][2] ;
  input e_v214_in;

  wire [0:0]D;
  wire [1:0]Q;
  wire clk;
  wire dor_w2s;
  wire [3:0]\e[2][2] ;
  wire \e[2][2]_36 ;
  wire [3:0]e_msg;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[3][2]_36 ;
  wire [1:0]\i_x_r_reg[1] ;
  wire \i_y_r[1]_i_3__10_n_0 ;
  wire \i_y_r_reg[0] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [3:0]n_msg;
  wire [1:0]number_tokens_reg;
  wire o_b_r_i_3__13_n_0;
  wire o_b_r_reg_0;
  wire [0:0]o_b_r_reg_1;
  wire o_b_r_reg_2;
  wire o_b_r_reg_3;
  wire \o_v[3][2] ;
  wire o_v_reg_i_3__10_n_0;
  wire rst;
  wire [35:32]s_d_r;
  wire s_d_r_0;
  wire [3:0]s_msg;
  wire [1:0]\s_out_x_reg_reg[1] ;
  wire [1:0]\s_out_y_reg_reg[1] ;
  wire s_v_r;
  wire s_v_r_i_1__10_n_0;
  wire \w_b[0][2] ;
  wire w_b_c;
  wire [35:32]w_d_c;
  wire w_v_c;
  wire [1:0]waiting_for_ack_reg;

  (* SOFT_HLUTNM = "soft_lutpair140" *) 
  LUT1 #(
    .INIT(2'h1)) 
    e_out_v_reg_i_1__10
       (.I0(o_b_r_reg_0),
        .O(o_b_r_reg_1));
  (* SOFT_HLUTNM = "soft_lutpair140" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[0]_i_1__10 
       (.I0(s_d_r[34]),
        .I1(\e[2][2] [2]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(e_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair139" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[1]_i_1__10 
       (.I0(s_d_r[35]),
        .I1(\e[2][2] [3]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(e_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair142" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[0]_i_1__10 
       (.I0(s_d_r[32]),
        .I1(\e[2][2] [0]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(e_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair141" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[1]_i_1__10 
       (.I0(s_d_r[33]),
        .I1(\e[2][2] [1]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(e_msg[1]));
  LUT6 #(
    .INIT(64'h2E00D1FFD1FF2E00)) 
    \i_x_r[0]_i_1__10 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[3][2]_36 ),
        .I4(\i_x_r_reg[1] [0]),
        .I5(\o_v[3][2] ),
        .O(waiting_for_ack_reg[0]));
  LUT6 #(
    .INIT(64'hD1FFFFFF2E000000)) 
    \i_x_r[1]_i_1__10 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[3][2]_36 ),
        .I4(\o_v[3][2] ),
        .I5(\i_x_r_reg[1] [1]),
        .O(waiting_for_ack_reg[1]));
  LUT5 #(
    .INIT(32'h05222727)) 
    \i_x_r[1]_i_2__10 
       (.I0(e_v214_in),
        .I1(n_in_v_reg),
        .I2(\w_b[0][2] ),
        .I3(o_b_r_i_3__13_n_0),
        .I4(w_v_c),
        .O(n_in_v_reg_reg));
  LUT6 #(
    .INIT(64'h5D5D5DFFA2A2A200)) 
    \i_y_r[1]_i_1__10 
       (.I0(Q[0]),
        .I1(\i[3][2]_36 ),
        .I2(\i_y_r_reg[0] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(Q[1]),
        .O(D));
  LUT5 #(
    .INIT(32'h0000757F)) 
    \i_y_r[1]_i_3__10 
       (.I0(o_b_r_i_3__13_n_0),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[2][2]_36 ),
        .I4(n_in_v_reg),
        .O(\i_y_r[1]_i_3__10_n_0 ));
  MUXF7 \i_y_r_reg[1]_i_2__10 
       (.I0(n_in_v_reg_reg),
        .I1(\i_y_r[1]_i_3__10_n_0 ),
        .O(\i_y_r_reg[0] ),
        .S(e_v115_out__1));
  (* SOFT_HLUTNM = "soft_lutpair143" *) 
  LUT4 #(
    .INIT(16'hA808)) 
    o_b_r_i_1__10
       (.I0(w_v_c),
        .I1(\w_b[0][2] ),
        .I2(o_b_r_i_3__13_n_0),
        .I3(n_in_v_reg),
        .O(w_b_c));
  (* SOFT_HLUTNM = "soft_lutpair138" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    o_b_r_i_2__10
       (.I0(s_v_r),
        .I1(o_b_r_reg_0),
        .I2(\e[2][2]_36 ),
        .O(w_v_c));
  (* SOFT_HLUTNM = "soft_lutpair137" *) 
  LUT5 #(
    .INIT(32'hCAC00A00)) 
    o_b_r_i_3__13
       (.I0(\e[2][2] [2]),
        .I1(s_d_r[34]),
        .I2(o_b_r_reg_0),
        .I3(\e[2][2] [3]),
        .I4(s_d_r[35]),
        .O(o_b_r_i_3__13_n_0));
  FDRE #(
    .INIT(1'b0)) 
    o_b_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(w_b_c),
        .Q(o_b_r_reg_0),
        .R(rst));
  LUT6 #(
    .INIT(64'h00200020FF200020)) 
    o_v_reg_i_2__10
       (.I0(o_b_r_i_3__13_n_0),
        .I1(o_v_reg_i_3__10_n_0),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[1]),
        .I5(n_msg[0]),
        .O(n_in_v_reg_reg_2));
  LUT5 #(
    .INIT(32'hCACFFAFF)) 
    o_v_reg_i_3__10
       (.I0(\e[2][2] [0]),
        .I1(s_d_r[32]),
        .I2(o_b_r_reg_0),
        .I3(\e[2][2] [1]),
        .I4(s_d_r[33]),
        .O(o_v_reg_i_3__10_n_0));
  LUT3 #(
    .INIT(8'h04)) 
    \s_d_r[35]_i_1__10 
       (.I0(o_b_r_reg_0),
        .I1(w_b_c),
        .I2(rst),
        .O(s_d_r_0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[32] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[2][2] [0]),
        .Q(s_d_r[32]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[33] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[2][2] [1]),
        .Q(s_d_r[33]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[34] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[2][2] [2]),
        .Q(s_d_r[34]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[35] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[2][2] [3]),
        .Q(s_d_r[35]),
        .R(1'b0));
  LUT6 #(
    .INIT(64'hFF80FF800080FF80)) 
    s_out_v_reg_i_2__10
       (.I0(o_v_reg_i_3__10_n_0),
        .I1(o_b_r_i_3__13_n_0),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[1]),
        .I5(n_msg[0]),
        .O(n_in_v_reg_reg_1));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[0]_i_1__10 
       (.I0(n_msg[2]),
        .I1(n_in_v_reg),
        .I2(w_d_c[34]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(s_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair137" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[0]_i_2__10 
       (.I0(s_d_r[34]),
        .I1(\e[2][2] [2]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[34]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[1]_i_1__10 
       (.I0(n_msg[3]),
        .I1(n_in_v_reg),
        .I2(w_d_c[35]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(s_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair139" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[1]_i_2__10 
       (.I0(s_d_r[35]),
        .I1(\e[2][2] [3]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[35]));
  (* SOFT_HLUTNM = "soft_lutpair136" *) 
  LUT5 #(
    .INIT(32'h00008A80)) 
    \s_out_x_reg[1]_i_3__10 
       (.I0(o_b_r_i_3__13_n_0),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[2][2]_36 ),
        .I4(n_in_v_reg),
        .O(dor_w2s));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__10 
       (.I0(n_msg[0]),
        .I1(n_in_v_reg),
        .I2(w_d_c[32]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(s_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair142" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[0]_i_2__10 
       (.I0(s_d_r[32]),
        .I1(\e[2][2] [0]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__10 
       (.I0(n_msg[1]),
        .I1(n_in_v_reg),
        .I2(w_d_c[33]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(s_msg[1]));
  (* SOFT_HLUTNM = "soft_lutpair141" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[1]_i_2__10 
       (.I0(s_d_r[33]),
        .I1(\e[2][2] [1]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[33]));
  (* SOFT_HLUTNM = "soft_lutpair138" *) 
  LUT5 #(
    .INIT(32'h0000E200)) 
    s_v_r_i_1__10
       (.I0(\e[2][2]_36 ),
        .I1(o_b_r_reg_0),
        .I2(s_v_r),
        .I3(w_b_c),
        .I4(rst),
        .O(s_v_r_i_1__10_n_0));
  FDRE #(
    .INIT(1'b0)) 
    s_v_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(s_v_r_i_1__10_n_0),
        .Q(s_v_r),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair136" *) 
  LUT5 #(
    .INIT(32'hFEAEAAAA)) 
    waiting_for_ack_i_4__10
       (.I0(n_in_v_reg),
        .I1(\e[2][2]_36 ),
        .I2(o_b_r_reg_0),
        .I3(s_v_r),
        .I4(o_b_r_i_3__13_n_0),
        .O(n_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair143" *) 
  LUT3 #(
    .INIT(8'h02)) 
    waiting_for_ack_i_6__9
       (.I0(w_v_c),
        .I1(o_b_r_i_3__13_n_0),
        .I2(\w_b[0][2] ),
        .O(o_b_r_reg_2));
  LUT3 #(
    .INIT(8'h45)) 
    waiting_for_ack_i_8__7
       (.I0(\w_b[0][2] ),
        .I1(o_b_r_i_3__13_n_0),
        .I2(w_v_c),
        .O(o_b_r_reg_3));
endmodule

(* ORIG_REF_NAME = "shadow_reg_combi" *) 
module shadow_reg_combi_8
   (o_b_r_reg_0,
    o_b_r_reg_1,
    D,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg,
    n_in_v_reg_reg_0,
    e_msg,
    o_b_r_reg_2,
    s_msg,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    o_b_r_reg_3,
    rst,
    clk,
    Q,
    \i[2][2]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \o_v[2][2] ,
    \i_x_r_reg[1] ,
    \e[1][2]_36 ,
    \e[1][2] ,
    \s_out_x_reg_reg[1] ,
    \s_out_y_reg_reg[1] ,
    n_msg,
    n_in_v_reg,
    w_b,
    \i_x_r_reg[0] );
  output o_b_r_reg_0;
  output [0:0]o_b_r_reg_1;
  output [0:0]D;
  output \i_y_r_reg[0] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg;
  output n_in_v_reg_reg_0;
  output [3:0]e_msg;
  output o_b_r_reg_2;
  output [3:0]s_msg;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output o_b_r_reg_3;
  input rst;
  input clk;
  input [1:0]Q;
  input \i[2][2]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \o_v[2][2] ;
  input [1:0]\i_x_r_reg[1] ;
  input \e[1][2]_36 ;
  input [3:0]\e[1][2] ;
  input [1:0]\s_out_x_reg_reg[1] ;
  input [1:0]\s_out_y_reg_reg[1] ;
  input [3:0]n_msg;
  input n_in_v_reg;
  input w_b;
  input \i_x_r_reg[0] ;

  wire [0:0]D;
  wire [1:0]Q;
  wire clk;
  wire \dor_bp_inst/w_b218_in ;
  wire dor_w2s;
  wire [3:0]\e[1][2] ;
  wire \e[1][2]_36 ;
  wire [3:0]e_msg;
  wire e_v115_out__1;
  wire \i[2][2]_36 ;
  wire \i_x_r_reg[0] ;
  wire [1:0]\i_x_r_reg[1] ;
  wire \i_y_r[1]_i_3__9_n_0 ;
  wire \i_y_r_reg[0] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [3:0]n_msg;
  wire [1:0]number_tokens_reg;
  wire o_b_r_reg_0;
  wire [0:0]o_b_r_reg_1;
  wire o_b_r_reg_2;
  wire o_b_r_reg_3;
  wire \o_v[2][2] ;
  wire o_v_reg_i_3__9_n_0;
  wire rst;
  wire [35:32]s_d_r;
  wire s_d_r_0;
  wire [3:0]s_msg;
  wire [1:0]\s_out_x_reg_reg[1] ;
  wire [1:0]\s_out_y_reg_reg[1] ;
  wire s_v_r;
  wire s_v_r_i_1__9_n_0;
  wire w_b;
  wire w_b_c;
  wire [35:32]w_d_c;
  wire w_v_c;
  wire [1:0]waiting_for_ack_reg;

  (* SOFT_HLUTNM = "soft_lutpair127" *) 
  LUT1 #(
    .INIT(2'h1)) 
    e_out_v_reg_i_1__9
       (.I0(o_b_r_reg_0),
        .O(o_b_r_reg_1));
  (* SOFT_HLUTNM = "soft_lutpair128" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[0]_i_1__9 
       (.I0(s_d_r[34]),
        .I1(\e[1][2] [2]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(e_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair127" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_x_reg[1]_i_1__9 
       (.I0(s_d_r[35]),
        .I1(\e[1][2] [3]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(e_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair130" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[0]_i_1__9 
       (.I0(s_d_r[32]),
        .I1(\e[1][2] [0]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(e_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair129" *) 
  LUT5 #(
    .INIT(32'hACFFAC00)) 
    \e_out_y_reg[1]_i_1__9 
       (.I0(s_d_r[33]),
        .I1(\e[1][2] [1]),
        .I2(o_b_r_reg_0),
        .I3(o_b_r_reg_2),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(e_msg[1]));
  LUT6 #(
    .INIT(64'h2E00D1FFD1FF2E00)) 
    \i_x_r[0]_i_1__9 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[2][2]_36 ),
        .I4(\i_x_r_reg[1] [0]),
        .I5(\o_v[2][2] ),
        .O(waiting_for_ack_reg[0]));
  LUT6 #(
    .INIT(64'hD1FFFFFF2E000000)) 
    \i_x_r[1]_i_1__9 
       (.I0(n_in_v_reg_reg),
        .I1(e_v115_out__1),
        .I2(n_in_v_reg_reg_0),
        .I3(\i[2][2]_36 ),
        .I4(\o_v[2][2] ),
        .I5(\i_x_r_reg[1] [1]),
        .O(waiting_for_ack_reg[1]));
  LUT5 #(
    .INIT(32'h02522277)) 
    \i_x_r[1]_i_2__9 
       (.I0(\i_x_r_reg[0] ),
        .I1(n_in_v_reg),
        .I2(\dor_bp_inst/w_b218_in ),
        .I3(w_b),
        .I4(w_v_c),
        .O(n_in_v_reg_reg));
  LUT6 #(
    .INIT(64'h5D5D5DFFA2A2A200)) 
    \i_y_r[1]_i_1__9 
       (.I0(Q[0]),
        .I1(\i[2][2]_36 ),
        .I2(\i_y_r_reg[0] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(Q[1]),
        .O(D));
  LUT5 #(
    .INIT(32'h0000757F)) 
    \i_y_r[1]_i_3__9 
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[1][2]_36 ),
        .I4(n_in_v_reg),
        .O(\i_y_r[1]_i_3__9_n_0 ));
  MUXF7 \i_y_r_reg[1]_i_2__9 
       (.I0(n_in_v_reg_reg),
        .I1(\i_y_r[1]_i_3__9_n_0 ),
        .O(\i_y_r_reg[0] ),
        .S(e_v115_out__1));
  (* SOFT_HLUTNM = "soft_lutpair131" *) 
  LUT4 #(
    .INIT(16'hA808)) 
    o_b_r_i_1__9
       (.I0(w_v_c),
        .I1(w_b),
        .I2(\dor_bp_inst/w_b218_in ),
        .I3(n_in_v_reg),
        .O(w_b_c));
  (* SOFT_HLUTNM = "soft_lutpair126" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    o_b_r_i_2__9
       (.I0(s_v_r),
        .I1(o_b_r_reg_0),
        .I2(\e[1][2]_36 ),
        .O(w_v_c));
  (* SOFT_HLUTNM = "soft_lutpair124" *) 
  LUT5 #(
    .INIT(32'h000AC0CA)) 
    o_b_r_i_3__8
       (.I0(\e[1][2] [3]),
        .I1(s_d_r[35]),
        .I2(o_b_r_reg_0),
        .I3(\e[1][2] [2]),
        .I4(s_d_r[34]),
        .O(\dor_bp_inst/w_b218_in ));
  FDRE #(
    .INIT(1'b0)) 
    o_b_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(w_b_c),
        .Q(o_b_r_reg_0),
        .R(rst));
  LUT6 #(
    .INIT(64'h00800080FF800080)) 
    o_v_reg_i_2__9
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(o_v_reg_i_3__9_n_0),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[1]),
        .I5(n_msg[0]),
        .O(n_in_v_reg_reg_2));
  LUT5 #(
    .INIT(32'h000AC0CA)) 
    o_v_reg_i_3__9
       (.I0(\e[1][2] [1]),
        .I1(s_d_r[33]),
        .I2(o_b_r_reg_0),
        .I3(\e[1][2] [0]),
        .I4(s_d_r[32]),
        .O(o_v_reg_i_3__9_n_0));
  LUT3 #(
    .INIT(8'h04)) 
    \s_d_r[35]_i_1__9 
       (.I0(o_b_r_reg_0),
        .I1(w_b_c),
        .I2(rst),
        .O(s_d_r_0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[32] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[1][2] [0]),
        .Q(s_d_r[32]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[33] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[1][2] [1]),
        .Q(s_d_r[33]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[34] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[1][2] [2]),
        .Q(s_d_r[34]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \s_d_r_reg[35] 
       (.C(clk),
        .CE(s_d_r_0),
        .D(\e[1][2] [3]),
        .Q(s_d_r[35]),
        .R(1'b0));
  LUT6 #(
    .INIT(64'hFF40FF400040FF40)) 
    s_out_v_reg_i_2__9
       (.I0(o_v_reg_i_3__9_n_0),
        .I1(\dor_bp_inst/w_b218_in ),
        .I2(w_v_c),
        .I3(n_in_v_reg),
        .I4(n_msg[1]),
        .I5(n_msg[0]),
        .O(n_in_v_reg_reg_1));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[0]_i_1__9 
       (.I0(n_msg[2]),
        .I1(n_in_v_reg),
        .I2(w_d_c[34]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [0]),
        .O(s_msg[2]));
  (* SOFT_HLUTNM = "soft_lutpair128" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[0]_i_2__9 
       (.I0(s_d_r[34]),
        .I1(\e[1][2] [2]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[34]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_x_reg[1]_i_1__9 
       (.I0(n_msg[3]),
        .I1(n_in_v_reg),
        .I2(w_d_c[35]),
        .I3(dor_w2s),
        .I4(\s_out_x_reg_reg[1] [1]),
        .O(s_msg[3]));
  (* SOFT_HLUTNM = "soft_lutpair124" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_x_reg[1]_i_2__9 
       (.I0(s_d_r[35]),
        .I1(\e[1][2] [3]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[35]));
  (* SOFT_HLUTNM = "soft_lutpair125" *) 
  LUT5 #(
    .INIT(32'h00008A80)) 
    \s_out_x_reg[1]_i_3__9 
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(s_v_r),
        .I2(o_b_r_reg_0),
        .I3(\e[1][2]_36 ),
        .I4(n_in_v_reg),
        .O(dor_w2s));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__9 
       (.I0(n_msg[0]),
        .I1(n_in_v_reg),
        .I2(w_d_c[32]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [0]),
        .O(s_msg[0]));
  (* SOFT_HLUTNM = "soft_lutpair130" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[0]_i_2__9 
       (.I0(s_d_r[32]),
        .I1(\e[1][2] [0]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__9 
       (.I0(n_msg[1]),
        .I1(n_in_v_reg),
        .I2(w_d_c[33]),
        .I3(dor_w2s),
        .I4(\s_out_y_reg_reg[1] [1]),
        .O(s_msg[1]));
  (* SOFT_HLUTNM = "soft_lutpair129" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_out_y_reg[1]_i_2__9 
       (.I0(s_d_r[33]),
        .I1(\e[1][2] [1]),
        .I2(o_b_r_reg_0),
        .O(w_d_c[33]));
  (* SOFT_HLUTNM = "soft_lutpair126" *) 
  LUT5 #(
    .INIT(32'h0000E200)) 
    s_v_r_i_1__9
       (.I0(\e[1][2]_36 ),
        .I1(o_b_r_reg_0),
        .I2(s_v_r),
        .I3(w_b_c),
        .I4(rst),
        .O(s_v_r_i_1__9_n_0));
  FDRE #(
    .INIT(1'b0)) 
    s_v_r_reg
       (.C(clk),
        .CE(1'b1),
        .D(s_v_r_i_1__9_n_0),
        .Q(s_v_r),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair125" *) 
  LUT5 #(
    .INIT(32'hFEAEAAAA)) 
    waiting_for_ack_i_4__9
       (.I0(n_in_v_reg),
        .I1(\e[1][2]_36 ),
        .I2(o_b_r_reg_0),
        .I3(s_v_r),
        .I4(\dor_bp_inst/w_b218_in ),
        .O(n_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair131" *) 
  LUT3 #(
    .INIT(8'h02)) 
    waiting_for_ack_i_6__8
       (.I0(w_v_c),
        .I1(w_b),
        .I2(\dor_bp_inst/w_b218_in ),
        .O(o_b_r_reg_2));
  LUT3 #(
    .INIT(8'h23)) 
    waiting_for_ack_i_8__10
       (.I0(\dor_bp_inst/w_b218_in ),
        .I1(w_b),
        .I2(w_v_c),
        .O(o_b_r_reg_3));
endmodule

module token_bucket
   (D,
    \i_y_r_reg[1] ,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    \i_x_r_reg[0] ,
    consume,
    waiting_for_ack_reg,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg_0,
    Q,
    waiting_for_ack_reg_1,
    waiting_for_ack_reg_2,
    waiting_for_ack_reg_3,
    rst,
    clk,
    \number_tokens_reg[0]_1 );
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output \i_x_r_reg[0] ;
  output consume;
  input waiting_for_ack_reg;
  input \i_y_r_reg[0] ;
  input waiting_for_ack_reg_0;
  input [0:0]Q;
  input [1:0]waiting_for_ack_reg_1;
  input [1:0]waiting_for_ack_reg_2;
  input waiting_for_ack_reg_3;
  input rst;
  input clk;
  input \number_tokens_reg[0]_1 ;

  wire [0:0]D;
  wire [0:0]Q;
  wire clk;
  wire consume;
  wire \i_x_r_reg[0] ;
  wire \i_y_r_reg[0] ;
  wire \i_y_r_reg[1] ;
  wire \number_tokens[0]_i_1__14_n_0 ;
  wire \number_tokens[1]_i_1__14_n_0 ;
  wire \number_tokens[1]_i_2__14_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[0]_1 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__14_n_0 ;
  wire \rate_counter[1]_i_1__14_n_0 ;
  wire \rate_counter[2]_i_1__14_n_0 ;
  wire \rate_counter[3]_i_1__14_n_0 ;
  wire \rate_counter[4]_i_1__14_n_0 ;
  wire rst;
  wire waiting_for_ack_i_7__13_n_0;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;
  wire [1:0]waiting_for_ack_reg_1;
  wire [1:0]waiting_for_ack_reg_2;
  wire waiting_for_ack_reg_3;

  LUT6 #(
    .INIT(64'hD5DF55552A20AAAA)) 
    \i_y_r[0]_i_1__14 
       (.I0(waiting_for_ack_i_7__13_n_0),
        .I1(waiting_for_ack_reg),
        .I2(\i_y_r_reg[1] ),
        .I3(\i_y_r_reg[0] ),
        .I4(waiting_for_ack_reg_0),
        .I5(Q),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair180" *) 
  LUT5 #(
    .INIT(32'h55E59959)) 
    \number_tokens[0]_i_1__14 
       (.I0(\number_tokens[1]_i_2__14_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg_0),
        .I3(\number_tokens_reg[0]_1 ),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__14_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair180" *) 
  LUT5 #(
    .INIT(32'hF400FF40)) 
    \number_tokens[1]_i_1__14 
       (.I0(\number_tokens_reg[0]_1 ),
        .I1(waiting_for_ack_reg_0),
        .I2(\number_tokens_reg[0]_0 ),
        .I3(\number_tokens_reg[1]_0 ),
        .I4(\number_tokens[1]_i_2__14_n_0 ),
        .O(\number_tokens[1]_i_1__14_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair181" *) 
  LUT5 #(
    .INIT(32'hFFFFBFFF)) 
    \number_tokens[1]_i_2__14 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[4]),
        .I4(rate_counter[3]),
        .O(\number_tokens[1]_i_2__14_n_0 ));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[0]_i_1__14_n_0 ),
        .Q(\number_tokens_reg[0]_0 ),
        .S(rst));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[1]_i_1__14_n_0 ),
        .Q(\number_tokens_reg[1]_0 ),
        .S(rst));
  (* SOFT_HLUTNM = "soft_lutpair183" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__14 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__14_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair183" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__14 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .O(\rate_counter[1]_i_1__14_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair181" *) 
  LUT5 #(
    .INIT(32'h78707878)) 
    \rate_counter[2]_i_1__14 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[2]),
        .I3(rate_counter[3]),
        .I4(rate_counter[4]),
        .O(\rate_counter[2]_i_1__14_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair182" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \rate_counter[3]_i_1__14 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[3]),
        .O(\rate_counter[3]_i_1__14_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair182" *) 
  LUT5 #(
    .INIT(32'h68AAAAAA)) 
    \rate_counter[4]_i_1__14 
       (.I0(rate_counter[4]),
        .I1(rate_counter[3]),
        .I2(rate_counter[2]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[4]_i_1__14_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[0]_i_1__14_n_0 ),
        .Q(rate_counter[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[1]_i_1__14_n_0 ),
        .Q(rate_counter[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[2] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[2]_i_1__14_n_0 ),
        .Q(rate_counter[2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[3] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[3]_i_1__14_n_0 ),
        .Q(rate_counter[3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[4] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[4]_i_1__14_n_0 ),
        .Q(rate_counter[4]),
        .R(rst));
  LUT6 #(
    .INIT(64'h0A2A0A08AAAAAAAA)) 
    waiting_for_ack_i_2__14
       (.I0(waiting_for_ack_i_7__13_n_0),
        .I1(\i_y_r_reg[1] ),
        .I2(waiting_for_ack_reg),
        .I3(\i_x_r_reg[0] ),
        .I4(waiting_for_ack_reg_3),
        .I5(waiting_for_ack_reg_0),
        .O(consume));
  LUT4 #(
    .INIT(16'h8000)) 
    waiting_for_ack_i_3__14
       (.I0(waiting_for_ack_reg_1[1]),
        .I1(waiting_for_ack_reg_1[0]),
        .I2(waiting_for_ack_reg_2[1]),
        .I3(waiting_for_ack_reg_2[0]),
        .O(\i_y_r_reg[1] ));
  LUT2 #(
    .INIT(4'h8)) 
    waiting_for_ack_i_5__14
       (.I0(waiting_for_ack_reg_2[0]),
        .I1(waiting_for_ack_reg_2[1]),
        .O(\i_x_r_reg[0] ));
  LUT2 #(
    .INIT(4'hE)) 
    waiting_for_ack_i_7__13
       (.I0(\number_tokens_reg[0]_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .O(waiting_for_ack_i_7__13_n_0));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_1
   (D,
    \i_y_r_reg[1] ,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    \i_x_r_reg[1] ,
    consume,
    waiting_for_ack_reg,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg_0,
    Q,
    waiting_for_ack_reg_1,
    waiting_for_ack_reg_2,
    waiting_for_ack_reg_3,
    rst,
    clk,
    \number_tokens_reg[0]_1 );
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output \i_x_r_reg[1] ;
  output consume;
  input waiting_for_ack_reg;
  input \i_y_r_reg[0] ;
  input waiting_for_ack_reg_0;
  input [0:0]Q;
  input [1:0]waiting_for_ack_reg_1;
  input [1:0]waiting_for_ack_reg_2;
  input waiting_for_ack_reg_3;
  input rst;
  input clk;
  input \number_tokens_reg[0]_1 ;

  wire [0:0]D;
  wire [0:0]Q;
  wire clk;
  wire consume;
  wire \i_x_r_reg[1] ;
  wire \i_y_r_reg[0] ;
  wire \i_y_r_reg[1] ;
  wire \number_tokens[0]_i_1__13_n_0 ;
  wire \number_tokens[1]_i_1__13_n_0 ;
  wire \number_tokens[1]_i_2__13_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[0]_1 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__13_n_0 ;
  wire \rate_counter[1]_i_1__13_n_0 ;
  wire \rate_counter[2]_i_1__13_n_0 ;
  wire \rate_counter[3]_i_1__13_n_0 ;
  wire \rate_counter[4]_i_1__13_n_0 ;
  wire rst;
  wire waiting_for_ack_i_7__12_n_0;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;
  wire [1:0]waiting_for_ack_reg_1;
  wire [1:0]waiting_for_ack_reg_2;
  wire waiting_for_ack_reg_3;

  LUT6 #(
    .INIT(64'hD5DF55552A20AAAA)) 
    \i_y_r[0]_i_1__13 
       (.I0(waiting_for_ack_i_7__12_n_0),
        .I1(waiting_for_ack_reg),
        .I2(\i_y_r_reg[1] ),
        .I3(\i_y_r_reg[0] ),
        .I4(waiting_for_ack_reg_0),
        .I5(Q),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair168" *) 
  LUT5 #(
    .INIT(32'h55E59959)) 
    \number_tokens[0]_i_1__13 
       (.I0(\number_tokens[1]_i_2__13_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg_0),
        .I3(\number_tokens_reg[0]_1 ),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__13_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair168" *) 
  LUT5 #(
    .INIT(32'hF400FF40)) 
    \number_tokens[1]_i_1__13 
       (.I0(\number_tokens_reg[0]_1 ),
        .I1(waiting_for_ack_reg_0),
        .I2(\number_tokens_reg[0]_0 ),
        .I3(\number_tokens_reg[1]_0 ),
        .I4(\number_tokens[1]_i_2__13_n_0 ),
        .O(\number_tokens[1]_i_1__13_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair169" *) 
  LUT5 #(
    .INIT(32'hFFFFBFFF)) 
    \number_tokens[1]_i_2__13 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[4]),
        .I4(rate_counter[3]),
        .O(\number_tokens[1]_i_2__13_n_0 ));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[0]_i_1__13_n_0 ),
        .Q(\number_tokens_reg[0]_0 ),
        .S(rst));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[1]_i_1__13_n_0 ),
        .Q(\number_tokens_reg[1]_0 ),
        .S(rst));
  (* SOFT_HLUTNM = "soft_lutpair171" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__13 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__13_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair171" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__13 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .O(\rate_counter[1]_i_1__13_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair169" *) 
  LUT5 #(
    .INIT(32'h78707878)) 
    \rate_counter[2]_i_1__13 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[2]),
        .I3(rate_counter[3]),
        .I4(rate_counter[4]),
        .O(\rate_counter[2]_i_1__13_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair170" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \rate_counter[3]_i_1__13 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[3]),
        .O(\rate_counter[3]_i_1__13_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair170" *) 
  LUT5 #(
    .INIT(32'h68AAAAAA)) 
    \rate_counter[4]_i_1__13 
       (.I0(rate_counter[4]),
        .I1(rate_counter[3]),
        .I2(rate_counter[2]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[4]_i_1__13_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[0]_i_1__13_n_0 ),
        .Q(rate_counter[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[1]_i_1__13_n_0 ),
        .Q(rate_counter[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[2] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[2]_i_1__13_n_0 ),
        .Q(rate_counter[2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[3] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[3]_i_1__13_n_0 ),
        .Q(rate_counter[3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[4] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[4]_i_1__13_n_0 ),
        .Q(rate_counter[4]),
        .R(rst));
  LUT6 #(
    .INIT(64'h0A2A0A08AAAAAAAA)) 
    waiting_for_ack_i_2__13
       (.I0(waiting_for_ack_i_7__12_n_0),
        .I1(\i_y_r_reg[1] ),
        .I2(waiting_for_ack_reg),
        .I3(\i_x_r_reg[1] ),
        .I4(waiting_for_ack_reg_3),
        .I5(waiting_for_ack_reg_0),
        .O(consume));
  LUT4 #(
    .INIT(16'h0800)) 
    waiting_for_ack_i_3__13
       (.I0(waiting_for_ack_reg_1[1]),
        .I1(waiting_for_ack_reg_1[0]),
        .I2(waiting_for_ack_reg_2[0]),
        .I3(waiting_for_ack_reg_2[1]),
        .O(\i_y_r_reg[1] ));
  LUT2 #(
    .INIT(4'h2)) 
    waiting_for_ack_i_5__13
       (.I0(waiting_for_ack_reg_2[1]),
        .I1(waiting_for_ack_reg_2[0]),
        .O(\i_x_r_reg[1] ));
  LUT2 #(
    .INIT(4'hE)) 
    waiting_for_ack_i_7__12
       (.I0(\number_tokens_reg[0]_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .O(waiting_for_ack_i_7__12_n_0));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_11
   (D,
    \i_y_r_reg[0] ,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    \i_x_r_reg[0] ,
    consume,
    waiting_for_ack_reg,
    \i_y_r_reg[0]_0 ,
    waiting_for_ack_reg_0,
    Q,
    waiting_for_ack_reg_1,
    waiting_for_ack_reg_2,
    waiting_for_ack_reg_3,
    rst,
    clk,
    \number_tokens_reg[0]_1 );
  output [0:0]D;
  output \i_y_r_reg[0] ;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output \i_x_r_reg[0] ;
  output consume;
  input waiting_for_ack_reg;
  input \i_y_r_reg[0]_0 ;
  input waiting_for_ack_reg_0;
  input [0:0]Q;
  input [1:0]waiting_for_ack_reg_1;
  input [1:0]waiting_for_ack_reg_2;
  input waiting_for_ack_reg_3;
  input rst;
  input clk;
  input \number_tokens_reg[0]_1 ;

  wire [0:0]D;
  wire [0:0]Q;
  wire clk;
  wire consume;
  wire \i_x_r_reg[0] ;
  wire \i_y_r_reg[0] ;
  wire \i_y_r_reg[0]_0 ;
  wire \number_tokens[0]_i_1__8_n_0 ;
  wire \number_tokens[1]_i_1__8_n_0 ;
  wire \number_tokens[1]_i_2__8_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[0]_1 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__8_n_0 ;
  wire \rate_counter[1]_i_1__8_n_0 ;
  wire \rate_counter[2]_i_1__8_n_0 ;
  wire \rate_counter[3]_i_1__8_n_0 ;
  wire \rate_counter[4]_i_1__8_n_0 ;
  wire rst;
  wire waiting_for_ack_i_7__7_n_0;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;
  wire [1:0]waiting_for_ack_reg_1;
  wire [1:0]waiting_for_ack_reg_2;
  wire waiting_for_ack_reg_3;

  LUT6 #(
    .INIT(64'hD5DF55552A20AAAA)) 
    \i_y_r[0]_i_1__8 
       (.I0(waiting_for_ack_i_7__7_n_0),
        .I1(waiting_for_ack_reg),
        .I2(\i_y_r_reg[0] ),
        .I3(\i_y_r_reg[0]_0 ),
        .I4(waiting_for_ack_reg_0),
        .I5(Q),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair108" *) 
  LUT5 #(
    .INIT(32'h55E59959)) 
    \number_tokens[0]_i_1__8 
       (.I0(\number_tokens[1]_i_2__8_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg_0),
        .I3(\number_tokens_reg[0]_1 ),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__8_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair108" *) 
  LUT5 #(
    .INIT(32'hF400FF40)) 
    \number_tokens[1]_i_1__8 
       (.I0(\number_tokens_reg[0]_1 ),
        .I1(waiting_for_ack_reg_0),
        .I2(\number_tokens_reg[0]_0 ),
        .I3(\number_tokens_reg[1]_0 ),
        .I4(\number_tokens[1]_i_2__8_n_0 ),
        .O(\number_tokens[1]_i_1__8_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair109" *) 
  LUT5 #(
    .INIT(32'hFFFFBFFF)) 
    \number_tokens[1]_i_2__8 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[4]),
        .I4(rate_counter[3]),
        .O(\number_tokens[1]_i_2__8_n_0 ));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[0]_i_1__8_n_0 ),
        .Q(\number_tokens_reg[0]_0 ),
        .S(rst));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[1]_i_1__8_n_0 ),
        .Q(\number_tokens_reg[1]_0 ),
        .S(rst));
  (* SOFT_HLUTNM = "soft_lutpair111" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__8 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__8_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair111" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__8 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .O(\rate_counter[1]_i_1__8_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair109" *) 
  LUT5 #(
    .INIT(32'h78707878)) 
    \rate_counter[2]_i_1__8 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[2]),
        .I3(rate_counter[3]),
        .I4(rate_counter[4]),
        .O(\rate_counter[2]_i_1__8_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair110" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \rate_counter[3]_i_1__8 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[3]),
        .O(\rate_counter[3]_i_1__8_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair110" *) 
  LUT5 #(
    .INIT(32'h68AAAAAA)) 
    \rate_counter[4]_i_1__8 
       (.I0(rate_counter[4]),
        .I1(rate_counter[3]),
        .I2(rate_counter[2]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[4]_i_1__8_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[0]_i_1__8_n_0 ),
        .Q(rate_counter[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[1]_i_1__8_n_0 ),
        .Q(rate_counter[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[2] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[2]_i_1__8_n_0 ),
        .Q(rate_counter[2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[3] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[3]_i_1__8_n_0 ),
        .Q(rate_counter[3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[4] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[4]_i_1__8_n_0 ),
        .Q(rate_counter[4]),
        .R(rst));
  LUT6 #(
    .INIT(64'h0A2A0A08AAAAAAAA)) 
    waiting_for_ack_i_2__8
       (.I0(waiting_for_ack_i_7__7_n_0),
        .I1(\i_y_r_reg[0] ),
        .I2(waiting_for_ack_reg),
        .I3(\i_x_r_reg[0] ),
        .I4(waiting_for_ack_reg_3),
        .I5(waiting_for_ack_reg_0),
        .O(consume));
  LUT4 #(
    .INIT(16'h0400)) 
    waiting_for_ack_i_3__8
       (.I0(waiting_for_ack_reg_1[0]),
        .I1(waiting_for_ack_reg_1[1]),
        .I2(waiting_for_ack_reg_2[1]),
        .I3(waiting_for_ack_reg_2[0]),
        .O(\i_y_r_reg[0] ));
  LUT2 #(
    .INIT(4'h2)) 
    waiting_for_ack_i_5__8
       (.I0(waiting_for_ack_reg_2[0]),
        .I1(waiting_for_ack_reg_2[1]),
        .O(\i_x_r_reg[0] ));
  LUT2 #(
    .INIT(4'hE)) 
    waiting_for_ack_i_7__7
       (.I0(\number_tokens_reg[0]_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .O(waiting_for_ack_i_7__7_n_0));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_13
   (D,
    \i_y_r_reg[0] ,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    \i_x_r_reg[0] ,
    consume,
    waiting_for_ack_reg,
    \i_y_r_reg[0]_0 ,
    waiting_for_ack_reg_0,
    Q,
    waiting_for_ack_reg_1,
    waiting_for_ack_reg_2,
    waiting_for_ack_reg_3,
    rst,
    clk,
    \number_tokens_reg[0]_1 );
  output [0:0]D;
  output \i_y_r_reg[0] ;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output \i_x_r_reg[0] ;
  output consume;
  input waiting_for_ack_reg;
  input \i_y_r_reg[0]_0 ;
  input waiting_for_ack_reg_0;
  input [0:0]Q;
  input [1:0]waiting_for_ack_reg_1;
  input [1:0]waiting_for_ack_reg_2;
  input waiting_for_ack_reg_3;
  input rst;
  input clk;
  input \number_tokens_reg[0]_1 ;

  wire [0:0]D;
  wire [0:0]Q;
  wire clk;
  wire consume;
  wire \i_x_r_reg[0] ;
  wire \i_y_r_reg[0] ;
  wire \i_y_r_reg[0]_0 ;
  wire \number_tokens[0]_i_1__7_n_0 ;
  wire \number_tokens[1]_i_1__7_n_0 ;
  wire \number_tokens[1]_i_2__7_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[0]_1 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__7_n_0 ;
  wire \rate_counter[1]_i_1__7_n_0 ;
  wire \rate_counter[2]_i_1__7_n_0 ;
  wire \rate_counter[3]_i_1__7_n_0 ;
  wire \rate_counter[4]_i_1__7_n_0 ;
  wire rst;
  wire waiting_for_ack_i_7__6_n_0;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;
  wire [1:0]waiting_for_ack_reg_1;
  wire [1:0]waiting_for_ack_reg_2;
  wire waiting_for_ack_reg_3;

  LUT6 #(
    .INIT(64'hD5DF55552A20AAAA)) 
    \i_y_r[0]_i_1__7 
       (.I0(waiting_for_ack_i_7__6_n_0),
        .I1(waiting_for_ack_reg),
        .I2(\i_y_r_reg[0] ),
        .I3(\i_y_r_reg[0]_0 ),
        .I4(waiting_for_ack_reg_0),
        .I5(Q),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair96" *) 
  LUT5 #(
    .INIT(32'h55E59959)) 
    \number_tokens[0]_i_1__7 
       (.I0(\number_tokens[1]_i_2__7_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg_0),
        .I3(\number_tokens_reg[0]_1 ),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__7_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair96" *) 
  LUT5 #(
    .INIT(32'hF400FF40)) 
    \number_tokens[1]_i_1__7 
       (.I0(\number_tokens_reg[0]_1 ),
        .I1(waiting_for_ack_reg_0),
        .I2(\number_tokens_reg[0]_0 ),
        .I3(\number_tokens_reg[1]_0 ),
        .I4(\number_tokens[1]_i_2__7_n_0 ),
        .O(\number_tokens[1]_i_1__7_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair97" *) 
  LUT5 #(
    .INIT(32'hFFFFBFFF)) 
    \number_tokens[1]_i_2__7 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[4]),
        .I4(rate_counter[3]),
        .O(\number_tokens[1]_i_2__7_n_0 ));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[0]_i_1__7_n_0 ),
        .Q(\number_tokens_reg[0]_0 ),
        .S(rst));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[1]_i_1__7_n_0 ),
        .Q(\number_tokens_reg[1]_0 ),
        .S(rst));
  (* SOFT_HLUTNM = "soft_lutpair99" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__7 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__7_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair99" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__7 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .O(\rate_counter[1]_i_1__7_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair97" *) 
  LUT5 #(
    .INIT(32'h78707878)) 
    \rate_counter[2]_i_1__7 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[2]),
        .I3(rate_counter[3]),
        .I4(rate_counter[4]),
        .O(\rate_counter[2]_i_1__7_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair98" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \rate_counter[3]_i_1__7 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[3]),
        .O(\rate_counter[3]_i_1__7_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair98" *) 
  LUT5 #(
    .INIT(32'h68AAAAAA)) 
    \rate_counter[4]_i_1__7 
       (.I0(rate_counter[4]),
        .I1(rate_counter[3]),
        .I2(rate_counter[2]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[4]_i_1__7_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[0]_i_1__7_n_0 ),
        .Q(rate_counter[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[1]_i_1__7_n_0 ),
        .Q(rate_counter[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[2] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[2]_i_1__7_n_0 ),
        .Q(rate_counter[2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[3] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[3]_i_1__7_n_0 ),
        .Q(rate_counter[3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[4] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[4]_i_1__7_n_0 ),
        .Q(rate_counter[4]),
        .R(rst));
  LUT6 #(
    .INIT(64'h0A2A0A08AAAAAAAA)) 
    waiting_for_ack_i_2__7
       (.I0(waiting_for_ack_i_7__6_n_0),
        .I1(\i_y_r_reg[0] ),
        .I2(waiting_for_ack_reg),
        .I3(\i_x_r_reg[0] ),
        .I4(waiting_for_ack_reg_3),
        .I5(waiting_for_ack_reg_0),
        .O(consume));
  LUT4 #(
    .INIT(16'h0004)) 
    waiting_for_ack_i_3__7
       (.I0(waiting_for_ack_reg_1[0]),
        .I1(waiting_for_ack_reg_1[1]),
        .I2(waiting_for_ack_reg_2[1]),
        .I3(waiting_for_ack_reg_2[0]),
        .O(\i_y_r_reg[0] ));
  LUT2 #(
    .INIT(4'h1)) 
    waiting_for_ack_i_5__7
       (.I0(waiting_for_ack_reg_2[0]),
        .I1(waiting_for_ack_reg_2[1]),
        .O(\i_x_r_reg[0] ));
  LUT2 #(
    .INIT(4'hE)) 
    waiting_for_ack_i_7__6
       (.I0(\number_tokens_reg[0]_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .O(waiting_for_ack_i_7__6_n_0));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_15
   (D,
    \i_y_r_reg[1] ,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    \i_x_r_reg[0] ,
    consume,
    waiting_for_ack_reg,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg_0,
    Q,
    waiting_for_ack_reg_1,
    waiting_for_ack_reg_2,
    waiting_for_ack_reg_3,
    rst,
    clk,
    \number_tokens_reg[0]_1 );
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output \i_x_r_reg[0] ;
  output consume;
  input waiting_for_ack_reg;
  input \i_y_r_reg[0] ;
  input waiting_for_ack_reg_0;
  input [0:0]Q;
  input [1:0]waiting_for_ack_reg_1;
  input [1:0]waiting_for_ack_reg_2;
  input waiting_for_ack_reg_3;
  input rst;
  input clk;
  input \number_tokens_reg[0]_1 ;

  wire [0:0]D;
  wire [0:0]Q;
  wire clk;
  wire consume;
  wire \i_x_r_reg[0] ;
  wire \i_y_r_reg[0] ;
  wire \i_y_r_reg[1] ;
  wire \number_tokens[0]_i_1__6_n_0 ;
  wire \number_tokens[1]_i_1__6_n_0 ;
  wire \number_tokens[1]_i_2__6_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[0]_1 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__6_n_0 ;
  wire \rate_counter[1]_i_1__6_n_0 ;
  wire \rate_counter[2]_i_1__6_n_0 ;
  wire \rate_counter[3]_i_1__6_n_0 ;
  wire \rate_counter[4]_i_1__6_n_0 ;
  wire rst;
  wire waiting_for_ack_i_7__5_n_0;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;
  wire [1:0]waiting_for_ack_reg_1;
  wire [1:0]waiting_for_ack_reg_2;
  wire waiting_for_ack_reg_3;

  LUT6 #(
    .INIT(64'hD5DF55552A20AAAA)) 
    \i_y_r[0]_i_1__6 
       (.I0(waiting_for_ack_i_7__5_n_0),
        .I1(waiting_for_ack_reg),
        .I2(\i_y_r_reg[1] ),
        .I3(\i_y_r_reg[0] ),
        .I4(waiting_for_ack_reg_0),
        .I5(Q),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair84" *) 
  LUT5 #(
    .INIT(32'h55E59959)) 
    \number_tokens[0]_i_1__6 
       (.I0(\number_tokens[1]_i_2__6_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg_0),
        .I3(\number_tokens_reg[0]_1 ),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair84" *) 
  LUT5 #(
    .INIT(32'hF400FF40)) 
    \number_tokens[1]_i_1__6 
       (.I0(\number_tokens_reg[0]_1 ),
        .I1(waiting_for_ack_reg_0),
        .I2(\number_tokens_reg[0]_0 ),
        .I3(\number_tokens_reg[1]_0 ),
        .I4(\number_tokens[1]_i_2__6_n_0 ),
        .O(\number_tokens[1]_i_1__6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair85" *) 
  LUT5 #(
    .INIT(32'hFFFFBFFF)) 
    \number_tokens[1]_i_2__6 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[4]),
        .I4(rate_counter[3]),
        .O(\number_tokens[1]_i_2__6_n_0 ));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[0]_i_1__6_n_0 ),
        .Q(\number_tokens_reg[0]_0 ),
        .S(rst));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[1]_i_1__6_n_0 ),
        .Q(\number_tokens_reg[1]_0 ),
        .S(rst));
  (* SOFT_HLUTNM = "soft_lutpair87" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__6 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair87" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__6 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .O(\rate_counter[1]_i_1__6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair85" *) 
  LUT5 #(
    .INIT(32'h78707878)) 
    \rate_counter[2]_i_1__6 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[2]),
        .I3(rate_counter[3]),
        .I4(rate_counter[4]),
        .O(\rate_counter[2]_i_1__6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair86" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \rate_counter[3]_i_1__6 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[3]),
        .O(\rate_counter[3]_i_1__6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair86" *) 
  LUT5 #(
    .INIT(32'h68AAAAAA)) 
    \rate_counter[4]_i_1__6 
       (.I0(rate_counter[4]),
        .I1(rate_counter[3]),
        .I2(rate_counter[2]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[4]_i_1__6_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[0]_i_1__6_n_0 ),
        .Q(rate_counter[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[1]_i_1__6_n_0 ),
        .Q(rate_counter[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[2] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[2]_i_1__6_n_0 ),
        .Q(rate_counter[2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[3] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[3]_i_1__6_n_0 ),
        .Q(rate_counter[3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[4] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[4]_i_1__6_n_0 ),
        .Q(rate_counter[4]),
        .R(rst));
  LUT6 #(
    .INIT(64'h0A2A0A08AAAAAAAA)) 
    waiting_for_ack_i_2__6
       (.I0(waiting_for_ack_i_7__5_n_0),
        .I1(\i_y_r_reg[1] ),
        .I2(waiting_for_ack_reg),
        .I3(\i_x_r_reg[0] ),
        .I4(waiting_for_ack_reg_3),
        .I5(waiting_for_ack_reg_0),
        .O(consume));
  LUT4 #(
    .INIT(16'h4000)) 
    waiting_for_ack_i_3__6
       (.I0(waiting_for_ack_reg_1[1]),
        .I1(waiting_for_ack_reg_1[0]),
        .I2(waiting_for_ack_reg_2[1]),
        .I3(waiting_for_ack_reg_2[0]),
        .O(\i_y_r_reg[1] ));
  LUT2 #(
    .INIT(4'h8)) 
    waiting_for_ack_i_5__6
       (.I0(waiting_for_ack_reg_2[0]),
        .I1(waiting_for_ack_reg_2[1]),
        .O(\i_x_r_reg[0] ));
  LUT2 #(
    .INIT(4'hE)) 
    waiting_for_ack_i_7__5
       (.I0(\number_tokens_reg[0]_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .O(waiting_for_ack_i_7__5_n_0));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_17
   (D,
    \i_y_r_reg[1] ,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    \i_x_r_reg[1] ,
    consume,
    waiting_for_ack_reg,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg_0,
    Q,
    waiting_for_ack_reg_1,
    waiting_for_ack_reg_2,
    waiting_for_ack_reg_3,
    rst,
    clk,
    \number_tokens_reg[0]_1 );
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output \i_x_r_reg[1] ;
  output consume;
  input waiting_for_ack_reg;
  input \i_y_r_reg[0] ;
  input waiting_for_ack_reg_0;
  input [0:0]Q;
  input [1:0]waiting_for_ack_reg_1;
  input [1:0]waiting_for_ack_reg_2;
  input waiting_for_ack_reg_3;
  input rst;
  input clk;
  input \number_tokens_reg[0]_1 ;

  wire [0:0]D;
  wire [0:0]Q;
  wire clk;
  wire consume;
  wire \i_x_r_reg[1] ;
  wire \i_y_r_reg[0] ;
  wire \i_y_r_reg[1] ;
  wire \number_tokens[0]_i_1__5_n_0 ;
  wire \number_tokens[1]_i_1__5_n_0 ;
  wire \number_tokens[1]_i_2__5_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[0]_1 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__5_n_0 ;
  wire \rate_counter[1]_i_1__5_n_0 ;
  wire \rate_counter[2]_i_1__5_n_0 ;
  wire \rate_counter[3]_i_1__5_n_0 ;
  wire \rate_counter[4]_i_1__5_n_0 ;
  wire rst;
  wire waiting_for_ack_i_7__4_n_0;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;
  wire [1:0]waiting_for_ack_reg_1;
  wire [1:0]waiting_for_ack_reg_2;
  wire waiting_for_ack_reg_3;

  LUT6 #(
    .INIT(64'hD5DF55552A20AAAA)) 
    \i_y_r[0]_i_1__5 
       (.I0(waiting_for_ack_i_7__4_n_0),
        .I1(waiting_for_ack_reg),
        .I2(\i_y_r_reg[1] ),
        .I3(\i_y_r_reg[0] ),
        .I4(waiting_for_ack_reg_0),
        .I5(Q),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair72" *) 
  LUT5 #(
    .INIT(32'h55E59959)) 
    \number_tokens[0]_i_1__5 
       (.I0(\number_tokens[1]_i_2__5_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg_0),
        .I3(\number_tokens_reg[0]_1 ),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair72" *) 
  LUT5 #(
    .INIT(32'hF400FF40)) 
    \number_tokens[1]_i_1__5 
       (.I0(\number_tokens_reg[0]_1 ),
        .I1(waiting_for_ack_reg_0),
        .I2(\number_tokens_reg[0]_0 ),
        .I3(\number_tokens_reg[1]_0 ),
        .I4(\number_tokens[1]_i_2__5_n_0 ),
        .O(\number_tokens[1]_i_1__5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair73" *) 
  LUT5 #(
    .INIT(32'hFFFFBFFF)) 
    \number_tokens[1]_i_2__5 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[4]),
        .I4(rate_counter[3]),
        .O(\number_tokens[1]_i_2__5_n_0 ));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[0]_i_1__5_n_0 ),
        .Q(\number_tokens_reg[0]_0 ),
        .S(rst));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[1]_i_1__5_n_0 ),
        .Q(\number_tokens_reg[1]_0 ),
        .S(rst));
  (* SOFT_HLUTNM = "soft_lutpair75" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__5 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair75" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__5 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .O(\rate_counter[1]_i_1__5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair73" *) 
  LUT5 #(
    .INIT(32'h78707878)) 
    \rate_counter[2]_i_1__5 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[2]),
        .I3(rate_counter[3]),
        .I4(rate_counter[4]),
        .O(\rate_counter[2]_i_1__5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair74" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \rate_counter[3]_i_1__5 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[3]),
        .O(\rate_counter[3]_i_1__5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair74" *) 
  LUT5 #(
    .INIT(32'h68AAAAAA)) 
    \rate_counter[4]_i_1__5 
       (.I0(rate_counter[4]),
        .I1(rate_counter[3]),
        .I2(rate_counter[2]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[4]_i_1__5_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[0]_i_1__5_n_0 ),
        .Q(rate_counter[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[1]_i_1__5_n_0 ),
        .Q(rate_counter[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[2] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[2]_i_1__5_n_0 ),
        .Q(rate_counter[2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[3] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[3]_i_1__5_n_0 ),
        .Q(rate_counter[3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[4] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[4]_i_1__5_n_0 ),
        .Q(rate_counter[4]),
        .R(rst));
  LUT6 #(
    .INIT(64'h0A2A0A08AAAAAAAA)) 
    waiting_for_ack_i_2__5
       (.I0(waiting_for_ack_i_7__4_n_0),
        .I1(\i_y_r_reg[1] ),
        .I2(waiting_for_ack_reg),
        .I3(\i_x_r_reg[1] ),
        .I4(waiting_for_ack_reg_3),
        .I5(waiting_for_ack_reg_0),
        .O(consume));
  LUT4 #(
    .INIT(16'h0400)) 
    waiting_for_ack_i_3__5
       (.I0(waiting_for_ack_reg_1[1]),
        .I1(waiting_for_ack_reg_1[0]),
        .I2(waiting_for_ack_reg_2[0]),
        .I3(waiting_for_ack_reg_2[1]),
        .O(\i_y_r_reg[1] ));
  LUT2 #(
    .INIT(4'h2)) 
    waiting_for_ack_i_5__5
       (.I0(waiting_for_ack_reg_2[1]),
        .I1(waiting_for_ack_reg_2[0]),
        .O(\i_x_r_reg[1] ));
  LUT2 #(
    .INIT(4'hE)) 
    waiting_for_ack_i_7__4
       (.I0(\number_tokens_reg[0]_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .O(waiting_for_ack_i_7__4_n_0));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_19
   (D,
    \i_y_r_reg[1] ,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    \i_x_r_reg[0] ,
    consume,
    waiting_for_ack_reg,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg_0,
    Q,
    waiting_for_ack_reg_1,
    waiting_for_ack_reg_2,
    waiting_for_ack_reg_3,
    rst,
    clk,
    \number_tokens_reg[0]_1 );
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output \i_x_r_reg[0] ;
  output consume;
  input waiting_for_ack_reg;
  input \i_y_r_reg[0] ;
  input waiting_for_ack_reg_0;
  input [0:0]Q;
  input [1:0]waiting_for_ack_reg_1;
  input [1:0]waiting_for_ack_reg_2;
  input waiting_for_ack_reg_3;
  input rst;
  input clk;
  input \number_tokens_reg[0]_1 ;

  wire [0:0]D;
  wire [0:0]Q;
  wire clk;
  wire consume;
  wire \i_x_r_reg[0] ;
  wire \i_y_r_reg[0] ;
  wire \i_y_r_reg[1] ;
  wire \number_tokens[0]_i_1__4_n_0 ;
  wire \number_tokens[1]_i_1__4_n_0 ;
  wire \number_tokens[1]_i_2__4_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[0]_1 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__4_n_0 ;
  wire \rate_counter[1]_i_1__4_n_0 ;
  wire \rate_counter[2]_i_1__4_n_0 ;
  wire \rate_counter[3]_i_1__4_n_0 ;
  wire \rate_counter[4]_i_1__4_n_0 ;
  wire rst;
  wire waiting_for_ack_i_7__3_n_0;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;
  wire [1:0]waiting_for_ack_reg_1;
  wire [1:0]waiting_for_ack_reg_2;
  wire waiting_for_ack_reg_3;

  LUT6 #(
    .INIT(64'hD5DF55552A20AAAA)) 
    \i_y_r[0]_i_1__4 
       (.I0(waiting_for_ack_i_7__3_n_0),
        .I1(waiting_for_ack_reg),
        .I2(\i_y_r_reg[1] ),
        .I3(\i_y_r_reg[0] ),
        .I4(waiting_for_ack_reg_0),
        .I5(Q),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair60" *) 
  LUT5 #(
    .INIT(32'h55E59959)) 
    \number_tokens[0]_i_1__4 
       (.I0(\number_tokens[1]_i_2__4_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg_0),
        .I3(\number_tokens_reg[0]_1 ),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair60" *) 
  LUT5 #(
    .INIT(32'hF400FF40)) 
    \number_tokens[1]_i_1__4 
       (.I0(\number_tokens_reg[0]_1 ),
        .I1(waiting_for_ack_reg_0),
        .I2(\number_tokens_reg[0]_0 ),
        .I3(\number_tokens_reg[1]_0 ),
        .I4(\number_tokens[1]_i_2__4_n_0 ),
        .O(\number_tokens[1]_i_1__4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair61" *) 
  LUT5 #(
    .INIT(32'hFFFFBFFF)) 
    \number_tokens[1]_i_2__4 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[4]),
        .I4(rate_counter[3]),
        .O(\number_tokens[1]_i_2__4_n_0 ));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[0]_i_1__4_n_0 ),
        .Q(\number_tokens_reg[0]_0 ),
        .S(rst));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[1]_i_1__4_n_0 ),
        .Q(\number_tokens_reg[1]_0 ),
        .S(rst));
  (* SOFT_HLUTNM = "soft_lutpair63" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__4 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair63" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__4 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .O(\rate_counter[1]_i_1__4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair61" *) 
  LUT5 #(
    .INIT(32'h78707878)) 
    \rate_counter[2]_i_1__4 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[2]),
        .I3(rate_counter[3]),
        .I4(rate_counter[4]),
        .O(\rate_counter[2]_i_1__4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair62" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \rate_counter[3]_i_1__4 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[3]),
        .O(\rate_counter[3]_i_1__4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair62" *) 
  LUT5 #(
    .INIT(32'h68AAAAAA)) 
    \rate_counter[4]_i_1__4 
       (.I0(rate_counter[4]),
        .I1(rate_counter[3]),
        .I2(rate_counter[2]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[4]_i_1__4_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[0]_i_1__4_n_0 ),
        .Q(rate_counter[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[1]_i_1__4_n_0 ),
        .Q(rate_counter[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[2] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[2]_i_1__4_n_0 ),
        .Q(rate_counter[2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[3] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[3]_i_1__4_n_0 ),
        .Q(rate_counter[3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[4] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[4]_i_1__4_n_0 ),
        .Q(rate_counter[4]),
        .R(rst));
  LUT6 #(
    .INIT(64'h0A2A0A08AAAAAAAA)) 
    waiting_for_ack_i_2__4
       (.I0(waiting_for_ack_i_7__3_n_0),
        .I1(\i_y_r_reg[1] ),
        .I2(waiting_for_ack_reg),
        .I3(\i_x_r_reg[0] ),
        .I4(waiting_for_ack_reg_3),
        .I5(waiting_for_ack_reg_0),
        .O(consume));
  LUT4 #(
    .INIT(16'h0400)) 
    waiting_for_ack_i_3__4
       (.I0(waiting_for_ack_reg_1[1]),
        .I1(waiting_for_ack_reg_1[0]),
        .I2(waiting_for_ack_reg_2[1]),
        .I3(waiting_for_ack_reg_2[0]),
        .O(\i_y_r_reg[1] ));
  LUT2 #(
    .INIT(4'h2)) 
    waiting_for_ack_i_5__4
       (.I0(waiting_for_ack_reg_2[0]),
        .I1(waiting_for_ack_reg_2[1]),
        .O(\i_x_r_reg[0] ));
  LUT2 #(
    .INIT(4'hE)) 
    waiting_for_ack_i_7__3
       (.I0(\number_tokens_reg[0]_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .O(waiting_for_ack_i_7__3_n_0));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_21
   (D,
    \i_y_r_reg[1] ,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    \i_x_r_reg[0] ,
    consume,
    waiting_for_ack_reg,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg_0,
    Q,
    waiting_for_ack_reg_1,
    waiting_for_ack_reg_2,
    waiting_for_ack_reg_3,
    rst,
    clk,
    \number_tokens_reg[0]_1 );
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output \i_x_r_reg[0] ;
  output consume;
  input waiting_for_ack_reg;
  input \i_y_r_reg[0] ;
  input waiting_for_ack_reg_0;
  input [0:0]Q;
  input [1:0]waiting_for_ack_reg_1;
  input [1:0]waiting_for_ack_reg_2;
  input waiting_for_ack_reg_3;
  input rst;
  input clk;
  input \number_tokens_reg[0]_1 ;

  wire [0:0]D;
  wire [0:0]Q;
  wire clk;
  wire consume;
  wire \i_x_r_reg[0] ;
  wire \i_y_r_reg[0] ;
  wire \i_y_r_reg[1] ;
  wire \number_tokens[0]_i_1__3_n_0 ;
  wire \number_tokens[1]_i_1__3_n_0 ;
  wire \number_tokens[1]_i_2__3_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[0]_1 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__3_n_0 ;
  wire \rate_counter[1]_i_1__3_n_0 ;
  wire \rate_counter[2]_i_1__3_n_0 ;
  wire \rate_counter[3]_i_1__3_n_0 ;
  wire \rate_counter[4]_i_1__3_n_0 ;
  wire rst;
  wire waiting_for_ack_i_7__2_n_0;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;
  wire [1:0]waiting_for_ack_reg_1;
  wire [1:0]waiting_for_ack_reg_2;
  wire waiting_for_ack_reg_3;

  LUT6 #(
    .INIT(64'hD5DF55552A20AAAA)) 
    \i_y_r[0]_i_1__3 
       (.I0(waiting_for_ack_i_7__2_n_0),
        .I1(waiting_for_ack_reg),
        .I2(\i_y_r_reg[1] ),
        .I3(\i_y_r_reg[0] ),
        .I4(waiting_for_ack_reg_0),
        .I5(Q),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair48" *) 
  LUT5 #(
    .INIT(32'h55E59959)) 
    \number_tokens[0]_i_1__3 
       (.I0(\number_tokens[1]_i_2__3_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg_0),
        .I3(\number_tokens_reg[0]_1 ),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair48" *) 
  LUT5 #(
    .INIT(32'hF400FF40)) 
    \number_tokens[1]_i_1__3 
       (.I0(\number_tokens_reg[0]_1 ),
        .I1(waiting_for_ack_reg_0),
        .I2(\number_tokens_reg[0]_0 ),
        .I3(\number_tokens_reg[1]_0 ),
        .I4(\number_tokens[1]_i_2__3_n_0 ),
        .O(\number_tokens[1]_i_1__3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair49" *) 
  LUT5 #(
    .INIT(32'hFFFFBFFF)) 
    \number_tokens[1]_i_2__3 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[4]),
        .I4(rate_counter[3]),
        .O(\number_tokens[1]_i_2__3_n_0 ));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[0]_i_1__3_n_0 ),
        .Q(\number_tokens_reg[0]_0 ),
        .S(rst));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[1]_i_1__3_n_0 ),
        .Q(\number_tokens_reg[1]_0 ),
        .S(rst));
  (* SOFT_HLUTNM = "soft_lutpair51" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__3 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair51" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__3 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .O(\rate_counter[1]_i_1__3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair49" *) 
  LUT5 #(
    .INIT(32'h78707878)) 
    \rate_counter[2]_i_1__3 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[2]),
        .I3(rate_counter[3]),
        .I4(rate_counter[4]),
        .O(\rate_counter[2]_i_1__3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair50" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \rate_counter[3]_i_1__3 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[3]),
        .O(\rate_counter[3]_i_1__3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair50" *) 
  LUT5 #(
    .INIT(32'h68AAAAAA)) 
    \rate_counter[4]_i_1__3 
       (.I0(rate_counter[4]),
        .I1(rate_counter[3]),
        .I2(rate_counter[2]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[4]_i_1__3_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[0]_i_1__3_n_0 ),
        .Q(rate_counter[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[1]_i_1__3_n_0 ),
        .Q(rate_counter[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[2] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[2]_i_1__3_n_0 ),
        .Q(rate_counter[2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[3] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[3]_i_1__3_n_0 ),
        .Q(rate_counter[3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[4] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[4]_i_1__3_n_0 ),
        .Q(rate_counter[4]),
        .R(rst));
  LUT6 #(
    .INIT(64'h0A2A0A08AAAAAAAA)) 
    waiting_for_ack_i_2__3
       (.I0(waiting_for_ack_i_7__2_n_0),
        .I1(\i_y_r_reg[1] ),
        .I2(waiting_for_ack_reg),
        .I3(\i_x_r_reg[0] ),
        .I4(waiting_for_ack_reg_3),
        .I5(waiting_for_ack_reg_0),
        .O(consume));
  LUT4 #(
    .INIT(16'h0004)) 
    waiting_for_ack_i_3__3
       (.I0(waiting_for_ack_reg_1[1]),
        .I1(waiting_for_ack_reg_1[0]),
        .I2(waiting_for_ack_reg_2[1]),
        .I3(waiting_for_ack_reg_2[0]),
        .O(\i_y_r_reg[1] ));
  LUT2 #(
    .INIT(4'h1)) 
    waiting_for_ack_i_5__3
       (.I0(waiting_for_ack_reg_2[0]),
        .I1(waiting_for_ack_reg_2[1]),
        .O(\i_x_r_reg[0] ));
  LUT2 #(
    .INIT(4'hE)) 
    waiting_for_ack_i_7__2
       (.I0(\number_tokens_reg[0]_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .O(waiting_for_ack_i_7__2_n_0));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_23
   (D,
    \i_y_r_reg[1] ,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    \i_x_r_reg[0] ,
    consume,
    waiting_for_ack_reg,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg_0,
    Q,
    waiting_for_ack_reg_1,
    waiting_for_ack_reg_2,
    waiting_for_ack_reg_3,
    rst,
    clk,
    \number_tokens_reg[0]_1 );
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output \i_x_r_reg[0] ;
  output consume;
  input waiting_for_ack_reg;
  input \i_y_r_reg[0] ;
  input waiting_for_ack_reg_0;
  input [0:0]Q;
  input [1:0]waiting_for_ack_reg_1;
  input [1:0]waiting_for_ack_reg_2;
  input waiting_for_ack_reg_3;
  input rst;
  input clk;
  input \number_tokens_reg[0]_1 ;

  wire [0:0]D;
  wire [0:0]Q;
  wire clk;
  wire consume;
  wire \i_x_r_reg[0] ;
  wire \i_y_r_reg[0] ;
  wire \i_y_r_reg[1] ;
  wire \number_tokens[0]_i_1__2_n_0 ;
  wire \number_tokens[1]_i_1__2_n_0 ;
  wire \number_tokens[1]_i_2__2_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[0]_1 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__2_n_0 ;
  wire \rate_counter[1]_i_1__2_n_0 ;
  wire \rate_counter[2]_i_1__2_n_0 ;
  wire \rate_counter[3]_i_1__2_n_0 ;
  wire \rate_counter[4]_i_1__2_n_0 ;
  wire rst;
  wire waiting_for_ack_i_7__1_n_0;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;
  wire [1:0]waiting_for_ack_reg_1;
  wire [1:0]waiting_for_ack_reg_2;
  wire waiting_for_ack_reg_3;

  LUT6 #(
    .INIT(64'hD5DF55552A20AAAA)) 
    \i_y_r[0]_i_1__2 
       (.I0(waiting_for_ack_i_7__1_n_0),
        .I1(waiting_for_ack_reg),
        .I2(\i_y_r_reg[1] ),
        .I3(\i_y_r_reg[0] ),
        .I4(waiting_for_ack_reg_0),
        .I5(Q),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair36" *) 
  LUT5 #(
    .INIT(32'h55E59959)) 
    \number_tokens[0]_i_1__2 
       (.I0(\number_tokens[1]_i_2__2_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg_0),
        .I3(\number_tokens_reg[0]_1 ),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair36" *) 
  LUT5 #(
    .INIT(32'hF400FF40)) 
    \number_tokens[1]_i_1__2 
       (.I0(\number_tokens_reg[0]_1 ),
        .I1(waiting_for_ack_reg_0),
        .I2(\number_tokens_reg[0]_0 ),
        .I3(\number_tokens_reg[1]_0 ),
        .I4(\number_tokens[1]_i_2__2_n_0 ),
        .O(\number_tokens[1]_i_1__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair37" *) 
  LUT5 #(
    .INIT(32'hFFFFBFFF)) 
    \number_tokens[1]_i_2__2 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[4]),
        .I4(rate_counter[3]),
        .O(\number_tokens[1]_i_2__2_n_0 ));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[0]_i_1__2_n_0 ),
        .Q(\number_tokens_reg[0]_0 ),
        .S(rst));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[1]_i_1__2_n_0 ),
        .Q(\number_tokens_reg[1]_0 ),
        .S(rst));
  (* SOFT_HLUTNM = "soft_lutpair39" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__2 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair39" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__2 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .O(\rate_counter[1]_i_1__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair37" *) 
  LUT5 #(
    .INIT(32'h78707878)) 
    \rate_counter[2]_i_1__2 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[2]),
        .I3(rate_counter[3]),
        .I4(rate_counter[4]),
        .O(\rate_counter[2]_i_1__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair38" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \rate_counter[3]_i_1__2 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[3]),
        .O(\rate_counter[3]_i_1__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair38" *) 
  LUT5 #(
    .INIT(32'h68AAAAAA)) 
    \rate_counter[4]_i_1__2 
       (.I0(rate_counter[4]),
        .I1(rate_counter[3]),
        .I2(rate_counter[2]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[4]_i_1__2_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[0]_i_1__2_n_0 ),
        .Q(rate_counter[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[1]_i_1__2_n_0 ),
        .Q(rate_counter[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[2] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[2]_i_1__2_n_0 ),
        .Q(rate_counter[2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[3] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[3]_i_1__2_n_0 ),
        .Q(rate_counter[3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[4] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[4]_i_1__2_n_0 ),
        .Q(rate_counter[4]),
        .R(rst));
  LUT6 #(
    .INIT(64'h0A2A0A08AAAAAAAA)) 
    waiting_for_ack_i_2__2
       (.I0(waiting_for_ack_i_7__1_n_0),
        .I1(\i_y_r_reg[1] ),
        .I2(waiting_for_ack_reg),
        .I3(\i_x_r_reg[0] ),
        .I4(waiting_for_ack_reg_3),
        .I5(waiting_for_ack_reg_0),
        .O(consume));
  LUT4 #(
    .INIT(16'h1000)) 
    waiting_for_ack_i_3__2
       (.I0(waiting_for_ack_reg_1[1]),
        .I1(waiting_for_ack_reg_1[0]),
        .I2(waiting_for_ack_reg_2[1]),
        .I3(waiting_for_ack_reg_2[0]),
        .O(\i_y_r_reg[1] ));
  LUT2 #(
    .INIT(4'h8)) 
    waiting_for_ack_i_5__2
       (.I0(waiting_for_ack_reg_2[0]),
        .I1(waiting_for_ack_reg_2[1]),
        .O(\i_x_r_reg[0] ));
  LUT2 #(
    .INIT(4'hE)) 
    waiting_for_ack_i_7__1
       (.I0(\number_tokens_reg[0]_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .O(waiting_for_ack_i_7__1_n_0));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_25
   (D,
    \i_y_r_reg[1] ,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    \i_x_r_reg[1] ,
    consume,
    waiting_for_ack_reg,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg_0,
    Q,
    waiting_for_ack_reg_1,
    waiting_for_ack_reg_2,
    waiting_for_ack_reg_3,
    rst,
    clk,
    \number_tokens_reg[0]_1 );
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output \i_x_r_reg[1] ;
  output consume;
  input waiting_for_ack_reg;
  input \i_y_r_reg[0] ;
  input waiting_for_ack_reg_0;
  input [0:0]Q;
  input [1:0]waiting_for_ack_reg_1;
  input [1:0]waiting_for_ack_reg_2;
  input waiting_for_ack_reg_3;
  input rst;
  input clk;
  input \number_tokens_reg[0]_1 ;

  wire [0:0]D;
  wire [0:0]Q;
  wire clk;
  wire consume;
  wire \i_x_r_reg[1] ;
  wire \i_y_r_reg[0] ;
  wire \i_y_r_reg[1] ;
  wire \number_tokens[0]_i_1__1_n_0 ;
  wire \number_tokens[1]_i_1__1_n_0 ;
  wire \number_tokens[1]_i_2__1_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[0]_1 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__1_n_0 ;
  wire \rate_counter[1]_i_1__1_n_0 ;
  wire \rate_counter[2]_i_1__1_n_0 ;
  wire \rate_counter[3]_i_1__1_n_0 ;
  wire \rate_counter[4]_i_1__1_n_0 ;
  wire rst;
  wire waiting_for_ack_i_7__0_n_0;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;
  wire [1:0]waiting_for_ack_reg_1;
  wire [1:0]waiting_for_ack_reg_2;
  wire waiting_for_ack_reg_3;

  LUT6 #(
    .INIT(64'hD5DF55552A20AAAA)) 
    \i_y_r[0]_i_1__1 
       (.I0(waiting_for_ack_i_7__0_n_0),
        .I1(waiting_for_ack_reg),
        .I2(\i_y_r_reg[1] ),
        .I3(\i_y_r_reg[0] ),
        .I4(waiting_for_ack_reg_0),
        .I5(Q),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT5 #(
    .INIT(32'h55E59959)) 
    \number_tokens[0]_i_1__1 
       (.I0(\number_tokens[1]_i_2__1_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg_0),
        .I3(\number_tokens_reg[0]_1 ),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT5 #(
    .INIT(32'hF400FF40)) 
    \number_tokens[1]_i_1__1 
       (.I0(\number_tokens_reg[0]_1 ),
        .I1(waiting_for_ack_reg_0),
        .I2(\number_tokens_reg[0]_0 ),
        .I3(\number_tokens_reg[1]_0 ),
        .I4(\number_tokens[1]_i_2__1_n_0 ),
        .O(\number_tokens[1]_i_1__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT5 #(
    .INIT(32'hFFFFBFFF)) 
    \number_tokens[1]_i_2__1 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[4]),
        .I4(rate_counter[3]),
        .O(\number_tokens[1]_i_2__1_n_0 ));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[0]_i_1__1_n_0 ),
        .Q(\number_tokens_reg[0]_0 ),
        .S(rst));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[1]_i_1__1_n_0 ),
        .Q(\number_tokens_reg[1]_0 ),
        .S(rst));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__1 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__1 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .O(\rate_counter[1]_i_1__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT5 #(
    .INIT(32'h78707878)) 
    \rate_counter[2]_i_1__1 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[2]),
        .I3(rate_counter[3]),
        .I4(rate_counter[4]),
        .O(\rate_counter[2]_i_1__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \rate_counter[3]_i_1__1 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[3]),
        .O(\rate_counter[3]_i_1__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT5 #(
    .INIT(32'h68AAAAAA)) 
    \rate_counter[4]_i_1__1 
       (.I0(rate_counter[4]),
        .I1(rate_counter[3]),
        .I2(rate_counter[2]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[4]_i_1__1_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[0]_i_1__1_n_0 ),
        .Q(rate_counter[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[1]_i_1__1_n_0 ),
        .Q(rate_counter[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[2] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[2]_i_1__1_n_0 ),
        .Q(rate_counter[2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[3] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[3]_i_1__1_n_0 ),
        .Q(rate_counter[3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[4] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[4]_i_1__1_n_0 ),
        .Q(rate_counter[4]),
        .R(rst));
  LUT6 #(
    .INIT(64'h0A2A0A08AAAAAAAA)) 
    waiting_for_ack_i_2__1
       (.I0(waiting_for_ack_i_7__0_n_0),
        .I1(\i_y_r_reg[1] ),
        .I2(waiting_for_ack_reg),
        .I3(\i_x_r_reg[1] ),
        .I4(waiting_for_ack_reg_3),
        .I5(waiting_for_ack_reg_0),
        .O(consume));
  LUT4 #(
    .INIT(16'h0100)) 
    waiting_for_ack_i_3__1
       (.I0(waiting_for_ack_reg_1[1]),
        .I1(waiting_for_ack_reg_1[0]),
        .I2(waiting_for_ack_reg_2[0]),
        .I3(waiting_for_ack_reg_2[1]),
        .O(\i_y_r_reg[1] ));
  LUT2 #(
    .INIT(4'h2)) 
    waiting_for_ack_i_5__1
       (.I0(waiting_for_ack_reg_2[1]),
        .I1(waiting_for_ack_reg_2[0]),
        .O(\i_x_r_reg[1] ));
  LUT2 #(
    .INIT(4'hE)) 
    waiting_for_ack_i_7__0
       (.I0(\number_tokens_reg[0]_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .O(waiting_for_ack_i_7__0_n_0));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_27
   (D,
    \i_y_r_reg[1] ,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    \i_x_r_reg[0] ,
    consume,
    waiting_for_ack_reg,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg_0,
    Q,
    waiting_for_ack_reg_1,
    waiting_for_ack_reg_2,
    waiting_for_ack_reg_3,
    rst,
    clk,
    \number_tokens_reg[0]_1 );
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output \i_x_r_reg[0] ;
  output consume;
  input waiting_for_ack_reg;
  input \i_y_r_reg[0] ;
  input waiting_for_ack_reg_0;
  input [0:0]Q;
  input [1:0]waiting_for_ack_reg_1;
  input [1:0]waiting_for_ack_reg_2;
  input waiting_for_ack_reg_3;
  input rst;
  input clk;
  input \number_tokens_reg[0]_1 ;

  wire [0:0]D;
  wire [0:0]Q;
  wire clk;
  wire consume;
  wire \i_x_r_reg[0] ;
  wire \i_y_r_reg[0] ;
  wire \i_y_r_reg[1] ;
  wire \number_tokens[0]_i_1__0_n_0 ;
  wire \number_tokens[1]_i_1__0_n_0 ;
  wire \number_tokens[1]_i_2__0_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[0]_1 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__0_n_0 ;
  wire \rate_counter[1]_i_1__0_n_0 ;
  wire \rate_counter[2]_i_1__0_n_0 ;
  wire \rate_counter[3]_i_1__0_n_0 ;
  wire \rate_counter[4]_i_1__0_n_0 ;
  wire rst;
  wire waiting_for_ack_i_7_n_0;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;
  wire [1:0]waiting_for_ack_reg_1;
  wire [1:0]waiting_for_ack_reg_2;
  wire waiting_for_ack_reg_3;

  LUT6 #(
    .INIT(64'hD5DF55552A20AAAA)) 
    \i_y_r[0]_i_1__0 
       (.I0(waiting_for_ack_i_7_n_0),
        .I1(waiting_for_ack_reg),
        .I2(\i_y_r_reg[1] ),
        .I3(\i_y_r_reg[0] ),
        .I4(waiting_for_ack_reg_0),
        .I5(Q),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT5 #(
    .INIT(32'h55E59959)) 
    \number_tokens[0]_i_1__0 
       (.I0(\number_tokens[1]_i_2__0_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg_0),
        .I3(\number_tokens_reg[0]_1 ),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT5 #(
    .INIT(32'hF400FF40)) 
    \number_tokens[1]_i_1__0 
       (.I0(\number_tokens_reg[0]_1 ),
        .I1(waiting_for_ack_reg_0),
        .I2(\number_tokens_reg[0]_0 ),
        .I3(\number_tokens_reg[1]_0 ),
        .I4(\number_tokens[1]_i_2__0_n_0 ),
        .O(\number_tokens[1]_i_1__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT5 #(
    .INIT(32'hFFFFBFFF)) 
    \number_tokens[1]_i_2__0 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[4]),
        .I4(rate_counter[3]),
        .O(\number_tokens[1]_i_2__0_n_0 ));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[0]_i_1__0_n_0 ),
        .Q(\number_tokens_reg[0]_0 ),
        .S(rst));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[1]_i_1__0_n_0 ),
        .Q(\number_tokens_reg[1]_0 ),
        .S(rst));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__0 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__0 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .O(\rate_counter[1]_i_1__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT5 #(
    .INIT(32'h78707878)) 
    \rate_counter[2]_i_1__0 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[2]),
        .I3(rate_counter[3]),
        .I4(rate_counter[4]),
        .O(\rate_counter[2]_i_1__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \rate_counter[3]_i_1__0 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[3]),
        .O(\rate_counter[3]_i_1__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT5 #(
    .INIT(32'h68AAAAAA)) 
    \rate_counter[4]_i_1__0 
       (.I0(rate_counter[4]),
        .I1(rate_counter[3]),
        .I2(rate_counter[2]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[4]_i_1__0_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[0]_i_1__0_n_0 ),
        .Q(rate_counter[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[1]_i_1__0_n_0 ),
        .Q(rate_counter[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[2] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[2]_i_1__0_n_0 ),
        .Q(rate_counter[2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[3] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[3]_i_1__0_n_0 ),
        .Q(rate_counter[3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[4] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[4]_i_1__0_n_0 ),
        .Q(rate_counter[4]),
        .R(rst));
  LUT6 #(
    .INIT(64'h0A2A0A08AAAAAAAA)) 
    waiting_for_ack_i_2__0
       (.I0(waiting_for_ack_i_7_n_0),
        .I1(\i_y_r_reg[1] ),
        .I2(waiting_for_ack_reg),
        .I3(\i_x_r_reg[0] ),
        .I4(waiting_for_ack_reg_3),
        .I5(waiting_for_ack_reg_0),
        .O(consume));
  LUT4 #(
    .INIT(16'h0100)) 
    waiting_for_ack_i_3__0
       (.I0(waiting_for_ack_reg_1[1]),
        .I1(waiting_for_ack_reg_1[0]),
        .I2(waiting_for_ack_reg_2[1]),
        .I3(waiting_for_ack_reg_2[0]),
        .O(\i_y_r_reg[1] ));
  LUT2 #(
    .INIT(4'h2)) 
    waiting_for_ack_i_5__0
       (.I0(waiting_for_ack_reg_2[0]),
        .I1(waiting_for_ack_reg_2[1]),
        .O(\i_x_r_reg[0] ));
  LUT2 #(
    .INIT(4'hE)) 
    waiting_for_ack_i_7
       (.I0(\number_tokens_reg[0]_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .O(waiting_for_ack_i_7_n_0));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_29
   (D,
    \i_y_r_reg[1] ,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    \i_x_r_reg[0] ,
    consume,
    waiting_for_ack_reg,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg_0,
    Q,
    waiting_for_ack_reg_1,
    waiting_for_ack_reg_2,
    waiting_for_ack_reg_3,
    rst,
    clk,
    \number_tokens_reg[0]_1 );
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output \i_x_r_reg[0] ;
  output consume;
  input waiting_for_ack_reg;
  input \i_y_r_reg[0] ;
  input waiting_for_ack_reg_0;
  input [0:0]Q;
  input [1:0]waiting_for_ack_reg_1;
  input [1:0]waiting_for_ack_reg_2;
  input waiting_for_ack_reg_3;
  input rst;
  input clk;
  input \number_tokens_reg[0]_1 ;

  wire [0:0]D;
  wire [0:0]Q;
  wire clk;
  wire consume;
  wire \i_x_r_reg[0] ;
  wire \i_y_r_reg[0] ;
  wire \i_y_r_reg[1] ;
  wire \number_tokens[0]_i_1_n_0 ;
  wire \number_tokens[1]_i_1_n_0 ;
  wire \number_tokens[1]_i_2_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[0]_1 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1_n_0 ;
  wire \rate_counter[1]_i_1_n_0 ;
  wire \rate_counter[2]_i_1_n_0 ;
  wire \rate_counter[3]_i_1_n_0 ;
  wire \rate_counter[4]_i_1_n_0 ;
  wire rst;
  wire waiting_for_ack_i_5_n_0;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;
  wire [1:0]waiting_for_ack_reg_1;
  wire [1:0]waiting_for_ack_reg_2;
  wire waiting_for_ack_reg_3;

  LUT6 #(
    .INIT(64'hD5DF55552A20AAAA)) 
    \i_y_r[0]_i_1 
       (.I0(waiting_for_ack_i_5_n_0),
        .I1(waiting_for_ack_reg),
        .I2(\i_y_r_reg[1] ),
        .I3(\i_y_r_reg[0] ),
        .I4(waiting_for_ack_reg_0),
        .I5(Q),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT5 #(
    .INIT(32'h55E59959)) 
    \number_tokens[0]_i_1 
       (.I0(\number_tokens[1]_i_2_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg_0),
        .I3(\number_tokens_reg[0]_1 ),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT5 #(
    .INIT(32'hF400FF40)) 
    \number_tokens[1]_i_1 
       (.I0(\number_tokens_reg[0]_1 ),
        .I1(waiting_for_ack_reg_0),
        .I2(\number_tokens_reg[0]_0 ),
        .I3(\number_tokens_reg[1]_0 ),
        .I4(\number_tokens[1]_i_2_n_0 ),
        .O(\number_tokens[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT5 #(
    .INIT(32'hFFFFBFFF)) 
    \number_tokens[1]_i_2 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[4]),
        .I4(rate_counter[3]),
        .O(\number_tokens[1]_i_2_n_0 ));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[0]_i_1_n_0 ),
        .Q(\number_tokens_reg[0]_0 ),
        .S(rst));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[1]_i_1_n_0 ),
        .Q(\number_tokens_reg[1]_0 ),
        .S(rst));
  LUT2 #(
    .INIT(4'h1)) 
    o_v_reg_i_3
       (.I0(waiting_for_ack_reg_2[0]),
        .I1(waiting_for_ack_reg_2[1]),
        .O(\i_x_r_reg[0] ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .O(\rate_counter[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT5 #(
    .INIT(32'h78707878)) 
    \rate_counter[2]_i_1 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[2]),
        .I3(rate_counter[3]),
        .I4(rate_counter[4]),
        .O(\rate_counter[2]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \rate_counter[3]_i_1 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[3]),
        .O(\rate_counter[3]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT5 #(
    .INIT(32'h68AAAAAA)) 
    \rate_counter[4]_i_1 
       (.I0(rate_counter[4]),
        .I1(rate_counter[3]),
        .I2(rate_counter[2]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[4]_i_1_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[0]_i_1_n_0 ),
        .Q(rate_counter[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[1]_i_1_n_0 ),
        .Q(rate_counter[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[2] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[2]_i_1_n_0 ),
        .Q(rate_counter[2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[3] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[3]_i_1_n_0 ),
        .Q(rate_counter[3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[4] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[4]_i_1_n_0 ),
        .Q(rate_counter[4]),
        .R(rst));
  LUT6 #(
    .INIT(64'h0A2A0A08AAAAAAAA)) 
    waiting_for_ack_i_2
       (.I0(waiting_for_ack_i_5_n_0),
        .I1(\i_y_r_reg[1] ),
        .I2(waiting_for_ack_reg),
        .I3(\i_x_r_reg[0] ),
        .I4(waiting_for_ack_reg_3),
        .I5(waiting_for_ack_reg_0),
        .O(consume));
  LUT4 #(
    .INIT(16'h0001)) 
    waiting_for_ack_i_3
       (.I0(waiting_for_ack_reg_1[1]),
        .I1(waiting_for_ack_reg_1[0]),
        .I2(waiting_for_ack_reg_2[1]),
        .I3(waiting_for_ack_reg_2[0]),
        .O(\i_y_r_reg[1] ));
  LUT2 #(
    .INIT(4'hE)) 
    waiting_for_ack_i_5
       (.I0(\number_tokens_reg[0]_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .O(waiting_for_ack_i_5_n_0));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_3
   (D,
    \i_y_r_reg[1] ,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    \i_x_r_reg[0] ,
    consume,
    waiting_for_ack_reg,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg_0,
    Q,
    waiting_for_ack_reg_1,
    waiting_for_ack_reg_2,
    waiting_for_ack_reg_3,
    rst,
    clk,
    \number_tokens_reg[0]_1 );
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output \i_x_r_reg[0] ;
  output consume;
  input waiting_for_ack_reg;
  input \i_y_r_reg[0] ;
  input waiting_for_ack_reg_0;
  input [0:0]Q;
  input [1:0]waiting_for_ack_reg_1;
  input [1:0]waiting_for_ack_reg_2;
  input waiting_for_ack_reg_3;
  input rst;
  input clk;
  input \number_tokens_reg[0]_1 ;

  wire [0:0]D;
  wire [0:0]Q;
  wire clk;
  wire consume;
  wire \i_x_r_reg[0] ;
  wire \i_y_r_reg[0] ;
  wire \i_y_r_reg[1] ;
  wire \number_tokens[0]_i_1__12_n_0 ;
  wire \number_tokens[1]_i_1__12_n_0 ;
  wire \number_tokens[1]_i_2__12_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[0]_1 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__12_n_0 ;
  wire \rate_counter[1]_i_1__12_n_0 ;
  wire \rate_counter[2]_i_1__12_n_0 ;
  wire \rate_counter[3]_i_1__12_n_0 ;
  wire \rate_counter[4]_i_1__12_n_0 ;
  wire rst;
  wire waiting_for_ack_i_7__11_n_0;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;
  wire [1:0]waiting_for_ack_reg_1;
  wire [1:0]waiting_for_ack_reg_2;
  wire waiting_for_ack_reg_3;

  LUT6 #(
    .INIT(64'hD5DF55552A20AAAA)) 
    \i_y_r[0]_i_1__12 
       (.I0(waiting_for_ack_i_7__11_n_0),
        .I1(waiting_for_ack_reg),
        .I2(\i_y_r_reg[1] ),
        .I3(\i_y_r_reg[0] ),
        .I4(waiting_for_ack_reg_0),
        .I5(Q),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair156" *) 
  LUT5 #(
    .INIT(32'h55E59959)) 
    \number_tokens[0]_i_1__12 
       (.I0(\number_tokens[1]_i_2__12_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg_0),
        .I3(\number_tokens_reg[0]_1 ),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__12_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair156" *) 
  LUT5 #(
    .INIT(32'hF400FF40)) 
    \number_tokens[1]_i_1__12 
       (.I0(\number_tokens_reg[0]_1 ),
        .I1(waiting_for_ack_reg_0),
        .I2(\number_tokens_reg[0]_0 ),
        .I3(\number_tokens_reg[1]_0 ),
        .I4(\number_tokens[1]_i_2__12_n_0 ),
        .O(\number_tokens[1]_i_1__12_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair157" *) 
  LUT5 #(
    .INIT(32'hFFFFBFFF)) 
    \number_tokens[1]_i_2__12 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[4]),
        .I4(rate_counter[3]),
        .O(\number_tokens[1]_i_2__12_n_0 ));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[0]_i_1__12_n_0 ),
        .Q(\number_tokens_reg[0]_0 ),
        .S(rst));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[1]_i_1__12_n_0 ),
        .Q(\number_tokens_reg[1]_0 ),
        .S(rst));
  (* SOFT_HLUTNM = "soft_lutpair159" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__12 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__12_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair159" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__12 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .O(\rate_counter[1]_i_1__12_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair157" *) 
  LUT5 #(
    .INIT(32'h78707878)) 
    \rate_counter[2]_i_1__12 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[2]),
        .I3(rate_counter[3]),
        .I4(rate_counter[4]),
        .O(\rate_counter[2]_i_1__12_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair158" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \rate_counter[3]_i_1__12 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[3]),
        .O(\rate_counter[3]_i_1__12_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair158" *) 
  LUT5 #(
    .INIT(32'h68AAAAAA)) 
    \rate_counter[4]_i_1__12 
       (.I0(rate_counter[4]),
        .I1(rate_counter[3]),
        .I2(rate_counter[2]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[4]_i_1__12_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[0]_i_1__12_n_0 ),
        .Q(rate_counter[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[1]_i_1__12_n_0 ),
        .Q(rate_counter[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[2] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[2]_i_1__12_n_0 ),
        .Q(rate_counter[2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[3] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[3]_i_1__12_n_0 ),
        .Q(rate_counter[3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[4] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[4]_i_1__12_n_0 ),
        .Q(rate_counter[4]),
        .R(rst));
  LUT6 #(
    .INIT(64'h0A2A0A08AAAAAAAA)) 
    waiting_for_ack_i_2__12
       (.I0(waiting_for_ack_i_7__11_n_0),
        .I1(\i_y_r_reg[1] ),
        .I2(waiting_for_ack_reg),
        .I3(\i_x_r_reg[0] ),
        .I4(waiting_for_ack_reg_3),
        .I5(waiting_for_ack_reg_0),
        .O(consume));
  LUT4 #(
    .INIT(16'h0800)) 
    waiting_for_ack_i_3__12
       (.I0(waiting_for_ack_reg_1[1]),
        .I1(waiting_for_ack_reg_1[0]),
        .I2(waiting_for_ack_reg_2[1]),
        .I3(waiting_for_ack_reg_2[0]),
        .O(\i_y_r_reg[1] ));
  LUT2 #(
    .INIT(4'h2)) 
    waiting_for_ack_i_5__12
       (.I0(waiting_for_ack_reg_2[0]),
        .I1(waiting_for_ack_reg_2[1]),
        .O(\i_x_r_reg[0] ));
  LUT2 #(
    .INIT(4'hE)) 
    waiting_for_ack_i_7__11
       (.I0(\number_tokens_reg[0]_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .O(waiting_for_ack_i_7__11_n_0));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_5
   (D,
    \i_y_r_reg[1] ,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    \i_x_r_reg[0] ,
    consume,
    waiting_for_ack_reg,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg_0,
    Q,
    waiting_for_ack_reg_1,
    waiting_for_ack_reg_2,
    waiting_for_ack_reg_3,
    rst,
    clk,
    \number_tokens_reg[0]_1 );
  output [0:0]D;
  output \i_y_r_reg[1] ;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output \i_x_r_reg[0] ;
  output consume;
  input waiting_for_ack_reg;
  input \i_y_r_reg[0] ;
  input waiting_for_ack_reg_0;
  input [0:0]Q;
  input [1:0]waiting_for_ack_reg_1;
  input [1:0]waiting_for_ack_reg_2;
  input waiting_for_ack_reg_3;
  input rst;
  input clk;
  input \number_tokens_reg[0]_1 ;

  wire [0:0]D;
  wire [0:0]Q;
  wire clk;
  wire consume;
  wire \i_x_r_reg[0] ;
  wire \i_y_r_reg[0] ;
  wire \i_y_r_reg[1] ;
  wire \number_tokens[0]_i_1__11_n_0 ;
  wire \number_tokens[1]_i_1__11_n_0 ;
  wire \number_tokens[1]_i_2__11_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[0]_1 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__11_n_0 ;
  wire \rate_counter[1]_i_1__11_n_0 ;
  wire \rate_counter[2]_i_1__11_n_0 ;
  wire \rate_counter[3]_i_1__11_n_0 ;
  wire \rate_counter[4]_i_1__11_n_0 ;
  wire rst;
  wire waiting_for_ack_i_7__10_n_0;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;
  wire [1:0]waiting_for_ack_reg_1;
  wire [1:0]waiting_for_ack_reg_2;
  wire waiting_for_ack_reg_3;

  LUT6 #(
    .INIT(64'hD5DF55552A20AAAA)) 
    \i_y_r[0]_i_1__11 
       (.I0(waiting_for_ack_i_7__10_n_0),
        .I1(waiting_for_ack_reg),
        .I2(\i_y_r_reg[1] ),
        .I3(\i_y_r_reg[0] ),
        .I4(waiting_for_ack_reg_0),
        .I5(Q),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair144" *) 
  LUT5 #(
    .INIT(32'h55E59959)) 
    \number_tokens[0]_i_1__11 
       (.I0(\number_tokens[1]_i_2__11_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg_0),
        .I3(\number_tokens_reg[0]_1 ),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__11_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair144" *) 
  LUT5 #(
    .INIT(32'hF400FF40)) 
    \number_tokens[1]_i_1__11 
       (.I0(\number_tokens_reg[0]_1 ),
        .I1(waiting_for_ack_reg_0),
        .I2(\number_tokens_reg[0]_0 ),
        .I3(\number_tokens_reg[1]_0 ),
        .I4(\number_tokens[1]_i_2__11_n_0 ),
        .O(\number_tokens[1]_i_1__11_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair145" *) 
  LUT5 #(
    .INIT(32'hFFFFBFFF)) 
    \number_tokens[1]_i_2__11 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[4]),
        .I4(rate_counter[3]),
        .O(\number_tokens[1]_i_2__11_n_0 ));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[0]_i_1__11_n_0 ),
        .Q(\number_tokens_reg[0]_0 ),
        .S(rst));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[1]_i_1__11_n_0 ),
        .Q(\number_tokens_reg[1]_0 ),
        .S(rst));
  (* SOFT_HLUTNM = "soft_lutpair147" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__11 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__11_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair147" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__11 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .O(\rate_counter[1]_i_1__11_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair145" *) 
  LUT5 #(
    .INIT(32'h78707878)) 
    \rate_counter[2]_i_1__11 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[2]),
        .I3(rate_counter[3]),
        .I4(rate_counter[4]),
        .O(\rate_counter[2]_i_1__11_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair146" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \rate_counter[3]_i_1__11 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[3]),
        .O(\rate_counter[3]_i_1__11_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair146" *) 
  LUT5 #(
    .INIT(32'h68AAAAAA)) 
    \rate_counter[4]_i_1__11 
       (.I0(rate_counter[4]),
        .I1(rate_counter[3]),
        .I2(rate_counter[2]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[4]_i_1__11_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[0]_i_1__11_n_0 ),
        .Q(rate_counter[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[1]_i_1__11_n_0 ),
        .Q(rate_counter[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[2] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[2]_i_1__11_n_0 ),
        .Q(rate_counter[2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[3] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[3]_i_1__11_n_0 ),
        .Q(rate_counter[3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[4] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[4]_i_1__11_n_0 ),
        .Q(rate_counter[4]),
        .R(rst));
  LUT6 #(
    .INIT(64'h0A2A0A08AAAAAAAA)) 
    waiting_for_ack_i_2__11
       (.I0(waiting_for_ack_i_7__10_n_0),
        .I1(\i_y_r_reg[1] ),
        .I2(waiting_for_ack_reg),
        .I3(\i_x_r_reg[0] ),
        .I4(waiting_for_ack_reg_3),
        .I5(waiting_for_ack_reg_0),
        .O(consume));
  LUT4 #(
    .INIT(16'h0008)) 
    waiting_for_ack_i_3__11
       (.I0(waiting_for_ack_reg_1[1]),
        .I1(waiting_for_ack_reg_1[0]),
        .I2(waiting_for_ack_reg_2[1]),
        .I3(waiting_for_ack_reg_2[0]),
        .O(\i_y_r_reg[1] ));
  LUT2 #(
    .INIT(4'h1)) 
    waiting_for_ack_i_5__11
       (.I0(waiting_for_ack_reg_2[0]),
        .I1(waiting_for_ack_reg_2[1]),
        .O(\i_x_r_reg[0] ));
  LUT2 #(
    .INIT(4'hE)) 
    waiting_for_ack_i_7__10
       (.I0(\number_tokens_reg[0]_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .O(waiting_for_ack_i_7__10_n_0));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_7
   (D,
    \i_y_r_reg[0] ,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    \i_x_r_reg[0] ,
    consume,
    waiting_for_ack_reg,
    \i_y_r_reg[0]_0 ,
    waiting_for_ack_reg_0,
    Q,
    waiting_for_ack_reg_1,
    waiting_for_ack_reg_2,
    waiting_for_ack_reg_3,
    rst,
    clk,
    \number_tokens_reg[0]_1 );
  output [0:0]D;
  output \i_y_r_reg[0] ;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output \i_x_r_reg[0] ;
  output consume;
  input waiting_for_ack_reg;
  input \i_y_r_reg[0]_0 ;
  input waiting_for_ack_reg_0;
  input [0:0]Q;
  input [1:0]waiting_for_ack_reg_1;
  input [1:0]waiting_for_ack_reg_2;
  input waiting_for_ack_reg_3;
  input rst;
  input clk;
  input \number_tokens_reg[0]_1 ;

  wire [0:0]D;
  wire [0:0]Q;
  wire clk;
  wire consume;
  wire \i_x_r_reg[0] ;
  wire \i_y_r_reg[0] ;
  wire \i_y_r_reg[0]_0 ;
  wire \number_tokens[0]_i_1__10_n_0 ;
  wire \number_tokens[1]_i_1__10_n_0 ;
  wire \number_tokens[1]_i_2__10_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[0]_1 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__10_n_0 ;
  wire \rate_counter[1]_i_1__10_n_0 ;
  wire \rate_counter[2]_i_1__10_n_0 ;
  wire \rate_counter[3]_i_1__10_n_0 ;
  wire \rate_counter[4]_i_1__10_n_0 ;
  wire rst;
  wire waiting_for_ack_i_7__9_n_0;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;
  wire [1:0]waiting_for_ack_reg_1;
  wire [1:0]waiting_for_ack_reg_2;
  wire waiting_for_ack_reg_3;

  LUT6 #(
    .INIT(64'hD5DF55552A20AAAA)) 
    \i_y_r[0]_i_1__10 
       (.I0(waiting_for_ack_i_7__9_n_0),
        .I1(waiting_for_ack_reg),
        .I2(\i_y_r_reg[0] ),
        .I3(\i_y_r_reg[0]_0 ),
        .I4(waiting_for_ack_reg_0),
        .I5(Q),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair132" *) 
  LUT5 #(
    .INIT(32'h55E59959)) 
    \number_tokens[0]_i_1__10 
       (.I0(\number_tokens[1]_i_2__10_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg_0),
        .I3(\number_tokens_reg[0]_1 ),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__10_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair132" *) 
  LUT5 #(
    .INIT(32'hF400FF40)) 
    \number_tokens[1]_i_1__10 
       (.I0(\number_tokens_reg[0]_1 ),
        .I1(waiting_for_ack_reg_0),
        .I2(\number_tokens_reg[0]_0 ),
        .I3(\number_tokens_reg[1]_0 ),
        .I4(\number_tokens[1]_i_2__10_n_0 ),
        .O(\number_tokens[1]_i_1__10_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair133" *) 
  LUT5 #(
    .INIT(32'hFFFFBFFF)) 
    \number_tokens[1]_i_2__10 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[4]),
        .I4(rate_counter[3]),
        .O(\number_tokens[1]_i_2__10_n_0 ));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[0]_i_1__10_n_0 ),
        .Q(\number_tokens_reg[0]_0 ),
        .S(rst));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[1]_i_1__10_n_0 ),
        .Q(\number_tokens_reg[1]_0 ),
        .S(rst));
  (* SOFT_HLUTNM = "soft_lutpair135" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__10 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__10_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair135" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__10 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .O(\rate_counter[1]_i_1__10_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair133" *) 
  LUT5 #(
    .INIT(32'h78707878)) 
    \rate_counter[2]_i_1__10 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[2]),
        .I3(rate_counter[3]),
        .I4(rate_counter[4]),
        .O(\rate_counter[2]_i_1__10_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair134" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \rate_counter[3]_i_1__10 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[3]),
        .O(\rate_counter[3]_i_1__10_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair134" *) 
  LUT5 #(
    .INIT(32'h68AAAAAA)) 
    \rate_counter[4]_i_1__10 
       (.I0(rate_counter[4]),
        .I1(rate_counter[3]),
        .I2(rate_counter[2]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[4]_i_1__10_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[0]_i_1__10_n_0 ),
        .Q(rate_counter[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[1]_i_1__10_n_0 ),
        .Q(rate_counter[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[2] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[2]_i_1__10_n_0 ),
        .Q(rate_counter[2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[3] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[3]_i_1__10_n_0 ),
        .Q(rate_counter[3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[4] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[4]_i_1__10_n_0 ),
        .Q(rate_counter[4]),
        .R(rst));
  LUT6 #(
    .INIT(64'h0A2A0A08AAAAAAAA)) 
    waiting_for_ack_i_2__10
       (.I0(waiting_for_ack_i_7__9_n_0),
        .I1(\i_y_r_reg[0] ),
        .I2(waiting_for_ack_reg),
        .I3(\i_x_r_reg[0] ),
        .I4(waiting_for_ack_reg_3),
        .I5(waiting_for_ack_reg_0),
        .O(consume));
  LUT4 #(
    .INIT(16'h4000)) 
    waiting_for_ack_i_3__10
       (.I0(waiting_for_ack_reg_1[0]),
        .I1(waiting_for_ack_reg_1[1]),
        .I2(waiting_for_ack_reg_2[1]),
        .I3(waiting_for_ack_reg_2[0]),
        .O(\i_y_r_reg[0] ));
  LUT2 #(
    .INIT(4'h8)) 
    waiting_for_ack_i_5__10
       (.I0(waiting_for_ack_reg_2[0]),
        .I1(waiting_for_ack_reg_2[1]),
        .O(\i_x_r_reg[0] ));
  LUT2 #(
    .INIT(4'hE)) 
    waiting_for_ack_i_7__9
       (.I0(\number_tokens_reg[0]_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .O(waiting_for_ack_i_7__9_n_0));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_9
   (D,
    \i_y_r_reg[0] ,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    \i_x_r_reg[1] ,
    consume,
    waiting_for_ack_reg,
    \i_y_r_reg[0]_0 ,
    waiting_for_ack_reg_0,
    Q,
    waiting_for_ack_reg_1,
    waiting_for_ack_reg_2,
    waiting_for_ack_reg_3,
    rst,
    clk,
    \number_tokens_reg[0]_1 );
  output [0:0]D;
  output \i_y_r_reg[0] ;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output \i_x_r_reg[1] ;
  output consume;
  input waiting_for_ack_reg;
  input \i_y_r_reg[0]_0 ;
  input waiting_for_ack_reg_0;
  input [0:0]Q;
  input [1:0]waiting_for_ack_reg_1;
  input [1:0]waiting_for_ack_reg_2;
  input waiting_for_ack_reg_3;
  input rst;
  input clk;
  input \number_tokens_reg[0]_1 ;

  wire [0:0]D;
  wire [0:0]Q;
  wire clk;
  wire consume;
  wire \i_x_r_reg[1] ;
  wire \i_y_r_reg[0] ;
  wire \i_y_r_reg[0]_0 ;
  wire \number_tokens[0]_i_1__9_n_0 ;
  wire \number_tokens[1]_i_1__9_n_0 ;
  wire \number_tokens[1]_i_2__9_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[0]_1 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__9_n_0 ;
  wire \rate_counter[1]_i_1__9_n_0 ;
  wire \rate_counter[2]_i_1__9_n_0 ;
  wire \rate_counter[3]_i_1__9_n_0 ;
  wire \rate_counter[4]_i_1__9_n_0 ;
  wire rst;
  wire waiting_for_ack_i_7__8_n_0;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;
  wire [1:0]waiting_for_ack_reg_1;
  wire [1:0]waiting_for_ack_reg_2;
  wire waiting_for_ack_reg_3;

  LUT6 #(
    .INIT(64'hD5DF55552A20AAAA)) 
    \i_y_r[0]_i_1__9 
       (.I0(waiting_for_ack_i_7__8_n_0),
        .I1(waiting_for_ack_reg),
        .I2(\i_y_r_reg[0] ),
        .I3(\i_y_r_reg[0]_0 ),
        .I4(waiting_for_ack_reg_0),
        .I5(Q),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair120" *) 
  LUT5 #(
    .INIT(32'h55E59959)) 
    \number_tokens[0]_i_1__9 
       (.I0(\number_tokens[1]_i_2__9_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg_0),
        .I3(\number_tokens_reg[0]_1 ),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__9_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair120" *) 
  LUT5 #(
    .INIT(32'hF400FF40)) 
    \number_tokens[1]_i_1__9 
       (.I0(\number_tokens_reg[0]_1 ),
        .I1(waiting_for_ack_reg_0),
        .I2(\number_tokens_reg[0]_0 ),
        .I3(\number_tokens_reg[1]_0 ),
        .I4(\number_tokens[1]_i_2__9_n_0 ),
        .O(\number_tokens[1]_i_1__9_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair121" *) 
  LUT5 #(
    .INIT(32'hFFFFBFFF)) 
    \number_tokens[1]_i_2__9 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[4]),
        .I4(rate_counter[3]),
        .O(\number_tokens[1]_i_2__9_n_0 ));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[0]_i_1__9_n_0 ),
        .Q(\number_tokens_reg[0]_0 ),
        .S(rst));
  FDSE #(
    .INIT(1'b1)) 
    \number_tokens_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\number_tokens[1]_i_1__9_n_0 ),
        .Q(\number_tokens_reg[1]_0 ),
        .S(rst));
  (* SOFT_HLUTNM = "soft_lutpair123" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__9 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__9_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair123" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__9 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .O(\rate_counter[1]_i_1__9_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair121" *) 
  LUT5 #(
    .INIT(32'h78707878)) 
    \rate_counter[2]_i_1__9 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[2]),
        .I3(rate_counter[3]),
        .I4(rate_counter[4]),
        .O(\rate_counter[2]_i_1__9_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair122" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \rate_counter[3]_i_1__9 
       (.I0(rate_counter[2]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[3]),
        .O(\rate_counter[3]_i_1__9_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair122" *) 
  LUT5 #(
    .INIT(32'h68AAAAAA)) 
    \rate_counter[4]_i_1__9 
       (.I0(rate_counter[4]),
        .I1(rate_counter[3]),
        .I2(rate_counter[2]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[4]_i_1__9_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[0]_i_1__9_n_0 ),
        .Q(rate_counter[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[1]_i_1__9_n_0 ),
        .Q(rate_counter[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[2] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[2]_i_1__9_n_0 ),
        .Q(rate_counter[2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[3] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[3]_i_1__9_n_0 ),
        .Q(rate_counter[3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \rate_counter_reg[4] 
       (.C(clk),
        .CE(1'b1),
        .D(\rate_counter[4]_i_1__9_n_0 ),
        .Q(rate_counter[4]),
        .R(rst));
  LUT6 #(
    .INIT(64'h0A2A0A08AAAAAAAA)) 
    waiting_for_ack_i_2__9
       (.I0(waiting_for_ack_i_7__8_n_0),
        .I1(\i_y_r_reg[0] ),
        .I2(waiting_for_ack_reg),
        .I3(\i_x_r_reg[1] ),
        .I4(waiting_for_ack_reg_3),
        .I5(waiting_for_ack_reg_0),
        .O(consume));
  LUT4 #(
    .INIT(16'h0400)) 
    waiting_for_ack_i_3__9
       (.I0(waiting_for_ack_reg_1[0]),
        .I1(waiting_for_ack_reg_1[1]),
        .I2(waiting_for_ack_reg_2[0]),
        .I3(waiting_for_ack_reg_2[1]),
        .O(\i_y_r_reg[0] ));
  LUT2 #(
    .INIT(4'h2)) 
    waiting_for_ack_i_5__9
       (.I0(waiting_for_ack_reg_2[1]),
        .I1(waiting_for_ack_reg_2[0]),
        .O(\i_x_r_reg[1] ));
  LUT2 #(
    .INIT(4'hE)) 
    waiting_for_ack_i_7__8
       (.I0(\number_tokens_reg[0]_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .O(waiting_for_ack_i_7__8_n_0));
endmodule

(* D_W = "32" *) (* N_PACKETS = "128" *) (* RATE = "20" *) 
(* SIGMA = "3" *) (* VC_W = "3" *) (* X_MAX = "4" *) 
(* X_W = "2" *) (* Y_MAX = "4" *) (* Y_W = "2" *) 
(* NotValidForBitStream *)
module torus_bp
   (clk,
    rst,
    out_v,
    out,
    done);
  input clk;
  input rst;
  output out_v;
  output [31:0]out;
  output done;

  wire \<const0> ;
  wire [1:1]_02_;
  wire [1:1]_02__102;
  wire [1:1]_02__113;
  wire [1:1]_02__121;
  wire [1:1]_02__130;
  wire [1:1]_02__140;
  wire [1:1]_02__16;
  wire [1:1]_02__26;
  wire [1:1]_02__37;
  wire [1:1]_02__45;
  wire [1:1]_02__54;
  wire [1:1]_02__64;
  wire [1:1]_02__7;
  wire [1:1]_02__75;
  wire [1:1]_02__83;
  wire [1:1]_02__92;
  wire [1:0]_06_;
  wire [1:0]_06__101;
  wire [1:0]_06__112;
  wire [1:0]_06__120;
  wire [1:0]_06__129;
  wire [1:0]_06__139;
  wire [1:0]_06__15;
  wire [1:0]_06__25;
  wire [1:0]_06__36;
  wire [1:0]_06__44;
  wire [1:0]_06__53;
  wire [1:0]_06__6;
  wire [1:0]_06__63;
  wire [1:0]_06__74;
  wire [1:0]_06__82;
  wire [1:0]_06__91;
  wire clk;
  wire \dor_bp_inst/e_v115_out__1 ;
  wire \dor_bp_inst/e_v115_out__1_109 ;
  wire \dor_bp_inst/e_v115_out__1_118 ;
  wire \dor_bp_inst/e_v115_out__1_127 ;
  wire \dor_bp_inst/e_v115_out__1_13 ;
  wire \dor_bp_inst/e_v115_out__1_137 ;
  wire \dor_bp_inst/e_v115_out__1_23 ;
  wire \dor_bp_inst/e_v115_out__1_33 ;
  wire \dor_bp_inst/e_v115_out__1_4 ;
  wire \dor_bp_inst/e_v115_out__1_42 ;
  wire \dor_bp_inst/e_v115_out__1_51 ;
  wire \dor_bp_inst/e_v115_out__1_61 ;
  wire \dor_bp_inst/e_v115_out__1_71 ;
  wire \dor_bp_inst/e_v115_out__1_80 ;
  wire \dor_bp_inst/e_v115_out__1_89 ;
  wire \dor_bp_inst/e_v115_out__1_99 ;
  wire \dor_bp_inst/w_b2 ;
  wire \dor_bp_inst/w_b2_103 ;
  wire \dor_bp_inst/w_b2_110 ;
  wire \dor_bp_inst/w_b2_122 ;
  wire \dor_bp_inst/w_b2_131 ;
  wire \dor_bp_inst/w_b2_141 ;
  wire \dor_bp_inst/w_b2_17 ;
  wire \dor_bp_inst/w_b2_27 ;
  wire \dor_bp_inst/w_b2_34 ;
  wire \dor_bp_inst/w_b2_46 ;
  wire \dor_bp_inst/w_b2_55 ;
  wire \dor_bp_inst/w_b2_65 ;
  wire \dor_bp_inst/w_b2_72 ;
  wire \dor_bp_inst/w_b2_8 ;
  wire \dor_bp_inst/w_b2_84 ;
  wire \dor_bp_inst/w_b2_93 ;
  wire dor_e_v;
  wire dor_e_v_0;
  wire dor_e_v_104;
  wire dor_e_v_114;
  wire dor_e_v_123;
  wire dor_e_v_132;
  wire dor_e_v_18;
  wire dor_e_v_28;
  wire dor_e_v_38;
  wire dor_e_v_47;
  wire dor_e_v_56;
  wire dor_e_v_66;
  wire dor_e_v_76;
  wire dor_e_v_85;
  wire dor_e_v_9;
  wire dor_e_v_94;
  wire dor_o_v;
  wire dor_o_v_106;
  wire dor_o_v_11;
  wire dor_o_v_116;
  wire dor_o_v_125;
  wire dor_o_v_134;
  wire dor_o_v_2;
  wire dor_o_v_20;
  wire dor_o_v_30;
  wire dor_o_v_40;
  wire dor_o_v_49;
  wire dor_o_v_58;
  wire dor_o_v_68;
  wire dor_o_v_78;
  wire dor_o_v_87;
  wire dor_o_v_96;
  wire dor_s_v;
  wire dor_s_v_1;
  wire dor_s_v_10;
  wire dor_s_v_105;
  wire dor_s_v_115;
  wire dor_s_v_124;
  wire dor_s_v_133;
  wire dor_s_v_19;
  wire dor_s_v_29;
  wire dor_s_v_39;
  wire dor_s_v_48;
  wire dor_s_v_57;
  wire dor_s_v_67;
  wire dor_s_v_77;
  wire dor_s_v_86;
  wire dor_s_v_95;
  wire dor_w2e;
  wire dor_w2e_100;
  wire dor_w2e_111;
  wire dor_w2e_119;
  wire dor_w2e_128;
  wire dor_w2e_138;
  wire dor_w2e_14;
  wire dor_w2e_24;
  wire dor_w2e_35;
  wire dor_w2e_43;
  wire dor_w2e_5;
  wire dor_w2e_52;
  wire dor_w2e_62;
  wire dor_w2e_73;
  wire dor_w2e_81;
  wire dor_w2e_90;
  wire [35:32]\e[0][0] ;
  wire \e[0][0]_36 ;
  wire [35:32]\e[0][1] ;
  wire \e[0][1]_36 ;
  wire [35:32]\e[0][2] ;
  wire \e[0][2]_36 ;
  wire [35:32]\e[0][3] ;
  wire \e[0][3]_36 ;
  wire [35:32]\e[1][0] ;
  wire \e[1][0]_36 ;
  wire [35:32]\e[1][1] ;
  wire \e[1][1]_36 ;
  wire [35:32]\e[1][2] ;
  wire \e[1][2]_36 ;
  wire [35:32]\e[1][3] ;
  wire \e[1][3]_36 ;
  wire [35:32]\e[2][0] ;
  wire \e[2][0]_36 ;
  wire [35:32]\e[2][1] ;
  wire \e[2][1]_36 ;
  wire [35:32]\e[2][2] ;
  wire \e[2][2]_36 ;
  wire [35:32]\e[2][3] ;
  wire \e[2][3]_36 ;
  wire [35:32]\e[3][0] ;
  wire \e[3][0]_36 ;
  wire [35:32]\e[3][1] ;
  wire \e[3][1]_36 ;
  wire [35:32]\e[3][2] ;
  wire \e[3][2]_36 ;
  wire [35:32]\e[3][3] ;
  wire \e[3][3]_36 ;
  wire e_v214_in;
  wire e_v214_in_108;
  wire e_v214_in_136;
  wire e_v214_in_22;
  wire e_v214_in_32;
  wire e_v214_in_60;
  wire e_v214_in_70;
  wire e_v214_in_98;
  wire [1:0]\i[0][0]_32 ;
  wire [1:0]\i[0][0]_34 ;
  wire [1:0]\i[0][1]_32 ;
  wire [1:0]\i[0][1]_34 ;
  wire [1:0]\i[0][2]_32 ;
  wire [1:0]\i[0][2]_34 ;
  wire [1:0]\i[0][3]_32 ;
  wire [1:0]\i[0][3]_34 ;
  wire [1:0]\i[1][0]_32 ;
  wire [1:0]\i[1][0]_34 ;
  wire [1:0]\i[1][1]_32 ;
  wire [1:0]\i[1][1]_34 ;
  wire [1:0]\i[1][2]_32 ;
  wire [1:0]\i[1][2]_34 ;
  wire [1:0]\i[1][3]_32 ;
  wire [1:0]\i[1][3]_34 ;
  wire [1:0]\i[2][0]_32 ;
  wire [1:0]\i[2][0]_34 ;
  wire [1:0]\i[2][1]_32 ;
  wire [1:0]\i[2][1]_34 ;
  wire [1:0]\i[2][2]_32 ;
  wire [1:0]\i[2][2]_34 ;
  wire [1:0]\i[2][3]_32 ;
  wire [1:0]\i[2][3]_34 ;
  wire [1:0]\i[3][0]_32 ;
  wire [1:0]\i[3][0]_34 ;
  wire [1:0]\i[3][1]_32 ;
  wire [1:0]\i[3][1]_34 ;
  wire [1:0]\i[3][2]_32 ;
  wire [1:0]\i[3][2]_34 ;
  wire [1:0]\i[3][3]_32 ;
  wire [1:0]\i[3][3]_34 ;
  (* RTL_KEEP = "soft" *) wire [2:0]\i_vc[0][0] ;
  (* RTL_KEEP = "soft" *) wire [2:0]\i_vc[0][1] ;
  (* RTL_KEEP = "soft" *) wire [2:0]\i_vc[0][2] ;
  (* RTL_KEEP = "soft" *) wire [2:0]\i_vc[0][3] ;
  (* RTL_KEEP = "soft" *) wire [2:0]\i_vc[1][0] ;
  (* RTL_KEEP = "soft" *) wire [2:0]\i_vc[1][1] ;
  (* RTL_KEEP = "soft" *) wire [2:0]\i_vc[1][2] ;
  (* RTL_KEEP = "soft" *) wire [2:0]\i_vc[1][3] ;
  (* RTL_KEEP = "soft" *) wire [2:0]\i_vc[2][0] ;
  (* RTL_KEEP = "soft" *) wire [2:0]\i_vc[2][1] ;
  (* RTL_KEEP = "soft" *) wire [2:0]\i_vc[2][2] ;
  (* RTL_KEEP = "soft" *) wire [2:0]\i_vc[2][3] ;
  (* RTL_KEEP = "soft" *) wire [2:0]\i_vc[3][0] ;
  (* RTL_KEEP = "soft" *) wire [2:0]\i_vc[3][1] ;
  (* RTL_KEEP = "soft" *) wire [2:0]\i_vc[3][2] ;
  (* RTL_KEEP = "soft" *) wire [2:0]\i_vc[3][3] ;
  wire out_v;
  wire [1:0]\regulator/number_tokens_reg ;
  wire [1:0]\regulator/number_tokens_reg_107 ;
  wire [1:0]\regulator/number_tokens_reg_117 ;
  wire [1:0]\regulator/number_tokens_reg_12 ;
  wire [1:0]\regulator/number_tokens_reg_126 ;
  wire [1:0]\regulator/number_tokens_reg_135 ;
  wire [1:0]\regulator/number_tokens_reg_21 ;
  wire [1:0]\regulator/number_tokens_reg_3 ;
  wire [1:0]\regulator/number_tokens_reg_31 ;
  wire [1:0]\regulator/number_tokens_reg_41 ;
  wire [1:0]\regulator/number_tokens_reg_50 ;
  wire [1:0]\regulator/number_tokens_reg_59 ;
  wire [1:0]\regulator/number_tokens_reg_69 ;
  wire [1:0]\regulator/number_tokens_reg_79 ;
  wire [1:0]\regulator/number_tokens_reg_88 ;
  wire [1:0]\regulator/number_tokens_reg_97 ;
  wire rst;
  wire [1:0]\s[0][0]_32 ;
  wire [1:0]\s[0][0]_34 ;
  wire \s[0][0]_36 ;
  wire [1:0]\s[0][1]_32 ;
  wire [1:0]\s[0][1]_34 ;
  wire \s[0][1]_36 ;
  wire [1:0]\s[0][2]_32 ;
  wire [1:0]\s[0][2]_34 ;
  wire \s[0][2]_36 ;
  wire [1:0]\s[0][3]_32 ;
  wire [1:0]\s[0][3]_34 ;
  wire \s[0][3]_36 ;
  wire [1:0]\s[1][0]_32 ;
  wire [1:0]\s[1][0]_34 ;
  wire \s[1][0]_36 ;
  wire [1:0]\s[1][1]_32 ;
  wire [1:0]\s[1][1]_34 ;
  wire \s[1][1]_36 ;
  wire [1:0]\s[1][2]_32 ;
  wire [1:0]\s[1][2]_34 ;
  wire \s[1][2]_36 ;
  wire [1:0]\s[1][3]_32 ;
  wire [1:0]\s[1][3]_34 ;
  wire \s[1][3]_36 ;
  wire [1:0]\s[2][0]_32 ;
  wire [1:0]\s[2][0]_34 ;
  wire \s[2][0]_36 ;
  wire [1:0]\s[2][1]_32 ;
  wire [1:0]\s[2][1]_34 ;
  wire \s[2][1]_36 ;
  wire [1:0]\s[2][2]_32 ;
  wire [1:0]\s[2][2]_34 ;
  wire \s[2][2]_36 ;
  wire [1:0]\s[2][3]_32 ;
  wire [1:0]\s[2][3]_34 ;
  wire \s[2][3]_36 ;
  wire [1:0]\s[3][0]_32 ;
  wire [1:0]\s[3][0]_34 ;
  wire \s[3][0]_36 ;
  wire [1:0]\s[3][1]_32 ;
  wire [1:0]\s[3][1]_34 ;
  wire \s[3][1]_36 ;
  wire [1:0]\s[3][2]_32 ;
  wire [1:0]\s[3][2]_34 ;
  wire \s[3][2]_36 ;
  wire [1:0]\s[3][3]_32 ;
  wire [1:0]\s[3][3]_34 ;
  wire \s[3][3]_36 ;
  wire \w_b[0][0] ;
  wire \w_b[0][1] ;
  wire \w_b[0][2] ;
  wire \w_b[0][3] ;
  wire \w_b[1][0] ;
  wire \w_b[1][1] ;
  wire \w_b[1][2] ;
  wire \w_b[1][3] ;
  wire \w_b[2][0] ;
  wire \w_b[2][1] ;
  wire \w_b[2][2] ;
  wire \w_b[2][3] ;
  wire \w_b[3][0] ;
  wire \w_b[3][1] ;
  wire \w_b[3][2] ;
  wire \w_b[3][3] ;
  wire \ys[0].xs[0].torus_switch_xy_n_10 ;
  wire \ys[0].xs[0].torus_switch_xy_n_11 ;
  wire \ys[0].xs[0].torus_switch_xy_n_16 ;
  wire \ys[0].xs[0].torus_switch_xy_n_17 ;
  wire \ys[0].xs[0].torus_switch_xy_n_18 ;
  wire \ys[0].xs[0].torus_switch_xy_n_7 ;
  wire \ys[0].xs[1].client_xy_n_2 ;
  wire \ys[0].xs[1].torus_switch_xy_n_10 ;
  wire \ys[0].xs[1].torus_switch_xy_n_11 ;
  wire \ys[0].xs[1].torus_switch_xy_n_15 ;
  wire \ys[0].xs[1].torus_switch_xy_n_16 ;
  wire \ys[0].xs[1].torus_switch_xy_n_17 ;
  wire \ys[0].xs[1].torus_switch_xy_n_7 ;
  wire \ys[0].xs[2].client_xy_n_2 ;
  wire \ys[0].xs[2].torus_switch_xy_n_10 ;
  wire \ys[0].xs[2].torus_switch_xy_n_11 ;
  wire \ys[0].xs[2].torus_switch_xy_n_15 ;
  wire \ys[0].xs[2].torus_switch_xy_n_16 ;
  wire \ys[0].xs[2].torus_switch_xy_n_17 ;
  wire \ys[0].xs[2].torus_switch_xy_n_7 ;
  wire \ys[0].xs[3].torus_switch_xy_n_10 ;
  wire \ys[0].xs[3].torus_switch_xy_n_11 ;
  wire \ys[0].xs[3].torus_switch_xy_n_15 ;
  wire \ys[0].xs[3].torus_switch_xy_n_16 ;
  wire \ys[0].xs[3].torus_switch_xy_n_17 ;
  wire \ys[0].xs[3].torus_switch_xy_n_7 ;
  wire \ys[1].xs[0].torus_switch_xy_n_10 ;
  wire \ys[1].xs[0].torus_switch_xy_n_15 ;
  wire \ys[1].xs[0].torus_switch_xy_n_16 ;
  wire \ys[1].xs[0].torus_switch_xy_n_17 ;
  wire \ys[1].xs[0].torus_switch_xy_n_6 ;
  wire \ys[1].xs[0].torus_switch_xy_n_9 ;
  wire \ys[1].xs[1].client_xy_n_2 ;
  wire \ys[1].xs[1].torus_switch_xy_n_10 ;
  wire \ys[1].xs[1].torus_switch_xy_n_11 ;
  wire \ys[1].xs[1].torus_switch_xy_n_15 ;
  wire \ys[1].xs[1].torus_switch_xy_n_16 ;
  wire \ys[1].xs[1].torus_switch_xy_n_17 ;
  wire \ys[1].xs[1].torus_switch_xy_n_7 ;
  wire \ys[1].xs[2].client_xy_n_2 ;
  wire \ys[1].xs[2].torus_switch_xy_n_10 ;
  wire \ys[1].xs[2].torus_switch_xy_n_11 ;
  wire \ys[1].xs[2].torus_switch_xy_n_15 ;
  wire \ys[1].xs[2].torus_switch_xy_n_16 ;
  wire \ys[1].xs[2].torus_switch_xy_n_17 ;
  wire \ys[1].xs[2].torus_switch_xy_n_7 ;
  wire \ys[1].xs[3].torus_switch_xy_n_10 ;
  wire \ys[1].xs[3].torus_switch_xy_n_11 ;
  wire \ys[1].xs[3].torus_switch_xy_n_15 ;
  wire \ys[1].xs[3].torus_switch_xy_n_16 ;
  wire \ys[1].xs[3].torus_switch_xy_n_17 ;
  wire \ys[1].xs[3].torus_switch_xy_n_7 ;
  wire \ys[2].xs[0].torus_switch_xy_n_10 ;
  wire \ys[2].xs[0].torus_switch_xy_n_15 ;
  wire \ys[2].xs[0].torus_switch_xy_n_16 ;
  wire \ys[2].xs[0].torus_switch_xy_n_17 ;
  wire \ys[2].xs[0].torus_switch_xy_n_6 ;
  wire \ys[2].xs[0].torus_switch_xy_n_9 ;
  wire \ys[2].xs[1].client_xy_n_2 ;
  wire \ys[2].xs[1].torus_switch_xy_n_10 ;
  wire \ys[2].xs[1].torus_switch_xy_n_11 ;
  wire \ys[2].xs[1].torus_switch_xy_n_15 ;
  wire \ys[2].xs[1].torus_switch_xy_n_16 ;
  wire \ys[2].xs[1].torus_switch_xy_n_17 ;
  wire \ys[2].xs[1].torus_switch_xy_n_7 ;
  wire \ys[2].xs[2].client_xy_n_2 ;
  wire \ys[2].xs[2].torus_switch_xy_n_10 ;
  wire \ys[2].xs[2].torus_switch_xy_n_11 ;
  wire \ys[2].xs[2].torus_switch_xy_n_15 ;
  wire \ys[2].xs[2].torus_switch_xy_n_16 ;
  wire \ys[2].xs[2].torus_switch_xy_n_17 ;
  wire \ys[2].xs[2].torus_switch_xy_n_7 ;
  wire \ys[2].xs[3].torus_switch_xy_n_10 ;
  wire \ys[2].xs[3].torus_switch_xy_n_11 ;
  wire \ys[2].xs[3].torus_switch_xy_n_15 ;
  wire \ys[2].xs[3].torus_switch_xy_n_16 ;
  wire \ys[2].xs[3].torus_switch_xy_n_17 ;
  wire \ys[2].xs[3].torus_switch_xy_n_7 ;
  wire \ys[3].xs[0].torus_switch_xy_n_10 ;
  wire \ys[3].xs[0].torus_switch_xy_n_15 ;
  wire \ys[3].xs[0].torus_switch_xy_n_16 ;
  wire \ys[3].xs[0].torus_switch_xy_n_17 ;
  wire \ys[3].xs[0].torus_switch_xy_n_6 ;
  wire \ys[3].xs[0].torus_switch_xy_n_9 ;
  wire \ys[3].xs[1].client_xy_n_2 ;
  wire \ys[3].xs[1].torus_switch_xy_n_10 ;
  wire \ys[3].xs[1].torus_switch_xy_n_11 ;
  wire \ys[3].xs[1].torus_switch_xy_n_15 ;
  wire \ys[3].xs[1].torus_switch_xy_n_16 ;
  wire \ys[3].xs[1].torus_switch_xy_n_17 ;
  wire \ys[3].xs[1].torus_switch_xy_n_7 ;
  wire \ys[3].xs[2].client_xy_n_2 ;
  wire \ys[3].xs[2].torus_switch_xy_n_10 ;
  wire \ys[3].xs[2].torus_switch_xy_n_11 ;
  wire \ys[3].xs[2].torus_switch_xy_n_15 ;
  wire \ys[3].xs[2].torus_switch_xy_n_16 ;
  wire \ys[3].xs[2].torus_switch_xy_n_17 ;
  wire \ys[3].xs[2].torus_switch_xy_n_7 ;
  wire \ys[3].xs[3].torus_switch_xy_n_10 ;
  wire \ys[3].xs[3].torus_switch_xy_n_11 ;
  wire \ys[3].xs[3].torus_switch_xy_n_15 ;
  wire \ys[3].xs[3].torus_switch_xy_n_16 ;
  wire \ys[3].xs[3].torus_switch_xy_n_17 ;
  wire \ys[3].xs[3].torus_switch_xy_n_7 ;

  assign done = \<const0> ;
  assign out[31] = \<const0> ;
  assign out[30] = \<const0> ;
  assign out[29] = \<const0> ;
  assign out[28] = \<const0> ;
  assign out[27] = \<const0> ;
  assign out[26] = \<const0> ;
  assign out[25] = \<const0> ;
  assign out[24] = \<const0> ;
  assign out[23] = \<const0> ;
  assign out[22] = \<const0> ;
  assign out[21] = \<const0> ;
  assign out[20] = \<const0> ;
  assign out[19] = \<const0> ;
  assign out[18] = \<const0> ;
  assign out[17] = \<const0> ;
  assign out[16] = \<const0> ;
  assign out[15] = \<const0> ;
  assign out[14] = \<const0> ;
  assign out[13] = \<const0> ;
  assign out[12] = \<const0> ;
  assign out[11] = \<const0> ;
  assign out[10] = \<const0> ;
  assign out[9] = \<const0> ;
  assign out[8] = \<const0> ;
  assign out[7] = \<const0> ;
  assign out[6] = \<const0> ;
  assign out[5] = \<const0> ;
  assign out[4] = \<const0> ;
  assign out[3] = \<const0> ;
  assign out[2] = \<const0> ;
  assign out[1] = \<const0> ;
  assign out[0] = \<const0> ;
  GND GND
       (.G(\<const0> ));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[0][0]_inst 
       (.I0(\i_vc[0][0] [0]),
        .O(\i_vc[0][0] [2]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[0][0]_inst__0 
       (.I0(\i_vc[0][0] [0]),
        .O(\i_vc[0][0] [1]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[0][1]_inst 
       (.I0(\i_vc[0][1] [0]),
        .O(\i_vc[0][1] [2]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[0][1]_inst__0 
       (.I0(\i_vc[0][1] [0]),
        .O(\i_vc[0][1] [1]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[0][2]_inst 
       (.I0(\i_vc[0][2] [0]),
        .O(\i_vc[0][2] [2]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[0][2]_inst__0 
       (.I0(\i_vc[0][2] [0]),
        .O(\i_vc[0][2] [1]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[0][3]_inst 
       (.I0(\i_vc[0][3] [0]),
        .O(\i_vc[0][3] [2]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[0][3]_inst__0 
       (.I0(\i_vc[0][3] [0]),
        .O(\i_vc[0][3] [1]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[1][0]_inst 
       (.I0(\i_vc[1][0] [0]),
        .O(\i_vc[1][0] [2]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[1][0]_inst__0 
       (.I0(\i_vc[1][0] [0]),
        .O(\i_vc[1][0] [1]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[1][1]_inst 
       (.I0(\i_vc[1][1] [0]),
        .O(\i_vc[1][1] [2]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[1][1]_inst__0 
       (.I0(\i_vc[1][1] [0]),
        .O(\i_vc[1][1] [1]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[1][2]_inst 
       (.I0(\i_vc[1][2] [0]),
        .O(\i_vc[1][2] [2]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[1][2]_inst__0 
       (.I0(\i_vc[1][2] [0]),
        .O(\i_vc[1][2] [1]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[1][3]_inst 
       (.I0(\i_vc[1][3] [0]),
        .O(\i_vc[1][3] [2]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[1][3]_inst__0 
       (.I0(\i_vc[1][3] [0]),
        .O(\i_vc[1][3] [1]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[2][0]_inst 
       (.I0(\i_vc[2][0] [0]),
        .O(\i_vc[2][0] [2]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[2][0]_inst__0 
       (.I0(\i_vc[2][0] [0]),
        .O(\i_vc[2][0] [1]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[2][1]_inst 
       (.I0(\i_vc[2][1] [0]),
        .O(\i_vc[2][1] [2]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[2][1]_inst__0 
       (.I0(\i_vc[2][1] [0]),
        .O(\i_vc[2][1] [1]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[2][2]_inst 
       (.I0(\i_vc[2][2] [0]),
        .O(\i_vc[2][2] [2]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[2][2]_inst__0 
       (.I0(\i_vc[2][2] [0]),
        .O(\i_vc[2][2] [1]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[2][3]_inst 
       (.I0(\i_vc[2][3] [0]),
        .O(\i_vc[2][3] [2]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[2][3]_inst__0 
       (.I0(\i_vc[2][3] [0]),
        .O(\i_vc[2][3] [1]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[3][0]_inst 
       (.I0(\i_vc[3][0] [0]),
        .O(\i_vc[3][0] [2]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[3][0]_inst__0 
       (.I0(\i_vc[3][0] [0]),
        .O(\i_vc[3][0] [1]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[3][1]_inst 
       (.I0(\i_vc[3][1] [0]),
        .O(\i_vc[3][1] [2]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[3][1]_inst__0 
       (.I0(\i_vc[3][1] [0]),
        .O(\i_vc[3][1] [1]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[3][2]_inst 
       (.I0(\i_vc[3][2] [0]),
        .O(\i_vc[3][2] [2]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[3][2]_inst__0 
       (.I0(\i_vc[3][2] [0]),
        .O(\i_vc[3][2] [1]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[3][3]_inst 
       (.I0(\i_vc[3][3] [0]),
        .O(\i_vc[3][3] [2]));
  LUT1 #(
    .INIT(2'h2)) 
    \i_vc[3][3]_inst__0 
       (.I0(\i_vc[3][3] [0]),
        .O(\i_vc[3][3] [1]));
  client \ys[0].xs[0].client_xy 
       (.D(_02_),
        .Q(\s[0][0]_32 [0]),
        .clk(clk),
        .dor_e_v(dor_e_v),
        .dor_o_v(dor_o_v),
        .dor_s_v(dor_s_v),
        .dor_w2e(dor_w2e),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1 ),
        .e_v214_in(e_v214_in),
        .\i[0][0]_36 (\i_vc[0][0] [0]),
        .\i_x_r_reg[1]_0 (\i[0][0]_34 ),
        .\i_x_r_reg[1]_1 (_06_),
        .\i_y_r_reg[0]_0 (\ys[0].xs[0].torus_switch_xy_n_10 ),
        .\i_y_r_reg[1]_0 (\i[0][0]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg ),
        .number_tokens_reg_0_sp_1(\ys[0].xs[0].torus_switch_xy_n_7 ),
        .o_v_reg_reg(\ys[0].xs[0].torus_switch_xy_n_17 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[0].xs[0].torus_switch_xy_n_16 ),
        .w_b(\w_b[1][0] ),
        .waiting_for_ack_reg_0(\ys[0].xs[0].torus_switch_xy_n_11 ),
        .waiting_for_ack_reg_1(\ys[0].xs[0].torus_switch_xy_n_18 ));
  torus_switch_bp \ys[0].xs[0].torus_switch_xy 
       (.D(_02_),
        .E(\dor_bp_inst/w_b2_8 ),
        .Q(\s[0][0]_32 ),
        .clk(clk),
        .dor_e_v(dor_e_v),
        .dor_o_v(dor_o_v),
        .dor_s_v(dor_s_v),
        .dor_w2e(dor_w2e),
        .\e[0][0] (\e[0][0] ),
        .\e[0][0]_36 (\e[0][0]_36 ),
        .\e[3][0] (\e[3][0] ),
        .e_out_v(\e[3][0]_36 ),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1 ),
        .e_v214_in(e_v214_in),
        .\i[0][0]_36 (\i_vc[0][0] [0]),
        .\i_y_r_reg[1] (\ys[0].xs[0].torus_switch_xy_n_7 ),
        .n_in_v(\s[0][0]_36 ),
        .n_in_v_reg_reg_0(\ys[0].xs[0].torus_switch_xy_n_10 ),
        .n_in_v_reg_reg_1(\ys[0].xs[0].torus_switch_xy_n_11 ),
        .n_in_v_reg_reg_2(\ys[0].xs[0].torus_switch_xy_n_16 ),
        .\n_in_x_reg_reg[1]_0 (\s[0][3]_34 ),
        .\n_in_y_reg_reg[1]_0 (\ys[0].xs[0].torus_switch_xy_n_17 ),
        .\n_in_y_reg_reg[1]_1 (\s[0][3]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg ),
        .o_b_r_reg(\dor_bp_inst/w_b2 ),
        .o_b_r_reg_0(\ys[0].xs[0].torus_switch_xy_n_18 ),
        .out_v(out_v),
        .rst(rst),
        .s_out_v(\s[0][3]_36 ),
        .\s_out_x_reg_reg[1]_0 (\s[0][0]_34 ),
        .\s_out_x_reg_reg[1]_1 (\i[0][0]_34 ),
        .\s_out_y_reg_reg[1]_0 (\i[0][0]_32 ),
        .w_b(\w_b[1][0] ),
        .\w_b[0][0] (\w_b[0][0] ),
        .waiting_for_ack_reg(_06_));
  client__parameterized0 \ys[0].xs[1].client_xy 
       (.D(_02__7),
        .Q(\s[1][0]_32 [0]),
        .clk(clk),
        .dor_e_v(dor_e_v_0),
        .dor_o_v(dor_o_v_2),
        .dor_s_v(dor_s_v_1),
        .dor_w2e(dor_w2e_5),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_4 ),
        .\i[1][0]_36 (\i_vc[1][0] [0]),
        .\i_x_r_reg[0]_0 (\ys[0].xs[1].client_xy_n_2 ),
        .\i_x_r_reg[1]_0 (\i[1][0]_34 ),
        .\i_x_r_reg[1]_1 (_06__6),
        .\i_y_r_reg[0]_0 (\ys[0].xs[1].torus_switch_xy_n_10 ),
        .\i_y_r_reg[1]_0 (\i[1][0]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_3 ),
        .number_tokens_reg_0_sp_1(\ys[0].xs[1].torus_switch_xy_n_7 ),
        .o_v_reg_reg(\ys[0].xs[1].torus_switch_xy_n_16 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[0].xs[1].torus_switch_xy_n_15 ),
        .w_b(\w_b[2][0] ),
        .waiting_for_ack_reg_0(\ys[0].xs[1].torus_switch_xy_n_11 ),
        .waiting_for_ack_reg_1(\ys[0].xs[1].torus_switch_xy_n_17 ));
  torus_switch_bp__parameterized0 \ys[0].xs[1].torus_switch_xy 
       (.D(_02__7),
        .E(\dor_bp_inst/w_b2_17 ),
        .Q(\s[1][0]_32 ),
        .clk(clk),
        .dor_e_v(dor_e_v_0),
        .dor_o_v(dor_o_v_2),
        .dor_s_v(dor_s_v_1),
        .dor_w2e(dor_w2e_5),
        .\e[0][0] (\e[0][0] ),
        .\e[0][0]_36 (\e[0][0]_36 ),
        .\e[1][0] (\e[1][0] ),
        .\e[1][0]_36 (\e[1][0]_36 ),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_4 ),
        .\i[1][0]_36 (\i_vc[1][0] [0]),
        .\i_x_r_reg[0] (\ys[0].xs[1].client_xy_n_2 ),
        .\i_y_r_reg[1] (\ys[0].xs[1].torus_switch_xy_n_7 ),
        .n_in_v(\s[1][0]_36 ),
        .n_in_v_reg_reg_0(\ys[0].xs[1].torus_switch_xy_n_10 ),
        .n_in_v_reg_reg_1(\ys[0].xs[1].torus_switch_xy_n_11 ),
        .n_in_v_reg_reg_2(\ys[0].xs[1].torus_switch_xy_n_15 ),
        .\n_in_x_reg_reg[1]_0 (\s[1][3]_34 ),
        .\n_in_y_reg_reg[1]_0 (\ys[0].xs[1].torus_switch_xy_n_16 ),
        .\n_in_y_reg_reg[1]_1 (\s[1][3]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_3 ),
        .o_b_r_reg(\dor_bp_inst/w_b2_8 ),
        .o_b_r_reg_0(\ys[0].xs[1].torus_switch_xy_n_17 ),
        .o_b_r_reg_1(\w_b[2][0] ),
        .rst(rst),
        .s_out_v(\s[1][3]_36 ),
        .\s_out_x_reg_reg[1]_0 (\s[1][0]_34 ),
        .\s_out_x_reg_reg[1]_1 (\i[1][0]_34 ),
        .\s_out_y_reg_reg[1]_0 (\i[1][0]_32 ),
        .w_b(\w_b[1][0] ),
        .waiting_for_ack_reg(_06__6));
  client__parameterized1 \ys[0].xs[2].client_xy 
       (.D(_02__16),
        .Q(\s[2][0]_32 [0]),
        .clk(clk),
        .dor_e_v(dor_e_v_9),
        .dor_o_v(dor_o_v_11),
        .dor_s_v(dor_s_v_10),
        .dor_w2e(dor_w2e_14),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_13 ),
        .\i[2][0]_36 (\i_vc[2][0] [0]),
        .\i_x_r_reg[1]_0 (\ys[0].xs[2].client_xy_n_2 ),
        .\i_x_r_reg[1]_1 (\i[2][0]_34 ),
        .\i_x_r_reg[1]_2 (_06__15),
        .\i_y_r_reg[0]_0 (\ys[0].xs[2].torus_switch_xy_n_10 ),
        .\i_y_r_reg[1]_0 (\i[2][0]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_12 ),
        .number_tokens_reg_0_sp_1(\ys[0].xs[2].torus_switch_xy_n_7 ),
        .o_v_reg_reg(\ys[0].xs[2].torus_switch_xy_n_16 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[0].xs[2].torus_switch_xy_n_15 ),
        .w_b(\w_b[3][0] ),
        .waiting_for_ack_reg_0(\ys[0].xs[2].torus_switch_xy_n_11 ),
        .waiting_for_ack_reg_1(\ys[0].xs[2].torus_switch_xy_n_17 ));
  torus_switch_bp__parameterized1 \ys[0].xs[2].torus_switch_xy 
       (.D(_02__16),
        .E(\dor_bp_inst/w_b2_27 ),
        .Q(\s[2][0]_32 ),
        .clk(clk),
        .dor_e_v(dor_e_v_9),
        .dor_o_v(dor_o_v_11),
        .dor_s_v(dor_s_v_10),
        .dor_w2e(dor_w2e_14),
        .\e[1][0] (\e[1][0] ),
        .\e[1][0]_36 (\e[1][0]_36 ),
        .\e[2][0] (\e[2][0] ),
        .\e[2][0]_36 (\e[2][0]_36 ),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_13 ),
        .\i[2][0]_36 (\i_vc[2][0] [0]),
        .\i_x_r_reg[0] (\ys[0].xs[2].client_xy_n_2 ),
        .\i_y_r_reg[1] (\ys[0].xs[2].torus_switch_xy_n_7 ),
        .n_in_v(\s[2][0]_36 ),
        .n_in_v_reg_reg_0(\ys[0].xs[2].torus_switch_xy_n_10 ),
        .n_in_v_reg_reg_1(\ys[0].xs[2].torus_switch_xy_n_11 ),
        .n_in_v_reg_reg_2(\ys[0].xs[2].torus_switch_xy_n_15 ),
        .\n_in_x_reg_reg[1]_0 (\s[2][3]_34 ),
        .\n_in_y_reg_reg[1]_0 (\ys[0].xs[2].torus_switch_xy_n_16 ),
        .\n_in_y_reg_reg[1]_1 (\s[2][3]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_12 ),
        .o_b_r_reg(\w_b[2][0] ),
        .o_b_r_reg_0(\dor_bp_inst/w_b2_17 ),
        .o_b_r_reg_1(\ys[0].xs[2].torus_switch_xy_n_17 ),
        .rst(rst),
        .s_out_v(\s[2][3]_36 ),
        .\s_out_x_reg_reg[1]_0 (\s[2][0]_34 ),
        .\s_out_x_reg_reg[1]_1 (\i[2][0]_34 ),
        .\s_out_y_reg_reg[1]_0 (\i[2][0]_32 ),
        .w_b(\w_b[3][0] ),
        .waiting_for_ack_reg(_06__15));
  client__parameterized2 \ys[0].xs[3].client_xy 
       (.D(_02__26),
        .Q(\s[3][0]_32 [0]),
        .clk(clk),
        .dor_e_v(dor_e_v_18),
        .dor_o_v(dor_o_v_20),
        .dor_s_v(dor_s_v_19),
        .dor_w2e(dor_w2e_24),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_23 ),
        .e_v214_in(e_v214_in_22),
        .\i[3][0]_36 (\i_vc[3][0] [0]),
        .\i_x_r_reg[1]_0 (\i[3][0]_34 ),
        .\i_x_r_reg[1]_1 (_06__25),
        .\i_y_r_reg[0]_0 (\ys[0].xs[3].torus_switch_xy_n_10 ),
        .\i_y_r_reg[1]_0 (\i[3][0]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_21 ),
        .number_tokens_reg_0_sp_1(\ys[0].xs[3].torus_switch_xy_n_7 ),
        .o_v_reg_reg(\ys[0].xs[3].torus_switch_xy_n_15 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[0].xs[3].torus_switch_xy_n_16 ),
        .\w_b[0][0] (\w_b[0][0] ),
        .waiting_for_ack_reg_0(\ys[0].xs[3].torus_switch_xy_n_11 ),
        .waiting_for_ack_reg_1(\ys[0].xs[3].torus_switch_xy_n_17 ));
  torus_switch_bp__parameterized2 \ys[0].xs[3].torus_switch_xy 
       (.D(_02__26),
        .E(\dor_bp_inst/w_b2 ),
        .Q(\s[3][0]_32 ),
        .clk(clk),
        .dor_e_v(dor_e_v_18),
        .dor_o_v(dor_o_v_20),
        .dor_s_v(dor_s_v_19),
        .dor_w2e(dor_w2e_24),
        .\e[2][0] (\e[2][0] ),
        .\e[2][0]_36 (\e[2][0]_36 ),
        .\e[3][0] (\e[3][0] ),
        .e_out_v(\e[3][0]_36 ),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_23 ),
        .e_v214_in(e_v214_in_22),
        .\i[3][0]_36 (\i_vc[3][0] [0]),
        .\i_y_r_reg[1] (\ys[0].xs[3].torus_switch_xy_n_7 ),
        .n_in_v(\s[3][0]_36 ),
        .n_in_v_reg_reg_0(\ys[0].xs[3].torus_switch_xy_n_10 ),
        .n_in_v_reg_reg_1(\ys[0].xs[3].torus_switch_xy_n_11 ),
        .n_in_v_reg_reg_2(\ys[0].xs[3].torus_switch_xy_n_16 ),
        .\n_in_x_reg_reg[1]_0 (\s[3][3]_34 ),
        .\n_in_y_reg_reg[1]_0 (\ys[0].xs[3].torus_switch_xy_n_15 ),
        .\n_in_y_reg_reg[1]_1 (\s[3][3]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_21 ),
        .o_b_r_reg(\dor_bp_inst/w_b2_27 ),
        .o_b_r_reg_0(\ys[0].xs[3].torus_switch_xy_n_17 ),
        .rst(rst),
        .s_out_v(\s[3][3]_36 ),
        .\s_out_x_reg_reg[1]_0 (\s[3][0]_34 ),
        .\s_out_x_reg_reg[1]_1 (\i[3][0]_34 ),
        .\s_out_y_reg_reg[1]_0 (\i[3][0]_32 ),
        .w_b(\w_b[3][0] ),
        .\w_b[0][0] (\w_b[0][0] ),
        .waiting_for_ack_reg(_06__25));
  client__parameterized3 \ys[1].xs[0].client_xy 
       (.D(_02__37),
        .Q(\s[0][1]_32 [0]),
        .clk(clk),
        .dor_e_v(dor_e_v_28),
        .dor_o_v(dor_o_v_30),
        .dor_s_v(dor_s_v_29),
        .dor_w2e(dor_w2e_35),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_33 ),
        .e_v214_in(e_v214_in_32),
        .\i[0][1]_36 (\i_vc[0][1] [0]),
        .\i_x_r_reg[1]_0 (\i[0][1]_34 ),
        .\i_x_r_reg[1]_1 (_06__36),
        .\i_y_r_reg[0]_0 (\ys[1].xs[0].torus_switch_xy_n_9 ),
        .\i_y_r_reg[1]_0 (\i[0][1]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_31 ),
        .number_tokens_reg_0_sp_1(\ys[1].xs[0].torus_switch_xy_n_6 ),
        .o_v_reg_reg(\ys[1].xs[0].torus_switch_xy_n_16 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[1].xs[0].torus_switch_xy_n_15 ),
        .w_b(\w_b[1][1] ),
        .waiting_for_ack_reg_0(\ys[1].xs[0].torus_switch_xy_n_10 ),
        .waiting_for_ack_reg_1(\ys[1].xs[0].torus_switch_xy_n_17 ));
  torus_switch_bp__parameterized3 \ys[1].xs[0].torus_switch_xy 
       (.D(_02__37),
        .E(\dor_bp_inst/w_b2_46 ),
        .Q(\s[0][1]_32 ),
        .clk(clk),
        .dor_e_v(dor_e_v_28),
        .dor_o_v(dor_o_v_30),
        .dor_s_v(dor_s_v_29),
        .dor_w2e(dor_w2e_35),
        .\e[0][1] (\e[0][1] ),
        .\e[0][1]_36 (\e[0][1]_36 ),
        .\e[3][1] (\e[3][1] ),
        .e_out_v(\e[3][1]_36 ),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_33 ),
        .e_v214_in(e_v214_in_32),
        .\i[0][1]_36 (\i_vc[0][1] [0]),
        .\i_y_r_reg[1] (\ys[1].xs[0].torus_switch_xy_n_6 ),
        .n_in_v(\s[0][1]_36 ),
        .n_in_v_reg_reg_0(\ys[1].xs[0].torus_switch_xy_n_9 ),
        .n_in_v_reg_reg_1(\ys[1].xs[0].torus_switch_xy_n_10 ),
        .n_in_v_reg_reg_2(\ys[1].xs[0].torus_switch_xy_n_15 ),
        .n_in_v_reg_reg_3(\ys[1].xs[0].torus_switch_xy_n_16 ),
        .n_in_v_reg_reg_4(\s[0][0]_36 ),
        .\n_in_x_reg_reg[1]_0 (\s[0][0]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[0][0]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_31 ),
        .o_b_r_reg(\dor_bp_inst/w_b2_34 ),
        .o_b_r_reg_0(\ys[1].xs[0].torus_switch_xy_n_17 ),
        .rst(rst),
        .\s_out_x_reg_reg[1]_0 (\s[0][1]_34 ),
        .\s_out_x_reg_reg[1]_1 (\i[0][1]_34 ),
        .\s_out_y_reg_reg[1]_0 (\i[0][1]_32 ),
        .w_b(\w_b[1][1] ),
        .\w_b[0][1] (\w_b[0][1] ),
        .waiting_for_ack_reg(_06__36));
  client__parameterized4 \ys[1].xs[1].client_xy 
       (.D(_02__45),
        .Q(\s[1][1]_32 [0]),
        .clk(clk),
        .dor_e_v(dor_e_v_38),
        .dor_o_v(dor_o_v_40),
        .dor_s_v(dor_s_v_39),
        .dor_w2e(dor_w2e_43),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_42 ),
        .\i[1][1]_36 (\i_vc[1][1] [0]),
        .\i_x_r_reg[0]_0 (\ys[1].xs[1].client_xy_n_2 ),
        .\i_x_r_reg[1]_0 (\i[1][1]_34 ),
        .\i_x_r_reg[1]_1 (_06__44),
        .\i_y_r_reg[0]_0 (\ys[1].xs[1].torus_switch_xy_n_10 ),
        .\i_y_r_reg[1]_0 (\i[1][1]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_41 ),
        .number_tokens_reg_0_sp_1(\ys[1].xs[1].torus_switch_xy_n_7 ),
        .o_v_reg_reg(\ys[1].xs[1].torus_switch_xy_n_16 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[1].xs[1].torus_switch_xy_n_15 ),
        .w_b(\w_b[2][1] ),
        .waiting_for_ack_reg_0(\ys[1].xs[1].torus_switch_xy_n_11 ),
        .waiting_for_ack_reg_1(\ys[1].xs[1].torus_switch_xy_n_17 ));
  torus_switch_bp__parameterized4 \ys[1].xs[1].torus_switch_xy 
       (.D(_02__45),
        .E(\dor_bp_inst/w_b2_55 ),
        .Q(\s[1][1]_32 ),
        .clk(clk),
        .dor_e_v(dor_e_v_38),
        .dor_o_v(dor_o_v_40),
        .dor_s_v(dor_s_v_39),
        .dor_w2e(dor_w2e_43),
        .\e[0][1] (\e[0][1] ),
        .\e[0][1]_36 (\e[0][1]_36 ),
        .\e[1][1] (\e[1][1] ),
        .\e[1][1]_36 (\e[1][1]_36 ),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_42 ),
        .\i[1][1]_36 (\i_vc[1][1] [0]),
        .\i_x_r_reg[0] (\ys[1].xs[1].client_xy_n_2 ),
        .\i_y_r_reg[1] (\ys[1].xs[1].torus_switch_xy_n_7 ),
        .n_in_v(\s[1][1]_36 ),
        .n_in_v_reg_reg_0(\ys[1].xs[1].torus_switch_xy_n_10 ),
        .n_in_v_reg_reg_1(\ys[1].xs[1].torus_switch_xy_n_11 ),
        .n_in_v_reg_reg_2(\ys[1].xs[1].torus_switch_xy_n_15 ),
        .n_in_v_reg_reg_3(\ys[1].xs[1].torus_switch_xy_n_16 ),
        .n_in_v_reg_reg_4(\s[1][0]_36 ),
        .\n_in_x_reg_reg[1]_0 (\s[1][0]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[1][0]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_41 ),
        .o_b_r_reg(\dor_bp_inst/w_b2_46 ),
        .o_b_r_reg_0(\ys[1].xs[1].torus_switch_xy_n_17 ),
        .o_b_r_reg_1(\w_b[2][1] ),
        .rst(rst),
        .\s_out_x_reg_reg[1]_0 (\s[1][1]_34 ),
        .\s_out_x_reg_reg[1]_1 (\i[1][1]_34 ),
        .\s_out_y_reg_reg[1]_0 (\i[1][1]_32 ),
        .w_b(\w_b[1][1] ),
        .waiting_for_ack_reg(_06__44));
  client__parameterized5 \ys[1].xs[2].client_xy 
       (.D(_02__54),
        .Q(\s[2][1]_32 [0]),
        .clk(clk),
        .dor_e_v(dor_e_v_47),
        .dor_o_v(dor_o_v_49),
        .dor_s_v(dor_s_v_48),
        .dor_w2e(dor_w2e_52),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_51 ),
        .\i[2][1]_36 (\i_vc[2][1] [0]),
        .\i_x_r_reg[1]_0 (\ys[1].xs[2].client_xy_n_2 ),
        .\i_x_r_reg[1]_1 (\i[2][1]_34 ),
        .\i_x_r_reg[1]_2 (_06__53),
        .\i_y_r_reg[0]_0 (\ys[1].xs[2].torus_switch_xy_n_10 ),
        .\i_y_r_reg[1]_0 (\i[2][1]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_50 ),
        .number_tokens_reg_0_sp_1(\ys[1].xs[2].torus_switch_xy_n_7 ),
        .o_v_reg_reg(\ys[1].xs[2].torus_switch_xy_n_15 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[1].xs[2].torus_switch_xy_n_16 ),
        .w_b(\w_b[3][1] ),
        .waiting_for_ack_reg_0(\ys[1].xs[2].torus_switch_xy_n_11 ),
        .waiting_for_ack_reg_1(\ys[1].xs[2].torus_switch_xy_n_17 ));
  torus_switch_bp__parameterized5 \ys[1].xs[2].torus_switch_xy 
       (.D(_02__54),
        .E(\dor_bp_inst/w_b2_65 ),
        .Q(\s[2][1]_32 ),
        .clk(clk),
        .dor_e_v(dor_e_v_47),
        .dor_o_v(dor_o_v_49),
        .dor_s_v(dor_s_v_48),
        .dor_w2e(dor_w2e_52),
        .\e[1][1] (\e[1][1] ),
        .\e[1][1]_36 (\e[1][1]_36 ),
        .\e[2][1] (\e[2][1] ),
        .\e[2][1]_36 (\e[2][1]_36 ),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_51 ),
        .\i[2][1]_36 (\i_vc[2][1] [0]),
        .\i_x_r_reg[0] (\ys[1].xs[2].client_xy_n_2 ),
        .\i_y_r_reg[1] (\ys[1].xs[2].torus_switch_xy_n_7 ),
        .n_in_v(\s[2][1]_36 ),
        .n_in_v_reg_reg_0(\ys[1].xs[2].torus_switch_xy_n_10 ),
        .n_in_v_reg_reg_1(\ys[1].xs[2].torus_switch_xy_n_11 ),
        .n_in_v_reg_reg_2(\ys[1].xs[2].torus_switch_xy_n_15 ),
        .n_in_v_reg_reg_3(\ys[1].xs[2].torus_switch_xy_n_16 ),
        .n_in_v_reg_reg_4(\s[2][0]_36 ),
        .\n_in_x_reg_reg[1]_0 (\s[2][0]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[2][0]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_50 ),
        .o_b_r_reg(\w_b[2][1] ),
        .o_b_r_reg_0(\dor_bp_inst/w_b2_55 ),
        .o_b_r_reg_1(\ys[1].xs[2].torus_switch_xy_n_17 ),
        .rst(rst),
        .\s_out_x_reg_reg[1]_0 (\s[2][1]_34 ),
        .\s_out_x_reg_reg[1]_1 (\i[2][1]_34 ),
        .\s_out_y_reg_reg[1]_0 (\i[2][1]_32 ),
        .w_b(\w_b[3][1] ),
        .waiting_for_ack_reg(_06__53));
  client__parameterized6 \ys[1].xs[3].client_xy 
       (.D(_02__64),
        .Q(\s[3][1]_32 [0]),
        .clk(clk),
        .dor_e_v(dor_e_v_56),
        .dor_o_v(dor_o_v_58),
        .dor_s_v(dor_s_v_57),
        .dor_w2e(dor_w2e_62),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_61 ),
        .e_v214_in(e_v214_in_60),
        .\i[3][1]_36 (\i_vc[3][1] [0]),
        .\i_x_r_reg[1]_0 (\i[3][1]_34 ),
        .\i_x_r_reg[1]_1 (_06__63),
        .\i_y_r_reg[0]_0 (\ys[1].xs[3].torus_switch_xy_n_10 ),
        .\i_y_r_reg[1]_0 (\i[3][1]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_59 ),
        .number_tokens_reg_0_sp_1(\ys[1].xs[3].torus_switch_xy_n_7 ),
        .o_v_reg_reg(\ys[1].xs[3].torus_switch_xy_n_16 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[1].xs[3].torus_switch_xy_n_15 ),
        .\w_b[0][1] (\w_b[0][1] ),
        .waiting_for_ack_reg_0(\ys[1].xs[3].torus_switch_xy_n_11 ),
        .waiting_for_ack_reg_1(\ys[1].xs[3].torus_switch_xy_n_17 ));
  torus_switch_bp__parameterized6 \ys[1].xs[3].torus_switch_xy 
       (.D(_02__64),
        .E(\dor_bp_inst/w_b2_34 ),
        .Q(\s[3][1]_32 ),
        .clk(clk),
        .dor_e_v(dor_e_v_56),
        .dor_o_v(dor_o_v_58),
        .dor_s_v(dor_s_v_57),
        .dor_w2e(dor_w2e_62),
        .\e[2][1] (\e[2][1] ),
        .\e[2][1]_36 (\e[2][1]_36 ),
        .\e[3][1] (\e[3][1] ),
        .e_out_v(\e[3][1]_36 ),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_61 ),
        .e_v214_in(e_v214_in_60),
        .\i[3][1]_36 (\i_vc[3][1] [0]),
        .\i_y_r_reg[1] (\ys[1].xs[3].torus_switch_xy_n_7 ),
        .n_in_v(\s[3][1]_36 ),
        .n_in_v_reg_reg_0(\ys[1].xs[3].torus_switch_xy_n_10 ),
        .n_in_v_reg_reg_1(\ys[1].xs[3].torus_switch_xy_n_11 ),
        .n_in_v_reg_reg_2(\ys[1].xs[3].torus_switch_xy_n_15 ),
        .n_in_v_reg_reg_3(\ys[1].xs[3].torus_switch_xy_n_16 ),
        .n_in_v_reg_reg_4(\s[3][0]_36 ),
        .\n_in_x_reg_reg[1]_0 (\s[3][0]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[3][0]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_59 ),
        .o_b_r_reg(\dor_bp_inst/w_b2_65 ),
        .o_b_r_reg_0(\ys[1].xs[3].torus_switch_xy_n_17 ),
        .rst(rst),
        .\s_out_x_reg_reg[1]_0 (\s[3][1]_34 ),
        .\s_out_x_reg_reg[1]_1 (\i[3][1]_34 ),
        .\s_out_y_reg_reg[1]_0 (\i[3][1]_32 ),
        .w_b(\w_b[3][1] ),
        .\w_b[0][1] (\w_b[0][1] ),
        .waiting_for_ack_reg(_06__63));
  client__parameterized7 \ys[2].xs[0].client_xy 
       (.D(_02__75),
        .Q(\s[0][2]_32 [0]),
        .clk(clk),
        .dor_e_v(dor_e_v_66),
        .dor_o_v(dor_o_v_68),
        .dor_s_v(dor_s_v_67),
        .dor_w2e(dor_w2e_73),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_71 ),
        .e_v214_in(e_v214_in_70),
        .\i[0][2]_36 (\i_vc[0][2] [0]),
        .\i_x_r_reg[1]_0 (\i[0][2]_34 ),
        .\i_x_r_reg[1]_1 (_06__74),
        .\i_y_r_reg[0]_0 (\ys[2].xs[0].torus_switch_xy_n_9 ),
        .\i_y_r_reg[1]_0 (\i[0][2]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_69 ),
        .number_tokens_reg_0_sp_1(\ys[2].xs[0].torus_switch_xy_n_6 ),
        .o_v_reg_reg(\ys[2].xs[0].torus_switch_xy_n_15 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[2].xs[0].torus_switch_xy_n_16 ),
        .w_b(\w_b[1][2] ),
        .waiting_for_ack_reg_0(\ys[2].xs[0].torus_switch_xy_n_10 ),
        .waiting_for_ack_reg_1(\ys[2].xs[0].torus_switch_xy_n_17 ));
  torus_switch_bp__parameterized7 \ys[2].xs[0].torus_switch_xy 
       (.D(_02__75),
        .E(\dor_bp_inst/w_b2_84 ),
        .Q(\s[0][2]_32 ),
        .clk(clk),
        .dor_e_v(dor_e_v_66),
        .dor_o_v(dor_o_v_68),
        .dor_s_v(dor_s_v_67),
        .dor_w2e(dor_w2e_73),
        .\e[0][2] (\e[0][2] ),
        .\e[0][2]_36 (\e[0][2]_36 ),
        .\e[3][2] (\e[3][2] ),
        .e_out_v(\e[3][2]_36 ),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_71 ),
        .e_v214_in(e_v214_in_70),
        .\i[0][2]_36 (\i_vc[0][2] [0]),
        .\i_y_r_reg[0] (\ys[2].xs[0].torus_switch_xy_n_6 ),
        .n_in_v(\s[0][2]_36 ),
        .n_in_v_reg_reg_0(\ys[2].xs[0].torus_switch_xy_n_9 ),
        .n_in_v_reg_reg_1(\ys[2].xs[0].torus_switch_xy_n_10 ),
        .n_in_v_reg_reg_2(\ys[2].xs[0].torus_switch_xy_n_15 ),
        .n_in_v_reg_reg_3(\ys[2].xs[0].torus_switch_xy_n_16 ),
        .n_in_v_reg_reg_4(\s[0][1]_36 ),
        .\n_in_x_reg_reg[1]_0 (\s[0][1]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[0][1]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_69 ),
        .o_b_r_reg(\dor_bp_inst/w_b2_72 ),
        .o_b_r_reg_0(\ys[2].xs[0].torus_switch_xy_n_17 ),
        .rst(rst),
        .\s_out_x_reg_reg[1]_0 (\s[0][2]_34 ),
        .\s_out_x_reg_reg[1]_1 (\i[0][2]_34 ),
        .\s_out_y_reg_reg[1]_0 (\i[0][2]_32 ),
        .w_b(\w_b[1][2] ),
        .\w_b[0][2] (\w_b[0][2] ),
        .waiting_for_ack_reg(_06__74));
  client__parameterized8 \ys[2].xs[1].client_xy 
       (.D(_02__83),
        .Q(\s[1][2]_32 [0]),
        .clk(clk),
        .dor_e_v(dor_e_v_76),
        .dor_o_v(dor_o_v_78),
        .dor_s_v(dor_s_v_77),
        .dor_w2e(dor_w2e_81),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_80 ),
        .\i[1][2]_36 (\i_vc[1][2] [0]),
        .\i_x_r_reg[0]_0 (\ys[2].xs[1].client_xy_n_2 ),
        .\i_x_r_reg[1]_0 (\i[1][2]_34 ),
        .\i_x_r_reg[1]_1 (_06__82),
        .\i_y_r_reg[0]_0 (\ys[2].xs[1].torus_switch_xy_n_10 ),
        .\i_y_r_reg[1]_0 (\i[1][2]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_79 ),
        .number_tokens_reg_0_sp_1(\ys[2].xs[1].torus_switch_xy_n_7 ),
        .o_v_reg_reg(\ys[2].xs[1].torus_switch_xy_n_15 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[2].xs[1].torus_switch_xy_n_16 ),
        .w_b(\w_b[2][2] ),
        .waiting_for_ack_reg_0(\ys[2].xs[1].torus_switch_xy_n_11 ),
        .waiting_for_ack_reg_1(\ys[2].xs[1].torus_switch_xy_n_17 ));
  torus_switch_bp__parameterized8 \ys[2].xs[1].torus_switch_xy 
       (.D(_02__83),
        .E(\dor_bp_inst/w_b2_93 ),
        .Q(\s[1][2]_32 ),
        .clk(clk),
        .dor_e_v(dor_e_v_76),
        .dor_o_v(dor_o_v_78),
        .dor_s_v(dor_s_v_77),
        .dor_w2e(dor_w2e_81),
        .\e[0][2] (\e[0][2] ),
        .\e[0][2]_36 (\e[0][2]_36 ),
        .\e[1][2] (\e[1][2] ),
        .\e[1][2]_36 (\e[1][2]_36 ),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_80 ),
        .\i[1][2]_36 (\i_vc[1][2] [0]),
        .\i_x_r_reg[0] (\ys[2].xs[1].client_xy_n_2 ),
        .\i_y_r_reg[0] (\ys[2].xs[1].torus_switch_xy_n_7 ),
        .n_in_v(\s[1][2]_36 ),
        .n_in_v_reg_reg_0(\ys[2].xs[1].torus_switch_xy_n_10 ),
        .n_in_v_reg_reg_1(\ys[2].xs[1].torus_switch_xy_n_11 ),
        .n_in_v_reg_reg_2(\ys[2].xs[1].torus_switch_xy_n_15 ),
        .n_in_v_reg_reg_3(\ys[2].xs[1].torus_switch_xy_n_16 ),
        .n_in_v_reg_reg_4(\s[1][1]_36 ),
        .\n_in_x_reg_reg[1]_0 (\s[1][1]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[1][1]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_79 ),
        .o_b_r_reg(\dor_bp_inst/w_b2_84 ),
        .o_b_r_reg_0(\ys[2].xs[1].torus_switch_xy_n_17 ),
        .o_b_r_reg_1(\w_b[2][2] ),
        .rst(rst),
        .\s_out_x_reg_reg[1]_0 (\s[1][2]_34 ),
        .\s_out_x_reg_reg[1]_1 (\i[1][2]_34 ),
        .\s_out_y_reg_reg[1]_0 (\i[1][2]_32 ),
        .w_b(\w_b[1][2] ),
        .waiting_for_ack_reg(_06__82));
  client__parameterized9 \ys[2].xs[2].client_xy 
       (.D(_02__92),
        .Q(\s[2][2]_32 [0]),
        .clk(clk),
        .dor_e_v(dor_e_v_85),
        .dor_o_v(dor_o_v_87),
        .dor_s_v(dor_s_v_86),
        .dor_w2e(dor_w2e_90),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_89 ),
        .\i[2][2]_36 (\i_vc[2][2] [0]),
        .\i_x_r_reg[1]_0 (\ys[2].xs[2].client_xy_n_2 ),
        .\i_x_r_reg[1]_1 (\i[2][2]_34 ),
        .\i_x_r_reg[1]_2 (_06__91),
        .\i_y_r_reg[0]_0 (\ys[2].xs[2].torus_switch_xy_n_10 ),
        .\i_y_r_reg[1]_0 (\i[2][2]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_88 ),
        .number_tokens_reg_0_sp_1(\ys[2].xs[2].torus_switch_xy_n_7 ),
        .o_v_reg_reg(\ys[2].xs[2].torus_switch_xy_n_16 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[2].xs[2].torus_switch_xy_n_15 ),
        .w_b(\w_b[3][2] ),
        .waiting_for_ack_reg_0(\ys[2].xs[2].torus_switch_xy_n_11 ),
        .waiting_for_ack_reg_1(\ys[2].xs[2].torus_switch_xy_n_17 ));
  torus_switch_bp__parameterized9 \ys[2].xs[2].torus_switch_xy 
       (.D(_02__92),
        .E(\dor_bp_inst/w_b2_103 ),
        .Q(\s[2][2]_32 ),
        .clk(clk),
        .dor_e_v(dor_e_v_85),
        .dor_o_v(dor_o_v_87),
        .dor_s_v(dor_s_v_86),
        .dor_w2e(dor_w2e_90),
        .\e[1][2] (\e[1][2] ),
        .\e[1][2]_36 (\e[1][2]_36 ),
        .\e[2][2] (\e[2][2] ),
        .\e[2][2]_36 (\e[2][2]_36 ),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_89 ),
        .\i[2][2]_36 (\i_vc[2][2] [0]),
        .\i_x_r_reg[0] (\ys[2].xs[2].client_xy_n_2 ),
        .\i_y_r_reg[0] (\ys[2].xs[2].torus_switch_xy_n_7 ),
        .n_in_v(\s[2][2]_36 ),
        .n_in_v_reg_reg_0(\ys[2].xs[2].torus_switch_xy_n_10 ),
        .n_in_v_reg_reg_1(\ys[2].xs[2].torus_switch_xy_n_11 ),
        .n_in_v_reg_reg_2(\ys[2].xs[2].torus_switch_xy_n_15 ),
        .n_in_v_reg_reg_3(\ys[2].xs[2].torus_switch_xy_n_16 ),
        .n_in_v_reg_reg_4(\s[2][1]_36 ),
        .\n_in_x_reg_reg[1]_0 (\s[2][1]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[2][1]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_88 ),
        .o_b_r_reg(\w_b[2][2] ),
        .o_b_r_reg_0(\dor_bp_inst/w_b2_93 ),
        .o_b_r_reg_1(\ys[2].xs[2].torus_switch_xy_n_17 ),
        .rst(rst),
        .\s_out_x_reg_reg[1]_0 (\s[2][2]_34 ),
        .\s_out_x_reg_reg[1]_1 (\i[2][2]_34 ),
        .\s_out_y_reg_reg[1]_0 (\i[2][2]_32 ),
        .w_b(\w_b[3][2] ),
        .waiting_for_ack_reg(_06__91));
  client__parameterized10 \ys[2].xs[3].client_xy 
       (.D(_02__102),
        .Q(\s[3][2]_32 [0]),
        .clk(clk),
        .dor_e_v(dor_e_v_94),
        .dor_o_v(dor_o_v_96),
        .dor_s_v(dor_s_v_95),
        .dor_w2e(dor_w2e_100),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_99 ),
        .e_v214_in(e_v214_in_98),
        .\i[3][2]_36 (\i_vc[3][2] [0]),
        .\i_x_r_reg[1]_0 (\i[3][2]_34 ),
        .\i_x_r_reg[1]_1 (_06__101),
        .\i_y_r_reg[0]_0 (\ys[2].xs[3].torus_switch_xy_n_10 ),
        .\i_y_r_reg[1]_0 (\i[3][2]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_97 ),
        .number_tokens_reg_0_sp_1(\ys[2].xs[3].torus_switch_xy_n_7 ),
        .o_v_reg_reg(\ys[2].xs[3].torus_switch_xy_n_16 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[2].xs[3].torus_switch_xy_n_15 ),
        .\w_b[0][2] (\w_b[0][2] ),
        .waiting_for_ack_reg_0(\ys[2].xs[3].torus_switch_xy_n_11 ),
        .waiting_for_ack_reg_1(\ys[2].xs[3].torus_switch_xy_n_17 ));
  torus_switch_bp__parameterized10 \ys[2].xs[3].torus_switch_xy 
       (.D(_02__102),
        .E(\dor_bp_inst/w_b2_72 ),
        .Q(\s[3][2]_32 ),
        .clk(clk),
        .dor_e_v(dor_e_v_94),
        .dor_o_v(dor_o_v_96),
        .dor_s_v(dor_s_v_95),
        .dor_w2e(dor_w2e_100),
        .\e[2][2] (\e[2][2] ),
        .\e[2][2]_36 (\e[2][2]_36 ),
        .\e[3][2] (\e[3][2] ),
        .e_out_v(\e[3][2]_36 ),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_99 ),
        .e_v214_in(e_v214_in_98),
        .\i[3][2]_36 (\i_vc[3][2] [0]),
        .\i_y_r_reg[0] (\ys[2].xs[3].torus_switch_xy_n_7 ),
        .n_in_v(\s[3][2]_36 ),
        .n_in_v_reg_reg_0(\ys[2].xs[3].torus_switch_xy_n_10 ),
        .n_in_v_reg_reg_1(\ys[2].xs[3].torus_switch_xy_n_11 ),
        .n_in_v_reg_reg_2(\ys[2].xs[3].torus_switch_xy_n_15 ),
        .n_in_v_reg_reg_3(\ys[2].xs[3].torus_switch_xy_n_16 ),
        .n_in_v_reg_reg_4(\s[3][1]_36 ),
        .\n_in_x_reg_reg[1]_0 (\s[3][1]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[3][1]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_97 ),
        .o_b_r_reg(\dor_bp_inst/w_b2_103 ),
        .o_b_r_reg_0(\ys[2].xs[3].torus_switch_xy_n_17 ),
        .rst(rst),
        .\s_out_x_reg_reg[1]_0 (\s[3][2]_34 ),
        .\s_out_x_reg_reg[1]_1 (\i[3][2]_34 ),
        .\s_out_y_reg_reg[1]_0 (\i[3][2]_32 ),
        .w_b(\w_b[3][2] ),
        .\w_b[0][2] (\w_b[0][2] ),
        .waiting_for_ack_reg(_06__101));
  client__parameterized11 \ys[3].xs[0].client_xy 
       (.D(_02__113),
        .Q(\s[0][3]_32 [0]),
        .clk(clk),
        .dor_e_v(dor_e_v_104),
        .dor_o_v(dor_o_v_106),
        .dor_s_v(dor_s_v_105),
        .dor_w2e(dor_w2e_111),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_109 ),
        .e_v214_in(e_v214_in_108),
        .\i[0][3]_36 (\i_vc[0][3] [0]),
        .\i_x_r_reg[1]_0 (\i[0][3]_34 ),
        .\i_x_r_reg[1]_1 (_06__112),
        .\i_y_r_reg[0]_0 (\ys[3].xs[0].torus_switch_xy_n_9 ),
        .\i_y_r_reg[1]_0 (\i[0][3]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_107 ),
        .number_tokens_reg_0_sp_1(\ys[3].xs[0].torus_switch_xy_n_6 ),
        .o_v_reg_reg(\ys[3].xs[0].torus_switch_xy_n_16 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[3].xs[0].torus_switch_xy_n_15 ),
        .w_b(\w_b[1][3] ),
        .waiting_for_ack_reg_0(\ys[3].xs[0].torus_switch_xy_n_10 ),
        .waiting_for_ack_reg_1(\ys[3].xs[0].torus_switch_xy_n_17 ));
  torus_switch_bp__parameterized11 \ys[3].xs[0].torus_switch_xy 
       (.D(_02__113),
        .E(\dor_bp_inst/w_b2_122 ),
        .Q(\s[0][3]_32 ),
        .clk(clk),
        .dor_e_v(dor_e_v_104),
        .dor_o_v(dor_o_v_106),
        .dor_s_v(dor_s_v_105),
        .dor_w2e(dor_w2e_111),
        .\e[0][3] (\e[0][3] ),
        .\e[0][3]_36 (\e[0][3]_36 ),
        .\e[3][3] (\e[3][3] ),
        .e_out_v(\e[3][3]_36 ),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_109 ),
        .e_v214_in(e_v214_in_108),
        .\i[0][3]_36 (\i_vc[0][3] [0]),
        .\i_y_r_reg[1] (\ys[3].xs[0].torus_switch_xy_n_6 ),
        .n_in_v(\s[0][2]_36 ),
        .n_in_v_reg_reg_0(\ys[3].xs[0].torus_switch_xy_n_9 ),
        .n_in_v_reg_reg_1(\ys[3].xs[0].torus_switch_xy_n_10 ),
        .n_in_v_reg_reg_2(\ys[3].xs[0].torus_switch_xy_n_15 ),
        .n_in_v_reg_reg_3(\ys[3].xs[0].torus_switch_xy_n_16 ),
        .\n_in_x_reg_reg[1]_0 (\s[0][2]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[0][2]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_107 ),
        .o_b_r_reg(\dor_bp_inst/w_b2_110 ),
        .o_b_r_reg_0(\ys[3].xs[0].torus_switch_xy_n_17 ),
        .rst(rst),
        .s_out_v(\s[0][3]_36 ),
        .\s_out_x_reg_reg[1]_0 (\s[0][3]_34 ),
        .\s_out_x_reg_reg[1]_1 (\i[0][3]_34 ),
        .\s_out_y_reg_reg[1]_0 (\i[0][3]_32 ),
        .w_b(\w_b[1][3] ),
        .\w_b[0][3] (\w_b[0][3] ),
        .waiting_for_ack_reg(_06__112));
  client__parameterized12 \ys[3].xs[1].client_xy 
       (.D(_02__121),
        .Q(\s[1][3]_32 [0]),
        .clk(clk),
        .dor_e_v(dor_e_v_114),
        .dor_o_v(dor_o_v_116),
        .dor_s_v(dor_s_v_115),
        .dor_w2e(dor_w2e_119),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_118 ),
        .\i[1][3]_36 (\i_vc[1][3] [0]),
        .\i_x_r_reg[0]_0 (\ys[3].xs[1].client_xy_n_2 ),
        .\i_x_r_reg[1]_0 (\i[1][3]_34 ),
        .\i_x_r_reg[1]_1 (_06__120),
        .\i_y_r_reg[0]_0 (\ys[3].xs[1].torus_switch_xy_n_10 ),
        .\i_y_r_reg[1]_0 (\i[1][3]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_117 ),
        .number_tokens_reg_0_sp_1(\ys[3].xs[1].torus_switch_xy_n_7 ),
        .o_v_reg_reg(\ys[3].xs[1].torus_switch_xy_n_16 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[3].xs[1].torus_switch_xy_n_15 ),
        .w_b(\w_b[2][3] ),
        .waiting_for_ack_reg_0(\ys[3].xs[1].torus_switch_xy_n_11 ),
        .waiting_for_ack_reg_1(\ys[3].xs[1].torus_switch_xy_n_17 ));
  torus_switch_bp__parameterized12 \ys[3].xs[1].torus_switch_xy 
       (.D(_02__121),
        .E(\dor_bp_inst/w_b2_131 ),
        .Q(\s[1][3]_32 ),
        .clk(clk),
        .dor_e_v(dor_e_v_114),
        .dor_o_v(dor_o_v_116),
        .dor_s_v(dor_s_v_115),
        .dor_w2e(dor_w2e_119),
        .\e[0][3] (\e[0][3] ),
        .\e[0][3]_36 (\e[0][3]_36 ),
        .\e[1][3] (\e[1][3] ),
        .\e[1][3]_36 (\e[1][3]_36 ),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_118 ),
        .\i[1][3]_36 (\i_vc[1][3] [0]),
        .\i_x_r_reg[0] (\ys[3].xs[1].client_xy_n_2 ),
        .\i_y_r_reg[1] (\ys[3].xs[1].torus_switch_xy_n_7 ),
        .n_in_v(\s[1][2]_36 ),
        .n_in_v_reg_reg_0(\ys[3].xs[1].torus_switch_xy_n_10 ),
        .n_in_v_reg_reg_1(\ys[3].xs[1].torus_switch_xy_n_11 ),
        .n_in_v_reg_reg_2(\ys[3].xs[1].torus_switch_xy_n_15 ),
        .n_in_v_reg_reg_3(\ys[3].xs[1].torus_switch_xy_n_16 ),
        .\n_in_x_reg_reg[1]_0 (\s[1][2]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[1][2]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_117 ),
        .o_b_r_reg(\dor_bp_inst/w_b2_122 ),
        .o_b_r_reg_0(\ys[3].xs[1].torus_switch_xy_n_17 ),
        .o_b_r_reg_1(\w_b[2][3] ),
        .rst(rst),
        .s_out_v(\s[1][3]_36 ),
        .\s_out_x_reg_reg[1]_0 (\s[1][3]_34 ),
        .\s_out_x_reg_reg[1]_1 (\i[1][3]_34 ),
        .\s_out_y_reg_reg[1]_0 (\i[1][3]_32 ),
        .w_b(\w_b[1][3] ),
        .waiting_for_ack_reg(_06__120));
  client__parameterized13 \ys[3].xs[2].client_xy 
       (.D(_02__130),
        .Q(\s[2][3]_32 [0]),
        .clk(clk),
        .dor_e_v(dor_e_v_123),
        .dor_o_v(dor_o_v_125),
        .dor_s_v(dor_s_v_124),
        .dor_w2e(dor_w2e_128),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_127 ),
        .\i[2][3]_36 (\i_vc[2][3] [0]),
        .\i_x_r_reg[1]_0 (\ys[3].xs[2].client_xy_n_2 ),
        .\i_x_r_reg[1]_1 (\i[2][3]_34 ),
        .\i_x_r_reg[1]_2 (_06__129),
        .\i_y_r_reg[0]_0 (\ys[3].xs[2].torus_switch_xy_n_10 ),
        .\i_y_r_reg[1]_0 (\i[2][3]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_126 ),
        .number_tokens_reg_0_sp_1(\ys[3].xs[2].torus_switch_xy_n_7 ),
        .o_v_reg_reg(\ys[3].xs[2].torus_switch_xy_n_16 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[3].xs[2].torus_switch_xy_n_15 ),
        .w_b(\w_b[3][3] ),
        .waiting_for_ack_reg_0(\ys[3].xs[2].torus_switch_xy_n_11 ),
        .waiting_for_ack_reg_1(\ys[3].xs[2].torus_switch_xy_n_17 ));
  torus_switch_bp__parameterized13 \ys[3].xs[2].torus_switch_xy 
       (.D(_02__130),
        .E(\dor_bp_inst/w_b2_141 ),
        .Q(\s[2][3]_32 ),
        .clk(clk),
        .dor_e_v(dor_e_v_123),
        .dor_o_v(dor_o_v_125),
        .dor_s_v(dor_s_v_124),
        .dor_w2e(dor_w2e_128),
        .\e[1][3] (\e[1][3] ),
        .\e[1][3]_36 (\e[1][3]_36 ),
        .\e[2][3] (\e[2][3] ),
        .\e[2][3]_36 (\e[2][3]_36 ),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_127 ),
        .\i[2][3]_36 (\i_vc[2][3] [0]),
        .\i_x_r_reg[0] (\ys[3].xs[2].client_xy_n_2 ),
        .\i_y_r_reg[1] (\ys[3].xs[2].torus_switch_xy_n_7 ),
        .n_in_v(\s[2][2]_36 ),
        .n_in_v_reg_reg_0(\ys[3].xs[2].torus_switch_xy_n_10 ),
        .n_in_v_reg_reg_1(\ys[3].xs[2].torus_switch_xy_n_11 ),
        .n_in_v_reg_reg_2(\ys[3].xs[2].torus_switch_xy_n_15 ),
        .n_in_v_reg_reg_3(\ys[3].xs[2].torus_switch_xy_n_16 ),
        .\n_in_x_reg_reg[1]_0 (\s[2][2]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[2][2]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_126 ),
        .o_b_r_reg(\w_b[2][3] ),
        .o_b_r_reg_0(\dor_bp_inst/w_b2_131 ),
        .o_b_r_reg_1(\ys[3].xs[2].torus_switch_xy_n_17 ),
        .rst(rst),
        .s_out_v(\s[2][3]_36 ),
        .\s_out_x_reg_reg[1]_0 (\s[2][3]_34 ),
        .\s_out_x_reg_reg[1]_1 (\i[2][3]_34 ),
        .\s_out_y_reg_reg[1]_0 (\i[2][3]_32 ),
        .w_b(\w_b[3][3] ),
        .waiting_for_ack_reg(_06__129));
  client__parameterized14 \ys[3].xs[3].client_xy 
       (.D(_02__140),
        .Q(\s[3][3]_32 [0]),
        .clk(clk),
        .dor_e_v(dor_e_v_132),
        .dor_o_v(dor_o_v_134),
        .dor_s_v(dor_s_v_133),
        .dor_w2e(dor_w2e_138),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_137 ),
        .e_v214_in(e_v214_in_136),
        .\i[3][3]_36 (\i_vc[3][3] [0]),
        .\i_x_r_reg[1]_0 (\i[3][3]_34 ),
        .\i_x_r_reg[1]_1 (_06__139),
        .\i_y_r_reg[0]_0 (\ys[3].xs[3].torus_switch_xy_n_10 ),
        .\i_y_r_reg[1]_0 (\i[3][3]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_135 ),
        .number_tokens_reg_0_sp_1(\ys[3].xs[3].torus_switch_xy_n_7 ),
        .o_v_reg_reg(\ys[3].xs[3].torus_switch_xy_n_16 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[3].xs[3].torus_switch_xy_n_15 ),
        .\w_b[0][3] (\w_b[0][3] ),
        .waiting_for_ack_reg_0(\ys[3].xs[3].torus_switch_xy_n_11 ),
        .waiting_for_ack_reg_1(\ys[3].xs[3].torus_switch_xy_n_17 ));
  torus_switch_bp__parameterized14 \ys[3].xs[3].torus_switch_xy 
       (.D(_02__140),
        .E(\dor_bp_inst/w_b2_110 ),
        .Q(\s[3][3]_32 ),
        .clk(clk),
        .dor_e_v(dor_e_v_132),
        .dor_o_v(dor_o_v_134),
        .dor_s_v(dor_s_v_133),
        .dor_w2e(dor_w2e_138),
        .\e[2][3] (\e[2][3] ),
        .\e[2][3]_36 (\e[2][3]_36 ),
        .\e[3][3] (\e[3][3] ),
        .e_out_v(\e[3][3]_36 ),
        .e_v115_out__1(\dor_bp_inst/e_v115_out__1_137 ),
        .e_v214_in(e_v214_in_136),
        .\i[3][3]_36 (\i_vc[3][3] [0]),
        .\i_y_r_reg[1] (\ys[3].xs[3].torus_switch_xy_n_7 ),
        .n_in_v(\s[3][2]_36 ),
        .n_in_v_reg_reg_0(\ys[3].xs[3].torus_switch_xy_n_10 ),
        .n_in_v_reg_reg_1(\ys[3].xs[3].torus_switch_xy_n_11 ),
        .n_in_v_reg_reg_2(\ys[3].xs[3].torus_switch_xy_n_15 ),
        .n_in_v_reg_reg_3(\ys[3].xs[3].torus_switch_xy_n_16 ),
        .\n_in_x_reg_reg[1]_0 (\s[3][2]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[3][2]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_135 ),
        .o_b_r_reg(\dor_bp_inst/w_b2_141 ),
        .o_b_r_reg_0(\ys[3].xs[3].torus_switch_xy_n_17 ),
        .rst(rst),
        .s_out_v(\s[3][3]_36 ),
        .\s_out_x_reg_reg[1]_0 (\s[3][3]_34 ),
        .\s_out_x_reg_reg[1]_1 (\i[3][3]_34 ),
        .\s_out_y_reg_reg[1]_0 (\i[3][3]_32 ),
        .w_b(\w_b[3][3] ),
        .\w_b[0][3] (\w_b[0][3] ),
        .waiting_for_ack_reg(_06__139));
endmodule

module torus_switch_bp
   (\w_b[0][0] ,
    out_v,
    n_in_v,
    \e[0][0]_36 ,
    D,
    Q,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    \s_out_x_reg_reg[1]_0 ,
    dor_w2e,
    o_b_r_reg,
    n_in_v_reg_reg_2,
    \n_in_y_reg_reg[1]_0 ,
    o_b_r_reg_0,
    \e[0][0] ,
    rst,
    clk,
    dor_o_v,
    dor_s_v,
    E,
    dor_e_v,
    s_out_v,
    \i[0][0]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    e_out_v,
    \e[3][0] ,
    \s_out_x_reg_reg[1]_1 ,
    \s_out_y_reg_reg[1]_0 ,
    w_b,
    e_v214_in,
    \n_in_y_reg_reg[1]_1 ,
    \n_in_x_reg_reg[1]_0 );
  output \w_b[0][0] ;
  output out_v;
  output n_in_v;
  output \e[0][0]_36 ;
  output [0:0]D;
  output [1:0]Q;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output dor_w2e;
  output [0:0]o_b_r_reg;
  output n_in_v_reg_reg_2;
  output \n_in_y_reg_reg[1]_0 ;
  output o_b_r_reg_0;
  output [3:0]\e[0][0] ;
  input rst;
  input clk;
  input dor_o_v;
  input dor_s_v;
  input [0:0]E;
  input dor_e_v;
  input s_out_v;
  input \i[0][0]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input e_out_v;
  input [3:0]\e[3][0] ;
  input [1:0]\s_out_x_reg_reg[1]_1 ;
  input [1:0]\s_out_y_reg_reg[1]_0 ;
  input w_b;
  input e_v214_in;
  input [1:0]\n_in_y_reg_reg[1]_1 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire [3:0]\e[0][0] ;
  wire \e[0][0]_36 ;
  wire [3:0]\e[3][0] ;
  wire [35:32]e_msg;
  wire e_out_v;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[0][0]_36 ;
  wire \i_y_r_reg[1] ;
  wire n_in_v;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire \n_in_y_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_1 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire [0:0]o_b_r_reg;
  wire o_b_r_reg_0;
  wire out_v;
  wire rst;
  wire [35:32]s_msg;
  wire s_out_v;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_x_reg_reg[1]_1 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire w_b;
  wire \w_b[0][0] ;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(E),
        .D(dor_e_v),
        .Q(\e[0][0]_36 ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[34]),
        .Q(\e[0][0] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[35]),
        .Q(\e[0][0] [3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[32]),
        .Q(\e[0][0] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[33]),
        .Q(\e[0][0] [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(s_out_v),
        .Q(n_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [0]),
        .Q(n_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [1]),
        .Q(n_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_1 [0]),
        .Q(n_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_1 [1]),
        .Q(n_msg[33]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(out_v),
        .R(rst));
  shadow_reg_combi_28 s0
       (.D(D),
        .Q(Q),
        .clk(clk),
        .\e[3][0] (\e[3][0] ),
        .e_msg(e_msg),
        .e_out_v(e_out_v),
        .e_v115_out__1(e_v115_out__1),
        .e_v214_in(e_v214_in),
        .\i[0][0]_36 (\i[0][0]_36 ),
        .\i_x_r_reg[1] (\s_out_x_reg_reg[1]_0 ),
        .\i_y_r_reg[1] (\i_y_r_reg[1] ),
        .n_in_v_reg(n_in_v_reg),
        .n_in_v_reg_reg(n_in_v_reg_reg_0),
        .n_in_v_reg_reg_0(n_in_v_reg_reg_1),
        .n_in_v_reg_reg_1(n_in_v_reg_reg_2),
        .\n_in_y_reg_reg[1] (\n_in_y_reg_reg[1]_0 ),
        .n_msg(n_msg),
        .number_tokens_reg(number_tokens_reg),
        .o_b_r_reg_0(\w_b[0][0] ),
        .o_b_r_reg_1(dor_w2e),
        .o_b_r_reg_2(o_b_r_reg),
        .o_b_r_reg_3(o_b_r_reg_0),
        .out_v(out_v),
        .rst(rst),
        .s_msg(s_msg),
        .\s_out_x_reg_reg[1] (\s_out_x_reg_reg[1]_1 ),
        .\s_out_y_reg_reg[1] (\s_out_y_reg_reg[1]_0 ),
        .w_b(w_b),
        .waiting_for_ack_reg(waiting_for_ack_reg));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(n_in_v),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(\s_out_x_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(\s_out_x_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(Q[1]),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "torus_switch_bp" *) 
module torus_switch_bp__parameterized0
   (w_b,
    n_in_v,
    \e[1][0]_36 ,
    o_b_r_reg,
    D,
    Q,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    \s_out_x_reg_reg[1]_0 ,
    dor_w2e,
    n_in_v_reg_reg_2,
    \n_in_y_reg_reg[1]_0 ,
    o_b_r_reg_0,
    \e[1][0] ,
    rst,
    clk,
    dor_o_v,
    dor_s_v,
    E,
    dor_e_v,
    s_out_v,
    \i[1][0]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \e[0][0]_36 ,
    \e[0][0] ,
    \s_out_x_reg_reg[1]_1 ,
    \s_out_y_reg_reg[1]_0 ,
    o_b_r_reg_1,
    \i_x_r_reg[0] ,
    \n_in_y_reg_reg[1]_1 ,
    \n_in_x_reg_reg[1]_0 );
  output w_b;
  output n_in_v;
  output \e[1][0]_36 ;
  output [0:0]o_b_r_reg;
  output [0:0]D;
  output [1:0]Q;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output dor_w2e;
  output n_in_v_reg_reg_2;
  output \n_in_y_reg_reg[1]_0 ;
  output o_b_r_reg_0;
  output [3:0]\e[1][0] ;
  input rst;
  input clk;
  input dor_o_v;
  input dor_s_v;
  input [0:0]E;
  input dor_e_v;
  input s_out_v;
  input \i[1][0]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \e[0][0]_36 ;
  input [3:0]\e[0][0] ;
  input [1:0]\s_out_x_reg_reg[1]_1 ;
  input [1:0]\s_out_y_reg_reg[1]_0 ;
  input o_b_r_reg_1;
  input \i_x_r_reg[0] ;
  input [1:0]\n_in_y_reg_reg[1]_1 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire [3:0]\e[0][0] ;
  wire \e[0][0]_36 ;
  wire [3:0]\e[1][0] ;
  wire \e[1][0]_36 ;
  wire [35:32]e_msg;
  wire e_v115_out__1;
  wire \i[1][0]_36 ;
  wire \i_x_r_reg[0] ;
  wire \i_y_r_reg[1] ;
  wire n_in_v;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire \n_in_y_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_1 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire [0:0]o_b_r_reg;
  wire o_b_r_reg_0;
  wire o_b_r_reg_1;
  wire \o_v[1][0] ;
  wire rst;
  wire [35:32]s_msg;
  wire s_out_v;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_x_reg_reg[1]_1 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire w_b;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(E),
        .D(dor_e_v),
        .Q(\e[1][0]_36 ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[34]),
        .Q(\e[1][0] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[35]),
        .Q(\e[1][0] [3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[32]),
        .Q(\e[1][0] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[33]),
        .Q(\e[1][0] [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(s_out_v),
        .Q(n_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [0]),
        .Q(n_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [1]),
        .Q(n_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_1 [0]),
        .Q(n_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_1 [1]),
        .Q(n_msg[33]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[1][0] ),
        .R(rst));
  shadow_reg_combi_26 s0
       (.D(D),
        .Q(Q),
        .clk(clk),
        .\e[0][0] (\e[0][0] ),
        .\e[0][0]_36 (\e[0][0]_36 ),
        .e_msg(e_msg),
        .e_v115_out__1(e_v115_out__1),
        .\i[1][0]_36 (\i[1][0]_36 ),
        .\i_x_r_reg[0] (\i_x_r_reg[0] ),
        .\i_x_r_reg[1] (\s_out_x_reg_reg[1]_0 ),
        .\i_y_r_reg[1] (\i_y_r_reg[1] ),
        .n_in_v_reg(n_in_v_reg),
        .n_in_v_reg_reg(n_in_v_reg_reg_0),
        .n_in_v_reg_reg_0(n_in_v_reg_reg_1),
        .n_in_v_reg_reg_1(n_in_v_reg_reg_2),
        .\n_in_y_reg_reg[1] (\n_in_y_reg_reg[1]_0 ),
        .n_msg(n_msg),
        .number_tokens_reg(number_tokens_reg),
        .o_b_r_reg_0(w_b),
        .o_b_r_reg_1(o_b_r_reg),
        .o_b_r_reg_2(dor_w2e),
        .o_b_r_reg_3(o_b_r_reg_0),
        .o_b_r_reg_4(o_b_r_reg_1),
        .\o_v[1][0] (\o_v[1][0] ),
        .rst(rst),
        .s_msg(s_msg),
        .\s_out_x_reg_reg[1] (\s_out_x_reg_reg[1]_1 ),
        .\s_out_y_reg_reg[1] (\s_out_y_reg_reg[1]_0 ),
        .waiting_for_ack_reg(waiting_for_ack_reg));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(n_in_v),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(\s_out_x_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(\s_out_x_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(Q[1]),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "torus_switch_bp" *) 
module torus_switch_bp__parameterized1
   (o_b_r_reg,
    n_in_v,
    \e[2][0]_36 ,
    o_b_r_reg_0,
    D,
    Q,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    \s_out_x_reg_reg[1]_0 ,
    dor_w2e,
    n_in_v_reg_reg_2,
    \n_in_y_reg_reg[1]_0 ,
    o_b_r_reg_1,
    \e[2][0] ,
    rst,
    clk,
    dor_o_v,
    dor_s_v,
    E,
    dor_e_v,
    s_out_v,
    \i[2][0]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \e[1][0]_36 ,
    \e[1][0] ,
    \s_out_x_reg_reg[1]_1 ,
    \s_out_y_reg_reg[1]_0 ,
    w_b,
    \i_x_r_reg[0] ,
    \n_in_y_reg_reg[1]_1 ,
    \n_in_x_reg_reg[1]_0 );
  output o_b_r_reg;
  output n_in_v;
  output \e[2][0]_36 ;
  output [0:0]o_b_r_reg_0;
  output [0:0]D;
  output [1:0]Q;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output dor_w2e;
  output n_in_v_reg_reg_2;
  output \n_in_y_reg_reg[1]_0 ;
  output o_b_r_reg_1;
  output [3:0]\e[2][0] ;
  input rst;
  input clk;
  input dor_o_v;
  input dor_s_v;
  input [0:0]E;
  input dor_e_v;
  input s_out_v;
  input \i[2][0]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \e[1][0]_36 ;
  input [3:0]\e[1][0] ;
  input [1:0]\s_out_x_reg_reg[1]_1 ;
  input [1:0]\s_out_y_reg_reg[1]_0 ;
  input w_b;
  input \i_x_r_reg[0] ;
  input [1:0]\n_in_y_reg_reg[1]_1 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire [3:0]\e[1][0] ;
  wire \e[1][0]_36 ;
  wire [3:0]\e[2][0] ;
  wire \e[2][0]_36 ;
  wire [35:32]e_msg;
  wire e_v115_out__1;
  wire \i[2][0]_36 ;
  wire \i_x_r_reg[0] ;
  wire \i_y_r_reg[1] ;
  wire n_in_v;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire \n_in_y_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_1 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire o_b_r_reg;
  wire [0:0]o_b_r_reg_0;
  wire o_b_r_reg_1;
  wire \o_v[2][0] ;
  wire rst;
  wire [35:32]s_msg;
  wire s_out_v;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_x_reg_reg[1]_1 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire w_b;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(E),
        .D(dor_e_v),
        .Q(\e[2][0]_36 ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[34]),
        .Q(\e[2][0] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[35]),
        .Q(\e[2][0] [3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[32]),
        .Q(\e[2][0] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[33]),
        .Q(\e[2][0] [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(s_out_v),
        .Q(n_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [0]),
        .Q(n_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [1]),
        .Q(n_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_1 [0]),
        .Q(n_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_1 [1]),
        .Q(n_msg[33]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[2][0] ),
        .R(rst));
  shadow_reg_combi_24 s0
       (.D(D),
        .Q(Q),
        .clk(clk),
        .\e[1][0] (\e[1][0] ),
        .\e[1][0]_36 (\e[1][0]_36 ),
        .e_msg(e_msg),
        .e_v115_out__1(e_v115_out__1),
        .\i[2][0]_36 (\i[2][0]_36 ),
        .\i_x_r_reg[0] (\i_x_r_reg[0] ),
        .\i_x_r_reg[1] (\s_out_x_reg_reg[1]_0 ),
        .\i_y_r_reg[1] (\i_y_r_reg[1] ),
        .n_in_v_reg(n_in_v_reg),
        .n_in_v_reg_reg(n_in_v_reg_reg_0),
        .n_in_v_reg_reg_0(n_in_v_reg_reg_1),
        .n_in_v_reg_reg_1(n_in_v_reg_reg_2),
        .\n_in_y_reg_reg[1] (\n_in_y_reg_reg[1]_0 ),
        .n_msg(n_msg),
        .number_tokens_reg(number_tokens_reg),
        .o_b_r_reg_0(o_b_r_reg),
        .o_b_r_reg_1(o_b_r_reg_0),
        .o_b_r_reg_2(dor_w2e),
        .o_b_r_reg_3(o_b_r_reg_1),
        .\o_v[2][0] (\o_v[2][0] ),
        .rst(rst),
        .s_msg(s_msg),
        .\s_out_x_reg_reg[1] (\s_out_x_reg_reg[1]_1 ),
        .\s_out_y_reg_reg[1] (\s_out_y_reg_reg[1]_0 ),
        .w_b(w_b),
        .waiting_for_ack_reg(waiting_for_ack_reg));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(n_in_v),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(\s_out_x_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(\s_out_x_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(Q[1]),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "torus_switch_bp" *) 
module torus_switch_bp__parameterized10
   (w_b,
    n_in_v,
    e_out_v,
    o_b_r_reg,
    D,
    Q,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    \s_out_x_reg_reg[1]_0 ,
    dor_w2e,
    n_in_v_reg_reg_2,
    n_in_v_reg_reg_3,
    o_b_r_reg_0,
    \e[3][2] ,
    rst,
    clk,
    dor_o_v,
    dor_s_v,
    E,
    dor_e_v,
    n_in_v_reg_reg_4,
    \i[3][2]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \e[2][2]_36 ,
    \e[2][2] ,
    \s_out_x_reg_reg[1]_1 ,
    \s_out_y_reg_reg[1]_0 ,
    \w_b[0][2] ,
    e_v214_in,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output w_b;
  output n_in_v;
  output e_out_v;
  output [0:0]o_b_r_reg;
  output [0:0]D;
  output [1:0]Q;
  output \i_y_r_reg[0] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output dor_w2e;
  output n_in_v_reg_reg_2;
  output n_in_v_reg_reg_3;
  output o_b_r_reg_0;
  output [3:0]\e[3][2] ;
  input rst;
  input clk;
  input dor_o_v;
  input dor_s_v;
  input [0:0]E;
  input dor_e_v;
  input n_in_v_reg_reg_4;
  input \i[3][2]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \e[2][2]_36 ;
  input [3:0]\e[2][2] ;
  input [1:0]\s_out_x_reg_reg[1]_1 ;
  input [1:0]\s_out_y_reg_reg[1]_0 ;
  input \w_b[0][2] ;
  input e_v214_in;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire [3:0]\e[2][2] ;
  wire \e[2][2]_36 ;
  wire [3:0]\e[3][2] ;
  wire [35:32]e_msg;
  wire e_out_v;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[3][2]_36 ;
  wire \i_y_r_reg[0] ;
  wire n_in_v;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire n_in_v_reg_reg_3;
  wire n_in_v_reg_reg_4;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire [0:0]o_b_r_reg;
  wire o_b_r_reg_0;
  wire \o_v[3][2] ;
  wire rst;
  wire [35:32]s_msg;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_x_reg_reg[1]_1 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire w_b;
  wire \w_b[0][2] ;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(E),
        .D(dor_e_v),
        .Q(e_out_v),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[34]),
        .Q(\e[3][2] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[35]),
        .Q(\e[3][2] [3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[32]),
        .Q(\e[3][2] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[33]),
        .Q(\e[3][2] [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(n_in_v_reg_reg_4),
        .Q(n_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [0]),
        .Q(n_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [1]),
        .Q(n_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [0]),
        .Q(n_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [1]),
        .Q(n_msg[33]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[3][2] ),
        .R(rst));
  shadow_reg_combi_6 s0
       (.D(D),
        .Q(Q),
        .clk(clk),
        .\e[2][2] (\e[2][2] ),
        .\e[2][2]_36 (\e[2][2]_36 ),
        .e_msg(e_msg),
        .e_v115_out__1(e_v115_out__1),
        .e_v214_in(e_v214_in),
        .\i[3][2]_36 (\i[3][2]_36 ),
        .\i_x_r_reg[1] (\s_out_x_reg_reg[1]_0 ),
        .\i_y_r_reg[0] (\i_y_r_reg[0] ),
        .n_in_v_reg(n_in_v_reg),
        .n_in_v_reg_reg(n_in_v_reg_reg_0),
        .n_in_v_reg_reg_0(n_in_v_reg_reg_1),
        .n_in_v_reg_reg_1(n_in_v_reg_reg_2),
        .n_in_v_reg_reg_2(n_in_v_reg_reg_3),
        .n_msg(n_msg),
        .number_tokens_reg(number_tokens_reg),
        .o_b_r_reg_0(w_b),
        .o_b_r_reg_1(o_b_r_reg),
        .o_b_r_reg_2(dor_w2e),
        .o_b_r_reg_3(o_b_r_reg_0),
        .\o_v[3][2] (\o_v[3][2] ),
        .rst(rst),
        .s_msg(s_msg),
        .\s_out_x_reg_reg[1] (\s_out_x_reg_reg[1]_1 ),
        .\s_out_y_reg_reg[1] (\s_out_y_reg_reg[1]_0 ),
        .\w_b[0][2] (\w_b[0][2] ),
        .waiting_for_ack_reg(waiting_for_ack_reg));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(n_in_v),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(\s_out_x_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(\s_out_x_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(Q[1]),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "torus_switch_bp" *) 
module torus_switch_bp__parameterized11
   (\w_b[0][3] ,
    s_out_v,
    \e[0][3]_36 ,
    D,
    Q,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    \s_out_x_reg_reg[1]_0 ,
    dor_w2e,
    o_b_r_reg,
    n_in_v_reg_reg_2,
    n_in_v_reg_reg_3,
    o_b_r_reg_0,
    \e[0][3] ,
    rst,
    clk,
    dor_o_v,
    dor_s_v,
    E,
    dor_e_v,
    n_in_v,
    \i[0][3]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    e_out_v,
    \e[3][3] ,
    \s_out_x_reg_reg[1]_1 ,
    \s_out_y_reg_reg[1]_0 ,
    w_b,
    e_v214_in,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output \w_b[0][3] ;
  output s_out_v;
  output \e[0][3]_36 ;
  output [0:0]D;
  output [1:0]Q;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output dor_w2e;
  output [0:0]o_b_r_reg;
  output n_in_v_reg_reg_2;
  output n_in_v_reg_reg_3;
  output o_b_r_reg_0;
  output [3:0]\e[0][3] ;
  input rst;
  input clk;
  input dor_o_v;
  input dor_s_v;
  input [0:0]E;
  input dor_e_v;
  input n_in_v;
  input \i[0][3]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input e_out_v;
  input [3:0]\e[3][3] ;
  input [1:0]\s_out_x_reg_reg[1]_1 ;
  input [1:0]\s_out_y_reg_reg[1]_0 ;
  input w_b;
  input e_v214_in;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire [3:0]\e[0][3] ;
  wire \e[0][3]_36 ;
  wire [3:0]\e[3][3] ;
  wire [35:32]e_msg;
  wire e_out_v;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[0][3]_36 ;
  wire \i_y_r_reg[1] ;
  wire n_in_v;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire n_in_v_reg_reg_3;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire [0:0]o_b_r_reg;
  wire o_b_r_reg_0;
  wire \o_v[0][3] ;
  wire rst;
  wire [35:32]s_msg;
  wire s_out_v;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_x_reg_reg[1]_1 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire w_b;
  wire \w_b[0][3] ;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(E),
        .D(dor_e_v),
        .Q(\e[0][3]_36 ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[34]),
        .Q(\e[0][3] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[35]),
        .Q(\e[0][3] [3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[32]),
        .Q(\e[0][3] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[33]),
        .Q(\e[0][3] [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(n_in_v),
        .Q(n_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [0]),
        .Q(n_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [1]),
        .Q(n_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [0]),
        .Q(n_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [1]),
        .Q(n_msg[33]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[0][3] ),
        .R(rst));
  shadow_reg_combi_4 s0
       (.D(D),
        .Q(Q),
        .clk(clk),
        .\e[3][3] (\e[3][3] ),
        .e_msg(e_msg),
        .e_out_v(e_out_v),
        .e_v115_out__1(e_v115_out__1),
        .e_v214_in(e_v214_in),
        .\i[0][3]_36 (\i[0][3]_36 ),
        .\i_x_r_reg[1] (\s_out_x_reg_reg[1]_0 ),
        .\i_y_r_reg[1] (\i_y_r_reg[1] ),
        .n_in_v_reg(n_in_v_reg),
        .n_in_v_reg_reg(n_in_v_reg_reg_0),
        .n_in_v_reg_reg_0(n_in_v_reg_reg_1),
        .n_in_v_reg_reg_1(n_in_v_reg_reg_2),
        .n_in_v_reg_reg_2(n_in_v_reg_reg_3),
        .n_msg(n_msg),
        .number_tokens_reg(number_tokens_reg),
        .o_b_r_reg_0(\w_b[0][3] ),
        .o_b_r_reg_1(dor_w2e),
        .o_b_r_reg_2(o_b_r_reg),
        .o_b_r_reg_3(o_b_r_reg_0),
        .\o_v[0][3] (\o_v[0][3] ),
        .rst(rst),
        .s_msg(s_msg),
        .\s_out_x_reg_reg[1] (\s_out_x_reg_reg[1]_1 ),
        .\s_out_y_reg_reg[1] (\s_out_y_reg_reg[1]_0 ),
        .w_b(w_b),
        .waiting_for_ack_reg(waiting_for_ack_reg));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(s_out_v),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(\s_out_x_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(\s_out_x_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(Q[1]),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "torus_switch_bp" *) 
module torus_switch_bp__parameterized12
   (w_b,
    s_out_v,
    \e[1][3]_36 ,
    o_b_r_reg,
    D,
    Q,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    \s_out_x_reg_reg[1]_0 ,
    dor_w2e,
    n_in_v_reg_reg_2,
    n_in_v_reg_reg_3,
    o_b_r_reg_0,
    \e[1][3] ,
    rst,
    clk,
    dor_o_v,
    dor_s_v,
    E,
    dor_e_v,
    n_in_v,
    \i[1][3]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \e[0][3]_36 ,
    \e[0][3] ,
    \s_out_x_reg_reg[1]_1 ,
    \s_out_y_reg_reg[1]_0 ,
    o_b_r_reg_1,
    \i_x_r_reg[0] ,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output w_b;
  output s_out_v;
  output \e[1][3]_36 ;
  output [0:0]o_b_r_reg;
  output [0:0]D;
  output [1:0]Q;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output dor_w2e;
  output n_in_v_reg_reg_2;
  output n_in_v_reg_reg_3;
  output o_b_r_reg_0;
  output [3:0]\e[1][3] ;
  input rst;
  input clk;
  input dor_o_v;
  input dor_s_v;
  input [0:0]E;
  input dor_e_v;
  input n_in_v;
  input \i[1][3]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \e[0][3]_36 ;
  input [3:0]\e[0][3] ;
  input [1:0]\s_out_x_reg_reg[1]_1 ;
  input [1:0]\s_out_y_reg_reg[1]_0 ;
  input o_b_r_reg_1;
  input \i_x_r_reg[0] ;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire [3:0]\e[0][3] ;
  wire \e[0][3]_36 ;
  wire [3:0]\e[1][3] ;
  wire \e[1][3]_36 ;
  wire [35:32]e_msg;
  wire e_v115_out__1;
  wire \i[1][3]_36 ;
  wire \i_x_r_reg[0] ;
  wire \i_y_r_reg[1] ;
  wire n_in_v;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire n_in_v_reg_reg_3;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire [0:0]o_b_r_reg;
  wire o_b_r_reg_0;
  wire o_b_r_reg_1;
  wire \o_v[1][3] ;
  wire rst;
  wire [35:32]s_msg;
  wire s_out_v;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_x_reg_reg[1]_1 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire w_b;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(E),
        .D(dor_e_v),
        .Q(\e[1][3]_36 ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[34]),
        .Q(\e[1][3] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[35]),
        .Q(\e[1][3] [3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[32]),
        .Q(\e[1][3] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[33]),
        .Q(\e[1][3] [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(n_in_v),
        .Q(n_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [0]),
        .Q(n_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [1]),
        .Q(n_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [0]),
        .Q(n_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [1]),
        .Q(n_msg[33]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[1][3] ),
        .R(rst));
  shadow_reg_combi_2 s0
       (.D(D),
        .Q(Q),
        .clk(clk),
        .\e[0][3] (\e[0][3] ),
        .\e[0][3]_36 (\e[0][3]_36 ),
        .e_msg(e_msg),
        .e_v115_out__1(e_v115_out__1),
        .\i[1][3]_36 (\i[1][3]_36 ),
        .\i_x_r_reg[0] (\i_x_r_reg[0] ),
        .\i_x_r_reg[1] (\s_out_x_reg_reg[1]_0 ),
        .\i_y_r_reg[1] (\i_y_r_reg[1] ),
        .n_in_v_reg(n_in_v_reg),
        .n_in_v_reg_reg(n_in_v_reg_reg_0),
        .n_in_v_reg_reg_0(n_in_v_reg_reg_1),
        .n_in_v_reg_reg_1(n_in_v_reg_reg_2),
        .n_in_v_reg_reg_2(n_in_v_reg_reg_3),
        .n_msg(n_msg),
        .number_tokens_reg(number_tokens_reg),
        .o_b_r_reg_0(w_b),
        .o_b_r_reg_1(o_b_r_reg),
        .o_b_r_reg_2(dor_w2e),
        .o_b_r_reg_3(o_b_r_reg_0),
        .o_b_r_reg_4(o_b_r_reg_1),
        .\o_v[1][3] (\o_v[1][3] ),
        .rst(rst),
        .s_msg(s_msg),
        .\s_out_x_reg_reg[1] (\s_out_x_reg_reg[1]_1 ),
        .\s_out_y_reg_reg[1] (\s_out_y_reg_reg[1]_0 ),
        .waiting_for_ack_reg(waiting_for_ack_reg));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(s_out_v),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(\s_out_x_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(\s_out_x_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(Q[1]),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "torus_switch_bp" *) 
module torus_switch_bp__parameterized13
   (o_b_r_reg,
    s_out_v,
    \e[2][3]_36 ,
    o_b_r_reg_0,
    D,
    Q,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    \s_out_x_reg_reg[1]_0 ,
    dor_w2e,
    n_in_v_reg_reg_2,
    n_in_v_reg_reg_3,
    o_b_r_reg_1,
    \e[2][3] ,
    rst,
    clk,
    dor_o_v,
    dor_s_v,
    E,
    dor_e_v,
    n_in_v,
    \i[2][3]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \e[1][3]_36 ,
    \e[1][3] ,
    \s_out_x_reg_reg[1]_1 ,
    \s_out_y_reg_reg[1]_0 ,
    w_b,
    \i_x_r_reg[0] ,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output o_b_r_reg;
  output s_out_v;
  output \e[2][3]_36 ;
  output [0:0]o_b_r_reg_0;
  output [0:0]D;
  output [1:0]Q;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output dor_w2e;
  output n_in_v_reg_reg_2;
  output n_in_v_reg_reg_3;
  output o_b_r_reg_1;
  output [3:0]\e[2][3] ;
  input rst;
  input clk;
  input dor_o_v;
  input dor_s_v;
  input [0:0]E;
  input dor_e_v;
  input n_in_v;
  input \i[2][3]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \e[1][3]_36 ;
  input [3:0]\e[1][3] ;
  input [1:0]\s_out_x_reg_reg[1]_1 ;
  input [1:0]\s_out_y_reg_reg[1]_0 ;
  input w_b;
  input \i_x_r_reg[0] ;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire [3:0]\e[1][3] ;
  wire \e[1][3]_36 ;
  wire [3:0]\e[2][3] ;
  wire \e[2][3]_36 ;
  wire [35:32]e_msg;
  wire e_v115_out__1;
  wire \i[2][3]_36 ;
  wire \i_x_r_reg[0] ;
  wire \i_y_r_reg[1] ;
  wire n_in_v;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire n_in_v_reg_reg_3;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire o_b_r_reg;
  wire [0:0]o_b_r_reg_0;
  wire o_b_r_reg_1;
  wire \o_v[2][3] ;
  wire rst;
  wire [35:32]s_msg;
  wire s_out_v;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_x_reg_reg[1]_1 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire w_b;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(E),
        .D(dor_e_v),
        .Q(\e[2][3]_36 ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[34]),
        .Q(\e[2][3] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[35]),
        .Q(\e[2][3] [3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[32]),
        .Q(\e[2][3] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[33]),
        .Q(\e[2][3] [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(n_in_v),
        .Q(n_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [0]),
        .Q(n_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [1]),
        .Q(n_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [0]),
        .Q(n_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [1]),
        .Q(n_msg[33]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[2][3] ),
        .R(rst));
  shadow_reg_combi_0 s0
       (.D(D),
        .Q(Q),
        .clk(clk),
        .\e[1][3] (\e[1][3] ),
        .\e[1][3]_36 (\e[1][3]_36 ),
        .e_msg(e_msg),
        .e_v115_out__1(e_v115_out__1),
        .\i[2][3]_36 (\i[2][3]_36 ),
        .\i_x_r_reg[0] (\i_x_r_reg[0] ),
        .\i_x_r_reg[1] (\s_out_x_reg_reg[1]_0 ),
        .\i_y_r_reg[1] (\i_y_r_reg[1] ),
        .n_in_v_reg(n_in_v_reg),
        .n_in_v_reg_reg(n_in_v_reg_reg_0),
        .n_in_v_reg_reg_0(n_in_v_reg_reg_1),
        .n_in_v_reg_reg_1(n_in_v_reg_reg_2),
        .n_in_v_reg_reg_2(n_in_v_reg_reg_3),
        .n_msg(n_msg),
        .number_tokens_reg(number_tokens_reg),
        .o_b_r_reg_0(o_b_r_reg),
        .o_b_r_reg_1(o_b_r_reg_0),
        .o_b_r_reg_2(dor_w2e),
        .o_b_r_reg_3(o_b_r_reg_1),
        .\o_v[2][3] (\o_v[2][3] ),
        .rst(rst),
        .s_msg(s_msg),
        .\s_out_x_reg_reg[1] (\s_out_x_reg_reg[1]_1 ),
        .\s_out_y_reg_reg[1] (\s_out_y_reg_reg[1]_0 ),
        .w_b(w_b),
        .waiting_for_ack_reg(waiting_for_ack_reg));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(s_out_v),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(\s_out_x_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(\s_out_x_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(Q[1]),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "torus_switch_bp" *) 
module torus_switch_bp__parameterized14
   (w_b,
    s_out_v,
    e_out_v,
    o_b_r_reg,
    D,
    Q,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    \s_out_x_reg_reg[1]_0 ,
    dor_w2e,
    n_in_v_reg_reg_2,
    n_in_v_reg_reg_3,
    o_b_r_reg_0,
    \e[3][3] ,
    rst,
    clk,
    dor_o_v,
    dor_s_v,
    E,
    dor_e_v,
    n_in_v,
    \i[3][3]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \e[2][3]_36 ,
    \e[2][3] ,
    \s_out_x_reg_reg[1]_1 ,
    \s_out_y_reg_reg[1]_0 ,
    \w_b[0][3] ,
    e_v214_in,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output w_b;
  output s_out_v;
  output e_out_v;
  output [0:0]o_b_r_reg;
  output [0:0]D;
  output [1:0]Q;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output dor_w2e;
  output n_in_v_reg_reg_2;
  output n_in_v_reg_reg_3;
  output o_b_r_reg_0;
  output [3:0]\e[3][3] ;
  input rst;
  input clk;
  input dor_o_v;
  input dor_s_v;
  input [0:0]E;
  input dor_e_v;
  input n_in_v;
  input \i[3][3]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \e[2][3]_36 ;
  input [3:0]\e[2][3] ;
  input [1:0]\s_out_x_reg_reg[1]_1 ;
  input [1:0]\s_out_y_reg_reg[1]_0 ;
  input \w_b[0][3] ;
  input e_v214_in;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire [3:0]\e[2][3] ;
  wire \e[2][3]_36 ;
  wire [3:0]\e[3][3] ;
  wire [35:32]e_msg;
  wire e_out_v;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[3][3]_36 ;
  wire \i_y_r_reg[1] ;
  wire n_in_v;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire n_in_v_reg_reg_3;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire [0:0]o_b_r_reg;
  wire o_b_r_reg_0;
  wire \o_v[3][3] ;
  wire rst;
  wire [35:32]s_msg;
  wire s_out_v;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_x_reg_reg[1]_1 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire w_b;
  wire \w_b[0][3] ;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(E),
        .D(dor_e_v),
        .Q(e_out_v),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[34]),
        .Q(\e[3][3] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[35]),
        .Q(\e[3][3] [3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[32]),
        .Q(\e[3][3] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[33]),
        .Q(\e[3][3] [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(n_in_v),
        .Q(n_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [0]),
        .Q(n_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [1]),
        .Q(n_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [0]),
        .Q(n_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [1]),
        .Q(n_msg[33]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[3][3] ),
        .R(rst));
  shadow_reg_combi s0
       (.D(D),
        .Q(Q),
        .clk(clk),
        .\e[2][3] (\e[2][3] ),
        .\e[2][3]_36 (\e[2][3]_36 ),
        .e_msg(e_msg),
        .e_v115_out__1(e_v115_out__1),
        .e_v214_in(e_v214_in),
        .\i[3][3]_36 (\i[3][3]_36 ),
        .\i_x_r_reg[1] (\s_out_x_reg_reg[1]_0 ),
        .\i_y_r_reg[1] (\i_y_r_reg[1] ),
        .n_in_v_reg(n_in_v_reg),
        .n_in_v_reg_reg(n_in_v_reg_reg_0),
        .n_in_v_reg_reg_0(n_in_v_reg_reg_1),
        .n_in_v_reg_reg_1(n_in_v_reg_reg_2),
        .n_in_v_reg_reg_2(n_in_v_reg_reg_3),
        .n_msg(n_msg),
        .number_tokens_reg(number_tokens_reg),
        .o_b_r_reg_0(w_b),
        .o_b_r_reg_1(o_b_r_reg),
        .o_b_r_reg_2(dor_w2e),
        .o_b_r_reg_3(o_b_r_reg_0),
        .\o_v[3][3] (\o_v[3][3] ),
        .rst(rst),
        .s_msg(s_msg),
        .\s_out_x_reg_reg[1] (\s_out_x_reg_reg[1]_1 ),
        .\s_out_y_reg_reg[1] (\s_out_y_reg_reg[1]_0 ),
        .\w_b[0][3] (\w_b[0][3] ),
        .waiting_for_ack_reg(waiting_for_ack_reg));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(s_out_v),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(\s_out_x_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(\s_out_x_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(Q[1]),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "torus_switch_bp" *) 
module torus_switch_bp__parameterized2
   (w_b,
    n_in_v,
    e_out_v,
    o_b_r_reg,
    D,
    Q,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    \s_out_x_reg_reg[1]_0 ,
    dor_w2e,
    \n_in_y_reg_reg[1]_0 ,
    n_in_v_reg_reg_2,
    o_b_r_reg_0,
    \e[3][0] ,
    rst,
    clk,
    dor_o_v,
    dor_s_v,
    E,
    dor_e_v,
    s_out_v,
    \i[3][0]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \e[2][0]_36 ,
    \e[2][0] ,
    \s_out_x_reg_reg[1]_1 ,
    \s_out_y_reg_reg[1]_0 ,
    \w_b[0][0] ,
    e_v214_in,
    \n_in_y_reg_reg[1]_1 ,
    \n_in_x_reg_reg[1]_0 );
  output w_b;
  output n_in_v;
  output e_out_v;
  output [0:0]o_b_r_reg;
  output [0:0]D;
  output [1:0]Q;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output dor_w2e;
  output \n_in_y_reg_reg[1]_0 ;
  output n_in_v_reg_reg_2;
  output o_b_r_reg_0;
  output [3:0]\e[3][0] ;
  input rst;
  input clk;
  input dor_o_v;
  input dor_s_v;
  input [0:0]E;
  input dor_e_v;
  input s_out_v;
  input \i[3][0]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \e[2][0]_36 ;
  input [3:0]\e[2][0] ;
  input [1:0]\s_out_x_reg_reg[1]_1 ;
  input [1:0]\s_out_y_reg_reg[1]_0 ;
  input \w_b[0][0] ;
  input e_v214_in;
  input [1:0]\n_in_y_reg_reg[1]_1 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire [3:0]\e[2][0] ;
  wire \e[2][0]_36 ;
  wire [3:0]\e[3][0] ;
  wire [35:32]e_msg;
  wire e_out_v;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[3][0]_36 ;
  wire \i_y_r_reg[1] ;
  wire n_in_v;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire \n_in_y_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_1 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire [0:0]o_b_r_reg;
  wire o_b_r_reg_0;
  wire \o_v[3][0] ;
  wire rst;
  wire [35:32]s_msg;
  wire s_out_v;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_x_reg_reg[1]_1 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire w_b;
  wire \w_b[0][0] ;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(E),
        .D(dor_e_v),
        .Q(e_out_v),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[34]),
        .Q(\e[3][0] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[35]),
        .Q(\e[3][0] [3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[32]),
        .Q(\e[3][0] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[33]),
        .Q(\e[3][0] [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(s_out_v),
        .Q(n_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [0]),
        .Q(n_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [1]),
        .Q(n_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_1 [0]),
        .Q(n_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_1 [1]),
        .Q(n_msg[33]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[3][0] ),
        .R(rst));
  shadow_reg_combi_22 s0
       (.D(D),
        .Q(Q),
        .clk(clk),
        .\e[2][0] (\e[2][0] ),
        .\e[2][0]_36 (\e[2][0]_36 ),
        .e_msg(e_msg),
        .e_v115_out__1(e_v115_out__1),
        .e_v214_in(e_v214_in),
        .\i[3][0]_36 (\i[3][0]_36 ),
        .\i_x_r_reg[1] (\s_out_x_reg_reg[1]_0 ),
        .\i_y_r_reg[1] (\i_y_r_reg[1] ),
        .n_in_v_reg(n_in_v_reg),
        .n_in_v_reg_reg(n_in_v_reg_reg_0),
        .n_in_v_reg_reg_0(n_in_v_reg_reg_1),
        .n_in_v_reg_reg_1(n_in_v_reg_reg_2),
        .\n_in_y_reg_reg[1] (\n_in_y_reg_reg[1]_0 ),
        .n_msg(n_msg),
        .number_tokens_reg(number_tokens_reg),
        .o_b_r_reg_0(w_b),
        .o_b_r_reg_1(o_b_r_reg),
        .o_b_r_reg_2(dor_w2e),
        .o_b_r_reg_3(o_b_r_reg_0),
        .\o_v[3][0] (\o_v[3][0] ),
        .rst(rst),
        .s_msg(s_msg),
        .\s_out_x_reg_reg[1] (\s_out_x_reg_reg[1]_1 ),
        .\s_out_y_reg_reg[1] (\s_out_y_reg_reg[1]_0 ),
        .\w_b[0][0] (\w_b[0][0] ),
        .waiting_for_ack_reg(waiting_for_ack_reg));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(n_in_v),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(\s_out_x_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(\s_out_x_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(Q[1]),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "torus_switch_bp" *) 
module torus_switch_bp__parameterized3
   (\w_b[0][1] ,
    n_in_v,
    \e[0][1]_36 ,
    D,
    Q,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    \s_out_x_reg_reg[1]_0 ,
    dor_w2e,
    o_b_r_reg,
    n_in_v_reg_reg_2,
    n_in_v_reg_reg_3,
    o_b_r_reg_0,
    \e[0][1] ,
    rst,
    clk,
    dor_o_v,
    dor_s_v,
    E,
    dor_e_v,
    n_in_v_reg_reg_4,
    \i[0][1]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    e_out_v,
    \e[3][1] ,
    \s_out_x_reg_reg[1]_1 ,
    \s_out_y_reg_reg[1]_0 ,
    w_b,
    e_v214_in,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output \w_b[0][1] ;
  output n_in_v;
  output \e[0][1]_36 ;
  output [0:0]D;
  output [1:0]Q;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output dor_w2e;
  output [0:0]o_b_r_reg;
  output n_in_v_reg_reg_2;
  output n_in_v_reg_reg_3;
  output o_b_r_reg_0;
  output [3:0]\e[0][1] ;
  input rst;
  input clk;
  input dor_o_v;
  input dor_s_v;
  input [0:0]E;
  input dor_e_v;
  input n_in_v_reg_reg_4;
  input \i[0][1]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input e_out_v;
  input [3:0]\e[3][1] ;
  input [1:0]\s_out_x_reg_reg[1]_1 ;
  input [1:0]\s_out_y_reg_reg[1]_0 ;
  input w_b;
  input e_v214_in;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire [3:0]\e[0][1] ;
  wire \e[0][1]_36 ;
  wire [3:0]\e[3][1] ;
  wire [35:32]e_msg;
  wire e_out_v;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[0][1]_36 ;
  wire \i_y_r_reg[1] ;
  wire n_in_v;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire n_in_v_reg_reg_3;
  wire n_in_v_reg_reg_4;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire [0:0]o_b_r_reg;
  wire o_b_r_reg_0;
  wire \o_v[0][1] ;
  wire rst;
  wire [35:32]s_msg;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_x_reg_reg[1]_1 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire w_b;
  wire \w_b[0][1] ;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(E),
        .D(dor_e_v),
        .Q(\e[0][1]_36 ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[34]),
        .Q(\e[0][1] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[35]),
        .Q(\e[0][1] [3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[32]),
        .Q(\e[0][1] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[33]),
        .Q(\e[0][1] [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(n_in_v_reg_reg_4),
        .Q(n_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [0]),
        .Q(n_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [1]),
        .Q(n_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [0]),
        .Q(n_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [1]),
        .Q(n_msg[33]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[0][1] ),
        .R(rst));
  shadow_reg_combi_20 s0
       (.D(D),
        .Q(Q),
        .clk(clk),
        .\e[3][1] (\e[3][1] ),
        .e_msg(e_msg),
        .e_out_v(e_out_v),
        .e_v115_out__1(e_v115_out__1),
        .e_v214_in(e_v214_in),
        .\i[0][1]_36 (\i[0][1]_36 ),
        .\i_x_r_reg[1] (\s_out_x_reg_reg[1]_0 ),
        .\i_y_r_reg[1] (\i_y_r_reg[1] ),
        .n_in_v_reg(n_in_v_reg),
        .n_in_v_reg_reg(n_in_v_reg_reg_0),
        .n_in_v_reg_reg_0(n_in_v_reg_reg_1),
        .n_in_v_reg_reg_1(n_in_v_reg_reg_2),
        .n_in_v_reg_reg_2(n_in_v_reg_reg_3),
        .n_msg(n_msg),
        .number_tokens_reg(number_tokens_reg),
        .o_b_r_reg_0(\w_b[0][1] ),
        .o_b_r_reg_1(dor_w2e),
        .o_b_r_reg_2(o_b_r_reg),
        .o_b_r_reg_3(o_b_r_reg_0),
        .\o_v[0][1] (\o_v[0][1] ),
        .rst(rst),
        .s_msg(s_msg),
        .\s_out_x_reg_reg[1] (\s_out_x_reg_reg[1]_1 ),
        .\s_out_y_reg_reg[1] (\s_out_y_reg_reg[1]_0 ),
        .w_b(w_b),
        .waiting_for_ack_reg(waiting_for_ack_reg));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(n_in_v),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(\s_out_x_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(\s_out_x_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(Q[1]),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "torus_switch_bp" *) 
module torus_switch_bp__parameterized4
   (w_b,
    n_in_v,
    \e[1][1]_36 ,
    o_b_r_reg,
    D,
    Q,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    \s_out_x_reg_reg[1]_0 ,
    dor_w2e,
    n_in_v_reg_reg_2,
    n_in_v_reg_reg_3,
    o_b_r_reg_0,
    \e[1][1] ,
    rst,
    clk,
    dor_o_v,
    dor_s_v,
    E,
    dor_e_v,
    n_in_v_reg_reg_4,
    \i[1][1]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \e[0][1]_36 ,
    \e[0][1] ,
    \s_out_x_reg_reg[1]_1 ,
    \s_out_y_reg_reg[1]_0 ,
    o_b_r_reg_1,
    \i_x_r_reg[0] ,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output w_b;
  output n_in_v;
  output \e[1][1]_36 ;
  output [0:0]o_b_r_reg;
  output [0:0]D;
  output [1:0]Q;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output dor_w2e;
  output n_in_v_reg_reg_2;
  output n_in_v_reg_reg_3;
  output o_b_r_reg_0;
  output [3:0]\e[1][1] ;
  input rst;
  input clk;
  input dor_o_v;
  input dor_s_v;
  input [0:0]E;
  input dor_e_v;
  input n_in_v_reg_reg_4;
  input \i[1][1]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \e[0][1]_36 ;
  input [3:0]\e[0][1] ;
  input [1:0]\s_out_x_reg_reg[1]_1 ;
  input [1:0]\s_out_y_reg_reg[1]_0 ;
  input o_b_r_reg_1;
  input \i_x_r_reg[0] ;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire [3:0]\e[0][1] ;
  wire \e[0][1]_36 ;
  wire [3:0]\e[1][1] ;
  wire \e[1][1]_36 ;
  wire [35:32]e_msg;
  wire e_v115_out__1;
  wire \i[1][1]_36 ;
  wire \i_x_r_reg[0] ;
  wire \i_y_r_reg[1] ;
  wire n_in_v;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire n_in_v_reg_reg_3;
  wire n_in_v_reg_reg_4;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire [0:0]o_b_r_reg;
  wire o_b_r_reg_0;
  wire o_b_r_reg_1;
  wire \o_v[1][1] ;
  wire rst;
  wire [35:32]s_msg;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_x_reg_reg[1]_1 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire w_b;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(E),
        .D(dor_e_v),
        .Q(\e[1][1]_36 ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[34]),
        .Q(\e[1][1] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[35]),
        .Q(\e[1][1] [3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[32]),
        .Q(\e[1][1] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[33]),
        .Q(\e[1][1] [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(n_in_v_reg_reg_4),
        .Q(n_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [0]),
        .Q(n_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [1]),
        .Q(n_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [0]),
        .Q(n_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [1]),
        .Q(n_msg[33]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[1][1] ),
        .R(rst));
  shadow_reg_combi_18 s0
       (.D(D),
        .Q(Q),
        .clk(clk),
        .\e[0][1] (\e[0][1] ),
        .\e[0][1]_36 (\e[0][1]_36 ),
        .e_msg(e_msg),
        .e_v115_out__1(e_v115_out__1),
        .\i[1][1]_36 (\i[1][1]_36 ),
        .\i_x_r_reg[0] (\i_x_r_reg[0] ),
        .\i_x_r_reg[1] (\s_out_x_reg_reg[1]_0 ),
        .\i_y_r_reg[1] (\i_y_r_reg[1] ),
        .n_in_v_reg(n_in_v_reg),
        .n_in_v_reg_reg(n_in_v_reg_reg_0),
        .n_in_v_reg_reg_0(n_in_v_reg_reg_1),
        .n_in_v_reg_reg_1(n_in_v_reg_reg_2),
        .n_in_v_reg_reg_2(n_in_v_reg_reg_3),
        .n_msg(n_msg),
        .number_tokens_reg(number_tokens_reg),
        .o_b_r_reg_0(w_b),
        .o_b_r_reg_1(o_b_r_reg),
        .o_b_r_reg_2(dor_w2e),
        .o_b_r_reg_3(o_b_r_reg_0),
        .o_b_r_reg_4(o_b_r_reg_1),
        .\o_v[1][1] (\o_v[1][1] ),
        .rst(rst),
        .s_msg(s_msg),
        .\s_out_x_reg_reg[1] (\s_out_x_reg_reg[1]_1 ),
        .\s_out_y_reg_reg[1] (\s_out_y_reg_reg[1]_0 ),
        .waiting_for_ack_reg(waiting_for_ack_reg));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(n_in_v),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(\s_out_x_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(\s_out_x_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(Q[1]),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "torus_switch_bp" *) 
module torus_switch_bp__parameterized5
   (o_b_r_reg,
    n_in_v,
    \e[2][1]_36 ,
    o_b_r_reg_0,
    D,
    Q,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    \s_out_x_reg_reg[1]_0 ,
    dor_w2e,
    n_in_v_reg_reg_2,
    n_in_v_reg_reg_3,
    o_b_r_reg_1,
    \e[2][1] ,
    rst,
    clk,
    dor_o_v,
    dor_s_v,
    E,
    dor_e_v,
    n_in_v_reg_reg_4,
    \i[2][1]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \e[1][1]_36 ,
    \e[1][1] ,
    \s_out_x_reg_reg[1]_1 ,
    \s_out_y_reg_reg[1]_0 ,
    w_b,
    \i_x_r_reg[0] ,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output o_b_r_reg;
  output n_in_v;
  output \e[2][1]_36 ;
  output [0:0]o_b_r_reg_0;
  output [0:0]D;
  output [1:0]Q;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output dor_w2e;
  output n_in_v_reg_reg_2;
  output n_in_v_reg_reg_3;
  output o_b_r_reg_1;
  output [3:0]\e[2][1] ;
  input rst;
  input clk;
  input dor_o_v;
  input dor_s_v;
  input [0:0]E;
  input dor_e_v;
  input n_in_v_reg_reg_4;
  input \i[2][1]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \e[1][1]_36 ;
  input [3:0]\e[1][1] ;
  input [1:0]\s_out_x_reg_reg[1]_1 ;
  input [1:0]\s_out_y_reg_reg[1]_0 ;
  input w_b;
  input \i_x_r_reg[0] ;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire [3:0]\e[1][1] ;
  wire \e[1][1]_36 ;
  wire [3:0]\e[2][1] ;
  wire \e[2][1]_36 ;
  wire [35:32]e_msg;
  wire e_v115_out__1;
  wire \i[2][1]_36 ;
  wire \i_x_r_reg[0] ;
  wire \i_y_r_reg[1] ;
  wire n_in_v;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire n_in_v_reg_reg_3;
  wire n_in_v_reg_reg_4;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire o_b_r_reg;
  wire [0:0]o_b_r_reg_0;
  wire o_b_r_reg_1;
  wire \o_v[2][1] ;
  wire rst;
  wire [35:32]s_msg;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_x_reg_reg[1]_1 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire w_b;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(E),
        .D(dor_e_v),
        .Q(\e[2][1]_36 ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[34]),
        .Q(\e[2][1] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[35]),
        .Q(\e[2][1] [3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[32]),
        .Q(\e[2][1] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[33]),
        .Q(\e[2][1] [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(n_in_v_reg_reg_4),
        .Q(n_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [0]),
        .Q(n_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [1]),
        .Q(n_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [0]),
        .Q(n_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [1]),
        .Q(n_msg[33]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[2][1] ),
        .R(rst));
  shadow_reg_combi_16 s0
       (.D(D),
        .Q(Q),
        .clk(clk),
        .\e[1][1] (\e[1][1] ),
        .\e[1][1]_36 (\e[1][1]_36 ),
        .e_msg(e_msg),
        .e_v115_out__1(e_v115_out__1),
        .\i[2][1]_36 (\i[2][1]_36 ),
        .\i_x_r_reg[0] (\i_x_r_reg[0] ),
        .\i_x_r_reg[1] (\s_out_x_reg_reg[1]_0 ),
        .\i_y_r_reg[1] (\i_y_r_reg[1] ),
        .n_in_v_reg(n_in_v_reg),
        .n_in_v_reg_reg(n_in_v_reg_reg_0),
        .n_in_v_reg_reg_0(n_in_v_reg_reg_1),
        .n_in_v_reg_reg_1(n_in_v_reg_reg_2),
        .n_in_v_reg_reg_2(n_in_v_reg_reg_3),
        .n_msg(n_msg),
        .number_tokens_reg(number_tokens_reg),
        .o_b_r_reg_0(o_b_r_reg),
        .o_b_r_reg_1(o_b_r_reg_0),
        .o_b_r_reg_2(dor_w2e),
        .o_b_r_reg_3(o_b_r_reg_1),
        .\o_v[2][1] (\o_v[2][1] ),
        .rst(rst),
        .s_msg(s_msg),
        .\s_out_x_reg_reg[1] (\s_out_x_reg_reg[1]_1 ),
        .\s_out_y_reg_reg[1] (\s_out_y_reg_reg[1]_0 ),
        .w_b(w_b),
        .waiting_for_ack_reg(waiting_for_ack_reg));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(n_in_v),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(\s_out_x_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(\s_out_x_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(Q[1]),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "torus_switch_bp" *) 
module torus_switch_bp__parameterized6
   (w_b,
    n_in_v,
    e_out_v,
    o_b_r_reg,
    D,
    Q,
    \i_y_r_reg[1] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    \s_out_x_reg_reg[1]_0 ,
    dor_w2e,
    n_in_v_reg_reg_2,
    n_in_v_reg_reg_3,
    o_b_r_reg_0,
    \e[3][1] ,
    rst,
    clk,
    dor_o_v,
    dor_s_v,
    E,
    dor_e_v,
    n_in_v_reg_reg_4,
    \i[3][1]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \e[2][1]_36 ,
    \e[2][1] ,
    \s_out_x_reg_reg[1]_1 ,
    \s_out_y_reg_reg[1]_0 ,
    \w_b[0][1] ,
    e_v214_in,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output w_b;
  output n_in_v;
  output e_out_v;
  output [0:0]o_b_r_reg;
  output [0:0]D;
  output [1:0]Q;
  output \i_y_r_reg[1] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output dor_w2e;
  output n_in_v_reg_reg_2;
  output n_in_v_reg_reg_3;
  output o_b_r_reg_0;
  output [3:0]\e[3][1] ;
  input rst;
  input clk;
  input dor_o_v;
  input dor_s_v;
  input [0:0]E;
  input dor_e_v;
  input n_in_v_reg_reg_4;
  input \i[3][1]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \e[2][1]_36 ;
  input [3:0]\e[2][1] ;
  input [1:0]\s_out_x_reg_reg[1]_1 ;
  input [1:0]\s_out_y_reg_reg[1]_0 ;
  input \w_b[0][1] ;
  input e_v214_in;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire [3:0]\e[2][1] ;
  wire \e[2][1]_36 ;
  wire [3:0]\e[3][1] ;
  wire [35:32]e_msg;
  wire e_out_v;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[3][1]_36 ;
  wire \i_y_r_reg[1] ;
  wire n_in_v;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire n_in_v_reg_reg_3;
  wire n_in_v_reg_reg_4;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire [0:0]o_b_r_reg;
  wire o_b_r_reg_0;
  wire \o_v[3][1] ;
  wire rst;
  wire [35:32]s_msg;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_x_reg_reg[1]_1 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire w_b;
  wire \w_b[0][1] ;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(E),
        .D(dor_e_v),
        .Q(e_out_v),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[34]),
        .Q(\e[3][1] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[35]),
        .Q(\e[3][1] [3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[32]),
        .Q(\e[3][1] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[33]),
        .Q(\e[3][1] [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(n_in_v_reg_reg_4),
        .Q(n_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [0]),
        .Q(n_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [1]),
        .Q(n_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [0]),
        .Q(n_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [1]),
        .Q(n_msg[33]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[3][1] ),
        .R(rst));
  shadow_reg_combi_14 s0
       (.D(D),
        .Q(Q),
        .clk(clk),
        .\e[2][1] (\e[2][1] ),
        .\e[2][1]_36 (\e[2][1]_36 ),
        .e_msg(e_msg),
        .e_v115_out__1(e_v115_out__1),
        .e_v214_in(e_v214_in),
        .\i[3][1]_36 (\i[3][1]_36 ),
        .\i_x_r_reg[1] (\s_out_x_reg_reg[1]_0 ),
        .\i_y_r_reg[1] (\i_y_r_reg[1] ),
        .n_in_v_reg(n_in_v_reg),
        .n_in_v_reg_reg(n_in_v_reg_reg_0),
        .n_in_v_reg_reg_0(n_in_v_reg_reg_1),
        .n_in_v_reg_reg_1(n_in_v_reg_reg_2),
        .n_in_v_reg_reg_2(n_in_v_reg_reg_3),
        .n_msg(n_msg),
        .number_tokens_reg(number_tokens_reg),
        .o_b_r_reg_0(w_b),
        .o_b_r_reg_1(o_b_r_reg),
        .o_b_r_reg_2(dor_w2e),
        .o_b_r_reg_3(o_b_r_reg_0),
        .\o_v[3][1] (\o_v[3][1] ),
        .rst(rst),
        .s_msg(s_msg),
        .\s_out_x_reg_reg[1] (\s_out_x_reg_reg[1]_1 ),
        .\s_out_y_reg_reg[1] (\s_out_y_reg_reg[1]_0 ),
        .\w_b[0][1] (\w_b[0][1] ),
        .waiting_for_ack_reg(waiting_for_ack_reg));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(n_in_v),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(\s_out_x_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(\s_out_x_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(Q[1]),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "torus_switch_bp" *) 
module torus_switch_bp__parameterized7
   (\w_b[0][2] ,
    n_in_v,
    \e[0][2]_36 ,
    D,
    Q,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    \s_out_x_reg_reg[1]_0 ,
    dor_w2e,
    o_b_r_reg,
    n_in_v_reg_reg_2,
    n_in_v_reg_reg_3,
    o_b_r_reg_0,
    \e[0][2] ,
    rst,
    clk,
    dor_o_v,
    dor_s_v,
    E,
    dor_e_v,
    n_in_v_reg_reg_4,
    \i[0][2]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    e_out_v,
    \e[3][2] ,
    \s_out_x_reg_reg[1]_1 ,
    \s_out_y_reg_reg[1]_0 ,
    w_b,
    e_v214_in,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output \w_b[0][2] ;
  output n_in_v;
  output \e[0][2]_36 ;
  output [0:0]D;
  output [1:0]Q;
  output \i_y_r_reg[0] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output dor_w2e;
  output [0:0]o_b_r_reg;
  output n_in_v_reg_reg_2;
  output n_in_v_reg_reg_3;
  output o_b_r_reg_0;
  output [3:0]\e[0][2] ;
  input rst;
  input clk;
  input dor_o_v;
  input dor_s_v;
  input [0:0]E;
  input dor_e_v;
  input n_in_v_reg_reg_4;
  input \i[0][2]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input e_out_v;
  input [3:0]\e[3][2] ;
  input [1:0]\s_out_x_reg_reg[1]_1 ;
  input [1:0]\s_out_y_reg_reg[1]_0 ;
  input w_b;
  input e_v214_in;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire [3:0]\e[0][2] ;
  wire \e[0][2]_36 ;
  wire [3:0]\e[3][2] ;
  wire [35:32]e_msg;
  wire e_out_v;
  wire e_v115_out__1;
  wire e_v214_in;
  wire \i[0][2]_36 ;
  wire \i_y_r_reg[0] ;
  wire n_in_v;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire n_in_v_reg_reg_3;
  wire n_in_v_reg_reg_4;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire [0:0]o_b_r_reg;
  wire o_b_r_reg_0;
  wire \o_v[0][2] ;
  wire rst;
  wire [35:32]s_msg;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_x_reg_reg[1]_1 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire w_b;
  wire \w_b[0][2] ;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(E),
        .D(dor_e_v),
        .Q(\e[0][2]_36 ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[34]),
        .Q(\e[0][2] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[35]),
        .Q(\e[0][2] [3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[32]),
        .Q(\e[0][2] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[33]),
        .Q(\e[0][2] [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(n_in_v_reg_reg_4),
        .Q(n_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [0]),
        .Q(n_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [1]),
        .Q(n_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [0]),
        .Q(n_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [1]),
        .Q(n_msg[33]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[0][2] ),
        .R(rst));
  shadow_reg_combi_12 s0
       (.D(D),
        .Q(Q),
        .clk(clk),
        .\e[3][2] (\e[3][2] ),
        .e_msg(e_msg),
        .e_out_v(e_out_v),
        .e_v115_out__1(e_v115_out__1),
        .e_v214_in(e_v214_in),
        .\i[0][2]_36 (\i[0][2]_36 ),
        .\i_x_r_reg[1] (\s_out_x_reg_reg[1]_0 ),
        .\i_y_r_reg[0] (\i_y_r_reg[0] ),
        .n_in_v_reg(n_in_v_reg),
        .n_in_v_reg_reg(n_in_v_reg_reg_0),
        .n_in_v_reg_reg_0(n_in_v_reg_reg_1),
        .n_in_v_reg_reg_1(n_in_v_reg_reg_2),
        .n_in_v_reg_reg_2(n_in_v_reg_reg_3),
        .n_msg(n_msg),
        .number_tokens_reg(number_tokens_reg),
        .o_b_r_reg_0(\w_b[0][2] ),
        .o_b_r_reg_1(dor_w2e),
        .o_b_r_reg_2(o_b_r_reg),
        .o_b_r_reg_3(o_b_r_reg_0),
        .\o_v[0][2] (\o_v[0][2] ),
        .rst(rst),
        .s_msg(s_msg),
        .\s_out_x_reg_reg[1] (\s_out_x_reg_reg[1]_1 ),
        .\s_out_y_reg_reg[1] (\s_out_y_reg_reg[1]_0 ),
        .w_b(w_b),
        .waiting_for_ack_reg(waiting_for_ack_reg));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(n_in_v),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(\s_out_x_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(\s_out_x_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(Q[1]),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "torus_switch_bp" *) 
module torus_switch_bp__parameterized8
   (w_b,
    n_in_v,
    \e[1][2]_36 ,
    o_b_r_reg,
    D,
    Q,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    \s_out_x_reg_reg[1]_0 ,
    dor_w2e,
    n_in_v_reg_reg_2,
    n_in_v_reg_reg_3,
    o_b_r_reg_0,
    \e[1][2] ,
    rst,
    clk,
    dor_o_v,
    dor_s_v,
    E,
    dor_e_v,
    n_in_v_reg_reg_4,
    \i[1][2]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \e[0][2]_36 ,
    \e[0][2] ,
    \s_out_x_reg_reg[1]_1 ,
    \s_out_y_reg_reg[1]_0 ,
    o_b_r_reg_1,
    \i_x_r_reg[0] ,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output w_b;
  output n_in_v;
  output \e[1][2]_36 ;
  output [0:0]o_b_r_reg;
  output [0:0]D;
  output [1:0]Q;
  output \i_y_r_reg[0] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output dor_w2e;
  output n_in_v_reg_reg_2;
  output n_in_v_reg_reg_3;
  output o_b_r_reg_0;
  output [3:0]\e[1][2] ;
  input rst;
  input clk;
  input dor_o_v;
  input dor_s_v;
  input [0:0]E;
  input dor_e_v;
  input n_in_v_reg_reg_4;
  input \i[1][2]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \e[0][2]_36 ;
  input [3:0]\e[0][2] ;
  input [1:0]\s_out_x_reg_reg[1]_1 ;
  input [1:0]\s_out_y_reg_reg[1]_0 ;
  input o_b_r_reg_1;
  input \i_x_r_reg[0] ;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire [3:0]\e[0][2] ;
  wire \e[0][2]_36 ;
  wire [3:0]\e[1][2] ;
  wire \e[1][2]_36 ;
  wire [35:32]e_msg;
  wire e_v115_out__1;
  wire \i[1][2]_36 ;
  wire \i_x_r_reg[0] ;
  wire \i_y_r_reg[0] ;
  wire n_in_v;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire n_in_v_reg_reg_3;
  wire n_in_v_reg_reg_4;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire [0:0]o_b_r_reg;
  wire o_b_r_reg_0;
  wire o_b_r_reg_1;
  wire \o_v[1][2] ;
  wire rst;
  wire [35:32]s_msg;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_x_reg_reg[1]_1 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire w_b;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(E),
        .D(dor_e_v),
        .Q(\e[1][2]_36 ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[34]),
        .Q(\e[1][2] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[35]),
        .Q(\e[1][2] [3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[32]),
        .Q(\e[1][2] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[33]),
        .Q(\e[1][2] [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(n_in_v_reg_reg_4),
        .Q(n_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [0]),
        .Q(n_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [1]),
        .Q(n_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [0]),
        .Q(n_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [1]),
        .Q(n_msg[33]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[1][2] ),
        .R(rst));
  shadow_reg_combi_10 s0
       (.D(D),
        .Q(Q),
        .clk(clk),
        .\e[0][2] (\e[0][2] ),
        .\e[0][2]_36 (\e[0][2]_36 ),
        .e_msg(e_msg),
        .e_v115_out__1(e_v115_out__1),
        .\i[1][2]_36 (\i[1][2]_36 ),
        .\i_x_r_reg[0] (\i_x_r_reg[0] ),
        .\i_x_r_reg[1] (\s_out_x_reg_reg[1]_0 ),
        .\i_y_r_reg[0] (\i_y_r_reg[0] ),
        .n_in_v_reg(n_in_v_reg),
        .n_in_v_reg_reg(n_in_v_reg_reg_0),
        .n_in_v_reg_reg_0(n_in_v_reg_reg_1),
        .n_in_v_reg_reg_1(n_in_v_reg_reg_2),
        .n_in_v_reg_reg_2(n_in_v_reg_reg_3),
        .n_msg(n_msg),
        .number_tokens_reg(number_tokens_reg),
        .o_b_r_reg_0(w_b),
        .o_b_r_reg_1(o_b_r_reg),
        .o_b_r_reg_2(dor_w2e),
        .o_b_r_reg_3(o_b_r_reg_0),
        .o_b_r_reg_4(o_b_r_reg_1),
        .\o_v[1][2] (\o_v[1][2] ),
        .rst(rst),
        .s_msg(s_msg),
        .\s_out_x_reg_reg[1] (\s_out_x_reg_reg[1]_1 ),
        .\s_out_y_reg_reg[1] (\s_out_y_reg_reg[1]_0 ),
        .waiting_for_ack_reg(waiting_for_ack_reg));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(n_in_v),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(\s_out_x_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(\s_out_x_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(Q[1]),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "torus_switch_bp" *) 
module torus_switch_bp__parameterized9
   (o_b_r_reg,
    n_in_v,
    \e[2][2]_36 ,
    o_b_r_reg_0,
    D,
    Q,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    \s_out_x_reg_reg[1]_0 ,
    dor_w2e,
    n_in_v_reg_reg_2,
    n_in_v_reg_reg_3,
    o_b_r_reg_1,
    \e[2][2] ,
    rst,
    clk,
    dor_o_v,
    dor_s_v,
    E,
    dor_e_v,
    n_in_v_reg_reg_4,
    \i[2][2]_36 ,
    number_tokens_reg,
    e_v115_out__1,
    \e[1][2]_36 ,
    \e[1][2] ,
    \s_out_x_reg_reg[1]_1 ,
    \s_out_y_reg_reg[1]_0 ,
    w_b,
    \i_x_r_reg[0] ,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output o_b_r_reg;
  output n_in_v;
  output \e[2][2]_36 ;
  output [0:0]o_b_r_reg_0;
  output [0:0]D;
  output [1:0]Q;
  output \i_y_r_reg[0] ;
  output [1:0]waiting_for_ack_reg;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output dor_w2e;
  output n_in_v_reg_reg_2;
  output n_in_v_reg_reg_3;
  output o_b_r_reg_1;
  output [3:0]\e[2][2] ;
  input rst;
  input clk;
  input dor_o_v;
  input dor_s_v;
  input [0:0]E;
  input dor_e_v;
  input n_in_v_reg_reg_4;
  input \i[2][2]_36 ;
  input [1:0]number_tokens_reg;
  input e_v115_out__1;
  input \e[1][2]_36 ;
  input [3:0]\e[1][2] ;
  input [1:0]\s_out_x_reg_reg[1]_1 ;
  input [1:0]\s_out_y_reg_reg[1]_0 ;
  input w_b;
  input \i_x_r_reg[0] ;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire dor_w2e;
  wire [3:0]\e[1][2] ;
  wire \e[1][2]_36 ;
  wire [3:0]\e[2][2] ;
  wire \e[2][2]_36 ;
  wire [35:32]e_msg;
  wire e_v115_out__1;
  wire \i[2][2]_36 ;
  wire \i_x_r_reg[0] ;
  wire \i_y_r_reg[0] ;
  wire n_in_v;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire n_in_v_reg_reg_3;
  wire n_in_v_reg_reg_4;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire o_b_r_reg;
  wire [0:0]o_b_r_reg_0;
  wire o_b_r_reg_1;
  wire \o_v[2][2] ;
  wire rst;
  wire [35:32]s_msg;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_x_reg_reg[1]_1 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire w_b;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(E),
        .D(dor_e_v),
        .Q(\e[2][2]_36 ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[34]),
        .Q(\e[2][2] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[35]),
        .Q(\e[2][2] [3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(E),
        .D(e_msg[32]),
        .Q(\e[2][2] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(E),
        .D(e_msg[33]),
        .Q(\e[2][2] [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(n_in_v_reg_reg_4),
        .Q(n_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [0]),
        .Q(n_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_x_reg_reg[1]_0 [1]),
        .Q(n_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [0]),
        .Q(n_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \n_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\n_in_y_reg_reg[1]_0 [1]),
        .Q(n_msg[33]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[2][2] ),
        .R(rst));
  shadow_reg_combi_8 s0
       (.D(D),
        .Q(Q),
        .clk(clk),
        .\e[1][2] (\e[1][2] ),
        .\e[1][2]_36 (\e[1][2]_36 ),
        .e_msg(e_msg),
        .e_v115_out__1(e_v115_out__1),
        .\i[2][2]_36 (\i[2][2]_36 ),
        .\i_x_r_reg[0] (\i_x_r_reg[0] ),
        .\i_x_r_reg[1] (\s_out_x_reg_reg[1]_0 ),
        .\i_y_r_reg[0] (\i_y_r_reg[0] ),
        .n_in_v_reg(n_in_v_reg),
        .n_in_v_reg_reg(n_in_v_reg_reg_0),
        .n_in_v_reg_reg_0(n_in_v_reg_reg_1),
        .n_in_v_reg_reg_1(n_in_v_reg_reg_2),
        .n_in_v_reg_reg_2(n_in_v_reg_reg_3),
        .n_msg(n_msg),
        .number_tokens_reg(number_tokens_reg),
        .o_b_r_reg_0(o_b_r_reg),
        .o_b_r_reg_1(o_b_r_reg_0),
        .o_b_r_reg_2(dor_w2e),
        .o_b_r_reg_3(o_b_r_reg_1),
        .\o_v[2][2] (\o_v[2][2] ),
        .rst(rst),
        .s_msg(s_msg),
        .\s_out_x_reg_reg[1] (\s_out_x_reg_reg[1]_1 ),
        .\s_out_y_reg_reg[1] (\s_out_y_reg_reg[1]_0 ),
        .w_b(w_b),
        .waiting_for_ack_reg(waiting_for_ack_reg));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(n_in_v),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(\s_out_x_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(\s_out_x_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(Q[1]),
        .R(rst));
endmodule
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;
    parameter GRES_WIDTH = 10000;
    parameter GRES_START = 10000;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    wire GRESTORE;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;
    reg GRESTORE_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;
    assign (strong1, weak0) GRESTORE = GRESTORE_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

    initial begin 
	GRESTORE_int = 1'b0;
	#(GRES_START);
	GRESTORE_int = 1'b1;
	#(GRES_WIDTH);
	GRESTORE_int = 1'b0;
    end

endmodule
`endif
