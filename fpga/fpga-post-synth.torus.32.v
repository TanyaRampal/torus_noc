// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2022.1 (lin64) Build 3526262 Mon Apr 18 15:47:01 MDT 2022
// Date        : Fri Dec  6 14:33:46 2024
// Host        : ECEUBUNTU2 running 64-bit Red Hat Enterprise Linux release 8.10 (Ootpa)
// Command     : write_verilog -force -mode funcsim fpga-post-synth.torus.32.v
// Design      : torus
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7z020clg400-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module client
   (\i[0][0]_36 ,
    dor_s_v,
    \i_y_r_reg[1]_0 ,
    \i_x_r_reg[1]_0 ,
    dor_e_v,
    Q,
    number_tokens_reg,
    \i_y_r_reg[1]_1 ,
    rst,
    E,
    clk,
    s_out_v_reg_reg,
    s_out_v_reg_reg_0,
    s_out_v_reg_reg_1,
    e_out_v_reg_reg,
    D,
    \i_y_r_reg[0]_0 ,
    waiting_for_ack_reg_0,
    \i_x_r_reg[1]_1 );
  output \i[0][0]_36 ;
  output dor_s_v;
  output \i_y_r_reg[1]_0 ;
  output \i_x_r_reg[1]_0 ;
  output dor_e_v;
  output [1:0]Q;
  output [1:0]number_tokens_reg;
  output [1:0]\i_y_r_reg[1]_1 ;
  input rst;
  input [0:0]E;
  input clk;
  input s_out_v_reg_reg;
  input s_out_v_reg_reg_0;
  input s_out_v_reg_reg_1;
  input e_out_v_reg_reg;
  input [0:0]D;
  input [0:0]\i_y_r_reg[0]_0 ;
  input waiting_for_ack_reg_0;
  input [1:0]\i_x_r_reg[1]_1 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire [0:0]_00_;
  wire [0:0]_02_;
  wire clk;
  wire dor_e_v;
  wire dor_s_v;
  wire e_out_v_reg_reg;
  wire \i[0][0]_36 ;
  wire \i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire [0:0]\i_y_r_reg[0]_0 ;
  wire \i_y_r_reg[1]_0 ;
  wire [1:0]\i_y_r_reg[1]_1 ;
  wire [1:0]number_tokens_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire s_out_v_reg_reg_0;
  wire s_out_v_reg_reg_1;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT4 #(
    .INIT(16'hE0FF)) 
    e_out_v_reg_i_1
       (.I0(Q[1]),
        .I1(Q[0]),
        .I2(\i[0][0]_36 ),
        .I3(e_out_v_reg_reg),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_1 [0]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_1 [1]),
        .Q(Q[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(_02_),
        .Q(\i_y_r_reg[1]_1 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(D),
        .Q(\i_y_r_reg[1]_1 [1]),
        .R(rst));
  LUT2 #(
    .INIT(4'h1)) 
    o_v_reg_i_4
       (.I0(\i_y_r_reg[1]_1 [1]),
        .I1(\i_y_r_reg[1]_1 [0]),
        .O(\i_y_r_reg[1]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT2 #(
    .INIT(4'h1)) 
    o_v_reg_i_6
       (.I0(Q[1]),
        .I1(Q[0]),
        .O(\i_x_r_reg[1]_0 ));
  token_bucket_14 regulator
       (.D(_02_),
        ._00_(_00_),
        .clk(clk),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_0 ),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[0][0]_36 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFF4000)) 
    s_out_v_reg_i_1
       (.I0(\i_y_r_reg[1]_0 ),
        .I1(s_out_v_reg_reg),
        .I2(\i_x_r_reg[1]_0 ),
        .I3(\i[0][0]_36 ),
        .I4(s_out_v_reg_reg_0),
        .I5(s_out_v_reg_reg_1),
        .O(dor_s_v));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(E),
        .D(_00_),
        .Q(\i[0][0]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized0
   (\i[1][0]_36 ,
    dor_s_v,
    \i_y_r_reg[1]_0 ,
    \i_x_r_reg[0]_0 ,
    dor_e_v,
    Q,
    number_tokens_reg,
    \i_y_r_reg[1]_1 ,
    rst,
    E,
    clk,
    s_out_v_reg_reg,
    s_out_v_reg_reg_0,
    s_out_v_reg_reg_1,
    e_out_v_reg_reg,
    D,
    \i_y_r_reg[0]_0 ,
    waiting_for_ack_reg_0,
    \i_x_r_reg[1]_0 );
  output \i[1][0]_36 ;
  output dor_s_v;
  output \i_y_r_reg[1]_0 ;
  output \i_x_r_reg[0]_0 ;
  output dor_e_v;
  output [1:0]Q;
  output [1:0]number_tokens_reg;
  output [1:0]\i_y_r_reg[1]_1 ;
  input rst;
  input [0:0]E;
  input clk;
  input s_out_v_reg_reg;
  input s_out_v_reg_reg_0;
  input s_out_v_reg_reg_1;
  input e_out_v_reg_reg;
  input [0:0]D;
  input [0:0]\i_y_r_reg[0]_0 ;
  input waiting_for_ack_reg_0;
  input [1:0]\i_x_r_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire [0:0]_00_;
  wire [0:0]_02_;
  wire clk;
  wire dor_e_v;
  wire dor_s_v;
  wire e_out_v_reg_reg;
  wire \i[1][0]_36 ;
  wire \i_x_r_reg[0]_0 ;
  wire [1:0]\i_x_r_reg[1]_0 ;
  wire [0:0]\i_y_r_reg[0]_0 ;
  wire \i_y_r_reg[1]_0 ;
  wire [1:0]\i_y_r_reg[1]_1 ;
  wire [1:0]number_tokens_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire s_out_v_reg_reg_0;
  wire s_out_v_reg_reg_1;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT4 #(
    .INIT(16'hD0FF)) 
    e_out_v_reg_i_1__0
       (.I0(Q[0]),
        .I1(Q[1]),
        .I2(\i[1][0]_36 ),
        .I3(e_out_v_reg_reg),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_0 [0]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_0 [1]),
        .Q(Q[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(_02_),
        .Q(\i_y_r_reg[1]_1 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(D),
        .Q(\i_y_r_reg[1]_1 [1]),
        .R(rst));
  LUT2 #(
    .INIT(4'h1)) 
    o_v_reg_i_4__0
       (.I0(\i_y_r_reg[1]_1 [1]),
        .I1(\i_y_r_reg[1]_1 [0]),
        .O(\i_y_r_reg[1]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT2 #(
    .INIT(4'h2)) 
    o_v_reg_i_6__0
       (.I0(Q[0]),
        .I1(Q[1]),
        .O(\i_x_r_reg[0]_0 ));
  token_bucket_13 regulator
       (.D(_02_),
        ._00_(_00_),
        .clk(clk),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_0 ),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[1][0]_36 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFF4000)) 
    s_out_v_reg_i_1__0
       (.I0(\i_y_r_reg[1]_0 ),
        .I1(s_out_v_reg_reg),
        .I2(\i_x_r_reg[0]_0 ),
        .I3(\i[1][0]_36 ),
        .I4(s_out_v_reg_reg_0),
        .I5(s_out_v_reg_reg_1),
        .O(dor_s_v));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(E),
        .D(_00_),
        .Q(\i[1][0]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized1
   (\i[2][0]_36 ,
    dor_e_v,
    Q,
    number_tokens_reg,
    \i_x_r_reg[0]_0 ,
    \i_y_r_reg[1]_0 ,
    \i_y_r_reg[1]_1 ,
    \i_y_r_reg[0]_0 ,
    rst,
    clk,
    e_out_v_reg_reg,
    D,
    \i_y_r_reg[0]_1 ,
    waiting_for_ack_reg_0,
    \i_y_r_reg[0]_2 ,
    n_in_v_reg,
    \i_x_r_reg[1]_0 );
  output \i[2][0]_36 ;
  output dor_e_v;
  output [1:0]Q;
  output [1:0]number_tokens_reg;
  output \i_x_r_reg[0]_0 ;
  output \i_y_r_reg[1]_0 ;
  output [1:0]\i_y_r_reg[1]_1 ;
  output \i_y_r_reg[0]_0 ;
  input rst;
  input clk;
  input e_out_v_reg_reg;
  input [0:0]D;
  input [0:0]\i_y_r_reg[0]_1 ;
  input waiting_for_ack_reg_0;
  input \i_y_r_reg[0]_2 ;
  input n_in_v_reg;
  input [1:0]\i_x_r_reg[1]_0 ;

  wire [0:0]D;
  wire [1:0]Q;
  wire [0:0]_00_;
  wire [0:0]_02_;
  wire _05_;
  wire clk;
  wire dor_e_v;
  wire e_out_v_reg_reg;
  wire \i[2][0]_36 ;
  wire \i_x_r_reg[0]_0 ;
  wire [1:0]\i_x_r_reg[1]_0 ;
  wire \i_y_r_reg[0]_0 ;
  wire [0:0]\i_y_r_reg[0]_1 ;
  wire \i_y_r_reg[0]_2 ;
  wire \i_y_r_reg[1]_0 ;
  wire [1:0]\i_y_r_reg[1]_1 ;
  wire n_in_v_reg;
  wire [1:0]number_tokens_reg;
  wire rst;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT4 #(
    .INIT(16'hEAEE)) 
    e_out_v_reg_i_1__1
       (.I0(e_out_v_reg_reg),
        .I1(\i[2][0]_36 ),
        .I2(Q[0]),
        .I3(Q[1]),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_0 [0]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(\i_x_r_reg[1]_0 [1]),
        .Q(Q[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(_05_),
        .D(_02_),
        .Q(\i_y_r_reg[1]_1 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(_05_),
        .D(D),
        .Q(\i_y_r_reg[1]_1 [1]),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT2 #(
    .INIT(4'h1)) 
    o_v_reg_i_4__1
       (.I0(\i_y_r_reg[1]_1 [1]),
        .I1(\i_y_r_reg[1]_1 [0]),
        .O(\i_y_r_reg[1]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT2 #(
    .INIT(4'hB)) 
    o_v_reg_i_5
       (.I0(Q[0]),
        .I1(Q[1]),
        .O(\i_x_r_reg[0]_0 ));
  token_bucket_12 regulator
       (.D(_02_),
        ._00_(_00_),
        .clk(clk),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_1 ),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(\i[2][0]_36 ),
        .waiting_for_ack_reg_0(waiting_for_ack_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT3 #(
    .INIT(8'h1F)) 
    s_out_v_reg_i_2__1
       (.I0(\i_y_r_reg[1]_1 [0]),
        .I1(\i_y_r_reg[1]_1 [1]),
        .I2(\i[2][0]_36 ),
        .O(\i_y_r_reg[0]_0 ));
  LUT6 #(
    .INIT(64'h55555755FFFF57FF)) 
    waiting_for_ack_i_1__1
       (.I0(\i[2][0]_36 ),
        .I1(\i_y_r_reg[0]_2 ),
        .I2(n_in_v_reg),
        .I3(Q[1]),
        .I4(Q[0]),
        .I5(e_out_v_reg_reg),
        .O(_05_));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(_05_),
        .D(_00_),
        .Q(\i[2][0]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized10
   (\i[3][2]_36 ,
    dor_s_v,
    \i_y_r_reg[1]_0 ,
    \i_x_r_reg[1]_0 ,
    dor_e_v,
    Q,
    number_tokens_reg,
    \i_y_r_reg[1]_1 ,
    rst,
    E,
    clk,
    s_out_v_reg_reg,
    s_out_v_reg_reg_0,
    s_out_v_reg_reg_1,
    e_out_v_reg_reg,
    D,
    \i_y_r_reg[0]_0 ,
    waiting_for_ack_reg_0,
    \i_x_r_reg[1]_1 );
  output \i[3][2]_36 ;
  output dor_s_v;
  output \i_y_r_reg[1]_0 ;
  output \i_x_r_reg[1]_0 ;
  output dor_e_v;
  output [1:0]Q;
  output [1:0]number_tokens_reg;
  output [1:0]\i_y_r_reg[1]_1 ;
  input rst;
  input [0:0]E;
  input clk;
  input s_out_v_reg_reg;
  input s_out_v_reg_reg_0;
  input s_out_v_reg_reg_1;
  input e_out_v_reg_reg;
  input [0:0]D;
  input [0:0]\i_y_r_reg[0]_0 ;
  input waiting_for_ack_reg_0;
  input [1:0]\i_x_r_reg[1]_1 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire [0:0]_00_;
  wire [0:0]_02_;
  wire clk;
  wire dor_e_v;
  wire dor_s_v;
  wire e_out_v_reg_reg;
  wire \i[3][2]_36 ;
  wire \i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire [0:0]\i_y_r_reg[0]_0 ;
  wire \i_y_r_reg[1]_0 ;
  wire [1:0]\i_y_r_reg[1]_1 ;
  wire [1:0]number_tokens_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire s_out_v_reg_reg_0;
  wire s_out_v_reg_reg_1;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair107" *) 
  LUT4 #(
    .INIT(16'h70FF)) 
    e_out_v_reg_i_1__10
       (.I0(Q[1]),
        .I1(Q[0]),
        .I2(\i[3][2]_36 ),
        .I3(e_out_v_reg_reg),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_1 [0]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_1 [1]),
        .Q(Q[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(_02_),
        .Q(\i_y_r_reg[1]_1 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(D),
        .Q(\i_y_r_reg[1]_1 [1]),
        .R(rst));
  LUT2 #(
    .INIT(4'h2)) 
    o_v_reg_i_4__8
       (.I0(\i_y_r_reg[1]_1 [1]),
        .I1(\i_y_r_reg[1]_1 [0]),
        .O(\i_y_r_reg[1]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair107" *) 
  LUT2 #(
    .INIT(4'h8)) 
    o_v_reg_i_6__8
       (.I0(Q[1]),
        .I1(Q[0]),
        .O(\i_x_r_reg[1]_0 ));
  token_bucket_3 regulator
       (.D(_02_),
        ._00_(_00_),
        .clk(clk),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_0 ),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[3][2]_36 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFF4000)) 
    s_out_v_reg_i_1__10
       (.I0(\i_y_r_reg[1]_0 ),
        .I1(s_out_v_reg_reg),
        .I2(\i_x_r_reg[1]_0 ),
        .I3(\i[3][2]_36 ),
        .I4(s_out_v_reg_reg_0),
        .I5(s_out_v_reg_reg_1),
        .O(dor_s_v));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(E),
        .D(_00_),
        .Q(\i[3][2]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized11
   (\i[0][3]_36 ,
    dor_s_v,
    \i_y_r_reg[1]_0 ,
    \i_x_r_reg[1]_0 ,
    dor_e_v,
    Q,
    number_tokens_reg,
    \i_y_r_reg[1]_1 ,
    rst,
    E,
    clk,
    s_out_v_reg_reg,
    s_out_v_reg_reg_0,
    s_out_v_reg_reg_1,
    e_out_v_reg_reg,
    D,
    \i_y_r_reg[0]_0 ,
    waiting_for_ack_reg_0,
    \i_x_r_reg[1]_1 );
  output \i[0][3]_36 ;
  output dor_s_v;
  output \i_y_r_reg[1]_0 ;
  output \i_x_r_reg[1]_0 ;
  output dor_e_v;
  output [1:0]Q;
  output [1:0]number_tokens_reg;
  output [1:0]\i_y_r_reg[1]_1 ;
  input rst;
  input [0:0]E;
  input clk;
  input s_out_v_reg_reg;
  input s_out_v_reg_reg_0;
  input s_out_v_reg_reg_1;
  input e_out_v_reg_reg;
  input [0:0]D;
  input [0:0]\i_y_r_reg[0]_0 ;
  input waiting_for_ack_reg_0;
  input [1:0]\i_x_r_reg[1]_1 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire [0:0]_00_;
  wire [0:0]_02_;
  wire clk;
  wire dor_e_v;
  wire dor_s_v;
  wire e_out_v_reg_reg;
  wire \i[0][3]_36 ;
  wire \i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire [0:0]\i_y_r_reg[0]_0 ;
  wire \i_y_r_reg[1]_0 ;
  wire [1:0]\i_y_r_reg[1]_1 ;
  wire [1:0]number_tokens_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire s_out_v_reg_reg_0;
  wire s_out_v_reg_reg_1;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair116" *) 
  LUT4 #(
    .INIT(16'hE0FF)) 
    e_out_v_reg_i_1__11
       (.I0(Q[1]),
        .I1(Q[0]),
        .I2(\i[0][3]_36 ),
        .I3(e_out_v_reg_reg),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_1 [0]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_1 [1]),
        .Q(Q[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(_02_),
        .Q(\i_y_r_reg[1]_1 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(D),
        .Q(\i_y_r_reg[1]_1 [1]),
        .R(rst));
  LUT2 #(
    .INIT(4'h8)) 
    o_v_reg_i_4__9
       (.I0(\i_y_r_reg[1]_1 [1]),
        .I1(\i_y_r_reg[1]_1 [0]),
        .O(\i_y_r_reg[1]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair116" *) 
  LUT2 #(
    .INIT(4'h1)) 
    o_v_reg_i_6__9
       (.I0(Q[1]),
        .I1(Q[0]),
        .O(\i_x_r_reg[1]_0 ));
  token_bucket_2 regulator
       (.D(_02_),
        ._00_(_00_),
        .clk(clk),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_0 ),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[0][3]_36 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFF4000)) 
    s_out_v_reg_i_1__11
       (.I0(\i_y_r_reg[1]_0 ),
        .I1(s_out_v_reg_reg),
        .I2(\i_x_r_reg[1]_0 ),
        .I3(\i[0][3]_36 ),
        .I4(s_out_v_reg_reg_0),
        .I5(s_out_v_reg_reg_1),
        .O(dor_s_v));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(E),
        .D(_00_),
        .Q(\i[0][3]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized12
   (\i[1][3]_36 ,
    dor_s_v,
    \i_y_r_reg[1]_0 ,
    \i_x_r_reg[0]_0 ,
    dor_e_v,
    Q,
    number_tokens_reg,
    \i_y_r_reg[1]_1 ,
    rst,
    E,
    clk,
    s_out_v_reg_reg,
    s_out_v_reg_reg_0,
    s_out_v_reg_reg_1,
    e_out_v_reg_reg,
    D,
    \i_y_r_reg[0]_0 ,
    waiting_for_ack_reg_0,
    \i_x_r_reg[1]_0 );
  output \i[1][3]_36 ;
  output dor_s_v;
  output \i_y_r_reg[1]_0 ;
  output \i_x_r_reg[0]_0 ;
  output dor_e_v;
  output [1:0]Q;
  output [1:0]number_tokens_reg;
  output [1:0]\i_y_r_reg[1]_1 ;
  input rst;
  input [0:0]E;
  input clk;
  input s_out_v_reg_reg;
  input s_out_v_reg_reg_0;
  input s_out_v_reg_reg_1;
  input e_out_v_reg_reg;
  input [0:0]D;
  input [0:0]\i_y_r_reg[0]_0 ;
  input waiting_for_ack_reg_0;
  input [1:0]\i_x_r_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire [0:0]_00_;
  wire [0:0]_02_;
  wire clk;
  wire dor_e_v;
  wire dor_s_v;
  wire e_out_v_reg_reg;
  wire \i[1][3]_36 ;
  wire \i_x_r_reg[0]_0 ;
  wire [1:0]\i_x_r_reg[1]_0 ;
  wire [0:0]\i_y_r_reg[0]_0 ;
  wire \i_y_r_reg[1]_0 ;
  wire [1:0]\i_y_r_reg[1]_1 ;
  wire [1:0]number_tokens_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire s_out_v_reg_reg_0;
  wire s_out_v_reg_reg_1;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair125" *) 
  LUT4 #(
    .INIT(16'hD0FF)) 
    e_out_v_reg_i_1__12
       (.I0(Q[0]),
        .I1(Q[1]),
        .I2(\i[1][3]_36 ),
        .I3(e_out_v_reg_reg),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_0 [0]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_0 [1]),
        .Q(Q[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(_02_),
        .Q(\i_y_r_reg[1]_1 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(D),
        .Q(\i_y_r_reg[1]_1 [1]),
        .R(rst));
  LUT2 #(
    .INIT(4'h8)) 
    o_v_reg_i_4__10
       (.I0(\i_y_r_reg[1]_1 [1]),
        .I1(\i_y_r_reg[1]_1 [0]),
        .O(\i_y_r_reg[1]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair125" *) 
  LUT2 #(
    .INIT(4'h2)) 
    o_v_reg_i_6__10
       (.I0(Q[0]),
        .I1(Q[1]),
        .O(\i_x_r_reg[0]_0 ));
  token_bucket_1 regulator
       (.D(_02_),
        ._00_(_00_),
        .clk(clk),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_0 ),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[1][3]_36 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFF4000)) 
    s_out_v_reg_i_1__12
       (.I0(\i_y_r_reg[1]_0 ),
        .I1(s_out_v_reg_reg),
        .I2(\i_x_r_reg[0]_0 ),
        .I3(\i[1][3]_36 ),
        .I4(s_out_v_reg_reg_0),
        .I5(s_out_v_reg_reg_1),
        .O(dor_s_v));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(E),
        .D(_00_),
        .Q(\i[1][3]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized13
   (\i[2][3]_36 ,
    dor_s_v,
    \i_y_r_reg[1]_0 ,
    \i_x_r_reg[1]_0 ,
    dor_e_v,
    Q,
    number_tokens_reg,
    \i_y_r_reg[1]_1 ,
    rst,
    E,
    clk,
    s_out_v_reg_reg,
    s_out_v_reg_reg_0,
    s_out_v_reg_reg_1,
    e_out_v_reg_reg,
    D,
    \i_y_r_reg[0]_0 ,
    waiting_for_ack_reg_0,
    \i_x_r_reg[1]_1 );
  output \i[2][3]_36 ;
  output dor_s_v;
  output \i_y_r_reg[1]_0 ;
  output \i_x_r_reg[1]_0 ;
  output dor_e_v;
  output [1:0]Q;
  output [1:0]number_tokens_reg;
  output [1:0]\i_y_r_reg[1]_1 ;
  input rst;
  input [0:0]E;
  input clk;
  input s_out_v_reg_reg;
  input s_out_v_reg_reg_0;
  input s_out_v_reg_reg_1;
  input e_out_v_reg_reg;
  input [0:0]D;
  input [0:0]\i_y_r_reg[0]_0 ;
  input waiting_for_ack_reg_0;
  input [1:0]\i_x_r_reg[1]_1 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire [0:0]_00_;
  wire [0:0]_02_;
  wire clk;
  wire dor_e_v;
  wire dor_s_v;
  wire e_out_v_reg_reg;
  wire \i[2][3]_36 ;
  wire \i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire [0:0]\i_y_r_reg[0]_0 ;
  wire \i_y_r_reg[1]_0 ;
  wire [1:0]\i_y_r_reg[1]_1 ;
  wire [1:0]number_tokens_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire s_out_v_reg_reg_0;
  wire s_out_v_reg_reg_1;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair134" *) 
  LUT4 #(
    .INIT(16'hD0FF)) 
    e_out_v_reg_i_1__13
       (.I0(Q[1]),
        .I1(Q[0]),
        .I2(\i[2][3]_36 ),
        .I3(e_out_v_reg_reg),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_1 [0]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_1 [1]),
        .Q(Q[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(_02_),
        .Q(\i_y_r_reg[1]_1 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(D),
        .Q(\i_y_r_reg[1]_1 [1]),
        .R(rst));
  LUT2 #(
    .INIT(4'h8)) 
    o_v_reg_i_4__11
       (.I0(\i_y_r_reg[1]_1 [1]),
        .I1(\i_y_r_reg[1]_1 [0]),
        .O(\i_y_r_reg[1]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair134" *) 
  LUT2 #(
    .INIT(4'h2)) 
    o_v_reg_i_6__11
       (.I0(Q[1]),
        .I1(Q[0]),
        .O(\i_x_r_reg[1]_0 ));
  token_bucket_0 regulator
       (.D(_02_),
        ._00_(_00_),
        .clk(clk),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_0 ),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[2][3]_36 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFF4000)) 
    s_out_v_reg_i_1__13
       (.I0(\i_y_r_reg[1]_0 ),
        .I1(s_out_v_reg_reg),
        .I2(\i_x_r_reg[1]_0 ),
        .I3(\i[2][3]_36 ),
        .I4(s_out_v_reg_reg_0),
        .I5(s_out_v_reg_reg_1),
        .O(dor_s_v));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(E),
        .D(_00_),
        .Q(\i[2][3]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized14
   (\i[3][3]_36 ,
    dor_s_v,
    \i_y_r_reg[1]_0 ,
    \i_x_r_reg[1]_0 ,
    dor_e_v,
    Q,
    number_tokens_reg,
    \i_y_r_reg[1]_1 ,
    rst,
    E,
    clk,
    s_out_v_reg_reg,
    s_out_v_reg_reg_0,
    s_out_v_reg_reg_1,
    e_out_v_reg_reg,
    D,
    \i_y_r_reg[0]_0 ,
    waiting_for_ack_reg_0,
    \i_x_r_reg[1]_1 );
  output \i[3][3]_36 ;
  output dor_s_v;
  output \i_y_r_reg[1]_0 ;
  output \i_x_r_reg[1]_0 ;
  output dor_e_v;
  output [1:0]Q;
  output [1:0]number_tokens_reg;
  output [1:0]\i_y_r_reg[1]_1 ;
  input rst;
  input [0:0]E;
  input clk;
  input s_out_v_reg_reg;
  input s_out_v_reg_reg_0;
  input s_out_v_reg_reg_1;
  input e_out_v_reg_reg;
  input [0:0]D;
  input [0:0]\i_y_r_reg[0]_0 ;
  input waiting_for_ack_reg_0;
  input [1:0]\i_x_r_reg[1]_1 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire [0:0]_00_;
  wire [0:0]_02_;
  wire clk;
  wire dor_e_v;
  wire dor_s_v;
  wire e_out_v_reg_reg;
  wire \i[3][3]_36 ;
  wire \i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire [0:0]\i_y_r_reg[0]_0 ;
  wire \i_y_r_reg[1]_0 ;
  wire [1:0]\i_y_r_reg[1]_1 ;
  wire [1:0]number_tokens_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire s_out_v_reg_reg_0;
  wire s_out_v_reg_reg_1;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair143" *) 
  LUT4 #(
    .INIT(16'h70FF)) 
    e_out_v_reg_i_1__14
       (.I0(Q[1]),
        .I1(Q[0]),
        .I2(\i[3][3]_36 ),
        .I3(e_out_v_reg_reg),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_1 [0]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_1 [1]),
        .Q(Q[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(_02_),
        .Q(\i_y_r_reg[1]_1 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(D),
        .Q(\i_y_r_reg[1]_1 [1]),
        .R(rst));
  LUT2 #(
    .INIT(4'h8)) 
    o_v_reg_i_4__12
       (.I0(\i_y_r_reg[1]_1 [1]),
        .I1(\i_y_r_reg[1]_1 [0]),
        .O(\i_y_r_reg[1]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair143" *) 
  LUT2 #(
    .INIT(4'h8)) 
    o_v_reg_i_6__12
       (.I0(Q[1]),
        .I1(Q[0]),
        .O(\i_x_r_reg[1]_0 ));
  token_bucket regulator
       (.D(_02_),
        ._00_(_00_),
        .clk(clk),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_0 ),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[3][3]_36 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFF4000)) 
    s_out_v_reg_i_1__14
       (.I0(\i_y_r_reg[1]_0 ),
        .I1(s_out_v_reg_reg),
        .I2(\i_x_r_reg[1]_0 ),
        .I3(\i[3][3]_36 ),
        .I4(s_out_v_reg_reg_0),
        .I5(s_out_v_reg_reg_1),
        .O(dor_s_v));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(E),
        .D(_00_),
        .Q(\i[3][3]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized2
   (\i[3][0]_36 ,
    dor_s_v,
    \i_y_r_reg[1]_0 ,
    \i_x_r_reg[1]_0 ,
    dor_e_v,
    Q,
    number_tokens_reg,
    \i_y_r_reg[1]_1 ,
    rst,
    E,
    clk,
    s_out_v_reg_reg,
    s_out_v_reg_reg_0,
    s_out_v_reg_reg_1,
    e_out_v_reg_reg,
    D,
    \i_y_r_reg[0]_0 ,
    waiting_for_ack_reg_0,
    \i_x_r_reg[1]_1 );
  output \i[3][0]_36 ;
  output dor_s_v;
  output \i_y_r_reg[1]_0 ;
  output \i_x_r_reg[1]_0 ;
  output dor_e_v;
  output [1:0]Q;
  output [1:0]number_tokens_reg;
  output [1:0]\i_y_r_reg[1]_1 ;
  input rst;
  input [0:0]E;
  input clk;
  input s_out_v_reg_reg;
  input s_out_v_reg_reg_0;
  input s_out_v_reg_reg_1;
  input e_out_v_reg_reg;
  input [0:0]D;
  input [0:0]\i_y_r_reg[0]_0 ;
  input waiting_for_ack_reg_0;
  input [1:0]\i_x_r_reg[1]_1 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire [0:0]_00_;
  wire [0:0]_02_;
  wire clk;
  wire dor_e_v;
  wire dor_s_v;
  wire e_out_v_reg_reg;
  wire \i[3][0]_36 ;
  wire \i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire [0:0]\i_y_r_reg[0]_0 ;
  wire \i_y_r_reg[1]_0 ;
  wire [1:0]\i_y_r_reg[1]_1 ;
  wire [1:0]number_tokens_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire s_out_v_reg_reg_0;
  wire s_out_v_reg_reg_1;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair33" *) 
  LUT4 #(
    .INIT(16'h70FF)) 
    e_out_v_reg_i_1__2
       (.I0(Q[1]),
        .I1(Q[0]),
        .I2(\i[3][0]_36 ),
        .I3(e_out_v_reg_reg),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_1 [0]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_1 [1]),
        .Q(Q[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(_02_),
        .Q(\i_y_r_reg[1]_1 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(D),
        .Q(\i_y_r_reg[1]_1 [1]),
        .R(rst));
  LUT2 #(
    .INIT(4'h1)) 
    o_v_reg_i_4__2
       (.I0(\i_y_r_reg[1]_1 [1]),
        .I1(\i_y_r_reg[1]_1 [0]),
        .O(\i_y_r_reg[1]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair33" *) 
  LUT2 #(
    .INIT(4'h8)) 
    o_v_reg_i_6__2
       (.I0(Q[1]),
        .I1(Q[0]),
        .O(\i_x_r_reg[1]_0 ));
  token_bucket_11 regulator
       (.D(_02_),
        ._00_(_00_),
        .clk(clk),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_0 ),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[3][0]_36 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFF4000)) 
    s_out_v_reg_i_1__2
       (.I0(\i_y_r_reg[1]_0 ),
        .I1(s_out_v_reg_reg),
        .I2(\i_x_r_reg[1]_0 ),
        .I3(\i[3][0]_36 ),
        .I4(s_out_v_reg_reg_0),
        .I5(s_out_v_reg_reg_1),
        .O(dor_s_v));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(E),
        .D(_00_),
        .Q(\i[3][0]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized3
   (\i[0][1]_36 ,
    dor_s_v,
    \i_y_r_reg[0]_0 ,
    \i_x_r_reg[1]_0 ,
    dor_e_v,
    Q,
    number_tokens_reg,
    \i_y_r_reg[1]_0 ,
    rst,
    E,
    clk,
    s_out_v_reg_reg,
    s_out_v_reg_reg_0,
    s_out_v_reg_reg_1,
    e_out_v_reg_reg,
    D,
    \i_y_r_reg[0]_1 ,
    waiting_for_ack_reg_0,
    \i_x_r_reg[1]_1 );
  output \i[0][1]_36 ;
  output dor_s_v;
  output \i_y_r_reg[0]_0 ;
  output \i_x_r_reg[1]_0 ;
  output dor_e_v;
  output [1:0]Q;
  output [1:0]number_tokens_reg;
  output [1:0]\i_y_r_reg[1]_0 ;
  input rst;
  input [0:0]E;
  input clk;
  input s_out_v_reg_reg;
  input s_out_v_reg_reg_0;
  input s_out_v_reg_reg_1;
  input e_out_v_reg_reg;
  input [0:0]D;
  input [0:0]\i_y_r_reg[0]_1 ;
  input waiting_for_ack_reg_0;
  input [1:0]\i_x_r_reg[1]_1 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire [0:0]_00_;
  wire [0:0]_02_;
  wire clk;
  wire dor_e_v;
  wire dor_s_v;
  wire e_out_v_reg_reg;
  wire \i[0][1]_36 ;
  wire \i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire \i_y_r_reg[0]_0 ;
  wire [0:0]\i_y_r_reg[0]_1 ;
  wire [1:0]\i_y_r_reg[1]_0 ;
  wire [1:0]number_tokens_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire s_out_v_reg_reg_0;
  wire s_out_v_reg_reg_1;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair42" *) 
  LUT4 #(
    .INIT(16'hE0FF)) 
    e_out_v_reg_i_1__3
       (.I0(Q[1]),
        .I1(Q[0]),
        .I2(\i[0][1]_36 ),
        .I3(e_out_v_reg_reg),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_1 [0]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_1 [1]),
        .Q(Q[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(_02_),
        .Q(\i_y_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(D),
        .Q(\i_y_r_reg[1]_0 [1]),
        .R(rst));
  LUT2 #(
    .INIT(4'h2)) 
    o_v_reg_i_4__3
       (.I0(\i_y_r_reg[1]_0 [0]),
        .I1(\i_y_r_reg[1]_0 [1]),
        .O(\i_y_r_reg[0]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair42" *) 
  LUT2 #(
    .INIT(4'h1)) 
    o_v_reg_i_6__3
       (.I0(Q[1]),
        .I1(Q[0]),
        .O(\i_x_r_reg[1]_0 ));
  token_bucket_10 regulator
       (.D(_02_),
        ._00_(_00_),
        .clk(clk),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_1 ),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[0][1]_36 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFF4000)) 
    s_out_v_reg_i_1__3
       (.I0(\i_y_r_reg[0]_0 ),
        .I1(s_out_v_reg_reg),
        .I2(\i_x_r_reg[1]_0 ),
        .I3(\i[0][1]_36 ),
        .I4(s_out_v_reg_reg_0),
        .I5(s_out_v_reg_reg_1),
        .O(dor_s_v));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(E),
        .D(_00_),
        .Q(\i[0][1]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized4
   (\i[1][1]_36 ,
    dor_s_v,
    \i_y_r_reg[0]_0 ,
    \i_x_r_reg[0]_0 ,
    dor_e_v,
    Q,
    number_tokens_reg,
    \i_y_r_reg[1]_0 ,
    rst,
    E,
    clk,
    s_out_v_reg_reg,
    s_out_v_reg_reg_0,
    s_out_v_reg_reg_1,
    e_out_v_reg_reg,
    D,
    \i_y_r_reg[0]_1 ,
    waiting_for_ack_reg_0,
    \i_x_r_reg[1]_0 );
  output \i[1][1]_36 ;
  output dor_s_v;
  output \i_y_r_reg[0]_0 ;
  output \i_x_r_reg[0]_0 ;
  output dor_e_v;
  output [1:0]Q;
  output [1:0]number_tokens_reg;
  output [1:0]\i_y_r_reg[1]_0 ;
  input rst;
  input [0:0]E;
  input clk;
  input s_out_v_reg_reg;
  input s_out_v_reg_reg_0;
  input s_out_v_reg_reg_1;
  input e_out_v_reg_reg;
  input [0:0]D;
  input [0:0]\i_y_r_reg[0]_1 ;
  input waiting_for_ack_reg_0;
  input [1:0]\i_x_r_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire [0:0]_00_;
  wire [0:0]_02_;
  wire clk;
  wire dor_e_v;
  wire dor_s_v;
  wire e_out_v_reg_reg;
  wire \i[1][1]_36 ;
  wire \i_x_r_reg[0]_0 ;
  wire [1:0]\i_x_r_reg[1]_0 ;
  wire \i_y_r_reg[0]_0 ;
  wire [0:0]\i_y_r_reg[0]_1 ;
  wire [1:0]\i_y_r_reg[1]_0 ;
  wire [1:0]number_tokens_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire s_out_v_reg_reg_0;
  wire s_out_v_reg_reg_1;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair51" *) 
  LUT4 #(
    .INIT(16'hD0FF)) 
    e_out_v_reg_i_1__4
       (.I0(Q[0]),
        .I1(Q[1]),
        .I2(\i[1][1]_36 ),
        .I3(e_out_v_reg_reg),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_0 [0]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_0 [1]),
        .Q(Q[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(_02_),
        .Q(\i_y_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(D),
        .Q(\i_y_r_reg[1]_0 [1]),
        .R(rst));
  LUT2 #(
    .INIT(4'h2)) 
    o_v_reg_i_4__4
       (.I0(\i_y_r_reg[1]_0 [0]),
        .I1(\i_y_r_reg[1]_0 [1]),
        .O(\i_y_r_reg[0]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair51" *) 
  LUT2 #(
    .INIT(4'h2)) 
    o_v_reg_i_6__4
       (.I0(Q[0]),
        .I1(Q[1]),
        .O(\i_x_r_reg[0]_0 ));
  token_bucket_9 regulator
       (.D(_02_),
        ._00_(_00_),
        .clk(clk),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_1 ),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[1][1]_36 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFF4000)) 
    s_out_v_reg_i_1__4
       (.I0(\i_y_r_reg[0]_0 ),
        .I1(s_out_v_reg_reg),
        .I2(\i_x_r_reg[0]_0 ),
        .I3(\i[1][1]_36 ),
        .I4(s_out_v_reg_reg_0),
        .I5(s_out_v_reg_reg_1),
        .O(dor_s_v));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(E),
        .D(_00_),
        .Q(\i[1][1]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized5
   (\i[2][1]_36 ,
    dor_s_v,
    \i_y_r_reg[0]_0 ,
    \i_x_r_reg[1]_0 ,
    dor_e_v,
    Q,
    number_tokens_reg,
    \i_y_r_reg[1]_0 ,
    rst,
    E,
    clk,
    s_out_v_reg_reg,
    s_out_v_reg_reg_0,
    s_out_v_reg_reg_1,
    e_out_v_reg_reg,
    D,
    \i_y_r_reg[0]_1 ,
    waiting_for_ack_reg_0,
    \i_x_r_reg[1]_1 );
  output \i[2][1]_36 ;
  output dor_s_v;
  output \i_y_r_reg[0]_0 ;
  output \i_x_r_reg[1]_0 ;
  output dor_e_v;
  output [1:0]Q;
  output [1:0]number_tokens_reg;
  output [1:0]\i_y_r_reg[1]_0 ;
  input rst;
  input [0:0]E;
  input clk;
  input s_out_v_reg_reg;
  input s_out_v_reg_reg_0;
  input s_out_v_reg_reg_1;
  input e_out_v_reg_reg;
  input [0:0]D;
  input [0:0]\i_y_r_reg[0]_1 ;
  input waiting_for_ack_reg_0;
  input [1:0]\i_x_r_reg[1]_1 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire [0:0]_00_;
  wire [0:0]_02_;
  wire clk;
  wire dor_e_v;
  wire dor_s_v;
  wire e_out_v_reg_reg;
  wire \i[2][1]_36 ;
  wire \i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire \i_y_r_reg[0]_0 ;
  wire [0:0]\i_y_r_reg[0]_1 ;
  wire [1:0]\i_y_r_reg[1]_0 ;
  wire [1:0]number_tokens_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire s_out_v_reg_reg_0;
  wire s_out_v_reg_reg_1;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair60" *) 
  LUT4 #(
    .INIT(16'hD0FF)) 
    e_out_v_reg_i_1__5
       (.I0(Q[1]),
        .I1(Q[0]),
        .I2(\i[2][1]_36 ),
        .I3(e_out_v_reg_reg),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_1 [0]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_1 [1]),
        .Q(Q[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(_02_),
        .Q(\i_y_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(D),
        .Q(\i_y_r_reg[1]_0 [1]),
        .R(rst));
  LUT2 #(
    .INIT(4'h2)) 
    o_v_reg_i_4__5
       (.I0(\i_y_r_reg[1]_0 [0]),
        .I1(\i_y_r_reg[1]_0 [1]),
        .O(\i_y_r_reg[0]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair60" *) 
  LUT2 #(
    .INIT(4'h2)) 
    o_v_reg_i_6__5
       (.I0(Q[1]),
        .I1(Q[0]),
        .O(\i_x_r_reg[1]_0 ));
  token_bucket_8 regulator
       (.D(_02_),
        ._00_(_00_),
        .clk(clk),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_1 ),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[2][1]_36 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFF4000)) 
    s_out_v_reg_i_1__5
       (.I0(\i_y_r_reg[0]_0 ),
        .I1(s_out_v_reg_reg),
        .I2(\i_x_r_reg[1]_0 ),
        .I3(\i[2][1]_36 ),
        .I4(s_out_v_reg_reg_0),
        .I5(s_out_v_reg_reg_1),
        .O(dor_s_v));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(E),
        .D(_00_),
        .Q(\i[2][1]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized6
   (\i[3][1]_36 ,
    dor_s_v,
    \i_y_r_reg[0]_0 ,
    \i_x_r_reg[1]_0 ,
    dor_e_v,
    Q,
    number_tokens_reg,
    \i_y_r_reg[1]_0 ,
    rst,
    E,
    clk,
    s_out_v_reg_reg,
    s_out_v_reg_reg_0,
    s_out_v_reg_reg_1,
    e_out_v_reg_reg,
    D,
    \i_y_r_reg[0]_1 ,
    waiting_for_ack_reg_0,
    \i_x_r_reg[1]_1 );
  output \i[3][1]_36 ;
  output dor_s_v;
  output \i_y_r_reg[0]_0 ;
  output \i_x_r_reg[1]_0 ;
  output dor_e_v;
  output [1:0]Q;
  output [1:0]number_tokens_reg;
  output [1:0]\i_y_r_reg[1]_0 ;
  input rst;
  input [0:0]E;
  input clk;
  input s_out_v_reg_reg;
  input s_out_v_reg_reg_0;
  input s_out_v_reg_reg_1;
  input e_out_v_reg_reg;
  input [0:0]D;
  input [0:0]\i_y_r_reg[0]_1 ;
  input waiting_for_ack_reg_0;
  input [1:0]\i_x_r_reg[1]_1 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire [0:0]_00_;
  wire [0:0]_02_;
  wire clk;
  wire dor_e_v;
  wire dor_s_v;
  wire e_out_v_reg_reg;
  wire \i[3][1]_36 ;
  wire \i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire \i_y_r_reg[0]_0 ;
  wire [0:0]\i_y_r_reg[0]_1 ;
  wire [1:0]\i_y_r_reg[1]_0 ;
  wire [1:0]number_tokens_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire s_out_v_reg_reg_0;
  wire s_out_v_reg_reg_1;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair69" *) 
  LUT4 #(
    .INIT(16'h70FF)) 
    e_out_v_reg_i_1__6
       (.I0(Q[1]),
        .I1(Q[0]),
        .I2(\i[3][1]_36 ),
        .I3(e_out_v_reg_reg),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_1 [0]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_1 [1]),
        .Q(Q[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(_02_),
        .Q(\i_y_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(D),
        .Q(\i_y_r_reg[1]_0 [1]),
        .R(rst));
  LUT2 #(
    .INIT(4'h2)) 
    o_v_reg_i_4__6
       (.I0(\i_y_r_reg[1]_0 [0]),
        .I1(\i_y_r_reg[1]_0 [1]),
        .O(\i_y_r_reg[0]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair69" *) 
  LUT2 #(
    .INIT(4'h8)) 
    o_v_reg_i_6__6
       (.I0(Q[1]),
        .I1(Q[0]),
        .O(\i_x_r_reg[1]_0 ));
  token_bucket_7 regulator
       (.D(_02_),
        ._00_(_00_),
        .clk(clk),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_1 ),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[3][1]_36 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFF4000)) 
    s_out_v_reg_i_1__6
       (.I0(\i_y_r_reg[0]_0 ),
        .I1(s_out_v_reg_reg),
        .I2(\i_x_r_reg[1]_0 ),
        .I3(\i[3][1]_36 ),
        .I4(s_out_v_reg_reg_0),
        .I5(s_out_v_reg_reg_1),
        .O(dor_s_v));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(E),
        .D(_00_),
        .Q(\i[3][1]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized7
   (\i[0][2]_36 ,
    dor_e_v,
    Q,
    number_tokens_reg,
    \i_x_r_reg[1]_0 ,
    \i_y_r_reg[0]_0 ,
    \i_y_r_reg[1]_0 ,
    \i_y_r_reg[0]_1 ,
    rst,
    E,
    clk,
    e_out_v_reg_reg,
    D,
    \i_y_r_reg[0]_2 ,
    waiting_for_ack_reg_0,
    \i_x_r_reg[1]_1 );
  output \i[0][2]_36 ;
  output dor_e_v;
  output [1:0]Q;
  output [1:0]number_tokens_reg;
  output \i_x_r_reg[1]_0 ;
  output \i_y_r_reg[0]_0 ;
  output [1:0]\i_y_r_reg[1]_0 ;
  output \i_y_r_reg[0]_1 ;
  input rst;
  input [0:0]E;
  input clk;
  input e_out_v_reg_reg;
  input [0:0]D;
  input [0:0]\i_y_r_reg[0]_2 ;
  input waiting_for_ack_reg_0;
  input [1:0]\i_x_r_reg[1]_1 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire [0:0]_00_;
  wire [0:0]_02_;
  wire clk;
  wire dor_e_v;
  wire e_out_v_reg_reg;
  wire \i[0][2]_36 ;
  wire \i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire \i_y_r_reg[0]_0 ;
  wire \i_y_r_reg[0]_1 ;
  wire [0:0]\i_y_r_reg[0]_2 ;
  wire [1:0]\i_y_r_reg[1]_0 ;
  wire [1:0]number_tokens_reg;
  wire rst;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair79" *) 
  LUT4 #(
    .INIT(16'hFEAA)) 
    e_out_v_reg_i_1__7
       (.I0(e_out_v_reg_reg),
        .I1(Q[1]),
        .I2(Q[0]),
        .I3(\i[0][2]_36 ),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_1 [0]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_1 [1]),
        .Q(Q[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(_02_),
        .Q(\i_y_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(D),
        .Q(\i_y_r_reg[1]_0 [1]),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair78" *) 
  LUT5 #(
    .INIT(32'h00040000)) 
    o_v_reg_i_4__13
       (.I0(\i_y_r_reg[1]_0 [0]),
        .I1(\i_y_r_reg[1]_0 [1]),
        .I2(Q[1]),
        .I3(Q[0]),
        .I4(\i[0][2]_36 ),
        .O(\i_y_r_reg[0]_1 ));
  token_bucket_6 regulator
       (.D(_02_),
        ._00_(_00_),
        .clk(clk),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_2 ),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(\i[0][2]_36 ),
        .waiting_for_ack_reg_0(waiting_for_ack_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair78" *) 
  LUT5 #(
    .INIT(32'h0004FFFF)) 
    s_out_v_reg_i_3__0
       (.I0(\i_y_r_reg[1]_0 [0]),
        .I1(\i_y_r_reg[1]_0 [1]),
        .I2(Q[1]),
        .I3(Q[0]),
        .I4(\i[0][2]_36 ),
        .O(\i_y_r_reg[0]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair79" *) 
  LUT2 #(
    .INIT(4'h1)) 
    waiting_for_ack_i_3__7
       (.I0(Q[1]),
        .I1(Q[0]),
        .O(\i_x_r_reg[1]_0 ));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(E),
        .D(_00_),
        .Q(\i[0][2]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized8
   (\i[1][2]_36 ,
    dor_s_v,
    \i_y_r_reg[1]_0 ,
    \i_x_r_reg[0]_0 ,
    dor_e_v,
    Q,
    number_tokens_reg,
    \i_y_r_reg[1]_1 ,
    rst,
    E,
    clk,
    s_out_v_reg_reg,
    s_out_v_reg_reg_0,
    s_out_v_reg_reg_1,
    e_out_v_reg_reg,
    D,
    \i_y_r_reg[0]_0 ,
    waiting_for_ack_reg_0,
    \i_x_r_reg[1]_0 );
  output \i[1][2]_36 ;
  output dor_s_v;
  output \i_y_r_reg[1]_0 ;
  output \i_x_r_reg[0]_0 ;
  output dor_e_v;
  output [1:0]Q;
  output [1:0]number_tokens_reg;
  output [1:0]\i_y_r_reg[1]_1 ;
  input rst;
  input [0:0]E;
  input clk;
  input s_out_v_reg_reg;
  input s_out_v_reg_reg_0;
  input s_out_v_reg_reg_1;
  input e_out_v_reg_reg;
  input [0:0]D;
  input [0:0]\i_y_r_reg[0]_0 ;
  input waiting_for_ack_reg_0;
  input [1:0]\i_x_r_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire [0:0]_00_;
  wire [0:0]_02_;
  wire clk;
  wire dor_e_v;
  wire dor_s_v;
  wire e_out_v_reg_reg;
  wire \i[1][2]_36 ;
  wire \i_x_r_reg[0]_0 ;
  wire [1:0]\i_x_r_reg[1]_0 ;
  wire [0:0]\i_y_r_reg[0]_0 ;
  wire \i_y_r_reg[1]_0 ;
  wire [1:0]\i_y_r_reg[1]_1 ;
  wire [1:0]number_tokens_reg;
  wire rst;
  wire s_out_v_reg_reg;
  wire s_out_v_reg_reg_0;
  wire s_out_v_reg_reg_1;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair88" *) 
  LUT4 #(
    .INIT(16'hD0FF)) 
    e_out_v_reg_i_1__8
       (.I0(Q[0]),
        .I1(Q[1]),
        .I2(\i[1][2]_36 ),
        .I3(e_out_v_reg_reg),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_0 [0]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_0 [1]),
        .Q(Q[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(_02_),
        .Q(\i_y_r_reg[1]_1 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(D),
        .Q(\i_y_r_reg[1]_1 [1]),
        .R(rst));
  LUT2 #(
    .INIT(4'h2)) 
    o_v_reg_i_4__7
       (.I0(\i_y_r_reg[1]_1 [1]),
        .I1(\i_y_r_reg[1]_1 [0]),
        .O(\i_y_r_reg[1]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair88" *) 
  LUT2 #(
    .INIT(4'h2)) 
    o_v_reg_i_6__7
       (.I0(Q[0]),
        .I1(Q[1]),
        .O(\i_x_r_reg[0]_0 ));
  token_bucket_5 regulator
       (.D(_02_),
        ._00_(_00_),
        .clk(clk),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_0 ),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(waiting_for_ack_reg_0),
        .waiting_for_ack_reg_0(\i[1][2]_36 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFF4000)) 
    s_out_v_reg_i_1__8
       (.I0(\i_y_r_reg[1]_0 ),
        .I1(s_out_v_reg_reg),
        .I2(\i_x_r_reg[0]_0 ),
        .I3(\i[1][2]_36 ),
        .I4(s_out_v_reg_reg_0),
        .I5(s_out_v_reg_reg_1),
        .O(dor_s_v));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(E),
        .D(_00_),
        .Q(\i[1][2]_36 ),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "client" *) 
module client__parameterized9
   (\i[2][2]_36 ,
    dor_e_v,
    Q,
    number_tokens_reg,
    \i_x_r_reg[1]_0 ,
    \i_y_r_reg[0]_0 ,
    \i_y_r_reg[1]_0 ,
    \i_y_r_reg[0]_1 ,
    rst,
    E,
    clk,
    e_out_v_reg_reg,
    D,
    \i_y_r_reg[0]_2 ,
    waiting_for_ack_reg_0,
    \i_x_r_reg[1]_1 );
  output \i[2][2]_36 ;
  output dor_e_v;
  output [1:0]Q;
  output [1:0]number_tokens_reg;
  output \i_x_r_reg[1]_0 ;
  output \i_y_r_reg[0]_0 ;
  output [1:0]\i_y_r_reg[1]_0 ;
  output \i_y_r_reg[0]_1 ;
  input rst;
  input [0:0]E;
  input clk;
  input e_out_v_reg_reg;
  input [0:0]D;
  input [0:0]\i_y_r_reg[0]_2 ;
  input waiting_for_ack_reg_0;
  input [1:0]\i_x_r_reg[1]_1 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire [0:0]_00_;
  wire [0:0]_02_;
  wire clk;
  wire dor_e_v;
  wire e_out_v_reg_reg;
  wire \i[2][2]_36 ;
  wire \i_x_r_reg[1]_0 ;
  wire [1:0]\i_x_r_reg[1]_1 ;
  wire \i_y_r_reg[0]_0 ;
  wire \i_y_r_reg[0]_1 ;
  wire [0:0]\i_y_r_reg[0]_2 ;
  wire [1:0]\i_y_r_reg[1]_0 ;
  wire [1:0]number_tokens_reg;
  wire rst;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair98" *) 
  LUT4 #(
    .INIT(16'hFBAA)) 
    e_out_v_reg_i_1__9
       (.I0(e_out_v_reg_reg),
        .I1(Q[1]),
        .I2(Q[0]),
        .I3(\i[2][2]_36 ),
        .O(dor_e_v));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_1 [0]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_x_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(\i_x_r_reg[1]_1 [1]),
        .Q(Q[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[0] 
       (.C(clk),
        .CE(E),
        .D(_02_),
        .Q(\i_y_r_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \i_y_r_reg[1] 
       (.C(clk),
        .CE(E),
        .D(D),
        .Q(\i_y_r_reg[1]_0 [1]),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair97" *) 
  LUT5 #(
    .INIT(32'h00400000)) 
    o_v_reg_i_4__14
       (.I0(\i_y_r_reg[1]_0 [0]),
        .I1(\i_y_r_reg[1]_0 [1]),
        .I2(Q[1]),
        .I3(Q[0]),
        .I4(\i[2][2]_36 ),
        .O(\i_y_r_reg[0]_1 ));
  token_bucket_4 regulator
       (.D(_02_),
        ._00_(_00_),
        .clk(clk),
        .\i_y_r_reg[0] (\i_y_r_reg[0]_2 ),
        .\number_tokens_reg[0]_0 (number_tokens_reg[0]),
        .\number_tokens_reg[1]_0 (number_tokens_reg[1]),
        .rst(rst),
        .waiting_for_ack_reg(\i[2][2]_36 ),
        .waiting_for_ack_reg_0(waiting_for_ack_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair97" *) 
  LUT5 #(
    .INIT(32'h0040FFFF)) 
    s_out_v_reg_i_3__1
       (.I0(\i_y_r_reg[1]_0 [0]),
        .I1(\i_y_r_reg[1]_0 [1]),
        .I2(Q[1]),
        .I3(Q[0]),
        .I4(\i[2][2]_36 ),
        .O(\i_y_r_reg[0]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair98" *) 
  LUT2 #(
    .INIT(4'h2)) 
    waiting_for_ack_i_3__9
       (.I0(Q[1]),
        .I1(Q[0]),
        .O(\i_x_r_reg[1]_0 ));
  FDRE #(
    .INIT(1'b0)) 
    waiting_for_ack_reg
       (.C(clk),
        .CE(E),
        .D(_00_),
        .Q(\i[2][2]_36 ),
        .R(rst));
endmodule

module token_bucket
   (D,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    _00_,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    waiting_for_ack_reg_0,
    rst,
    clk);
  output [0:0]D;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output [0:0]_00_;
  input [0:0]\i_y_r_reg[0] ;
  input waiting_for_ack_reg;
  input waiting_for_ack_reg_0;
  input rst;
  input clk;

  wire [0:0]D;
  wire [0:0]_00_;
  wire clk;
  wire [0:0]\i_y_r_reg[0] ;
  wire \number_tokens[0]_i_1__14_n_0 ;
  wire \number_tokens[1]_i_1__14_n_0 ;
  wire \number_tokens[1]_i_2__14_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__14_n_0 ;
  wire \rate_counter[1]_i_1__14_n_0 ;
  wire \rate_counter[2]_i_1__14_n_0 ;
  wire \rate_counter[3]_i_1__14_n_0 ;
  wire \rate_counter[4]_i_1__14_n_0 ;
  wire rst;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair138" *) 
  LUT5 #(
    .INIT(32'h56AA5656)) 
    \i_y_r[0]_i_1__14 
       (.I0(\i_y_r_reg[0] ),
        .I1(\number_tokens_reg[0]_0 ),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(waiting_for_ack_reg),
        .I4(waiting_for_ack_reg_0),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair139" *) 
  LUT5 #(
    .INIT(32'hADAA6A66)) 
    \number_tokens[0]_i_1__14 
       (.I0(\number_tokens[1]_i_2__14_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg),
        .I3(waiting_for_ack_reg_0),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__14_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair139" *) 
  LUT5 #(
    .INIT(32'hF2F0F020)) 
    \number_tokens[1]_i_1__14 
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .I4(\number_tokens[1]_i_2__14_n_0 ),
        .O(\number_tokens[1]_i_1__14_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair140" *) 
  LUT5 #(
    .INIT(32'h00000800)) 
    \number_tokens[1]_i_2__14 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[3]),
        .I3(rate_counter[4]),
        .I4(rate_counter[2]),
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
  (* SOFT_HLUTNM = "soft_lutpair142" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__14 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__14_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair142" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__14 
       (.I0(rate_counter[0]),
        .I1(rate_counter[1]),
        .O(\rate_counter[1]_i_1__14_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair140" *) 
  LUT5 #(
    .INIT(32'h51AAAAAA)) 
    \rate_counter[2]_i_1__14 
       (.I0(rate_counter[2]),
        .I1(rate_counter[4]),
        .I2(rate_counter[3]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[2]_i_1__14_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair141" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \rate_counter[3]_i_1__14 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .O(\rate_counter[3]_i_1__14_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair141" *) 
  LUT5 #(
    .INIT(32'h7FBF8000)) 
    \rate_counter[4]_i_1__14 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .I4(rate_counter[4]),
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
  (* SOFT_HLUTNM = "soft_lutpair138" *) 
  LUT4 #(
    .INIT(16'hDDD0)) 
    waiting_for_ack_i_2__14
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .O(_00_));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_0
   (D,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    _00_,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    waiting_for_ack_reg_0,
    rst,
    clk);
  output [0:0]D;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output [0:0]_00_;
  input [0:0]\i_y_r_reg[0] ;
  input waiting_for_ack_reg;
  input waiting_for_ack_reg_0;
  input rst;
  input clk;

  wire [0:0]D;
  wire [0:0]_00_;
  wire clk;
  wire [0:0]\i_y_r_reg[0] ;
  wire \number_tokens[0]_i_1__13_n_0 ;
  wire \number_tokens[1]_i_1__13_n_0 ;
  wire \number_tokens[1]_i_2__13_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__13_n_0 ;
  wire \rate_counter[1]_i_1__13_n_0 ;
  wire \rate_counter[2]_i_1__13_n_0 ;
  wire \rate_counter[3]_i_1__13_n_0 ;
  wire \rate_counter[4]_i_1__13_n_0 ;
  wire rst;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair129" *) 
  LUT5 #(
    .INIT(32'h56AA5656)) 
    \i_y_r[0]_i_1__13 
       (.I0(\i_y_r_reg[0] ),
        .I1(\number_tokens_reg[0]_0 ),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(waiting_for_ack_reg),
        .I4(waiting_for_ack_reg_0),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair130" *) 
  LUT5 #(
    .INIT(32'hADAA6A66)) 
    \number_tokens[0]_i_1__13 
       (.I0(\number_tokens[1]_i_2__13_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg),
        .I3(waiting_for_ack_reg_0),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__13_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair130" *) 
  LUT5 #(
    .INIT(32'hF2F0F020)) 
    \number_tokens[1]_i_1__13 
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .I4(\number_tokens[1]_i_2__13_n_0 ),
        .O(\number_tokens[1]_i_1__13_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair131" *) 
  LUT5 #(
    .INIT(32'h00000800)) 
    \number_tokens[1]_i_2__13 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[3]),
        .I3(rate_counter[4]),
        .I4(rate_counter[2]),
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
  (* SOFT_HLUTNM = "soft_lutpair133" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__13 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__13_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair133" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__13 
       (.I0(rate_counter[0]),
        .I1(rate_counter[1]),
        .O(\rate_counter[1]_i_1__13_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair131" *) 
  LUT5 #(
    .INIT(32'h51AAAAAA)) 
    \rate_counter[2]_i_1__13 
       (.I0(rate_counter[2]),
        .I1(rate_counter[4]),
        .I2(rate_counter[3]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[2]_i_1__13_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair132" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \rate_counter[3]_i_1__13 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .O(\rate_counter[3]_i_1__13_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair132" *) 
  LUT5 #(
    .INIT(32'h7FBF8000)) 
    \rate_counter[4]_i_1__13 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .I4(rate_counter[4]),
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
  (* SOFT_HLUTNM = "soft_lutpair129" *) 
  LUT4 #(
    .INIT(16'hDDD0)) 
    waiting_for_ack_i_2__13
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .O(_00_));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_1
   (D,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    _00_,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    waiting_for_ack_reg_0,
    rst,
    clk);
  output [0:0]D;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output [0:0]_00_;
  input [0:0]\i_y_r_reg[0] ;
  input waiting_for_ack_reg;
  input waiting_for_ack_reg_0;
  input rst;
  input clk;

  wire [0:0]D;
  wire [0:0]_00_;
  wire clk;
  wire [0:0]\i_y_r_reg[0] ;
  wire \number_tokens[0]_i_1__12_n_0 ;
  wire \number_tokens[1]_i_1__12_n_0 ;
  wire \number_tokens[1]_i_2__12_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__12_n_0 ;
  wire \rate_counter[1]_i_1__12_n_0 ;
  wire \rate_counter[2]_i_1__12_n_0 ;
  wire \rate_counter[3]_i_1__12_n_0 ;
  wire \rate_counter[4]_i_1__12_n_0 ;
  wire rst;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair120" *) 
  LUT5 #(
    .INIT(32'h56AA5656)) 
    \i_y_r[0]_i_1__12 
       (.I0(\i_y_r_reg[0] ),
        .I1(\number_tokens_reg[0]_0 ),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(waiting_for_ack_reg),
        .I4(waiting_for_ack_reg_0),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair121" *) 
  LUT5 #(
    .INIT(32'hADAA6A66)) 
    \number_tokens[0]_i_1__12 
       (.I0(\number_tokens[1]_i_2__12_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg),
        .I3(waiting_for_ack_reg_0),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__12_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair121" *) 
  LUT5 #(
    .INIT(32'hF2F0F020)) 
    \number_tokens[1]_i_1__12 
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .I4(\number_tokens[1]_i_2__12_n_0 ),
        .O(\number_tokens[1]_i_1__12_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair122" *) 
  LUT5 #(
    .INIT(32'h00000800)) 
    \number_tokens[1]_i_2__12 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[3]),
        .I3(rate_counter[4]),
        .I4(rate_counter[2]),
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
  (* SOFT_HLUTNM = "soft_lutpair124" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__12 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__12_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair124" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__12 
       (.I0(rate_counter[0]),
        .I1(rate_counter[1]),
        .O(\rate_counter[1]_i_1__12_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair122" *) 
  LUT5 #(
    .INIT(32'h51AAAAAA)) 
    \rate_counter[2]_i_1__12 
       (.I0(rate_counter[2]),
        .I1(rate_counter[4]),
        .I2(rate_counter[3]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[2]_i_1__12_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair123" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \rate_counter[3]_i_1__12 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .O(\rate_counter[3]_i_1__12_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair123" *) 
  LUT5 #(
    .INIT(32'h7FBF8000)) 
    \rate_counter[4]_i_1__12 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .I4(rate_counter[4]),
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
  (* SOFT_HLUTNM = "soft_lutpair120" *) 
  LUT4 #(
    .INIT(16'hDDD0)) 
    waiting_for_ack_i_2__12
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .O(_00_));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_10
   (D,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    _00_,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    waiting_for_ack_reg_0,
    rst,
    clk);
  output [0:0]D;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output [0:0]_00_;
  input [0:0]\i_y_r_reg[0] ;
  input waiting_for_ack_reg;
  input waiting_for_ack_reg_0;
  input rst;
  input clk;

  wire [0:0]D;
  wire [0:0]_00_;
  wire clk;
  wire [0:0]\i_y_r_reg[0] ;
  wire \number_tokens[0]_i_1__3_n_0 ;
  wire \number_tokens[1]_i_1__3_n_0 ;
  wire \number_tokens[1]_i_2__3_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__3_n_0 ;
  wire \rate_counter[1]_i_1__3_n_0 ;
  wire \rate_counter[2]_i_1__3_n_0 ;
  wire \rate_counter[3]_i_1__3_n_0 ;
  wire \rate_counter[4]_i_1__3_n_0 ;
  wire rst;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair37" *) 
  LUT5 #(
    .INIT(32'h56AA5656)) 
    \i_y_r[0]_i_1__3 
       (.I0(\i_y_r_reg[0] ),
        .I1(\number_tokens_reg[0]_0 ),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(waiting_for_ack_reg),
        .I4(waiting_for_ack_reg_0),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair38" *) 
  LUT5 #(
    .INIT(32'hADAA6A66)) 
    \number_tokens[0]_i_1__3 
       (.I0(\number_tokens[1]_i_2__3_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg),
        .I3(waiting_for_ack_reg_0),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair38" *) 
  LUT5 #(
    .INIT(32'hF2F0F020)) 
    \number_tokens[1]_i_1__3 
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .I4(\number_tokens[1]_i_2__3_n_0 ),
        .O(\number_tokens[1]_i_1__3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair39" *) 
  LUT5 #(
    .INIT(32'h00000800)) 
    \number_tokens[1]_i_2__3 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[3]),
        .I3(rate_counter[4]),
        .I4(rate_counter[2]),
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
  (* SOFT_HLUTNM = "soft_lutpair41" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__3 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair41" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__3 
       (.I0(rate_counter[0]),
        .I1(rate_counter[1]),
        .O(\rate_counter[1]_i_1__3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair39" *) 
  LUT5 #(
    .INIT(32'h51AAAAAA)) 
    \rate_counter[2]_i_1__3 
       (.I0(rate_counter[2]),
        .I1(rate_counter[4]),
        .I2(rate_counter[3]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[2]_i_1__3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair40" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \rate_counter[3]_i_1__3 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .O(\rate_counter[3]_i_1__3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair40" *) 
  LUT5 #(
    .INIT(32'h7FBF8000)) 
    \rate_counter[4]_i_1__3 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .I4(rate_counter[4]),
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
  (* SOFT_HLUTNM = "soft_lutpair37" *) 
  LUT4 #(
    .INIT(16'hDDD0)) 
    waiting_for_ack_i_2__3
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .O(_00_));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_11
   (D,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    _00_,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    waiting_for_ack_reg_0,
    rst,
    clk);
  output [0:0]D;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output [0:0]_00_;
  input [0:0]\i_y_r_reg[0] ;
  input waiting_for_ack_reg;
  input waiting_for_ack_reg_0;
  input rst;
  input clk;

  wire [0:0]D;
  wire [0:0]_00_;
  wire clk;
  wire [0:0]\i_y_r_reg[0] ;
  wire \number_tokens[0]_i_1__2_n_0 ;
  wire \number_tokens[1]_i_1__2_n_0 ;
  wire \number_tokens[1]_i_2__2_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__2_n_0 ;
  wire \rate_counter[1]_i_1__2_n_0 ;
  wire \rate_counter[2]_i_1__2_n_0 ;
  wire \rate_counter[3]_i_1__2_n_0 ;
  wire \rate_counter[4]_i_1__2_n_0 ;
  wire rst;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT5 #(
    .INIT(32'h56AA5656)) 
    \i_y_r[0]_i_1__2 
       (.I0(\i_y_r_reg[0] ),
        .I1(\number_tokens_reg[0]_0 ),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(waiting_for_ack_reg),
        .I4(waiting_for_ack_reg_0),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair29" *) 
  LUT5 #(
    .INIT(32'hADAA6A66)) 
    \number_tokens[0]_i_1__2 
       (.I0(\number_tokens[1]_i_2__2_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg),
        .I3(waiting_for_ack_reg_0),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair29" *) 
  LUT5 #(
    .INIT(32'hF2F0F020)) 
    \number_tokens[1]_i_1__2 
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .I4(\number_tokens[1]_i_2__2_n_0 ),
        .O(\number_tokens[1]_i_1__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair30" *) 
  LUT5 #(
    .INIT(32'h00000800)) 
    \number_tokens[1]_i_2__2 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[3]),
        .I3(rate_counter[4]),
        .I4(rate_counter[2]),
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
  (* SOFT_HLUTNM = "soft_lutpair32" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__2 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair32" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__2 
       (.I0(rate_counter[0]),
        .I1(rate_counter[1]),
        .O(\rate_counter[1]_i_1__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair30" *) 
  LUT5 #(
    .INIT(32'h51AAAAAA)) 
    \rate_counter[2]_i_1__2 
       (.I0(rate_counter[2]),
        .I1(rate_counter[4]),
        .I2(rate_counter[3]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[2]_i_1__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair31" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \rate_counter[3]_i_1__2 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .O(\rate_counter[3]_i_1__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair31" *) 
  LUT5 #(
    .INIT(32'h7FBF8000)) 
    \rate_counter[4]_i_1__2 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .I4(rate_counter[4]),
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
  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT4 #(
    .INIT(16'hDDD0)) 
    waiting_for_ack_i_2__2
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .O(_00_));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_12
   (D,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    _00_,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    waiting_for_ack_reg_0,
    rst,
    clk);
  output [0:0]D;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output [0:0]_00_;
  input [0:0]\i_y_r_reg[0] ;
  input waiting_for_ack_reg;
  input waiting_for_ack_reg_0;
  input rst;
  input clk;

  wire [0:0]D;
  wire [0:0]_00_;
  wire clk;
  wire [0:0]\i_y_r_reg[0] ;
  wire \number_tokens[0]_i_1__1_n_0 ;
  wire \number_tokens[1]_i_1__1_n_0 ;
  wire \number_tokens[1]_i_2__1_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__1_n_0 ;
  wire \rate_counter[1]_i_1__1_n_0 ;
  wire \rate_counter[2]_i_1__1_n_0 ;
  wire \rate_counter[3]_i_1__1_n_0 ;
  wire \rate_counter[4]_i_1__1_n_0 ;
  wire rst;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT5 #(
    .INIT(32'hAA565656)) 
    \i_y_r[0]_i_1__1 
       (.I0(\i_y_r_reg[0] ),
        .I1(\number_tokens_reg[0]_0 ),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(waiting_for_ack_reg),
        .I4(waiting_for_ack_reg_0),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT5 #(
    .INIT(32'hDAAAA666)) 
    \number_tokens[0]_i_1__1 
       (.I0(\number_tokens[1]_i_2__1_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg),
        .I3(waiting_for_ack_reg_0),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT5 #(
    .INIT(32'hF8F0F080)) 
    \number_tokens[1]_i_1__1 
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .I4(\number_tokens[1]_i_2__1_n_0 ),
        .O(\number_tokens[1]_i_1__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT5 #(
    .INIT(32'h00000800)) 
    \number_tokens[1]_i_2__1 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[3]),
        .I3(rate_counter[4]),
        .I4(rate_counter[2]),
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
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__1 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__1 
       (.I0(rate_counter[0]),
        .I1(rate_counter[1]),
        .O(\rate_counter[1]_i_1__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT5 #(
    .INIT(32'h51AAAAAA)) 
    \rate_counter[2]_i_1__1 
       (.I0(rate_counter[2]),
        .I1(rate_counter[4]),
        .I2(rate_counter[3]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[2]_i_1__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \rate_counter[3]_i_1__1 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .O(\rate_counter[3]_i_1__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT5 #(
    .INIT(32'h7FBF8000)) 
    \rate_counter[4]_i_1__1 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .I4(rate_counter[4]),
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
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT4 #(
    .INIT(16'h7770)) 
    waiting_for_ack_i_2__1
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .O(_00_));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_13
   (D,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    _00_,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    waiting_for_ack_reg_0,
    rst,
    clk);
  output [0:0]D;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output [0:0]_00_;
  input [0:0]\i_y_r_reg[0] ;
  input waiting_for_ack_reg;
  input waiting_for_ack_reg_0;
  input rst;
  input clk;

  wire [0:0]D;
  wire [0:0]_00_;
  wire clk;
  wire [0:0]\i_y_r_reg[0] ;
  wire \number_tokens[0]_i_1__0_n_0 ;
  wire \number_tokens[1]_i_1__0_n_0 ;
  wire \number_tokens[1]_i_2__0_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__0_n_0 ;
  wire \rate_counter[1]_i_1__0_n_0 ;
  wire \rate_counter[2]_i_1__0_n_0 ;
  wire \rate_counter[3]_i_1__0_n_0 ;
  wire \rate_counter[4]_i_1__0_n_0 ;
  wire rst;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT5 #(
    .INIT(32'h56AA5656)) 
    \i_y_r[0]_i_1__0 
       (.I0(\i_y_r_reg[0] ),
        .I1(\number_tokens_reg[0]_0 ),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(waiting_for_ack_reg),
        .I4(waiting_for_ack_reg_0),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT5 #(
    .INIT(32'hADAA6A66)) 
    \number_tokens[0]_i_1__0 
       (.I0(\number_tokens[1]_i_2__0_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg),
        .I3(waiting_for_ack_reg_0),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT5 #(
    .INIT(32'hF2F0F020)) 
    \number_tokens[1]_i_1__0 
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .I4(\number_tokens[1]_i_2__0_n_0 ),
        .O(\number_tokens[1]_i_1__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT5 #(
    .INIT(32'h00000800)) 
    \number_tokens[1]_i_2__0 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[3]),
        .I3(rate_counter[4]),
        .I4(rate_counter[2]),
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
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__0 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__0 
       (.I0(rate_counter[0]),
        .I1(rate_counter[1]),
        .O(\rate_counter[1]_i_1__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT5 #(
    .INIT(32'h51AAAAAA)) 
    \rate_counter[2]_i_1__0 
       (.I0(rate_counter[2]),
        .I1(rate_counter[4]),
        .I2(rate_counter[3]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[2]_i_1__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \rate_counter[3]_i_1__0 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .O(\rate_counter[3]_i_1__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT5 #(
    .INIT(32'h7FBF8000)) 
    \rate_counter[4]_i_1__0 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .I4(rate_counter[4]),
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
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT4 #(
    .INIT(16'hDDD0)) 
    waiting_for_ack_i_2__0
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .O(_00_));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_14
   (D,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    _00_,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    waiting_for_ack_reg_0,
    rst,
    clk);
  output [0:0]D;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output [0:0]_00_;
  input [0:0]\i_y_r_reg[0] ;
  input waiting_for_ack_reg;
  input waiting_for_ack_reg_0;
  input rst;
  input clk;

  wire [0:0]D;
  wire [0:0]_00_;
  wire clk;
  wire [0:0]\i_y_r_reg[0] ;
  wire \number_tokens[0]_i_1_n_0 ;
  wire \number_tokens[1]_i_1_n_0 ;
  wire \number_tokens[1]_i_2_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1_n_0 ;
  wire \rate_counter[1]_i_1_n_0 ;
  wire \rate_counter[2]_i_1_n_0 ;
  wire \rate_counter[3]_i_1_n_0 ;
  wire \rate_counter[4]_i_1_n_0 ;
  wire rst;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT5 #(
    .INIT(32'h56AA5656)) 
    \i_y_r[0]_i_1 
       (.I0(\i_y_r_reg[0] ),
        .I1(\number_tokens_reg[0]_0 ),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(waiting_for_ack_reg),
        .I4(waiting_for_ack_reg_0),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT5 #(
    .INIT(32'hADAA6A66)) 
    \number_tokens[0]_i_1 
       (.I0(\number_tokens[1]_i_2_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg),
        .I3(waiting_for_ack_reg_0),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT5 #(
    .INIT(32'hF2F0F020)) 
    \number_tokens[1]_i_1 
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .I4(\number_tokens[1]_i_2_n_0 ),
        .O(\number_tokens[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT5 #(
    .INIT(32'h00000800)) 
    \number_tokens[1]_i_2 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[3]),
        .I3(rate_counter[4]),
        .I4(rate_counter[2]),
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
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1 
       (.I0(rate_counter[0]),
        .I1(rate_counter[1]),
        .O(\rate_counter[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT5 #(
    .INIT(32'h51AAAAAA)) 
    \rate_counter[2]_i_1 
       (.I0(rate_counter[2]),
        .I1(rate_counter[4]),
        .I2(rate_counter[3]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[2]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \rate_counter[3]_i_1 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .O(\rate_counter[3]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT5 #(
    .INIT(32'h7FBF8000)) 
    \rate_counter[4]_i_1 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .I4(rate_counter[4]),
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
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT4 #(
    .INIT(16'hDDD0)) 
    waiting_for_ack_i_2
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .O(_00_));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_2
   (D,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    _00_,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    waiting_for_ack_reg_0,
    rst,
    clk);
  output [0:0]D;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output [0:0]_00_;
  input [0:0]\i_y_r_reg[0] ;
  input waiting_for_ack_reg;
  input waiting_for_ack_reg_0;
  input rst;
  input clk;

  wire [0:0]D;
  wire [0:0]_00_;
  wire clk;
  wire [0:0]\i_y_r_reg[0] ;
  wire \number_tokens[0]_i_1__11_n_0 ;
  wire \number_tokens[1]_i_1__11_n_0 ;
  wire \number_tokens[1]_i_2__11_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__11_n_0 ;
  wire \rate_counter[1]_i_1__11_n_0 ;
  wire \rate_counter[2]_i_1__11_n_0 ;
  wire \rate_counter[3]_i_1__11_n_0 ;
  wire \rate_counter[4]_i_1__11_n_0 ;
  wire rst;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair111" *) 
  LUT5 #(
    .INIT(32'h56AA5656)) 
    \i_y_r[0]_i_1__11 
       (.I0(\i_y_r_reg[0] ),
        .I1(\number_tokens_reg[0]_0 ),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(waiting_for_ack_reg),
        .I4(waiting_for_ack_reg_0),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair112" *) 
  LUT5 #(
    .INIT(32'hADAA6A66)) 
    \number_tokens[0]_i_1__11 
       (.I0(\number_tokens[1]_i_2__11_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg),
        .I3(waiting_for_ack_reg_0),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__11_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair112" *) 
  LUT5 #(
    .INIT(32'hF2F0F020)) 
    \number_tokens[1]_i_1__11 
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .I4(\number_tokens[1]_i_2__11_n_0 ),
        .O(\number_tokens[1]_i_1__11_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair113" *) 
  LUT5 #(
    .INIT(32'h00000800)) 
    \number_tokens[1]_i_2__11 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[3]),
        .I3(rate_counter[4]),
        .I4(rate_counter[2]),
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
  (* SOFT_HLUTNM = "soft_lutpair115" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__11 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__11_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair115" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__11 
       (.I0(rate_counter[0]),
        .I1(rate_counter[1]),
        .O(\rate_counter[1]_i_1__11_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair113" *) 
  LUT5 #(
    .INIT(32'h51AAAAAA)) 
    \rate_counter[2]_i_1__11 
       (.I0(rate_counter[2]),
        .I1(rate_counter[4]),
        .I2(rate_counter[3]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[2]_i_1__11_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair114" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \rate_counter[3]_i_1__11 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .O(\rate_counter[3]_i_1__11_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair114" *) 
  LUT5 #(
    .INIT(32'h7FBF8000)) 
    \rate_counter[4]_i_1__11 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .I4(rate_counter[4]),
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
  (* SOFT_HLUTNM = "soft_lutpair111" *) 
  LUT4 #(
    .INIT(16'hDDD0)) 
    waiting_for_ack_i_2__11
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .O(_00_));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_3
   (D,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    _00_,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    waiting_for_ack_reg_0,
    rst,
    clk);
  output [0:0]D;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output [0:0]_00_;
  input [0:0]\i_y_r_reg[0] ;
  input waiting_for_ack_reg;
  input waiting_for_ack_reg_0;
  input rst;
  input clk;

  wire [0:0]D;
  wire [0:0]_00_;
  wire clk;
  wire [0:0]\i_y_r_reg[0] ;
  wire \number_tokens[0]_i_1__10_n_0 ;
  wire \number_tokens[1]_i_1__10_n_0 ;
  wire \number_tokens[1]_i_2__10_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__10_n_0 ;
  wire \rate_counter[1]_i_1__10_n_0 ;
  wire \rate_counter[2]_i_1__10_n_0 ;
  wire \rate_counter[3]_i_1__10_n_0 ;
  wire \rate_counter[4]_i_1__10_n_0 ;
  wire rst;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair102" *) 
  LUT5 #(
    .INIT(32'h56AA5656)) 
    \i_y_r[0]_i_1__10 
       (.I0(\i_y_r_reg[0] ),
        .I1(\number_tokens_reg[0]_0 ),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(waiting_for_ack_reg),
        .I4(waiting_for_ack_reg_0),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair103" *) 
  LUT5 #(
    .INIT(32'hADAA6A66)) 
    \number_tokens[0]_i_1__10 
       (.I0(\number_tokens[1]_i_2__10_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg),
        .I3(waiting_for_ack_reg_0),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__10_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair103" *) 
  LUT5 #(
    .INIT(32'hF2F0F020)) 
    \number_tokens[1]_i_1__10 
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .I4(\number_tokens[1]_i_2__10_n_0 ),
        .O(\number_tokens[1]_i_1__10_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair104" *) 
  LUT5 #(
    .INIT(32'h00000800)) 
    \number_tokens[1]_i_2__10 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[3]),
        .I3(rate_counter[4]),
        .I4(rate_counter[2]),
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
  (* SOFT_HLUTNM = "soft_lutpair106" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__10 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__10_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair106" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__10 
       (.I0(rate_counter[0]),
        .I1(rate_counter[1]),
        .O(\rate_counter[1]_i_1__10_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair104" *) 
  LUT5 #(
    .INIT(32'h51AAAAAA)) 
    \rate_counter[2]_i_1__10 
       (.I0(rate_counter[2]),
        .I1(rate_counter[4]),
        .I2(rate_counter[3]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[2]_i_1__10_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair105" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \rate_counter[3]_i_1__10 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .O(\rate_counter[3]_i_1__10_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair105" *) 
  LUT5 #(
    .INIT(32'h7FBF8000)) 
    \rate_counter[4]_i_1__10 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .I4(rate_counter[4]),
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
  (* SOFT_HLUTNM = "soft_lutpair102" *) 
  LUT4 #(
    .INIT(16'hDDD0)) 
    waiting_for_ack_i_2__10
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .O(_00_));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_4
   (D,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    _00_,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    waiting_for_ack_reg_0,
    rst,
    clk);
  output [0:0]D;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output [0:0]_00_;
  input [0:0]\i_y_r_reg[0] ;
  input waiting_for_ack_reg;
  input waiting_for_ack_reg_0;
  input rst;
  input clk;

  wire [0:0]D;
  wire [0:0]_00_;
  wire clk;
  wire [0:0]\i_y_r_reg[0] ;
  wire \number_tokens[0]_i_1__9_n_0 ;
  wire \number_tokens[1]_i_1__9_n_0 ;
  wire \number_tokens[1]_i_2__9_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__9_n_0 ;
  wire \rate_counter[1]_i_1__9_n_0 ;
  wire \rate_counter[2]_i_1__9_n_0 ;
  wire \rate_counter[3]_i_1__9_n_0 ;
  wire \rate_counter[4]_i_1__9_n_0 ;
  wire rst;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair92" *) 
  LUT5 #(
    .INIT(32'hAA565656)) 
    \i_y_r[0]_i_1__9 
       (.I0(\i_y_r_reg[0] ),
        .I1(\number_tokens_reg[0]_0 ),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(waiting_for_ack_reg),
        .I4(waiting_for_ack_reg_0),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair93" *) 
  LUT5 #(
    .INIT(32'hDAAAA666)) 
    \number_tokens[0]_i_1__9 
       (.I0(\number_tokens[1]_i_2__9_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg),
        .I3(waiting_for_ack_reg_0),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__9_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair93" *) 
  LUT5 #(
    .INIT(32'hF8F0F080)) 
    \number_tokens[1]_i_1__9 
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .I4(\number_tokens[1]_i_2__9_n_0 ),
        .O(\number_tokens[1]_i_1__9_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair94" *) 
  LUT5 #(
    .INIT(32'h00000800)) 
    \number_tokens[1]_i_2__9 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[3]),
        .I3(rate_counter[4]),
        .I4(rate_counter[2]),
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
  (* SOFT_HLUTNM = "soft_lutpair96" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__9 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__9_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair96" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__9 
       (.I0(rate_counter[0]),
        .I1(rate_counter[1]),
        .O(\rate_counter[1]_i_1__9_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair94" *) 
  LUT5 #(
    .INIT(32'h51AAAAAA)) 
    \rate_counter[2]_i_1__9 
       (.I0(rate_counter[2]),
        .I1(rate_counter[4]),
        .I2(rate_counter[3]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[2]_i_1__9_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair95" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \rate_counter[3]_i_1__9 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .O(\rate_counter[3]_i_1__9_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair95" *) 
  LUT5 #(
    .INIT(32'h7FBF8000)) 
    \rate_counter[4]_i_1__9 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .I4(rate_counter[4]),
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
  (* SOFT_HLUTNM = "soft_lutpair92" *) 
  LUT4 #(
    .INIT(16'h7770)) 
    waiting_for_ack_i_2__9
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .O(_00_));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_5
   (D,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    _00_,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    waiting_for_ack_reg_0,
    rst,
    clk);
  output [0:0]D;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output [0:0]_00_;
  input [0:0]\i_y_r_reg[0] ;
  input waiting_for_ack_reg;
  input waiting_for_ack_reg_0;
  input rst;
  input clk;

  wire [0:0]D;
  wire [0:0]_00_;
  wire clk;
  wire [0:0]\i_y_r_reg[0] ;
  wire \number_tokens[0]_i_1__8_n_0 ;
  wire \number_tokens[1]_i_1__8_n_0 ;
  wire \number_tokens[1]_i_2__8_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__8_n_0 ;
  wire \rate_counter[1]_i_1__8_n_0 ;
  wire \rate_counter[2]_i_1__8_n_0 ;
  wire \rate_counter[3]_i_1__8_n_0 ;
  wire \rate_counter[4]_i_1__8_n_0 ;
  wire rst;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair83" *) 
  LUT5 #(
    .INIT(32'h56AA5656)) 
    \i_y_r[0]_i_1__8 
       (.I0(\i_y_r_reg[0] ),
        .I1(\number_tokens_reg[0]_0 ),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(waiting_for_ack_reg),
        .I4(waiting_for_ack_reg_0),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair84" *) 
  LUT5 #(
    .INIT(32'hADAA6A66)) 
    \number_tokens[0]_i_1__8 
       (.I0(\number_tokens[1]_i_2__8_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg),
        .I3(waiting_for_ack_reg_0),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__8_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair84" *) 
  LUT5 #(
    .INIT(32'hF2F0F020)) 
    \number_tokens[1]_i_1__8 
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .I4(\number_tokens[1]_i_2__8_n_0 ),
        .O(\number_tokens[1]_i_1__8_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair85" *) 
  LUT5 #(
    .INIT(32'h00000800)) 
    \number_tokens[1]_i_2__8 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[3]),
        .I3(rate_counter[4]),
        .I4(rate_counter[2]),
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
  (* SOFT_HLUTNM = "soft_lutpair87" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__8 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__8_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair87" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__8 
       (.I0(rate_counter[0]),
        .I1(rate_counter[1]),
        .O(\rate_counter[1]_i_1__8_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair85" *) 
  LUT5 #(
    .INIT(32'h51AAAAAA)) 
    \rate_counter[2]_i_1__8 
       (.I0(rate_counter[2]),
        .I1(rate_counter[4]),
        .I2(rate_counter[3]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[2]_i_1__8_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair86" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \rate_counter[3]_i_1__8 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .O(\rate_counter[3]_i_1__8_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair86" *) 
  LUT5 #(
    .INIT(32'h7FBF8000)) 
    \rate_counter[4]_i_1__8 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .I4(rate_counter[4]),
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
  (* SOFT_HLUTNM = "soft_lutpair83" *) 
  LUT4 #(
    .INIT(16'hDDD0)) 
    waiting_for_ack_i_2__8
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .O(_00_));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_6
   (D,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    _00_,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    waiting_for_ack_reg_0,
    rst,
    clk);
  output [0:0]D;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output [0:0]_00_;
  input [0:0]\i_y_r_reg[0] ;
  input waiting_for_ack_reg;
  input waiting_for_ack_reg_0;
  input rst;
  input clk;

  wire [0:0]D;
  wire [0:0]_00_;
  wire clk;
  wire [0:0]\i_y_r_reg[0] ;
  wire \number_tokens[0]_i_1__7_n_0 ;
  wire \number_tokens[1]_i_1__7_n_0 ;
  wire \number_tokens[1]_i_2__7_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__7_n_0 ;
  wire \rate_counter[1]_i_1__7_n_0 ;
  wire \rate_counter[2]_i_1__7_n_0 ;
  wire \rate_counter[3]_i_1__7_n_0 ;
  wire \rate_counter[4]_i_1__7_n_0 ;
  wire rst;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair73" *) 
  LUT5 #(
    .INIT(32'hAA565656)) 
    \i_y_r[0]_i_1__7 
       (.I0(\i_y_r_reg[0] ),
        .I1(\number_tokens_reg[0]_0 ),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(waiting_for_ack_reg),
        .I4(waiting_for_ack_reg_0),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair74" *) 
  LUT5 #(
    .INIT(32'hDAAAA666)) 
    \number_tokens[0]_i_1__7 
       (.I0(\number_tokens[1]_i_2__7_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg),
        .I3(waiting_for_ack_reg_0),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__7_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair74" *) 
  LUT5 #(
    .INIT(32'hF8F0F080)) 
    \number_tokens[1]_i_1__7 
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .I4(\number_tokens[1]_i_2__7_n_0 ),
        .O(\number_tokens[1]_i_1__7_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair75" *) 
  LUT5 #(
    .INIT(32'h00000800)) 
    \number_tokens[1]_i_2__7 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[3]),
        .I3(rate_counter[4]),
        .I4(rate_counter[2]),
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
  (* SOFT_HLUTNM = "soft_lutpair77" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__7 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__7_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair77" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__7 
       (.I0(rate_counter[0]),
        .I1(rate_counter[1]),
        .O(\rate_counter[1]_i_1__7_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair75" *) 
  LUT5 #(
    .INIT(32'h51AAAAAA)) 
    \rate_counter[2]_i_1__7 
       (.I0(rate_counter[2]),
        .I1(rate_counter[4]),
        .I2(rate_counter[3]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[2]_i_1__7_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair76" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \rate_counter[3]_i_1__7 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .O(\rate_counter[3]_i_1__7_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair76" *) 
  LUT5 #(
    .INIT(32'h7FBF8000)) 
    \rate_counter[4]_i_1__7 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .I4(rate_counter[4]),
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
  (* SOFT_HLUTNM = "soft_lutpair73" *) 
  LUT4 #(
    .INIT(16'h7770)) 
    waiting_for_ack_i_2__7
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .O(_00_));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_7
   (D,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    _00_,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    waiting_for_ack_reg_0,
    rst,
    clk);
  output [0:0]D;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output [0:0]_00_;
  input [0:0]\i_y_r_reg[0] ;
  input waiting_for_ack_reg;
  input waiting_for_ack_reg_0;
  input rst;
  input clk;

  wire [0:0]D;
  wire [0:0]_00_;
  wire clk;
  wire [0:0]\i_y_r_reg[0] ;
  wire \number_tokens[0]_i_1__6_n_0 ;
  wire \number_tokens[1]_i_1__6_n_0 ;
  wire \number_tokens[1]_i_2__6_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__6_n_0 ;
  wire \rate_counter[1]_i_1__6_n_0 ;
  wire \rate_counter[2]_i_1__6_n_0 ;
  wire \rate_counter[3]_i_1__6_n_0 ;
  wire \rate_counter[4]_i_1__6_n_0 ;
  wire rst;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair64" *) 
  LUT5 #(
    .INIT(32'h56AA5656)) 
    \i_y_r[0]_i_1__6 
       (.I0(\i_y_r_reg[0] ),
        .I1(\number_tokens_reg[0]_0 ),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(waiting_for_ack_reg),
        .I4(waiting_for_ack_reg_0),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair65" *) 
  LUT5 #(
    .INIT(32'hADAA6A66)) 
    \number_tokens[0]_i_1__6 
       (.I0(\number_tokens[1]_i_2__6_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg),
        .I3(waiting_for_ack_reg_0),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair65" *) 
  LUT5 #(
    .INIT(32'hF2F0F020)) 
    \number_tokens[1]_i_1__6 
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .I4(\number_tokens[1]_i_2__6_n_0 ),
        .O(\number_tokens[1]_i_1__6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair66" *) 
  LUT5 #(
    .INIT(32'h00000800)) 
    \number_tokens[1]_i_2__6 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[3]),
        .I3(rate_counter[4]),
        .I4(rate_counter[2]),
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
  (* SOFT_HLUTNM = "soft_lutpair68" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__6 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair68" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__6 
       (.I0(rate_counter[0]),
        .I1(rate_counter[1]),
        .O(\rate_counter[1]_i_1__6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair66" *) 
  LUT5 #(
    .INIT(32'h51AAAAAA)) 
    \rate_counter[2]_i_1__6 
       (.I0(rate_counter[2]),
        .I1(rate_counter[4]),
        .I2(rate_counter[3]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[2]_i_1__6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair67" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \rate_counter[3]_i_1__6 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .O(\rate_counter[3]_i_1__6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair67" *) 
  LUT5 #(
    .INIT(32'h7FBF8000)) 
    \rate_counter[4]_i_1__6 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .I4(rate_counter[4]),
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
  (* SOFT_HLUTNM = "soft_lutpair64" *) 
  LUT4 #(
    .INIT(16'hDDD0)) 
    waiting_for_ack_i_2__6
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .O(_00_));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_8
   (D,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    _00_,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    waiting_for_ack_reg_0,
    rst,
    clk);
  output [0:0]D;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output [0:0]_00_;
  input [0:0]\i_y_r_reg[0] ;
  input waiting_for_ack_reg;
  input waiting_for_ack_reg_0;
  input rst;
  input clk;

  wire [0:0]D;
  wire [0:0]_00_;
  wire clk;
  wire [0:0]\i_y_r_reg[0] ;
  wire \number_tokens[0]_i_1__5_n_0 ;
  wire \number_tokens[1]_i_1__5_n_0 ;
  wire \number_tokens[1]_i_2__5_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__5_n_0 ;
  wire \rate_counter[1]_i_1__5_n_0 ;
  wire \rate_counter[2]_i_1__5_n_0 ;
  wire \rate_counter[3]_i_1__5_n_0 ;
  wire \rate_counter[4]_i_1__5_n_0 ;
  wire rst;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair55" *) 
  LUT5 #(
    .INIT(32'h56AA5656)) 
    \i_y_r[0]_i_1__5 
       (.I0(\i_y_r_reg[0] ),
        .I1(\number_tokens_reg[0]_0 ),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(waiting_for_ack_reg),
        .I4(waiting_for_ack_reg_0),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair56" *) 
  LUT5 #(
    .INIT(32'hADAA6A66)) 
    \number_tokens[0]_i_1__5 
       (.I0(\number_tokens[1]_i_2__5_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg),
        .I3(waiting_for_ack_reg_0),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair56" *) 
  LUT5 #(
    .INIT(32'hF2F0F020)) 
    \number_tokens[1]_i_1__5 
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .I4(\number_tokens[1]_i_2__5_n_0 ),
        .O(\number_tokens[1]_i_1__5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair57" *) 
  LUT5 #(
    .INIT(32'h00000800)) 
    \number_tokens[1]_i_2__5 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[3]),
        .I3(rate_counter[4]),
        .I4(rate_counter[2]),
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
  (* SOFT_HLUTNM = "soft_lutpair59" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__5 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair59" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__5 
       (.I0(rate_counter[0]),
        .I1(rate_counter[1]),
        .O(\rate_counter[1]_i_1__5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair57" *) 
  LUT5 #(
    .INIT(32'h51AAAAAA)) 
    \rate_counter[2]_i_1__5 
       (.I0(rate_counter[2]),
        .I1(rate_counter[4]),
        .I2(rate_counter[3]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[2]_i_1__5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair58" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \rate_counter[3]_i_1__5 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .O(\rate_counter[3]_i_1__5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair58" *) 
  LUT5 #(
    .INIT(32'h7FBF8000)) 
    \rate_counter[4]_i_1__5 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .I4(rate_counter[4]),
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
  (* SOFT_HLUTNM = "soft_lutpair55" *) 
  LUT4 #(
    .INIT(16'hDDD0)) 
    waiting_for_ack_i_2__5
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .O(_00_));
endmodule

(* ORIG_REF_NAME = "token_bucket" *) 
module token_bucket_9
   (D,
    \number_tokens_reg[0]_0 ,
    \number_tokens_reg[1]_0 ,
    _00_,
    \i_y_r_reg[0] ,
    waiting_for_ack_reg,
    waiting_for_ack_reg_0,
    rst,
    clk);
  output [0:0]D;
  output \number_tokens_reg[0]_0 ;
  output \number_tokens_reg[1]_0 ;
  output [0:0]_00_;
  input [0:0]\i_y_r_reg[0] ;
  input waiting_for_ack_reg;
  input waiting_for_ack_reg_0;
  input rst;
  input clk;

  wire [0:0]D;
  wire [0:0]_00_;
  wire clk;
  wire [0:0]\i_y_r_reg[0] ;
  wire \number_tokens[0]_i_1__4_n_0 ;
  wire \number_tokens[1]_i_1__4_n_0 ;
  wire \number_tokens[1]_i_2__4_n_0 ;
  wire \number_tokens_reg[0]_0 ;
  wire \number_tokens_reg[1]_0 ;
  wire [4:0]rate_counter;
  wire \rate_counter[0]_i_1__4_n_0 ;
  wire \rate_counter[1]_i_1__4_n_0 ;
  wire \rate_counter[2]_i_1__4_n_0 ;
  wire \rate_counter[3]_i_1__4_n_0 ;
  wire \rate_counter[4]_i_1__4_n_0 ;
  wire rst;
  wire waiting_for_ack_reg;
  wire waiting_for_ack_reg_0;

  (* SOFT_HLUTNM = "soft_lutpair46" *) 
  LUT5 #(
    .INIT(32'h56AA5656)) 
    \i_y_r[0]_i_1__4 
       (.I0(\i_y_r_reg[0] ),
        .I1(\number_tokens_reg[0]_0 ),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(waiting_for_ack_reg),
        .I4(waiting_for_ack_reg_0),
        .O(D));
  (* SOFT_HLUTNM = "soft_lutpair47" *) 
  LUT5 #(
    .INIT(32'hADAA6A66)) 
    \number_tokens[0]_i_1__4 
       (.I0(\number_tokens[1]_i_2__4_n_0 ),
        .I1(\number_tokens_reg[1]_0 ),
        .I2(waiting_for_ack_reg),
        .I3(waiting_for_ack_reg_0),
        .I4(\number_tokens_reg[0]_0 ),
        .O(\number_tokens[0]_i_1__4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair47" *) 
  LUT5 #(
    .INIT(32'hF2F0F020)) 
    \number_tokens[1]_i_1__4 
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .I4(\number_tokens[1]_i_2__4_n_0 ),
        .O(\number_tokens[1]_i_1__4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair48" *) 
  LUT5 #(
    .INIT(32'h00000800)) 
    \number_tokens[1]_i_2__4 
       (.I0(rate_counter[1]),
        .I1(rate_counter[0]),
        .I2(rate_counter[3]),
        .I3(rate_counter[4]),
        .I4(rate_counter[2]),
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
  (* SOFT_HLUTNM = "soft_lutpair50" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \rate_counter[0]_i_1__4 
       (.I0(rate_counter[0]),
        .O(\rate_counter[0]_i_1__4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair50" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \rate_counter[1]_i_1__4 
       (.I0(rate_counter[0]),
        .I1(rate_counter[1]),
        .O(\rate_counter[1]_i_1__4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair48" *) 
  LUT5 #(
    .INIT(32'h51AAAAAA)) 
    \rate_counter[2]_i_1__4 
       (.I0(rate_counter[2]),
        .I1(rate_counter[4]),
        .I2(rate_counter[3]),
        .I3(rate_counter[0]),
        .I4(rate_counter[1]),
        .O(\rate_counter[2]_i_1__4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair49" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \rate_counter[3]_i_1__4 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .O(\rate_counter[3]_i_1__4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair49" *) 
  LUT5 #(
    .INIT(32'h7FBF8000)) 
    \rate_counter[4]_i_1__4 
       (.I0(rate_counter[3]),
        .I1(rate_counter[0]),
        .I2(rate_counter[1]),
        .I3(rate_counter[2]),
        .I4(rate_counter[4]),
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
  (* SOFT_HLUTNM = "soft_lutpair46" *) 
  LUT4 #(
    .INIT(16'hDDD0)) 
    waiting_for_ack_i_2__4
       (.I0(waiting_for_ack_reg_0),
        .I1(waiting_for_ack_reg),
        .I2(\number_tokens_reg[1]_0 ),
        .I3(\number_tokens_reg[0]_0 ),
        .O(_00_));
endmodule

(* D_W = "32" *) (* N_PACKETS = "128" *) (* RATE = "20" *) 
(* SIGMA = "3" *) (* VC_W = "3" *) (* X_MAX = "4" *) 
(* X_W = "2" *) (* Y_MAX = "4" *) (* Y_W = "2" *) 
(* NotValidForBitStream *)
module torus
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
  wire [1:1]_02__14;
  wire [1:1]_02__20;
  wire [1:1]_02__26;
  wire [1:1]_02__32;
  wire [1:1]_02__38;
  wire [1:1]_02__4;
  wire [1:1]_02__43;
  wire [1:1]_02__49;
  wire [1:1]_02__54;
  wire [1:1]_02__60;
  wire [1:1]_02__66;
  wire [1:1]_02__72;
  wire [1:1]_02__78;
  wire [1:1]_02__8;
  wire [1:1]_02__84;
  wire _05_;
  wire _05__13;
  wire _05__19;
  wire _05__25;
  wire _05__3;
  wire _05__31;
  wire _05__37;
  wire _05__42;
  wire _05__48;
  wire _05__53;
  wire _05__59;
  wire _05__65;
  wire _05__71;
  wire _05__77;
  wire _05__83;
  wire [1:0]_06_;
  wire [1:0]_06__15;
  wire [1:0]_06__21;
  wire [1:0]_06__27;
  wire [1:0]_06__33;
  wire [1:0]_06__39;
  wire [1:0]_06__44;
  wire [1:0]_06__5;
  wire [1:0]_06__50;
  wire [1:0]_06__55;
  wire [1:0]_06__61;
  wire [1:0]_06__67;
  wire [1:0]_06__73;
  wire [1:0]_06__79;
  wire [1:0]_06__85;
  wire [1:0]_06__9;
  wire clk;
  wire dor_e_v;
  wire dor_e_v_1;
  wire dor_e_v_11;
  wire dor_e_v_17;
  wire dor_e_v_23;
  wire dor_e_v_29;
  wire dor_e_v_35;
  wire dor_e_v_41;
  wire dor_e_v_46;
  wire dor_e_v_52;
  wire dor_e_v_57;
  wire dor_e_v_63;
  wire dor_e_v_69;
  wire dor_e_v_7;
  wire dor_e_v_75;
  wire dor_e_v_81;
  wire dor_s_v;
  wire dor_s_v_12;
  wire dor_s_v_18;
  wire dor_s_v_2;
  wire dor_s_v_24;
  wire dor_s_v_30;
  wire dor_s_v_36;
  wire dor_s_v_47;
  wire dor_s_v_58;
  wire dor_s_v_64;
  wire dor_s_v_70;
  wire dor_s_v_76;
  wire dor_s_v_82;
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
  wire n_in_v_reg;
  wire out_v;
  wire [1:0]\regulator/number_tokens_reg ;
  wire [1:0]\regulator/number_tokens_reg_0 ;
  wire [1:0]\regulator/number_tokens_reg_10 ;
  wire [1:0]\regulator/number_tokens_reg_16 ;
  wire [1:0]\regulator/number_tokens_reg_22 ;
  wire [1:0]\regulator/number_tokens_reg_28 ;
  wire [1:0]\regulator/number_tokens_reg_34 ;
  wire [1:0]\regulator/number_tokens_reg_40 ;
  wire [1:0]\regulator/number_tokens_reg_45 ;
  wire [1:0]\regulator/number_tokens_reg_51 ;
  wire [1:0]\regulator/number_tokens_reg_56 ;
  wire [1:0]\regulator/number_tokens_reg_6 ;
  wire [1:0]\regulator/number_tokens_reg_62 ;
  wire [1:0]\regulator/number_tokens_reg_68 ;
  wire [1:0]\regulator/number_tokens_reg_74 ;
  wire [1:0]\regulator/number_tokens_reg_80 ;
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
  wire \ys[0].xs[0].client_xy_n_2 ;
  wire \ys[0].xs[0].client_xy_n_3 ;
  wire \ys[0].xs[0].torus_switch_xy_n_10 ;
  wire \ys[0].xs[0].torus_switch_xy_n_15 ;
  wire \ys[0].xs[0].torus_switch_xy_n_3 ;
  wire \ys[0].xs[0].torus_switch_xy_n_4 ;
  wire \ys[0].xs[0].torus_switch_xy_n_5 ;
  wire \ys[0].xs[1].client_xy_n_2 ;
  wire \ys[0].xs[1].client_xy_n_3 ;
  wire \ys[0].xs[1].torus_switch_xy_n_14 ;
  wire \ys[0].xs[1].torus_switch_xy_n_2 ;
  wire \ys[0].xs[1].torus_switch_xy_n_3 ;
  wire \ys[0].xs[1].torus_switch_xy_n_4 ;
  wire \ys[0].xs[1].torus_switch_xy_n_9 ;
  wire \ys[0].xs[2].client_xy_n_10 ;
  wire \ys[0].xs[2].client_xy_n_6 ;
  wire \ys[0].xs[2].client_xy_n_7 ;
  wire \ys[0].xs[2].torus_switch_xy_n_11 ;
  wire \ys[0].xs[2].torus_switch_xy_n_12 ;
  wire \ys[0].xs[2].torus_switch_xy_n_7 ;
  wire \ys[0].xs[3].client_xy_n_2 ;
  wire \ys[0].xs[3].client_xy_n_3 ;
  wire \ys[0].xs[3].torus_switch_xy_n_14 ;
  wire \ys[0].xs[3].torus_switch_xy_n_2 ;
  wire \ys[0].xs[3].torus_switch_xy_n_3 ;
  wire \ys[0].xs[3].torus_switch_xy_n_4 ;
  wire \ys[0].xs[3].torus_switch_xy_n_9 ;
  wire \ys[1].xs[0].client_xy_n_2 ;
  wire \ys[1].xs[0].client_xy_n_3 ;
  wire \ys[1].xs[0].torus_switch_xy_n_14 ;
  wire \ys[1].xs[0].torus_switch_xy_n_2 ;
  wire \ys[1].xs[0].torus_switch_xy_n_3 ;
  wire \ys[1].xs[0].torus_switch_xy_n_4 ;
  wire \ys[1].xs[0].torus_switch_xy_n_9 ;
  wire \ys[1].xs[1].client_xy_n_2 ;
  wire \ys[1].xs[1].client_xy_n_3 ;
  wire \ys[1].xs[1].torus_switch_xy_n_14 ;
  wire \ys[1].xs[1].torus_switch_xy_n_2 ;
  wire \ys[1].xs[1].torus_switch_xy_n_3 ;
  wire \ys[1].xs[1].torus_switch_xy_n_4 ;
  wire \ys[1].xs[1].torus_switch_xy_n_9 ;
  wire \ys[1].xs[2].client_xy_n_2 ;
  wire \ys[1].xs[2].client_xy_n_3 ;
  wire \ys[1].xs[2].torus_switch_xy_n_14 ;
  wire \ys[1].xs[2].torus_switch_xy_n_2 ;
  wire \ys[1].xs[2].torus_switch_xy_n_3 ;
  wire \ys[1].xs[2].torus_switch_xy_n_4 ;
  wire \ys[1].xs[2].torus_switch_xy_n_9 ;
  wire \ys[1].xs[3].client_xy_n_2 ;
  wire \ys[1].xs[3].client_xy_n_3 ;
  wire \ys[1].xs[3].torus_switch_xy_n_14 ;
  wire \ys[1].xs[3].torus_switch_xy_n_2 ;
  wire \ys[1].xs[3].torus_switch_xy_n_3 ;
  wire \ys[1].xs[3].torus_switch_xy_n_4 ;
  wire \ys[1].xs[3].torus_switch_xy_n_9 ;
  wire \ys[2].xs[0].client_xy_n_10 ;
  wire \ys[2].xs[0].client_xy_n_6 ;
  wire \ys[2].xs[0].client_xy_n_7 ;
  wire \ys[2].xs[0].torus_switch_xy_n_11 ;
  wire \ys[2].xs[0].torus_switch_xy_n_6 ;
  wire \ys[2].xs[1].client_xy_n_2 ;
  wire \ys[2].xs[1].client_xy_n_3 ;
  wire \ys[2].xs[1].torus_switch_xy_n_14 ;
  wire \ys[2].xs[1].torus_switch_xy_n_2 ;
  wire \ys[2].xs[1].torus_switch_xy_n_3 ;
  wire \ys[2].xs[1].torus_switch_xy_n_4 ;
  wire \ys[2].xs[1].torus_switch_xy_n_9 ;
  wire \ys[2].xs[2].client_xy_n_10 ;
  wire \ys[2].xs[2].client_xy_n_6 ;
  wire \ys[2].xs[2].client_xy_n_7 ;
  wire \ys[2].xs[2].torus_switch_xy_n_11 ;
  wire \ys[2].xs[2].torus_switch_xy_n_6 ;
  wire \ys[2].xs[3].client_xy_n_2 ;
  wire \ys[2].xs[3].client_xy_n_3 ;
  wire \ys[2].xs[3].torus_switch_xy_n_14 ;
  wire \ys[2].xs[3].torus_switch_xy_n_2 ;
  wire \ys[2].xs[3].torus_switch_xy_n_3 ;
  wire \ys[2].xs[3].torus_switch_xy_n_4 ;
  wire \ys[2].xs[3].torus_switch_xy_n_9 ;
  wire \ys[3].xs[0].client_xy_n_2 ;
  wire \ys[3].xs[0].client_xy_n_3 ;
  wire \ys[3].xs[0].torus_switch_xy_n_14 ;
  wire \ys[3].xs[0].torus_switch_xy_n_2 ;
  wire \ys[3].xs[0].torus_switch_xy_n_3 ;
  wire \ys[3].xs[0].torus_switch_xy_n_4 ;
  wire \ys[3].xs[0].torus_switch_xy_n_9 ;
  wire \ys[3].xs[1].client_xy_n_2 ;
  wire \ys[3].xs[1].client_xy_n_3 ;
  wire \ys[3].xs[1].torus_switch_xy_n_14 ;
  wire \ys[3].xs[1].torus_switch_xy_n_2 ;
  wire \ys[3].xs[1].torus_switch_xy_n_3 ;
  wire \ys[3].xs[1].torus_switch_xy_n_4 ;
  wire \ys[3].xs[1].torus_switch_xy_n_9 ;
  wire \ys[3].xs[2].client_xy_n_2 ;
  wire \ys[3].xs[2].client_xy_n_3 ;
  wire \ys[3].xs[2].torus_switch_xy_n_14 ;
  wire \ys[3].xs[2].torus_switch_xy_n_2 ;
  wire \ys[3].xs[2].torus_switch_xy_n_3 ;
  wire \ys[3].xs[2].torus_switch_xy_n_4 ;
  wire \ys[3].xs[2].torus_switch_xy_n_9 ;
  wire \ys[3].xs[3].client_xy_n_2 ;
  wire \ys[3].xs[3].client_xy_n_3 ;
  wire \ys[3].xs[3].torus_switch_xy_n_14 ;
  wire \ys[3].xs[3].torus_switch_xy_n_2 ;
  wire \ys[3].xs[3].torus_switch_xy_n_3 ;
  wire \ys[3].xs[3].torus_switch_xy_n_4 ;
  wire \ys[3].xs[3].torus_switch_xy_n_9 ;

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
        .E(_05_),
        .Q(\i[0][0]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v),
        .dor_s_v(dor_s_v),
        .e_out_v_reg_reg(\ys[0].xs[0].torus_switch_xy_n_15 ),
        .\i[0][0]_36 (\i_vc[0][0] [0]),
        .\i_x_r_reg[1]_0 (\ys[0].xs[0].client_xy_n_3 ),
        .\i_x_r_reg[1]_1 (_06_),
        .\i_y_r_reg[0]_0 (\s[0][0]_32 [0]),
        .\i_y_r_reg[1]_0 (\ys[0].xs[0].client_xy_n_2 ),
        .\i_y_r_reg[1]_1 (\i[0][0]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[0].xs[0].torus_switch_xy_n_5 ),
        .s_out_v_reg_reg_0(\ys[0].xs[0].torus_switch_xy_n_4 ),
        .s_out_v_reg_reg_1(\ys[0].xs[0].torus_switch_xy_n_3 ),
        .waiting_for_ack_reg_0(\ys[0].xs[0].torus_switch_xy_n_10 ));
  torus_switch \ys[0].xs[0].torus_switch_xy 
       (.D(_02_),
        .E(_05_),
        .Q(\s[0][0]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v),
        .dor_s_v(dor_s_v),
        .\e[0][0] (\e[0][0] ),
        .\e[0][0]_36 (\e[0][0]_36 ),
        .\e[3][0] (\e[3][0] ),
        .\e[3][0]_36 (\e[3][0]_36 ),
        .\i[0][0]_36 (\i_vc[0][0] [0]),
        .\i_x_r_reg[1] (\ys[0].xs[0].torus_switch_xy_n_10 ),
        .n_in_v_reg_reg_0(\ys[0].xs[0].torus_switch_xy_n_3 ),
        .n_in_v_reg_reg_1(\ys[0].xs[0].torus_switch_xy_n_4 ),
        .n_in_v_reg_reg_2(\ys[0].xs[0].torus_switch_xy_n_5 ),
        .\n_in_x_reg_reg[1]_0 (\s[0][3]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[0][3]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg ),
        .o_v_reg_reg_0(\ys[0].xs[0].client_xy_n_2 ),
        .o_v_reg_reg_1(\ys[0].xs[0].client_xy_n_3 ),
        .out_v(out_v),
        .rst(rst),
        .\s[0][0]_36 (\s[0][0]_36 ),
        .\s[0][3]_36 (\s[0][3]_36 ),
        .\s_out_x_reg_reg[1]_0 (_06_),
        .\s_out_y_reg_reg[1]_0 (\s[0][0]_32 ),
        .\s_out_y_reg_reg[1]_1 (\i[0][0]_32 ),
        .w_in_v_reg_reg_0(\ys[0].xs[0].torus_switch_xy_n_15 ),
        .waiting_for_ack_reg(\i[0][0]_34 ));
  client__parameterized0 \ys[0].xs[1].client_xy 
       (.D(_02__4),
        .E(_05__3),
        .Q(\i[1][0]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_1),
        .dor_s_v(dor_s_v_2),
        .e_out_v_reg_reg(\ys[0].xs[1].torus_switch_xy_n_14 ),
        .\i[1][0]_36 (\i_vc[1][0] [0]),
        .\i_x_r_reg[0]_0 (\ys[0].xs[1].client_xy_n_3 ),
        .\i_x_r_reg[1]_0 (_06__5),
        .\i_y_r_reg[0]_0 (\s[1][0]_32 [0]),
        .\i_y_r_reg[1]_0 (\ys[0].xs[1].client_xy_n_2 ),
        .\i_y_r_reg[1]_1 (\i[1][0]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_0 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[0].xs[1].torus_switch_xy_n_4 ),
        .s_out_v_reg_reg_0(\ys[0].xs[1].torus_switch_xy_n_3 ),
        .s_out_v_reg_reg_1(\ys[0].xs[1].torus_switch_xy_n_2 ),
        .waiting_for_ack_reg_0(\ys[0].xs[1].torus_switch_xy_n_9 ));
  torus_switch__parameterized0 \ys[0].xs[1].torus_switch_xy 
       (.D(_02__4),
        .E(_05__3),
        .Q(\s[1][0]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_1),
        .dor_s_v(dor_s_v_2),
        .\e[0][0] (\e[0][0] ),
        .\e[0][0]_36 (\e[0][0]_36 ),
        .\e[1][0] (\e[1][0] ),
        .\e[1][0]_36 (\e[1][0]_36 ),
        .\i[1][0]_36 (\i_vc[1][0] [0]),
        .\i_x_r_reg[0] (\ys[0].xs[1].torus_switch_xy_n_9 ),
        .n_in_v_reg_reg_0(\ys[0].xs[1].torus_switch_xy_n_2 ),
        .n_in_v_reg_reg_1(\ys[0].xs[1].torus_switch_xy_n_3 ),
        .n_in_v_reg_reg_2(\ys[0].xs[1].torus_switch_xy_n_4 ),
        .\n_in_x_reg_reg[1]_0 (\s[1][3]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[1][3]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_0 ),
        .o_v_reg_reg_0(\ys[0].xs[1].client_xy_n_2 ),
        .o_v_reg_reg_1(\ys[0].xs[1].client_xy_n_3 ),
        .rst(rst),
        .\s[1][0]_36 (\s[1][0]_36 ),
        .\s[1][3]_36 (\s[1][3]_36 ),
        .\s_out_x_reg_reg[1]_0 (_06__5),
        .\s_out_y_reg_reg[1]_0 (\s[1][0]_32 ),
        .\s_out_y_reg_reg[1]_1 (\i[1][0]_32 ),
        .w_in_v_reg_reg_0(\ys[0].xs[1].torus_switch_xy_n_14 ),
        .waiting_for_ack_reg(\i[1][0]_34 ));
  client__parameterized1 \ys[0].xs[2].client_xy 
       (.D(_02__8),
        .Q(\i[2][0]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_7),
        .e_out_v_reg_reg(\ys[0].xs[2].torus_switch_xy_n_11 ),
        .\i[2][0]_36 (\i_vc[2][0] [0]),
        .\i_x_r_reg[0]_0 (\ys[0].xs[2].client_xy_n_6 ),
        .\i_x_r_reg[1]_0 (_06__9),
        .\i_y_r_reg[0]_0 (\ys[0].xs[2].client_xy_n_10 ),
        .\i_y_r_reg[0]_1 (\s[2][0]_32 [0]),
        .\i_y_r_reg[0]_2 (\ys[0].xs[2].torus_switch_xy_n_12 ),
        .\i_y_r_reg[1]_0 (\ys[0].xs[2].client_xy_n_7 ),
        .\i_y_r_reg[1]_1 (\i[2][0]_32 ),
        .n_in_v_reg(n_in_v_reg),
        .number_tokens_reg(\regulator/number_tokens_reg_6 ),
        .rst(rst),
        .waiting_for_ack_reg_0(\ys[0].xs[2].torus_switch_xy_n_7 ));
  torus_switch__parameterized1 \ys[0].xs[2].torus_switch_xy 
       (.D(_02__8),
        .Q(\i[2][0]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_7),
        .\e[1][0] (\e[1][0] ),
        .\e[1][0]_36 (\e[1][0]_36 ),
        .\e[2][0] (\e[2][0] ),
        .\e[2][0]_36 (\e[2][0]_36 ),
        .\e_out_y_reg_reg[1]_0 (\i[2][0]_32 ),
        .\i[2][0]_36 (\i_vc[2][0] [0]),
        .\i_x_r_reg[0] (\ys[0].xs[2].torus_switch_xy_n_7 ),
        .n_in_v_reg(n_in_v_reg),
        .\n_in_x_reg_reg[1]_0 (\s[2][3]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[2][3]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_6 ),
        .o_v_reg_reg_0(\ys[0].xs[2].client_xy_n_7 ),
        .o_v_reg_reg_1(\ys[0].xs[2].client_xy_n_6 ),
        .rst(rst),
        .\s[2][0]_36 (\s[2][0]_36 ),
        .\s[2][3]_36 (\s[2][3]_36 ),
        .s_out_v_reg_reg_0(\ys[0].xs[2].client_xy_n_10 ),
        .\s_out_x_reg_reg[1]_0 (_06__9),
        .\s_out_x_reg_reg[1]_1 (\s[2][0]_34 ),
        .\s_out_y_reg_reg[1]_0 (\s[2][0]_32 ),
        .w_in_v_reg_reg_0(\ys[0].xs[2].torus_switch_xy_n_11 ),
        .w_in_v_reg_reg_1(\ys[0].xs[2].torus_switch_xy_n_12 ));
  client__parameterized2 \ys[0].xs[3].client_xy 
       (.D(_02__14),
        .E(_05__13),
        .Q(\i[3][0]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_11),
        .dor_s_v(dor_s_v_12),
        .e_out_v_reg_reg(\ys[0].xs[3].torus_switch_xy_n_14 ),
        .\i[3][0]_36 (\i_vc[3][0] [0]),
        .\i_x_r_reg[1]_0 (\ys[0].xs[3].client_xy_n_3 ),
        .\i_x_r_reg[1]_1 (_06__15),
        .\i_y_r_reg[0]_0 (\s[3][0]_32 [0]),
        .\i_y_r_reg[1]_0 (\ys[0].xs[3].client_xy_n_2 ),
        .\i_y_r_reg[1]_1 (\i[3][0]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_10 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[0].xs[3].torus_switch_xy_n_4 ),
        .s_out_v_reg_reg_0(\ys[0].xs[3].torus_switch_xy_n_3 ),
        .s_out_v_reg_reg_1(\ys[0].xs[3].torus_switch_xy_n_2 ),
        .waiting_for_ack_reg_0(\ys[0].xs[3].torus_switch_xy_n_9 ));
  torus_switch__parameterized2 \ys[0].xs[3].torus_switch_xy 
       (.D(_02__14),
        .E(_05__13),
        .Q(\s[3][0]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_11),
        .dor_s_v(dor_s_v_12),
        .\e[2][0] (\e[2][0] ),
        .\e[2][0]_36 (\e[2][0]_36 ),
        .\e[3][0] (\e[3][0] ),
        .\e[3][0]_36 (\e[3][0]_36 ),
        .\i[3][0]_36 (\i_vc[3][0] [0]),
        .\i_x_r_reg[1] (\ys[0].xs[3].torus_switch_xy_n_9 ),
        .n_in_v_reg_reg_0(\ys[0].xs[3].torus_switch_xy_n_2 ),
        .n_in_v_reg_reg_1(\ys[0].xs[3].torus_switch_xy_n_3 ),
        .n_in_v_reg_reg_2(\ys[0].xs[3].torus_switch_xy_n_4 ),
        .\n_in_x_reg_reg[1]_0 (\s[3][3]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[3][3]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_10 ),
        .o_v_reg_reg_0(\ys[0].xs[3].client_xy_n_2 ),
        .o_v_reg_reg_1(\ys[0].xs[3].client_xy_n_3 ),
        .rst(rst),
        .\s[3][0]_36 (\s[3][0]_36 ),
        .\s[3][3]_36 (\s[3][3]_36 ),
        .\s_out_x_reg_reg[1]_0 (_06__15),
        .\s_out_y_reg_reg[1]_0 (\s[3][0]_32 ),
        .\s_out_y_reg_reg[1]_1 (\i[3][0]_32 ),
        .w_in_v_reg_reg_0(\ys[0].xs[3].torus_switch_xy_n_14 ),
        .waiting_for_ack_reg(\i[3][0]_34 ));
  client__parameterized3 \ys[1].xs[0].client_xy 
       (.D(_02__20),
        .E(_05__19),
        .Q(\i[0][1]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_17),
        .dor_s_v(dor_s_v_18),
        .e_out_v_reg_reg(\ys[1].xs[0].torus_switch_xy_n_14 ),
        .\i[0][1]_36 (\i_vc[0][1] [0]),
        .\i_x_r_reg[1]_0 (\ys[1].xs[0].client_xy_n_3 ),
        .\i_x_r_reg[1]_1 (_06__21),
        .\i_y_r_reg[0]_0 (\ys[1].xs[0].client_xy_n_2 ),
        .\i_y_r_reg[0]_1 (\s[0][1]_32 [0]),
        .\i_y_r_reg[1]_0 (\i[0][1]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_16 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[1].xs[0].torus_switch_xy_n_4 ),
        .s_out_v_reg_reg_0(\ys[1].xs[0].torus_switch_xy_n_3 ),
        .s_out_v_reg_reg_1(\ys[1].xs[0].torus_switch_xy_n_2 ),
        .waiting_for_ack_reg_0(\ys[1].xs[0].torus_switch_xy_n_9 ));
  torus_switch__parameterized3 \ys[1].xs[0].torus_switch_xy 
       (.D(_02__20),
        .E(_05__19),
        .Q(\s[0][1]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_17),
        .dor_s_v(dor_s_v_18),
        .\e[0][1] (\e[0][1] ),
        .\e[0][1]_36 (\e[0][1]_36 ),
        .\e[3][1] (\e[3][1] ),
        .\e[3][1]_36 (\e[3][1]_36 ),
        .\i[0][1]_36 (\i_vc[0][1] [0]),
        .\i_x_r_reg[1] (\ys[1].xs[0].torus_switch_xy_n_9 ),
        .n_in_v_reg_reg_0(\ys[1].xs[0].torus_switch_xy_n_2 ),
        .n_in_v_reg_reg_1(\ys[1].xs[0].torus_switch_xy_n_3 ),
        .n_in_v_reg_reg_2(\ys[1].xs[0].torus_switch_xy_n_4 ),
        .\n_in_x_reg_reg[1]_0 (\s[0][0]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[0][0]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_16 ),
        .o_v_reg_reg_0(\ys[1].xs[0].client_xy_n_2 ),
        .o_v_reg_reg_1(\ys[1].xs[0].client_xy_n_3 ),
        .rst(rst),
        .\s[0][0]_36 (\s[0][0]_36 ),
        .\s[0][1]_36 (\s[0][1]_36 ),
        .\s_out_x_reg_reg[1]_0 (_06__21),
        .\s_out_y_reg_reg[1]_0 (\s[0][1]_32 ),
        .\s_out_y_reg_reg[1]_1 (\i[0][1]_32 ),
        .w_in_v_reg_reg_0(\ys[1].xs[0].torus_switch_xy_n_14 ),
        .waiting_for_ack_reg(\i[0][1]_34 ));
  client__parameterized4 \ys[1].xs[1].client_xy 
       (.D(_02__26),
        .E(_05__25),
        .Q(\i[1][1]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_23),
        .dor_s_v(dor_s_v_24),
        .e_out_v_reg_reg(\ys[1].xs[1].torus_switch_xy_n_14 ),
        .\i[1][1]_36 (\i_vc[1][1] [0]),
        .\i_x_r_reg[0]_0 (\ys[1].xs[1].client_xy_n_3 ),
        .\i_x_r_reg[1]_0 (_06__27),
        .\i_y_r_reg[0]_0 (\ys[1].xs[1].client_xy_n_2 ),
        .\i_y_r_reg[0]_1 (\s[1][1]_32 [0]),
        .\i_y_r_reg[1]_0 (\i[1][1]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_22 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[1].xs[1].torus_switch_xy_n_4 ),
        .s_out_v_reg_reg_0(\ys[1].xs[1].torus_switch_xy_n_3 ),
        .s_out_v_reg_reg_1(\ys[1].xs[1].torus_switch_xy_n_2 ),
        .waiting_for_ack_reg_0(\ys[1].xs[1].torus_switch_xy_n_9 ));
  torus_switch__parameterized4 \ys[1].xs[1].torus_switch_xy 
       (.D(_02__26),
        .E(_05__25),
        .Q(\s[1][1]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_23),
        .dor_s_v(dor_s_v_24),
        .\e[0][1] (\e[0][1] ),
        .\e[0][1]_36 (\e[0][1]_36 ),
        .\e[1][1] (\e[1][1] ),
        .\e[1][1]_36 (\e[1][1]_36 ),
        .\i[1][1]_36 (\i_vc[1][1] [0]),
        .\i_x_r_reg[0] (\ys[1].xs[1].torus_switch_xy_n_9 ),
        .n_in_v_reg_reg_0(\ys[1].xs[1].torus_switch_xy_n_2 ),
        .n_in_v_reg_reg_1(\ys[1].xs[1].torus_switch_xy_n_3 ),
        .n_in_v_reg_reg_2(\ys[1].xs[1].torus_switch_xy_n_4 ),
        .\n_in_x_reg_reg[1]_0 (\s[1][0]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[1][0]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_22 ),
        .o_v_reg_reg_0(\ys[1].xs[1].client_xy_n_2 ),
        .o_v_reg_reg_1(\ys[1].xs[1].client_xy_n_3 ),
        .rst(rst),
        .\s[1][0]_36 (\s[1][0]_36 ),
        .\s[1][1]_36 (\s[1][1]_36 ),
        .\s_out_x_reg_reg[1]_0 (_06__27),
        .\s_out_y_reg_reg[1]_0 (\s[1][1]_32 ),
        .\s_out_y_reg_reg[1]_1 (\i[1][1]_32 ),
        .w_in_v_reg_reg_0(\ys[1].xs[1].torus_switch_xy_n_14 ),
        .waiting_for_ack_reg(\i[1][1]_34 ));
  client__parameterized5 \ys[1].xs[2].client_xy 
       (.D(_02__32),
        .E(_05__31),
        .Q(\i[2][1]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_29),
        .dor_s_v(dor_s_v_30),
        .e_out_v_reg_reg(\ys[1].xs[2].torus_switch_xy_n_14 ),
        .\i[2][1]_36 (\i_vc[2][1] [0]),
        .\i_x_r_reg[1]_0 (\ys[1].xs[2].client_xy_n_3 ),
        .\i_x_r_reg[1]_1 (_06__33),
        .\i_y_r_reg[0]_0 (\ys[1].xs[2].client_xy_n_2 ),
        .\i_y_r_reg[0]_1 (\s[2][1]_32 [0]),
        .\i_y_r_reg[1]_0 (\i[2][1]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_28 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[1].xs[2].torus_switch_xy_n_4 ),
        .s_out_v_reg_reg_0(\ys[1].xs[2].torus_switch_xy_n_3 ),
        .s_out_v_reg_reg_1(\ys[1].xs[2].torus_switch_xy_n_2 ),
        .waiting_for_ack_reg_0(\ys[1].xs[2].torus_switch_xy_n_9 ));
  torus_switch__parameterized5 \ys[1].xs[2].torus_switch_xy 
       (.D(_02__32),
        .E(_05__31),
        .Q(\s[2][1]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_29),
        .dor_s_v(dor_s_v_30),
        .\e[1][1] (\e[1][1] ),
        .\e[1][1]_36 (\e[1][1]_36 ),
        .\e[2][1] (\e[2][1] ),
        .\e[2][1]_36 (\e[2][1]_36 ),
        .\i[2][1]_36 (\i_vc[2][1] [0]),
        .\i_x_r_reg[1] (\ys[1].xs[2].torus_switch_xy_n_9 ),
        .n_in_v_reg_reg_0(\ys[1].xs[2].torus_switch_xy_n_2 ),
        .n_in_v_reg_reg_1(\ys[1].xs[2].torus_switch_xy_n_3 ),
        .n_in_v_reg_reg_2(\ys[1].xs[2].torus_switch_xy_n_4 ),
        .\n_in_x_reg_reg[1]_0 (\s[2][0]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[2][0]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_28 ),
        .o_v_reg_reg_0(\ys[1].xs[2].client_xy_n_2 ),
        .o_v_reg_reg_1(\ys[1].xs[2].client_xy_n_3 ),
        .rst(rst),
        .\s[2][0]_36 (\s[2][0]_36 ),
        .\s[2][1]_36 (\s[2][1]_36 ),
        .\s_out_x_reg_reg[1]_0 (_06__33),
        .\s_out_y_reg_reg[1]_0 (\s[2][1]_32 ),
        .\s_out_y_reg_reg[1]_1 (\i[2][1]_32 ),
        .w_in_v_reg_reg_0(\ys[1].xs[2].torus_switch_xy_n_14 ),
        .waiting_for_ack_reg(\i[2][1]_34 ));
  client__parameterized6 \ys[1].xs[3].client_xy 
       (.D(_02__38),
        .E(_05__37),
        .Q(\i[3][1]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_35),
        .dor_s_v(dor_s_v_36),
        .e_out_v_reg_reg(\ys[1].xs[3].torus_switch_xy_n_14 ),
        .\i[3][1]_36 (\i_vc[3][1] [0]),
        .\i_x_r_reg[1]_0 (\ys[1].xs[3].client_xy_n_3 ),
        .\i_x_r_reg[1]_1 (_06__39),
        .\i_y_r_reg[0]_0 (\ys[1].xs[3].client_xy_n_2 ),
        .\i_y_r_reg[0]_1 (\s[3][1]_32 [0]),
        .\i_y_r_reg[1]_0 (\i[3][1]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_34 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[1].xs[3].torus_switch_xy_n_4 ),
        .s_out_v_reg_reg_0(\ys[1].xs[3].torus_switch_xy_n_3 ),
        .s_out_v_reg_reg_1(\ys[1].xs[3].torus_switch_xy_n_2 ),
        .waiting_for_ack_reg_0(\ys[1].xs[3].torus_switch_xy_n_9 ));
  torus_switch__parameterized6 \ys[1].xs[3].torus_switch_xy 
       (.D(_02__38),
        .E(_05__37),
        .Q(\s[3][1]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_35),
        .dor_s_v(dor_s_v_36),
        .\e[2][1] (\e[2][1] ),
        .\e[2][1]_36 (\e[2][1]_36 ),
        .\e[3][1] (\e[3][1] ),
        .\e[3][1]_36 (\e[3][1]_36 ),
        .\i[3][1]_36 (\i_vc[3][1] [0]),
        .\i_x_r_reg[1] (\ys[1].xs[3].torus_switch_xy_n_9 ),
        .n_in_v_reg_reg_0(\ys[1].xs[3].torus_switch_xy_n_2 ),
        .n_in_v_reg_reg_1(\ys[1].xs[3].torus_switch_xy_n_3 ),
        .n_in_v_reg_reg_2(\ys[1].xs[3].torus_switch_xy_n_4 ),
        .\n_in_x_reg_reg[1]_0 (\s[3][0]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[3][0]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_34 ),
        .o_v_reg_reg_0(\ys[1].xs[3].client_xy_n_2 ),
        .o_v_reg_reg_1(\ys[1].xs[3].client_xy_n_3 ),
        .rst(rst),
        .\s[3][0]_36 (\s[3][0]_36 ),
        .\s[3][1]_36 (\s[3][1]_36 ),
        .\s_out_x_reg_reg[1]_0 (_06__39),
        .\s_out_y_reg_reg[1]_0 (\s[3][1]_32 ),
        .\s_out_y_reg_reg[1]_1 (\i[3][1]_32 ),
        .w_in_v_reg_reg_0(\ys[1].xs[3].torus_switch_xy_n_14 ),
        .waiting_for_ack_reg(\i[3][1]_34 ));
  client__parameterized7 \ys[2].xs[0].client_xy 
       (.D(_02__43),
        .E(_05__42),
        .Q(\i[0][2]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_41),
        .e_out_v_reg_reg(\ys[2].xs[0].torus_switch_xy_n_11 ),
        .\i[0][2]_36 (\i_vc[0][2] [0]),
        .\i_x_r_reg[1]_0 (\ys[2].xs[0].client_xy_n_6 ),
        .\i_x_r_reg[1]_1 (_06__44),
        .\i_y_r_reg[0]_0 (\ys[2].xs[0].client_xy_n_7 ),
        .\i_y_r_reg[0]_1 (\ys[2].xs[0].client_xy_n_10 ),
        .\i_y_r_reg[0]_2 (\s[0][2]_32 [0]),
        .\i_y_r_reg[1]_0 (\i[0][2]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_40 ),
        .rst(rst),
        .waiting_for_ack_reg_0(\ys[2].xs[0].torus_switch_xy_n_6 ));
  torus_switch__parameterized7 \ys[2].xs[0].torus_switch_xy 
       (.D(_02__43),
        .E(_05__42),
        .Q(\i[0][2]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_41),
        .\e[0][2] (\e[0][2] ),
        .\e[0][2]_36 (\e[0][2]_36 ),
        .\e[3][2] (\e[3][2] ),
        .\e[3][2]_36 (\e[3][2]_36 ),
        .\i[0][2]_36 (\i_vc[0][2] [0]),
        .\i_x_r_reg[1] (\ys[2].xs[0].torus_switch_xy_n_6 ),
        .\n_in_x_reg_reg[1]_0 (\s[0][1]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[0][1]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_40 ),
        .o_v_reg_reg_0(\ys[2].xs[0].client_xy_n_10 ),
        .rst(rst),
        .\s[0][1]_36 (\s[0][1]_36 ),
        .\s[0][2]_36 (\s[0][2]_36 ),
        .s_out_v_reg_reg_0(\ys[2].xs[0].client_xy_n_7 ),
        .\s_out_x_reg_reg[1]_0 (_06__44),
        .\s_out_x_reg_reg[1]_1 (\s[0][2]_34 ),
        .\s_out_y_reg_reg[1]_0 (\s[0][2]_32 ),
        .\s_out_y_reg_reg[1]_1 (\i[0][2]_32 ),
        .w_in_v_reg_reg_0(\ys[2].xs[0].torus_switch_xy_n_11 ),
        .waiting_for_ack_reg(\ys[2].xs[0].client_xy_n_6 ));
  client__parameterized8 \ys[2].xs[1].client_xy 
       (.D(_02__49),
        .E(_05__48),
        .Q(\i[1][2]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_46),
        .dor_s_v(dor_s_v_47),
        .e_out_v_reg_reg(\ys[2].xs[1].torus_switch_xy_n_14 ),
        .\i[1][2]_36 (\i_vc[1][2] [0]),
        .\i_x_r_reg[0]_0 (\ys[2].xs[1].client_xy_n_3 ),
        .\i_x_r_reg[1]_0 (_06__50),
        .\i_y_r_reg[0]_0 (\s[1][2]_32 [0]),
        .\i_y_r_reg[1]_0 (\ys[2].xs[1].client_xy_n_2 ),
        .\i_y_r_reg[1]_1 (\i[1][2]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_45 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[2].xs[1].torus_switch_xy_n_4 ),
        .s_out_v_reg_reg_0(\ys[2].xs[1].torus_switch_xy_n_3 ),
        .s_out_v_reg_reg_1(\ys[2].xs[1].torus_switch_xy_n_2 ),
        .waiting_for_ack_reg_0(\ys[2].xs[1].torus_switch_xy_n_9 ));
  torus_switch__parameterized8 \ys[2].xs[1].torus_switch_xy 
       (.D(_02__49),
        .E(_05__48),
        .Q(\s[1][2]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_46),
        .dor_s_v(dor_s_v_47),
        .\e[0][2] (\e[0][2] ),
        .\e[0][2]_36 (\e[0][2]_36 ),
        .\e[1][2] (\e[1][2] ),
        .\e[1][2]_36 (\e[1][2]_36 ),
        .\i[1][2]_36 (\i_vc[1][2] [0]),
        .\i_x_r_reg[0] (\ys[2].xs[1].torus_switch_xy_n_9 ),
        .n_in_v_reg_reg_0(\ys[2].xs[1].torus_switch_xy_n_2 ),
        .n_in_v_reg_reg_1(\ys[2].xs[1].torus_switch_xy_n_3 ),
        .n_in_v_reg_reg_2(\ys[2].xs[1].torus_switch_xy_n_4 ),
        .\n_in_x_reg_reg[1]_0 (\s[1][1]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[1][1]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_45 ),
        .o_v_reg_reg_0(\ys[2].xs[1].client_xy_n_2 ),
        .o_v_reg_reg_1(\ys[2].xs[1].client_xy_n_3 ),
        .rst(rst),
        .\s[1][1]_36 (\s[1][1]_36 ),
        .\s[1][2]_36 (\s[1][2]_36 ),
        .\s_out_x_reg_reg[1]_0 (_06__50),
        .\s_out_y_reg_reg[1]_0 (\s[1][2]_32 ),
        .\s_out_y_reg_reg[1]_1 (\i[1][2]_32 ),
        .w_in_v_reg_reg_0(\ys[2].xs[1].torus_switch_xy_n_14 ),
        .waiting_for_ack_reg(\i[1][2]_34 ));
  client__parameterized9 \ys[2].xs[2].client_xy 
       (.D(_02__54),
        .E(_05__53),
        .Q(\i[2][2]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_52),
        .e_out_v_reg_reg(\ys[2].xs[2].torus_switch_xy_n_11 ),
        .\i[2][2]_36 (\i_vc[2][2] [0]),
        .\i_x_r_reg[1]_0 (\ys[2].xs[2].client_xy_n_6 ),
        .\i_x_r_reg[1]_1 (_06__55),
        .\i_y_r_reg[0]_0 (\ys[2].xs[2].client_xy_n_7 ),
        .\i_y_r_reg[0]_1 (\ys[2].xs[2].client_xy_n_10 ),
        .\i_y_r_reg[0]_2 (\s[2][2]_32 [0]),
        .\i_y_r_reg[1]_0 (\i[2][2]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_51 ),
        .rst(rst),
        .waiting_for_ack_reg_0(\ys[2].xs[2].torus_switch_xy_n_6 ));
  torus_switch__parameterized9 \ys[2].xs[2].torus_switch_xy 
       (.D(_02__54),
        .E(_05__53),
        .Q(\i[2][2]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_52),
        .\e[1][2] (\e[1][2] ),
        .\e[1][2]_36 (\e[1][2]_36 ),
        .\e[2][2] (\e[2][2] ),
        .\e[2][2]_36 (\e[2][2]_36 ),
        .\i[2][2]_36 (\i_vc[2][2] [0]),
        .\i_x_r_reg[1] (\ys[2].xs[2].torus_switch_xy_n_6 ),
        .\n_in_x_reg_reg[1]_0 (\s[2][1]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[2][1]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_51 ),
        .o_v_reg_reg_0(\ys[2].xs[2].client_xy_n_10 ),
        .rst(rst),
        .\s[2][1]_36 (\s[2][1]_36 ),
        .\s[2][2]_36 (\s[2][2]_36 ),
        .s_out_v_reg_reg_0(\ys[2].xs[2].client_xy_n_7 ),
        .\s_out_x_reg_reg[1]_0 (_06__55),
        .\s_out_x_reg_reg[1]_1 (\s[2][2]_34 ),
        .\s_out_y_reg_reg[1]_0 (\s[2][2]_32 ),
        .\s_out_y_reg_reg[1]_1 (\i[2][2]_32 ),
        .w_in_v_reg_reg_0(\ys[2].xs[2].torus_switch_xy_n_11 ),
        .waiting_for_ack_reg(\ys[2].xs[2].client_xy_n_6 ));
  client__parameterized10 \ys[2].xs[3].client_xy 
       (.D(_02__60),
        .E(_05__59),
        .Q(\i[3][2]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_57),
        .dor_s_v(dor_s_v_58),
        .e_out_v_reg_reg(\ys[2].xs[3].torus_switch_xy_n_14 ),
        .\i[3][2]_36 (\i_vc[3][2] [0]),
        .\i_x_r_reg[1]_0 (\ys[2].xs[3].client_xy_n_3 ),
        .\i_x_r_reg[1]_1 (_06__61),
        .\i_y_r_reg[0]_0 (\s[3][2]_32 [0]),
        .\i_y_r_reg[1]_0 (\ys[2].xs[3].client_xy_n_2 ),
        .\i_y_r_reg[1]_1 (\i[3][2]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_56 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[2].xs[3].torus_switch_xy_n_4 ),
        .s_out_v_reg_reg_0(\ys[2].xs[3].torus_switch_xy_n_3 ),
        .s_out_v_reg_reg_1(\ys[2].xs[3].torus_switch_xy_n_2 ),
        .waiting_for_ack_reg_0(\ys[2].xs[3].torus_switch_xy_n_9 ));
  torus_switch__parameterized10 \ys[2].xs[3].torus_switch_xy 
       (.D(_02__60),
        .E(_05__59),
        .Q(\s[3][2]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_57),
        .dor_s_v(dor_s_v_58),
        .\e[2][2] (\e[2][2] ),
        .\e[2][2]_36 (\e[2][2]_36 ),
        .\e[3][2] (\e[3][2] ),
        .\e[3][2]_36 (\e[3][2]_36 ),
        .\i[3][2]_36 (\i_vc[3][2] [0]),
        .\i_x_r_reg[1] (\ys[2].xs[3].torus_switch_xy_n_9 ),
        .n_in_v_reg_reg_0(\ys[2].xs[3].torus_switch_xy_n_2 ),
        .n_in_v_reg_reg_1(\ys[2].xs[3].torus_switch_xy_n_3 ),
        .n_in_v_reg_reg_2(\ys[2].xs[3].torus_switch_xy_n_4 ),
        .\n_in_x_reg_reg[1]_0 (\s[3][1]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[3][1]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_56 ),
        .o_v_reg_reg_0(\ys[2].xs[3].client_xy_n_2 ),
        .o_v_reg_reg_1(\ys[2].xs[3].client_xy_n_3 ),
        .rst(rst),
        .\s[3][1]_36 (\s[3][1]_36 ),
        .\s[3][2]_36 (\s[3][2]_36 ),
        .\s_out_x_reg_reg[1]_0 (_06__61),
        .\s_out_y_reg_reg[1]_0 (\s[3][2]_32 ),
        .\s_out_y_reg_reg[1]_1 (\i[3][2]_32 ),
        .w_in_v_reg_reg_0(\ys[2].xs[3].torus_switch_xy_n_14 ),
        .waiting_for_ack_reg(\i[3][2]_34 ));
  client__parameterized11 \ys[3].xs[0].client_xy 
       (.D(_02__66),
        .E(_05__65),
        .Q(\i[0][3]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_63),
        .dor_s_v(dor_s_v_64),
        .e_out_v_reg_reg(\ys[3].xs[0].torus_switch_xy_n_14 ),
        .\i[0][3]_36 (\i_vc[0][3] [0]),
        .\i_x_r_reg[1]_0 (\ys[3].xs[0].client_xy_n_3 ),
        .\i_x_r_reg[1]_1 (_06__67),
        .\i_y_r_reg[0]_0 (\s[0][3]_32 [0]),
        .\i_y_r_reg[1]_0 (\ys[3].xs[0].client_xy_n_2 ),
        .\i_y_r_reg[1]_1 (\i[0][3]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_62 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[3].xs[0].torus_switch_xy_n_4 ),
        .s_out_v_reg_reg_0(\ys[3].xs[0].torus_switch_xy_n_3 ),
        .s_out_v_reg_reg_1(\ys[3].xs[0].torus_switch_xy_n_2 ),
        .waiting_for_ack_reg_0(\ys[3].xs[0].torus_switch_xy_n_9 ));
  torus_switch__parameterized11 \ys[3].xs[0].torus_switch_xy 
       (.D(_02__66),
        .E(_05__65),
        .Q(\s[0][3]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_63),
        .dor_s_v(dor_s_v_64),
        .\e[0][3] (\e[0][3] ),
        .\e[0][3]_36 (\e[0][3]_36 ),
        .\e[3][3] (\e[3][3] ),
        .\e[3][3]_36 (\e[3][3]_36 ),
        .\i[0][3]_36 (\i_vc[0][3] [0]),
        .\i_x_r_reg[1] (\ys[3].xs[0].torus_switch_xy_n_9 ),
        .n_in_v_reg_reg_0(\ys[3].xs[0].torus_switch_xy_n_2 ),
        .n_in_v_reg_reg_1(\ys[3].xs[0].torus_switch_xy_n_3 ),
        .n_in_v_reg_reg_2(\ys[3].xs[0].torus_switch_xy_n_4 ),
        .\n_in_x_reg_reg[1]_0 (\s[0][2]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[0][2]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_62 ),
        .o_v_reg_reg_0(\ys[3].xs[0].client_xy_n_2 ),
        .o_v_reg_reg_1(\ys[3].xs[0].client_xy_n_3 ),
        .rst(rst),
        .\s[0][2]_36 (\s[0][2]_36 ),
        .\s[0][3]_36 (\s[0][3]_36 ),
        .\s_out_x_reg_reg[1]_0 (_06__67),
        .\s_out_y_reg_reg[1]_0 (\s[0][3]_32 ),
        .\s_out_y_reg_reg[1]_1 (\i[0][3]_32 ),
        .w_in_v_reg_reg_0(\ys[3].xs[0].torus_switch_xy_n_14 ),
        .waiting_for_ack_reg(\i[0][3]_34 ));
  client__parameterized12 \ys[3].xs[1].client_xy 
       (.D(_02__72),
        .E(_05__71),
        .Q(\i[1][3]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_69),
        .dor_s_v(dor_s_v_70),
        .e_out_v_reg_reg(\ys[3].xs[1].torus_switch_xy_n_14 ),
        .\i[1][3]_36 (\i_vc[1][3] [0]),
        .\i_x_r_reg[0]_0 (\ys[3].xs[1].client_xy_n_3 ),
        .\i_x_r_reg[1]_0 (_06__73),
        .\i_y_r_reg[0]_0 (\s[1][3]_32 [0]),
        .\i_y_r_reg[1]_0 (\ys[3].xs[1].client_xy_n_2 ),
        .\i_y_r_reg[1]_1 (\i[1][3]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_68 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[3].xs[1].torus_switch_xy_n_4 ),
        .s_out_v_reg_reg_0(\ys[3].xs[1].torus_switch_xy_n_3 ),
        .s_out_v_reg_reg_1(\ys[3].xs[1].torus_switch_xy_n_2 ),
        .waiting_for_ack_reg_0(\ys[3].xs[1].torus_switch_xy_n_9 ));
  torus_switch__parameterized12 \ys[3].xs[1].torus_switch_xy 
       (.D(_02__72),
        .E(_05__71),
        .Q(\s[1][3]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_69),
        .dor_s_v(dor_s_v_70),
        .\e[0][3] (\e[0][3] ),
        .\e[0][3]_36 (\e[0][3]_36 ),
        .\e[1][3] (\e[1][3] ),
        .\e[1][3]_36 (\e[1][3]_36 ),
        .\i[1][3]_36 (\i_vc[1][3] [0]),
        .\i_x_r_reg[0] (\ys[3].xs[1].torus_switch_xy_n_9 ),
        .n_in_v_reg_reg_0(\ys[3].xs[1].torus_switch_xy_n_2 ),
        .n_in_v_reg_reg_1(\ys[3].xs[1].torus_switch_xy_n_3 ),
        .n_in_v_reg_reg_2(\ys[3].xs[1].torus_switch_xy_n_4 ),
        .\n_in_x_reg_reg[1]_0 (\s[1][2]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[1][2]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_68 ),
        .o_v_reg_reg_0(\ys[3].xs[1].client_xy_n_2 ),
        .o_v_reg_reg_1(\ys[3].xs[1].client_xy_n_3 ),
        .rst(rst),
        .\s[1][2]_36 (\s[1][2]_36 ),
        .\s[1][3]_36 (\s[1][3]_36 ),
        .\s_out_x_reg_reg[1]_0 (_06__73),
        .\s_out_y_reg_reg[1]_0 (\s[1][3]_32 ),
        .\s_out_y_reg_reg[1]_1 (\i[1][3]_32 ),
        .w_in_v_reg_reg_0(\ys[3].xs[1].torus_switch_xy_n_14 ),
        .waiting_for_ack_reg(\i[1][3]_34 ));
  client__parameterized13 \ys[3].xs[2].client_xy 
       (.D(_02__78),
        .E(_05__77),
        .Q(\i[2][3]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_75),
        .dor_s_v(dor_s_v_76),
        .e_out_v_reg_reg(\ys[3].xs[2].torus_switch_xy_n_14 ),
        .\i[2][3]_36 (\i_vc[2][3] [0]),
        .\i_x_r_reg[1]_0 (\ys[3].xs[2].client_xy_n_3 ),
        .\i_x_r_reg[1]_1 (_06__79),
        .\i_y_r_reg[0]_0 (\s[2][3]_32 [0]),
        .\i_y_r_reg[1]_0 (\ys[3].xs[2].client_xy_n_2 ),
        .\i_y_r_reg[1]_1 (\i[2][3]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_74 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[3].xs[2].torus_switch_xy_n_4 ),
        .s_out_v_reg_reg_0(\ys[3].xs[2].torus_switch_xy_n_3 ),
        .s_out_v_reg_reg_1(\ys[3].xs[2].torus_switch_xy_n_2 ),
        .waiting_for_ack_reg_0(\ys[3].xs[2].torus_switch_xy_n_9 ));
  torus_switch__parameterized13 \ys[3].xs[2].torus_switch_xy 
       (.D(_02__78),
        .E(_05__77),
        .Q(\s[2][3]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_75),
        .dor_s_v(dor_s_v_76),
        .\e[1][3] (\e[1][3] ),
        .\e[1][3]_36 (\e[1][3]_36 ),
        .\e[2][3] (\e[2][3] ),
        .\e[2][3]_36 (\e[2][3]_36 ),
        .\i[2][3]_36 (\i_vc[2][3] [0]),
        .\i_x_r_reg[1] (\ys[3].xs[2].torus_switch_xy_n_9 ),
        .n_in_v_reg_reg_0(\ys[3].xs[2].torus_switch_xy_n_2 ),
        .n_in_v_reg_reg_1(\ys[3].xs[2].torus_switch_xy_n_3 ),
        .n_in_v_reg_reg_2(\ys[3].xs[2].torus_switch_xy_n_4 ),
        .\n_in_x_reg_reg[1]_0 (\s[2][2]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[2][2]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_74 ),
        .o_v_reg_reg_0(\ys[3].xs[2].client_xy_n_2 ),
        .o_v_reg_reg_1(\ys[3].xs[2].client_xy_n_3 ),
        .rst(rst),
        .\s[2][2]_36 (\s[2][2]_36 ),
        .\s[2][3]_36 (\s[2][3]_36 ),
        .\s_out_x_reg_reg[1]_0 (_06__79),
        .\s_out_y_reg_reg[1]_0 (\s[2][3]_32 ),
        .\s_out_y_reg_reg[1]_1 (\i[2][3]_32 ),
        .w_in_v_reg_reg_0(\ys[3].xs[2].torus_switch_xy_n_14 ),
        .waiting_for_ack_reg(\i[2][3]_34 ));
  client__parameterized14 \ys[3].xs[3].client_xy 
       (.D(_02__84),
        .E(_05__83),
        .Q(\i[3][3]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_81),
        .dor_s_v(dor_s_v_82),
        .e_out_v_reg_reg(\ys[3].xs[3].torus_switch_xy_n_14 ),
        .\i[3][3]_36 (\i_vc[3][3] [0]),
        .\i_x_r_reg[1]_0 (\ys[3].xs[3].client_xy_n_3 ),
        .\i_x_r_reg[1]_1 (_06__85),
        .\i_y_r_reg[0]_0 (\s[3][3]_32 [0]),
        .\i_y_r_reg[1]_0 (\ys[3].xs[3].client_xy_n_2 ),
        .\i_y_r_reg[1]_1 (\i[3][3]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_80 ),
        .rst(rst),
        .s_out_v_reg_reg(\ys[3].xs[3].torus_switch_xy_n_4 ),
        .s_out_v_reg_reg_0(\ys[3].xs[3].torus_switch_xy_n_3 ),
        .s_out_v_reg_reg_1(\ys[3].xs[3].torus_switch_xy_n_2 ),
        .waiting_for_ack_reg_0(\ys[3].xs[3].torus_switch_xy_n_9 ));
  torus_switch__parameterized14 \ys[3].xs[3].torus_switch_xy 
       (.D(_02__84),
        .E(_05__83),
        .Q(\s[3][3]_34 ),
        .clk(clk),
        .dor_e_v(dor_e_v_81),
        .dor_s_v(dor_s_v_82),
        .\e[2][3] (\e[2][3] ),
        .\e[2][3]_36 (\e[2][3]_36 ),
        .\e[3][3] (\e[3][3] ),
        .\e[3][3]_36 (\e[3][3]_36 ),
        .\i[3][3]_36 (\i_vc[3][3] [0]),
        .\i_x_r_reg[1] (\ys[3].xs[3].torus_switch_xy_n_9 ),
        .n_in_v_reg_reg_0(\ys[3].xs[3].torus_switch_xy_n_2 ),
        .n_in_v_reg_reg_1(\ys[3].xs[3].torus_switch_xy_n_3 ),
        .n_in_v_reg_reg_2(\ys[3].xs[3].torus_switch_xy_n_4 ),
        .\n_in_x_reg_reg[1]_0 (\s[3][2]_34 ),
        .\n_in_y_reg_reg[1]_0 (\s[3][2]_32 ),
        .number_tokens_reg(\regulator/number_tokens_reg_80 ),
        .o_v_reg_reg_0(\ys[3].xs[3].client_xy_n_2 ),
        .o_v_reg_reg_1(\ys[3].xs[3].client_xy_n_3 ),
        .rst(rst),
        .\s[3][2]_36 (\s[3][2]_36 ),
        .\s[3][3]_36 (\s[3][3]_36 ),
        .\s_out_x_reg_reg[1]_0 (_06__85),
        .\s_out_y_reg_reg[1]_0 (\s[3][3]_32 ),
        .\s_out_y_reg_reg[1]_1 (\i[3][3]_32 ),
        .w_in_v_reg_reg_0(\ys[3].xs[3].torus_switch_xy_n_14 ),
        .waiting_for_ack_reg(\i[3][3]_34 ));
endmodule

module torus_switch
   (out_v,
    \s[0][0]_36 ,
    \e[0][0]_36 ,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    \s_out_x_reg_reg[1]_0 ,
    Q,
    \i_x_r_reg[1] ,
    D,
    \s_out_y_reg_reg[1]_0 ,
    E,
    w_in_v_reg_reg_0,
    \e[0][0] ,
    rst,
    clk,
    dor_s_v,
    dor_e_v,
    \s[0][3]_36 ,
    \e[3][0]_36 ,
    o_v_reg_reg_0,
    o_v_reg_reg_1,
    \i[0][0]_36 ,
    number_tokens_reg,
    waiting_for_ack_reg,
    \s_out_y_reg_reg[1]_1 ,
    \e[3][0] ,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output out_v;
  output \s[0][0]_36 ;
  output \e[0][0]_36 ;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output [1:0]Q;
  output \i_x_r_reg[1] ;
  output [0:0]D;
  output [1:0]\s_out_y_reg_reg[1]_0 ;
  output [0:0]E;
  output w_in_v_reg_reg_0;
  output [3:0]\e[0][0] ;
  input rst;
  input clk;
  input dor_s_v;
  input dor_e_v;
  input \s[0][3]_36 ;
  input \e[3][0]_36 ;
  input o_v_reg_reg_0;
  input o_v_reg_reg_1;
  input \i[0][0]_36 ;
  input [1:0]number_tokens_reg;
  input [1:0]waiting_for_ack_reg;
  input [1:0]\s_out_y_reg_reg[1]_1 ;
  input [3:0]\e[3][0] ;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire [3:0]\e[0][0] ;
  wire \e[0][0]_36 ;
  wire [3:0]\e[3][0] ;
  wire \e[3][0]_36 ;
  wire [35:32]e_msg;
  wire \i[0][0]_36 ;
  wire \i_x_r_reg[1] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire o_v_reg_reg_0;
  wire o_v_reg_reg_1;
  wire out_v;
  wire rst;
  wire \s[0][0]_36 ;
  wire \s[0][3]_36 ;
  wire [35:32]s_msg;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_1 ;
  wire w_in_v_reg;
  wire w_in_v_reg_reg_0;
  wire [35:32]w_msg;
  wire waiting_for_ack_i_4_n_0;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_e_v),
        .Q(\e[0][0]_36 ),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT5 #(
    .INIT(32'hE2E2E2EA)) 
    \e_out_x_reg[0]_i_1 
       (.I0(waiting_for_ack_reg[0]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .O(e_msg[34]));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT5 #(
    .INIT(32'hEE22EE2A)) 
    \e_out_x_reg[1]_i_1 
       (.I0(waiting_for_ack_reg[1]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .O(e_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[34]),
        .Q(\e[0][0] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[35]),
        .Q(\e[0][0] [3]),
        .R(rst));
  LUT6 #(
    .INIT(64'hEEEEEEEA2222222A)) 
    \e_out_y_reg[0]_i_1 
       (.I0(\s_out_y_reg_reg[1]_1 [0]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .I5(w_msg[32]),
        .O(e_msg[32]));
  LUT6 #(
    .INIT(64'hEEEEEEEA2222222A)) 
    \e_out_y_reg[1]_i_1 
       (.I0(\s_out_y_reg_reg[1]_1 [1]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .I5(w_msg[33]),
        .O(e_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[32]),
        .Q(\e[0][0] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[33]),
        .Q(\e[0][0] [1]),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT4 #(
    .INIT(16'h956A)) 
    \i_x_r[0]_i_1 
       (.I0(Q[0]),
        .I1(\i[0][0]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(out_v),
        .O(\s_out_x_reg_reg[1]_0 [0]));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \i_x_r[1]_i_1 
       (.I0(Q[1]),
        .I1(\i[0][0]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(out_v),
        .O(\s_out_x_reg_reg[1]_0 [1]));
  LUT6 #(
    .INIT(64'h595959AAAAAAAAAA)) 
    \i_y_r[1]_i_1 
       (.I0(\s_out_y_reg_reg[1]_0 [1]),
        .I1(\i[0][0]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(\s_out_y_reg_reg[1]_0 [0]),
        .O(D));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\s[0][3]_36 ),
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
  LUT6 #(
    .INIT(64'hF011001100110011)) 
    o_v_reg_i_1
       (.I0(n_in_v_reg_reg_0),
        .I1(n_in_v_reg_reg_1),
        .I2(o_v_reg_reg_0),
        .I3(n_in_v_reg_reg_2),
        .I4(o_v_reg_reg_1),
        .I5(\i[0][0]_36 ),
        .O(dor_o_v));
  LUT6 #(
    .INIT(64'h0100010001000000)) 
    o_v_reg_i_2
       (.I0(n_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(w_in_v_reg),
        .I4(w_msg[32]),
        .I5(w_msg[33]),
        .O(n_in_v_reg_reg_0));
  LUT3 #(
    .INIT(8'hA8)) 
    o_v_reg_i_3__2
       (.I0(n_in_v_reg),
        .I1(n_msg[32]),
        .I2(n_msg[33]),
        .O(n_in_v_reg_reg_1));
  LUT4 #(
    .INIT(16'h5455)) 
    o_v_reg_i_5__0
       (.I0(n_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(w_in_v_reg),
        .O(n_in_v_reg_reg_2));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(out_v),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(\s[0][0]_36 ),
        .R(rst));
  LUT6 #(
    .INIT(64'hB8B8B888B8B8B8B8)) 
    \s_out_x_reg[0]_i_1 
       (.I0(n_msg[34]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[0]),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(w_in_v_reg),
        .O(s_msg[34]));
  LUT6 #(
    .INIT(64'hB8B8B888B8B8B8B8)) 
    \s_out_x_reg[1]_i_1 
       (.I0(n_msg[35]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[1]),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(w_in_v_reg),
        .O(s_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(Q[1]),
        .R(rst));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1 
       (.I0(n_msg[32]),
        .I1(n_in_v_reg),
        .I2(w_msg[32]),
        .I3(waiting_for_ack_i_4_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [0]),
        .O(s_msg[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1 
       (.I0(n_msg[33]),
        .I1(n_in_v_reg),
        .I2(w_msg[33]),
        .I3(waiting_for_ack_i_4_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [1]),
        .O(s_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(\s_out_y_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(\s_out_y_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    w_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\e[3][0]_36 ),
        .Q(w_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[3][0] [2]),
        .Q(w_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[3][0] [3]),
        .Q(w_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[3][0] [0]),
        .Q(w_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[3][0] [1]),
        .Q(w_msg[33]),
        .R(rst));
  LUT6 #(
    .INIT(64'hA8A8A8ABFFFFFFFF)) 
    waiting_for_ack_i_1
       (.I0(w_in_v_reg_reg_0),
        .I1(waiting_for_ack_reg[0]),
        .I2(waiting_for_ack_reg[1]),
        .I3(waiting_for_ack_i_4_n_0),
        .I4(n_in_v_reg),
        .I5(\i[0][0]_36 ),
        .O(E));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT4 #(
    .INIT(16'h5557)) 
    waiting_for_ack_i_3
       (.I0(w_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(n_in_v_reg),
        .O(w_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT4 #(
    .INIT(16'h0002)) 
    waiting_for_ack_i_4
       (.I0(w_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(n_in_v_reg),
        .O(waiting_for_ack_i_4_n_0));
  LUT6 #(
    .INIT(64'h0E0E0E0E1F1F1FEF)) 
    waiting_for_ack_i_5
       (.I0(waiting_for_ack_reg[1]),
        .I1(waiting_for_ack_reg[0]),
        .I2(w_in_v_reg),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(n_in_v_reg),
        .O(\i_x_r_reg[1] ));
endmodule

(* ORIG_REF_NAME = "torus_switch" *) 
module torus_switch__parameterized0
   (\s[1][0]_36 ,
    \e[1][0]_36 ,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    \s_out_x_reg_reg[1]_0 ,
    Q,
    \i_x_r_reg[0] ,
    D,
    \s_out_y_reg_reg[1]_0 ,
    E,
    w_in_v_reg_reg_0,
    \e[1][0] ,
    rst,
    clk,
    dor_s_v,
    dor_e_v,
    \s[1][3]_36 ,
    \e[0][0]_36 ,
    o_v_reg_reg_0,
    o_v_reg_reg_1,
    \i[1][0]_36 ,
    number_tokens_reg,
    waiting_for_ack_reg,
    \s_out_y_reg_reg[1]_1 ,
    \e[0][0] ,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output \s[1][0]_36 ;
  output \e[1][0]_36 ;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output [1:0]Q;
  output \i_x_r_reg[0] ;
  output [0:0]D;
  output [1:0]\s_out_y_reg_reg[1]_0 ;
  output [0:0]E;
  output w_in_v_reg_reg_0;
  output [3:0]\e[1][0] ;
  input rst;
  input clk;
  input dor_s_v;
  input dor_e_v;
  input \s[1][3]_36 ;
  input \e[0][0]_36 ;
  input o_v_reg_reg_0;
  input o_v_reg_reg_1;
  input \i[1][0]_36 ;
  input [1:0]number_tokens_reg;
  input [1:0]waiting_for_ack_reg;
  input [1:0]\s_out_y_reg_reg[1]_1 ;
  input [3:0]\e[0][0] ;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire [3:0]\e[0][0] ;
  wire \e[0][0]_36 ;
  wire [3:0]\e[1][0] ;
  wire \e[1][0]_36 ;
  wire [35:32]e_msg;
  wire \i[1][0]_36 ;
  wire \i_x_r_reg[0] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire \o_v[1][0] ;
  wire o_v_reg_reg_0;
  wire o_v_reg_reg_1;
  wire rst;
  wire \s[1][0]_36 ;
  wire \s[1][3]_36 ;
  wire [35:32]s_msg;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_1 ;
  wire w_in_v_reg;
  wire w_in_v_reg_reg_0;
  wire [35:32]w_msg;
  wire waiting_for_ack_i_4__0_n_0;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_e_v),
        .Q(\e[1][0]_36 ),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT5 #(
    .INIT(32'hEE22EA22)) 
    \e_out_x_reg[0]_i_1__0 
       (.I0(waiting_for_ack_reg[0]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .O(e_msg[34]));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT5 #(
    .INIT(32'hE2E2EAE2)) 
    \e_out_x_reg[1]_i_1__0 
       (.I0(waiting_for_ack_reg[1]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .O(e_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[34]),
        .Q(\e[1][0] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[35]),
        .Q(\e[1][0] [3]),
        .R(rst));
  LUT6 #(
    .INIT(64'hEEEEEAEE22222A22)) 
    \e_out_y_reg[0]_i_1__0 
       (.I0(\s_out_y_reg_reg[1]_1 [0]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .I5(w_msg[32]),
        .O(e_msg[32]));
  LUT6 #(
    .INIT(64'hEEEEEAEE22222A22)) 
    \e_out_y_reg[1]_i_1__0 
       (.I0(\s_out_y_reg_reg[1]_1 [1]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .I5(w_msg[33]),
        .O(e_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[32]),
        .Q(\e[1][0] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[33]),
        .Q(\e[1][0] [1]),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT4 #(
    .INIT(16'h956A)) 
    \i_x_r[0]_i_1__0 
       (.I0(Q[0]),
        .I1(\i[1][0]_36 ),
        .I2(\i_x_r_reg[0] ),
        .I3(\o_v[1][0] ),
        .O(\s_out_x_reg_reg[1]_0 [0]));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \i_x_r[1]_i_1__0 
       (.I0(Q[1]),
        .I1(\i[1][0]_36 ),
        .I2(\i_x_r_reg[0] ),
        .I3(\o_v[1][0] ),
        .O(\s_out_x_reg_reg[1]_0 [1]));
  LUT6 #(
    .INIT(64'h595959AAAAAAAAAA)) 
    \i_y_r[1]_i_1__0 
       (.I0(\s_out_y_reg_reg[1]_0 [1]),
        .I1(\i[1][0]_36 ),
        .I2(\i_x_r_reg[0] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(\s_out_y_reg_reg[1]_0 [0]),
        .O(D));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\s[1][3]_36 ),
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
  LUT6 #(
    .INIT(64'hF011001100110011)) 
    o_v_reg_i_1__0
       (.I0(n_in_v_reg_reg_0),
        .I1(n_in_v_reg_reg_1),
        .I2(o_v_reg_reg_0),
        .I3(n_in_v_reg_reg_2),
        .I4(o_v_reg_reg_1),
        .I5(\i[1][0]_36 ),
        .O(dor_o_v));
  LUT6 #(
    .INIT(64'h0400040004000000)) 
    o_v_reg_i_2__0
       (.I0(n_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(w_in_v_reg),
        .I4(w_msg[32]),
        .I5(w_msg[33]),
        .O(n_in_v_reg_reg_0));
  LUT3 #(
    .INIT(8'hA8)) 
    o_v_reg_i_3__3
       (.I0(n_in_v_reg),
        .I1(n_msg[32]),
        .I2(n_msg[33]),
        .O(n_in_v_reg_reg_1));
  LUT4 #(
    .INIT(16'h5155)) 
    o_v_reg_i_5__1
       (.I0(n_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(w_in_v_reg),
        .O(n_in_v_reg_reg_2));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[1][0] ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(\s[1][0]_36 ),
        .R(rst));
  LUT6 #(
    .INIT(64'hB8B8BBB8B8B8B8B8)) 
    \s_out_x_reg[0]_i_1__0 
       (.I0(n_msg[34]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[0]),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(w_in_v_reg),
        .O(s_msg[34]));
  LUT6 #(
    .INIT(64'hB8B888B8B8B8B8B8)) 
    \s_out_x_reg[1]_i_1__0 
       (.I0(n_msg[35]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[1]),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(w_in_v_reg),
        .O(s_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(Q[1]),
        .R(rst));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__0 
       (.I0(n_msg[32]),
        .I1(n_in_v_reg),
        .I2(w_msg[32]),
        .I3(waiting_for_ack_i_4__0_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [0]),
        .O(s_msg[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__0 
       (.I0(n_msg[33]),
        .I1(n_in_v_reg),
        .I2(w_msg[33]),
        .I3(waiting_for_ack_i_4__0_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [1]),
        .O(s_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(\s_out_y_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(\s_out_y_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    w_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\e[0][0]_36 ),
        .Q(w_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[0][0] [2]),
        .Q(w_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[0][0] [3]),
        .Q(w_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[0][0] [0]),
        .Q(w_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[0][0] [1]),
        .Q(w_msg[33]),
        .R(rst));
  LUT6 #(
    .INIT(64'h8A8A8ABAFFFFFFFF)) 
    waiting_for_ack_i_1__0
       (.I0(w_in_v_reg_reg_0),
        .I1(waiting_for_ack_reg[1]),
        .I2(waiting_for_ack_reg[0]),
        .I3(waiting_for_ack_i_4__0_n_0),
        .I4(n_in_v_reg),
        .I5(\i[1][0]_36 ),
        .O(E));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT4 #(
    .INIT(16'h5575)) 
    waiting_for_ack_i_3__0
       (.I0(w_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(n_in_v_reg),
        .O(w_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT4 #(
    .INIT(16'h0020)) 
    waiting_for_ack_i_4__0
       (.I0(w_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(n_in_v_reg),
        .O(waiting_for_ack_i_4__0_n_0));
  LUT6 #(
    .INIT(64'h0D0D0D0D2FDF2F2F)) 
    waiting_for_ack_i_5__0
       (.I0(waiting_for_ack_reg[0]),
        .I1(waiting_for_ack_reg[1]),
        .I2(w_in_v_reg),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(n_in_v_reg),
        .O(\i_x_r_reg[0] ));
endmodule

(* ORIG_REF_NAME = "torus_switch" *) 
module torus_switch__parameterized1
   (\s[2][0]_36 ,
    \e[2][0]_36 ,
    n_in_v_reg,
    \s_out_x_reg_reg[1]_0 ,
    \s_out_x_reg_reg[1]_1 ,
    \i_x_r_reg[0] ,
    D,
    \s_out_y_reg_reg[1]_0 ,
    w_in_v_reg_reg_0,
    w_in_v_reg_reg_1,
    \e[2][0] ,
    rst,
    clk,
    dor_e_v,
    \s[2][3]_36 ,
    \e[1][0]_36 ,
    \i[2][0]_36 ,
    o_v_reg_reg_0,
    o_v_reg_reg_1,
    s_out_v_reg_reg_0,
    Q,
    number_tokens_reg,
    \e_out_y_reg_reg[1]_0 ,
    \e[1][0] ,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output \s[2][0]_36 ;
  output \e[2][0]_36 ;
  output n_in_v_reg;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output [1:0]\s_out_x_reg_reg[1]_1 ;
  output \i_x_r_reg[0] ;
  output [0:0]D;
  output [1:0]\s_out_y_reg_reg[1]_0 ;
  output w_in_v_reg_reg_0;
  output w_in_v_reg_reg_1;
  output [3:0]\e[2][0] ;
  input rst;
  input clk;
  input dor_e_v;
  input \s[2][3]_36 ;
  input \e[1][0]_36 ;
  input \i[2][0]_36 ;
  input o_v_reg_reg_0;
  input o_v_reg_reg_1;
  input s_out_v_reg_reg_0;
  input [1:0]Q;
  input [1:0]number_tokens_reg;
  input [1:0]\e_out_y_reg_reg[1]_0 ;
  input [3:0]\e[1][0] ;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire [3:0]\e[1][0] ;
  wire \e[1][0]_36 ;
  wire [3:0]\e[2][0] ;
  wire \e[2][0]_36 ;
  wire [35:32]e_msg;
  wire [1:0]\e_out_y_reg_reg[1]_0 ;
  wire \i[2][0]_36 ;
  wire \i_x_r_reg[0] ;
  wire n_in_v_reg;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire \o_v[2][0] ;
  wire o_v_reg_i_2__14_n_0;
  wire o_v_reg_i_3_n_0;
  wire o_v_reg_i_6__1_n_0;
  wire o_v_reg_reg_0;
  wire o_v_reg_reg_1;
  wire rst;
  wire \s[2][0]_36 ;
  wire \s[2][3]_36 ;
  wire [35:32]s_msg;
  wire s_out_v_reg_i_3_n_0;
  wire s_out_v_reg_reg_0;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_x_reg_reg[1]_1 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire w_in_v_reg;
  wire w_in_v_reg_reg_0;
  wire w_in_v_reg_reg_1;
  wire [35:32]w_msg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_e_v),
        .Q(\e[2][0]_36 ),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT5 #(
    .INIT(32'hDDFD8888)) 
    \e_out_x_reg[0]_i_1__1 
       (.I0(w_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(n_in_v_reg),
        .I4(Q[0]),
        .O(e_msg[34]));
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT5 #(
    .INIT(32'hF5F5A080)) 
    \e_out_x_reg[1]_i_1__1 
       (.I0(w_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(n_in_v_reg),
        .I4(Q[1]),
        .O(e_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[34]),
        .Q(\e[2][0] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[35]),
        .Q(\e[2][0] [3]),
        .R(rst));
  LUT6 #(
    .INIT(64'hBBBBBFBB88888088)) 
    \e_out_y_reg[0]_i_1__1 
       (.I0(w_msg[32]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .I5(\e_out_y_reg_reg[1]_0 [0]),
        .O(e_msg[32]));
  LUT6 #(
    .INIT(64'hBBBBBFBB88888088)) 
    \e_out_y_reg[1]_i_1__1 
       (.I0(w_msg[33]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .I5(\e_out_y_reg_reg[1]_0 [1]),
        .O(e_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[32]),
        .Q(\e[2][0] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[33]),
        .Q(\e[2][0] [1]),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT4 #(
    .INIT(16'h59A6)) 
    \i_x_r[0]_i_1__1 
       (.I0(\s_out_x_reg_reg[1]_1 [0]),
        .I1(\i[2][0]_36 ),
        .I2(\i_x_r_reg[0] ),
        .I3(\o_v[2][0] ),
        .O(\s_out_x_reg_reg[1]_0 [0]));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT4 #(
    .INIT(16'hA6AA)) 
    \i_x_r[1]_i_1__1 
       (.I0(\s_out_x_reg_reg[1]_1 [1]),
        .I1(\i[2][0]_36 ),
        .I2(\i_x_r_reg[0] ),
        .I3(\o_v[2][0] ),
        .O(\s_out_x_reg_reg[1]_0 [1]));
  LUT6 #(
    .INIT(64'h959595AAAAAAAAAA)) 
    \i_y_r[1]_i_1__1 
       (.I0(\s_out_y_reg_reg[1]_0 [1]),
        .I1(\i_x_r_reg[0] ),
        .I2(\i[2][0]_36 ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(\s_out_y_reg_reg[1]_0 [0]),
        .O(D));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\s[2][3]_36 ),
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
  LUT6 #(
    .INIT(64'h111111110000F000)) 
    o_v_reg_i_1__1
       (.I0(o_v_reg_i_2__14_n_0),
        .I1(o_v_reg_i_3_n_0),
        .I2(\i[2][0]_36 ),
        .I3(o_v_reg_reg_0),
        .I4(o_v_reg_reg_1),
        .I5(o_v_reg_i_6__1_n_0),
        .O(dor_o_v));
  LUT3 #(
    .INIT(8'hA8)) 
    o_v_reg_i_2__14
       (.I0(n_in_v_reg),
        .I1(n_msg[32]),
        .I2(n_msg[33]),
        .O(o_v_reg_i_2__14_n_0));
  LUT6 #(
    .INIT(64'h0400040004000000)) 
    o_v_reg_i_3
       (.I0(n_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(w_in_v_reg),
        .I4(w_msg[32]),
        .I5(w_msg[33]),
        .O(o_v_reg_i_3_n_0));
  LUT4 #(
    .INIT(16'hAEAA)) 
    o_v_reg_i_6__1
       (.I0(n_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(w_in_v_reg),
        .O(o_v_reg_i_6__1_n_0));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[2][0] ),
        .R(rst));
  LUT6 #(
    .INIT(64'hEEEAFFFFEEEAEEEA)) 
    s_out_v_reg_i_1__1
       (.I0(o_v_reg_i_3_n_0),
        .I1(n_in_v_reg),
        .I2(n_msg[32]),
        .I3(n_msg[33]),
        .I4(s_out_v_reg_reg_0),
        .I5(s_out_v_reg_i_3_n_0),
        .O(dor_s_v));
  LUT6 #(
    .INIT(64'h0000000022022222)) 
    s_out_v_reg_i_3
       (.I0(Q[1]),
        .I1(Q[0]),
        .I2(w_in_v_reg),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(n_in_v_reg),
        .O(s_out_v_reg_i_3_n_0));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(\s[2][0]_36 ),
        .R(rst));
  LUT6 #(
    .INIT(64'hB8B888B8B8B8B8B8)) 
    \s_out_x_reg[0]_i_1__1 
       (.I0(n_msg[34]),
        .I1(n_in_v_reg),
        .I2(Q[0]),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(w_in_v_reg),
        .O(s_msg[34]));
  LUT6 #(
    .INIT(64'hB8B8BBB8B8B8B8B8)) 
    \s_out_x_reg[1]_i_1__1 
       (.I0(n_msg[35]),
        .I1(n_in_v_reg),
        .I2(Q[1]),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(w_in_v_reg),
        .O(s_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(\s_out_x_reg_reg[1]_1 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(\s_out_x_reg_reg[1]_1 [1]),
        .R(rst));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__1 
       (.I0(n_msg[32]),
        .I1(n_in_v_reg),
        .I2(w_msg[32]),
        .I3(w_in_v_reg_reg_1),
        .I4(\e_out_y_reg_reg[1]_0 [0]),
        .O(s_msg[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__1 
       (.I0(n_msg[33]),
        .I1(n_in_v_reg),
        .I2(w_msg[33]),
        .I3(w_in_v_reg_reg_1),
        .I4(\e_out_y_reg_reg[1]_0 [1]),
        .O(s_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(\s_out_y_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(\s_out_y_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    w_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\e[1][0]_36 ),
        .Q(w_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[1][0] [2]),
        .Q(w_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[1][0] [3]),
        .Q(w_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[1][0] [0]),
        .Q(w_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[1][0] [1]),
        .Q(w_msg[33]),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT4 #(
    .INIT(16'h0020)) 
    waiting_for_ack_i_3__1
       (.I0(w_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(n_in_v_reg),
        .O(w_in_v_reg_reg_1));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT4 #(
    .INIT(16'hAA8A)) 
    waiting_for_ack_i_4__1
       (.I0(w_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(n_in_v_reg),
        .O(w_in_v_reg_reg_0));
  LUT6 #(
    .INIT(64'hFBFBF4FB40404040)) 
    waiting_for_ack_i_5__1
       (.I0(Q[0]),
        .I1(Q[1]),
        .I2(n_in_v_reg),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(w_in_v_reg),
        .O(\i_x_r_reg[0] ));
endmodule

(* ORIG_REF_NAME = "torus_switch" *) 
module torus_switch__parameterized10
   (\s[3][2]_36 ,
    \e[3][2]_36 ,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    \s_out_x_reg_reg[1]_0 ,
    Q,
    \i_x_r_reg[1] ,
    D,
    \s_out_y_reg_reg[1]_0 ,
    E,
    w_in_v_reg_reg_0,
    \e[3][2] ,
    rst,
    clk,
    dor_s_v,
    dor_e_v,
    \s[3][1]_36 ,
    \e[2][2]_36 ,
    o_v_reg_reg_0,
    o_v_reg_reg_1,
    \i[3][2]_36 ,
    number_tokens_reg,
    waiting_for_ack_reg,
    \s_out_y_reg_reg[1]_1 ,
    \e[2][2] ,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output \s[3][2]_36 ;
  output \e[3][2]_36 ;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output [1:0]Q;
  output \i_x_r_reg[1] ;
  output [0:0]D;
  output [1:0]\s_out_y_reg_reg[1]_0 ;
  output [0:0]E;
  output w_in_v_reg_reg_0;
  output [3:0]\e[3][2] ;
  input rst;
  input clk;
  input dor_s_v;
  input dor_e_v;
  input \s[3][1]_36 ;
  input \e[2][2]_36 ;
  input o_v_reg_reg_0;
  input o_v_reg_reg_1;
  input \i[3][2]_36 ;
  input [1:0]number_tokens_reg;
  input [1:0]waiting_for_ack_reg;
  input [1:0]\s_out_y_reg_reg[1]_1 ;
  input [3:0]\e[2][2] ;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire [3:0]\e[2][2] ;
  wire \e[2][2]_36 ;
  wire [3:0]\e[3][2] ;
  wire \e[3][2]_36 ;
  wire [35:32]e_msg;
  wire \i[3][2]_36 ;
  wire \i_x_r_reg[1] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire \o_v[3][2] ;
  wire o_v_reg_reg_0;
  wire o_v_reg_reg_1;
  wire rst;
  wire \s[3][1]_36 ;
  wire \s[3][2]_36 ;
  wire [35:32]s_msg;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_1 ;
  wire w_in_v_reg;
  wire w_in_v_reg_reg_0;
  wire [35:32]w_msg;
  wire waiting_for_ack_i_4__10_n_0;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_e_v),
        .Q(\e[3][2]_36 ),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair108" *) 
  LUT5 #(
    .INIT(32'hEE22AE22)) 
    \e_out_x_reg[0]_i_1__10 
       (.I0(waiting_for_ack_reg[0]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .O(e_msg[34]));
  (* SOFT_HLUTNM = "soft_lutpair109" *) 
  LUT5 #(
    .INIT(32'hE2E2A2E2)) 
    \e_out_x_reg[1]_i_1__10 
       (.I0(waiting_for_ack_reg[1]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .O(e_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[34]),
        .Q(\e[3][2] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[35]),
        .Q(\e[3][2] [3]),
        .R(rst));
  LUT6 #(
    .INIT(64'hEEEEAEEE2222A222)) 
    \e_out_y_reg[0]_i_1__10 
       (.I0(\s_out_y_reg_reg[1]_1 [0]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .I5(w_msg[32]),
        .O(e_msg[32]));
  LUT6 #(
    .INIT(64'hEEEEAEEE2222A222)) 
    \e_out_y_reg[1]_i_1__10 
       (.I0(\s_out_y_reg_reg[1]_1 [1]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .I5(w_msg[33]),
        .O(e_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[32]),
        .Q(\e[3][2] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[33]),
        .Q(\e[3][2] [1]),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair110" *) 
  LUT4 #(
    .INIT(16'h956A)) 
    \i_x_r[0]_i_1__10 
       (.I0(Q[0]),
        .I1(\i[3][2]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(\o_v[3][2] ),
        .O(\s_out_x_reg_reg[1]_0 [0]));
  (* SOFT_HLUTNM = "soft_lutpair110" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \i_x_r[1]_i_1__10 
       (.I0(Q[1]),
        .I1(\i[3][2]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(\o_v[3][2] ),
        .O(\s_out_x_reg_reg[1]_0 [1]));
  LUT6 #(
    .INIT(64'h595959AAAAAAAAAA)) 
    \i_y_r[1]_i_1__10 
       (.I0(\s_out_y_reg_reg[1]_0 [1]),
        .I1(\i[3][2]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(\s_out_y_reg_reg[1]_0 [0]),
        .O(D));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\s[3][1]_36 ),
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
  LUT6 #(
    .INIT(64'hF011001100110011)) 
    o_v_reg_i_1__10
       (.I0(n_in_v_reg_reg_0),
        .I1(n_in_v_reg_reg_1),
        .I2(o_v_reg_reg_0),
        .I3(n_in_v_reg_reg_2),
        .I4(o_v_reg_reg_1),
        .I5(\i[3][2]_36 ),
        .O(dor_o_v));
  LUT6 #(
    .INIT(64'h4000000040004000)) 
    o_v_reg_i_2__9
       (.I0(n_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(w_in_v_reg),
        .I4(w_msg[32]),
        .I5(w_msg[33]),
        .O(n_in_v_reg_reg_0));
  LUT3 #(
    .INIT(8'h8A)) 
    o_v_reg_i_3__10
       (.I0(n_in_v_reg),
        .I1(n_msg[32]),
        .I2(n_msg[33]),
        .O(n_in_v_reg_reg_1));
  LUT4 #(
    .INIT(16'h1555)) 
    o_v_reg_i_5__8
       (.I0(n_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(w_in_v_reg),
        .O(n_in_v_reg_reg_2));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[3][2] ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(\s[3][2]_36 ),
        .R(rst));
  LUT6 #(
    .INIT(64'hBBB8B8B8B8B8B8B8)) 
    \s_out_x_reg[0]_i_1__10 
       (.I0(n_msg[34]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[0]),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(w_in_v_reg),
        .O(s_msg[34]));
  LUT6 #(
    .INIT(64'hBBB8B8B8B8B8B8B8)) 
    \s_out_x_reg[1]_i_1__10 
       (.I0(n_msg[35]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[1]),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(w_in_v_reg),
        .O(s_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(Q[1]),
        .R(rst));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__10 
       (.I0(n_msg[32]),
        .I1(n_in_v_reg),
        .I2(w_msg[32]),
        .I3(waiting_for_ack_i_4__10_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [0]),
        .O(s_msg[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__10 
       (.I0(n_msg[33]),
        .I1(n_in_v_reg),
        .I2(w_msg[33]),
        .I3(waiting_for_ack_i_4__10_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [1]),
        .O(s_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(\s_out_y_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(\s_out_y_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    w_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\e[2][2]_36 ),
        .Q(w_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[2][2] [2]),
        .Q(w_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[2][2] [3]),
        .Q(w_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[2][2] [0]),
        .Q(w_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[2][2] [1]),
        .Q(w_msg[33]),
        .R(rst));
  LUT6 #(
    .INIT(64'h2A2A2AEAFFFFFFFF)) 
    waiting_for_ack_i_1__10
       (.I0(w_in_v_reg_reg_0),
        .I1(waiting_for_ack_reg[0]),
        .I2(waiting_for_ack_reg[1]),
        .I3(waiting_for_ack_i_4__10_n_0),
        .I4(n_in_v_reg),
        .I5(\i[3][2]_36 ),
        .O(E));
  (* SOFT_HLUTNM = "soft_lutpair109" *) 
  LUT4 #(
    .INIT(16'h55D5)) 
    waiting_for_ack_i_3__10
       (.I0(w_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(n_in_v_reg),
        .O(w_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair108" *) 
  LUT4 #(
    .INIT(16'h0080)) 
    waiting_for_ack_i_4__10
       (.I0(w_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(n_in_v_reg),
        .O(waiting_for_ack_i_4__10_n_0));
  LUT6 #(
    .INIT(64'h070707077F8F8F8F)) 
    waiting_for_ack_i_5__8
       (.I0(waiting_for_ack_reg[1]),
        .I1(waiting_for_ack_reg[0]),
        .I2(w_in_v_reg),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(n_in_v_reg),
        .O(\i_x_r_reg[1] ));
endmodule

(* ORIG_REF_NAME = "torus_switch" *) 
module torus_switch__parameterized11
   (\s[0][3]_36 ,
    \e[0][3]_36 ,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    \s_out_x_reg_reg[1]_0 ,
    Q,
    \i_x_r_reg[1] ,
    D,
    \s_out_y_reg_reg[1]_0 ,
    E,
    w_in_v_reg_reg_0,
    \e[0][3] ,
    rst,
    clk,
    dor_s_v,
    dor_e_v,
    \s[0][2]_36 ,
    \e[3][3]_36 ,
    o_v_reg_reg_0,
    o_v_reg_reg_1,
    \i[0][3]_36 ,
    number_tokens_reg,
    waiting_for_ack_reg,
    \s_out_y_reg_reg[1]_1 ,
    \e[3][3] ,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output \s[0][3]_36 ;
  output \e[0][3]_36 ;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output [1:0]Q;
  output \i_x_r_reg[1] ;
  output [0:0]D;
  output [1:0]\s_out_y_reg_reg[1]_0 ;
  output [0:0]E;
  output w_in_v_reg_reg_0;
  output [3:0]\e[0][3] ;
  input rst;
  input clk;
  input dor_s_v;
  input dor_e_v;
  input \s[0][2]_36 ;
  input \e[3][3]_36 ;
  input o_v_reg_reg_0;
  input o_v_reg_reg_1;
  input \i[0][3]_36 ;
  input [1:0]number_tokens_reg;
  input [1:0]waiting_for_ack_reg;
  input [1:0]\s_out_y_reg_reg[1]_1 ;
  input [3:0]\e[3][3] ;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire [3:0]\e[0][3] ;
  wire \e[0][3]_36 ;
  wire [3:0]\e[3][3] ;
  wire \e[3][3]_36 ;
  wire [35:32]e_msg;
  wire \i[0][3]_36 ;
  wire \i_x_r_reg[1] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire \o_v[0][3] ;
  wire o_v_reg_reg_0;
  wire o_v_reg_reg_1;
  wire rst;
  wire \s[0][2]_36 ;
  wire \s[0][3]_36 ;
  wire [35:32]s_msg;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_1 ;
  wire w_in_v_reg;
  wire w_in_v_reg_reg_0;
  wire [35:32]w_msg;
  wire waiting_for_ack_i_4__11_n_0;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_e_v),
        .Q(\e[0][3]_36 ),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair117" *) 
  LUT5 #(
    .INIT(32'hE2E2E2EA)) 
    \e_out_x_reg[0]_i_1__11 
       (.I0(waiting_for_ack_reg[0]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .O(e_msg[34]));
  (* SOFT_HLUTNM = "soft_lutpair118" *) 
  LUT5 #(
    .INIT(32'hEE22EE2A)) 
    \e_out_x_reg[1]_i_1__11 
       (.I0(waiting_for_ack_reg[1]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .O(e_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[34]),
        .Q(\e[0][3] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[35]),
        .Q(\e[0][3] [3]),
        .R(rst));
  LUT6 #(
    .INIT(64'hEEEEEEEA2222222A)) 
    \e_out_y_reg[0]_i_1__11 
       (.I0(\s_out_y_reg_reg[1]_1 [0]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .I5(w_msg[32]),
        .O(e_msg[32]));
  LUT6 #(
    .INIT(64'hEEEEEEEA2222222A)) 
    \e_out_y_reg[1]_i_1__11 
       (.I0(\s_out_y_reg_reg[1]_1 [1]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .I5(w_msg[33]),
        .O(e_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[32]),
        .Q(\e[0][3] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[33]),
        .Q(\e[0][3] [1]),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair119" *) 
  LUT4 #(
    .INIT(16'h956A)) 
    \i_x_r[0]_i_1__11 
       (.I0(Q[0]),
        .I1(\i[0][3]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(\o_v[0][3] ),
        .O(\s_out_x_reg_reg[1]_0 [0]));
  (* SOFT_HLUTNM = "soft_lutpair119" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \i_x_r[1]_i_1__11 
       (.I0(Q[1]),
        .I1(\i[0][3]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(\o_v[0][3] ),
        .O(\s_out_x_reg_reg[1]_0 [1]));
  LUT6 #(
    .INIT(64'h595959AAAAAAAAAA)) 
    \i_y_r[1]_i_1__11 
       (.I0(\s_out_y_reg_reg[1]_0 [1]),
        .I1(\i[0][3]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(\s_out_y_reg_reg[1]_0 [0]),
        .O(D));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\s[0][2]_36 ),
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
  LUT6 #(
    .INIT(64'hF011001100110011)) 
    o_v_reg_i_1__11
       (.I0(n_in_v_reg_reg_0),
        .I1(n_in_v_reg_reg_1),
        .I2(o_v_reg_reg_0),
        .I3(n_in_v_reg_reg_2),
        .I4(o_v_reg_reg_1),
        .I5(\i[0][3]_36 ),
        .O(dor_o_v));
  LUT6 #(
    .INIT(64'h0000010001000100)) 
    o_v_reg_i_2__10
       (.I0(n_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(w_in_v_reg),
        .I4(w_msg[32]),
        .I5(w_msg[33]),
        .O(n_in_v_reg_reg_0));
  LUT3 #(
    .INIT(8'h2A)) 
    o_v_reg_i_3__11
       (.I0(n_in_v_reg),
        .I1(n_msg[32]),
        .I2(n_msg[33]),
        .O(n_in_v_reg_reg_1));
  LUT4 #(
    .INIT(16'h5455)) 
    o_v_reg_i_5__9
       (.I0(n_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(w_in_v_reg),
        .O(n_in_v_reg_reg_2));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[0][3] ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(\s[0][3]_36 ),
        .R(rst));
  LUT6 #(
    .INIT(64'hB8B8B888B8B8B8B8)) 
    \s_out_x_reg[0]_i_1__11 
       (.I0(n_msg[34]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[0]),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(w_in_v_reg),
        .O(s_msg[34]));
  LUT6 #(
    .INIT(64'hB8B8B888B8B8B8B8)) 
    \s_out_x_reg[1]_i_1__11 
       (.I0(n_msg[35]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[1]),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(w_in_v_reg),
        .O(s_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(Q[1]),
        .R(rst));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__11 
       (.I0(n_msg[32]),
        .I1(n_in_v_reg),
        .I2(w_msg[32]),
        .I3(waiting_for_ack_i_4__11_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [0]),
        .O(s_msg[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__11 
       (.I0(n_msg[33]),
        .I1(n_in_v_reg),
        .I2(w_msg[33]),
        .I3(waiting_for_ack_i_4__11_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [1]),
        .O(s_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(\s_out_y_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(\s_out_y_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    w_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\e[3][3]_36 ),
        .Q(w_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[3][3] [2]),
        .Q(w_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[3][3] [3]),
        .Q(w_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[3][3] [0]),
        .Q(w_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[3][3] [1]),
        .Q(w_msg[33]),
        .R(rst));
  LUT6 #(
    .INIT(64'hA8A8A8ABFFFFFFFF)) 
    waiting_for_ack_i_1__11
       (.I0(w_in_v_reg_reg_0),
        .I1(waiting_for_ack_reg[0]),
        .I2(waiting_for_ack_reg[1]),
        .I3(waiting_for_ack_i_4__11_n_0),
        .I4(n_in_v_reg),
        .I5(\i[0][3]_36 ),
        .O(E));
  (* SOFT_HLUTNM = "soft_lutpair118" *) 
  LUT4 #(
    .INIT(16'h5557)) 
    waiting_for_ack_i_3__11
       (.I0(w_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(n_in_v_reg),
        .O(w_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair117" *) 
  LUT4 #(
    .INIT(16'h0002)) 
    waiting_for_ack_i_4__11
       (.I0(w_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(n_in_v_reg),
        .O(waiting_for_ack_i_4__11_n_0));
  LUT6 #(
    .INIT(64'h0E0E0E0E1F1F1FEF)) 
    waiting_for_ack_i_5__9
       (.I0(waiting_for_ack_reg[1]),
        .I1(waiting_for_ack_reg[0]),
        .I2(w_in_v_reg),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(n_in_v_reg),
        .O(\i_x_r_reg[1] ));
endmodule

(* ORIG_REF_NAME = "torus_switch" *) 
module torus_switch__parameterized12
   (\s[1][3]_36 ,
    \e[1][3]_36 ,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    \s_out_x_reg_reg[1]_0 ,
    Q,
    \i_x_r_reg[0] ,
    D,
    \s_out_y_reg_reg[1]_0 ,
    E,
    w_in_v_reg_reg_0,
    \e[1][3] ,
    rst,
    clk,
    dor_s_v,
    dor_e_v,
    \s[1][2]_36 ,
    \e[0][3]_36 ,
    o_v_reg_reg_0,
    o_v_reg_reg_1,
    \i[1][3]_36 ,
    number_tokens_reg,
    waiting_for_ack_reg,
    \s_out_y_reg_reg[1]_1 ,
    \e[0][3] ,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output \s[1][3]_36 ;
  output \e[1][3]_36 ;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output [1:0]Q;
  output \i_x_r_reg[0] ;
  output [0:0]D;
  output [1:0]\s_out_y_reg_reg[1]_0 ;
  output [0:0]E;
  output w_in_v_reg_reg_0;
  output [3:0]\e[1][3] ;
  input rst;
  input clk;
  input dor_s_v;
  input dor_e_v;
  input \s[1][2]_36 ;
  input \e[0][3]_36 ;
  input o_v_reg_reg_0;
  input o_v_reg_reg_1;
  input \i[1][3]_36 ;
  input [1:0]number_tokens_reg;
  input [1:0]waiting_for_ack_reg;
  input [1:0]\s_out_y_reg_reg[1]_1 ;
  input [3:0]\e[0][3] ;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire [3:0]\e[0][3] ;
  wire \e[0][3]_36 ;
  wire [3:0]\e[1][3] ;
  wire \e[1][3]_36 ;
  wire [35:32]e_msg;
  wire \i[1][3]_36 ;
  wire \i_x_r_reg[0] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire \o_v[1][3] ;
  wire o_v_reg_reg_0;
  wire o_v_reg_reg_1;
  wire rst;
  wire \s[1][2]_36 ;
  wire \s[1][3]_36 ;
  wire [35:32]s_msg;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_1 ;
  wire w_in_v_reg;
  wire w_in_v_reg_reg_0;
  wire [35:32]w_msg;
  wire waiting_for_ack_i_4__12_n_0;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_e_v),
        .Q(\e[1][3]_36 ),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair126" *) 
  LUT5 #(
    .INIT(32'hEE22EA22)) 
    \e_out_x_reg[0]_i_1__12 
       (.I0(waiting_for_ack_reg[0]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .O(e_msg[34]));
  (* SOFT_HLUTNM = "soft_lutpair127" *) 
  LUT5 #(
    .INIT(32'hE2E2EAE2)) 
    \e_out_x_reg[1]_i_1__12 
       (.I0(waiting_for_ack_reg[1]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .O(e_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[34]),
        .Q(\e[1][3] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[35]),
        .Q(\e[1][3] [3]),
        .R(rst));
  LUT6 #(
    .INIT(64'hEEEEEAEE22222A22)) 
    \e_out_y_reg[0]_i_1__12 
       (.I0(\s_out_y_reg_reg[1]_1 [0]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .I5(w_msg[32]),
        .O(e_msg[32]));
  LUT6 #(
    .INIT(64'hEEEEEAEE22222A22)) 
    \e_out_y_reg[1]_i_1__12 
       (.I0(\s_out_y_reg_reg[1]_1 [1]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .I5(w_msg[33]),
        .O(e_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[32]),
        .Q(\e[1][3] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[33]),
        .Q(\e[1][3] [1]),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair128" *) 
  LUT4 #(
    .INIT(16'h956A)) 
    \i_x_r[0]_i_1__12 
       (.I0(Q[0]),
        .I1(\i[1][3]_36 ),
        .I2(\i_x_r_reg[0] ),
        .I3(\o_v[1][3] ),
        .O(\s_out_x_reg_reg[1]_0 [0]));
  (* SOFT_HLUTNM = "soft_lutpair128" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \i_x_r[1]_i_1__12 
       (.I0(Q[1]),
        .I1(\i[1][3]_36 ),
        .I2(\i_x_r_reg[0] ),
        .I3(\o_v[1][3] ),
        .O(\s_out_x_reg_reg[1]_0 [1]));
  LUT6 #(
    .INIT(64'h595959AAAAAAAAAA)) 
    \i_y_r[1]_i_1__12 
       (.I0(\s_out_y_reg_reg[1]_0 [1]),
        .I1(\i[1][3]_36 ),
        .I2(\i_x_r_reg[0] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(\s_out_y_reg_reg[1]_0 [0]),
        .O(D));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\s[1][2]_36 ),
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
  LUT6 #(
    .INIT(64'hF011001100110011)) 
    o_v_reg_i_1__12
       (.I0(n_in_v_reg_reg_0),
        .I1(n_in_v_reg_reg_1),
        .I2(o_v_reg_reg_0),
        .I3(n_in_v_reg_reg_2),
        .I4(o_v_reg_reg_1),
        .I5(\i[1][3]_36 ),
        .O(dor_o_v));
  LUT6 #(
    .INIT(64'h0000040004000400)) 
    o_v_reg_i_2__11
       (.I0(n_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(w_in_v_reg),
        .I4(w_msg[32]),
        .I5(w_msg[33]),
        .O(n_in_v_reg_reg_0));
  LUT3 #(
    .INIT(8'h2A)) 
    o_v_reg_i_3__12
       (.I0(n_in_v_reg),
        .I1(n_msg[32]),
        .I2(n_msg[33]),
        .O(n_in_v_reg_reg_1));
  LUT4 #(
    .INIT(16'h5155)) 
    o_v_reg_i_5__10
       (.I0(n_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(w_in_v_reg),
        .O(n_in_v_reg_reg_2));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[1][3] ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(\s[1][3]_36 ),
        .R(rst));
  LUT6 #(
    .INIT(64'hB8B8BBB8B8B8B8B8)) 
    \s_out_x_reg[0]_i_1__12 
       (.I0(n_msg[34]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[0]),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(w_in_v_reg),
        .O(s_msg[34]));
  LUT6 #(
    .INIT(64'hB8B888B8B8B8B8B8)) 
    \s_out_x_reg[1]_i_1__12 
       (.I0(n_msg[35]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[1]),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(w_in_v_reg),
        .O(s_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(Q[1]),
        .R(rst));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__12 
       (.I0(n_msg[32]),
        .I1(n_in_v_reg),
        .I2(w_msg[32]),
        .I3(waiting_for_ack_i_4__12_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [0]),
        .O(s_msg[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__12 
       (.I0(n_msg[33]),
        .I1(n_in_v_reg),
        .I2(w_msg[33]),
        .I3(waiting_for_ack_i_4__12_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [1]),
        .O(s_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(\s_out_y_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(\s_out_y_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    w_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\e[0][3]_36 ),
        .Q(w_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[0][3] [2]),
        .Q(w_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[0][3] [3]),
        .Q(w_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[0][3] [0]),
        .Q(w_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[0][3] [1]),
        .Q(w_msg[33]),
        .R(rst));
  LUT6 #(
    .INIT(64'h8A8A8ABAFFFFFFFF)) 
    waiting_for_ack_i_1__12
       (.I0(w_in_v_reg_reg_0),
        .I1(waiting_for_ack_reg[1]),
        .I2(waiting_for_ack_reg[0]),
        .I3(waiting_for_ack_i_4__12_n_0),
        .I4(n_in_v_reg),
        .I5(\i[1][3]_36 ),
        .O(E));
  (* SOFT_HLUTNM = "soft_lutpair127" *) 
  LUT4 #(
    .INIT(16'h5575)) 
    waiting_for_ack_i_3__12
       (.I0(w_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(n_in_v_reg),
        .O(w_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair126" *) 
  LUT4 #(
    .INIT(16'h0020)) 
    waiting_for_ack_i_4__12
       (.I0(w_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(n_in_v_reg),
        .O(waiting_for_ack_i_4__12_n_0));
  LUT6 #(
    .INIT(64'h0D0D0D0D2FDF2F2F)) 
    waiting_for_ack_i_5__10
       (.I0(waiting_for_ack_reg[0]),
        .I1(waiting_for_ack_reg[1]),
        .I2(w_in_v_reg),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(n_in_v_reg),
        .O(\i_x_r_reg[0] ));
endmodule

(* ORIG_REF_NAME = "torus_switch" *) 
module torus_switch__parameterized13
   (\s[2][3]_36 ,
    \e[2][3]_36 ,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    \s_out_x_reg_reg[1]_0 ,
    Q,
    \i_x_r_reg[1] ,
    D,
    \s_out_y_reg_reg[1]_0 ,
    E,
    w_in_v_reg_reg_0,
    \e[2][3] ,
    rst,
    clk,
    dor_s_v,
    dor_e_v,
    \s[2][2]_36 ,
    \e[1][3]_36 ,
    o_v_reg_reg_0,
    o_v_reg_reg_1,
    \i[2][3]_36 ,
    number_tokens_reg,
    waiting_for_ack_reg,
    \s_out_y_reg_reg[1]_1 ,
    \e[1][3] ,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output \s[2][3]_36 ;
  output \e[2][3]_36 ;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output [1:0]Q;
  output \i_x_r_reg[1] ;
  output [0:0]D;
  output [1:0]\s_out_y_reg_reg[1]_0 ;
  output [0:0]E;
  output w_in_v_reg_reg_0;
  output [3:0]\e[2][3] ;
  input rst;
  input clk;
  input dor_s_v;
  input dor_e_v;
  input \s[2][2]_36 ;
  input \e[1][3]_36 ;
  input o_v_reg_reg_0;
  input o_v_reg_reg_1;
  input \i[2][3]_36 ;
  input [1:0]number_tokens_reg;
  input [1:0]waiting_for_ack_reg;
  input [1:0]\s_out_y_reg_reg[1]_1 ;
  input [3:0]\e[1][3] ;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire [3:0]\e[1][3] ;
  wire \e[1][3]_36 ;
  wire [3:0]\e[2][3] ;
  wire \e[2][3]_36 ;
  wire [35:32]e_msg;
  wire \i[2][3]_36 ;
  wire \i_x_r_reg[1] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire \o_v[2][3] ;
  wire o_v_reg_reg_0;
  wire o_v_reg_reg_1;
  wire rst;
  wire \s[2][2]_36 ;
  wire \s[2][3]_36 ;
  wire [35:32]s_msg;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_1 ;
  wire w_in_v_reg;
  wire w_in_v_reg_reg_0;
  wire [35:32]w_msg;
  wire waiting_for_ack_i_4__13_n_0;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_e_v),
        .Q(\e[2][3]_36 ),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair135" *) 
  LUT5 #(
    .INIT(32'hE2E2EAE2)) 
    \e_out_x_reg[0]_i_1__13 
       (.I0(waiting_for_ack_reg[0]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .O(e_msg[34]));
  (* SOFT_HLUTNM = "soft_lutpair136" *) 
  LUT5 #(
    .INIT(32'hEE22EA22)) 
    \e_out_x_reg[1]_i_1__13 
       (.I0(waiting_for_ack_reg[1]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .O(e_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[34]),
        .Q(\e[2][3] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[35]),
        .Q(\e[2][3] [3]),
        .R(rst));
  LUT6 #(
    .INIT(64'hEEEEEAEE22222A22)) 
    \e_out_y_reg[0]_i_1__13 
       (.I0(\s_out_y_reg_reg[1]_1 [0]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .I5(w_msg[32]),
        .O(e_msg[32]));
  LUT6 #(
    .INIT(64'hEEEEEAEE22222A22)) 
    \e_out_y_reg[1]_i_1__13 
       (.I0(\s_out_y_reg_reg[1]_1 [1]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .I5(w_msg[33]),
        .O(e_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[32]),
        .Q(\e[2][3] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[33]),
        .Q(\e[2][3] [1]),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair137" *) 
  LUT4 #(
    .INIT(16'h956A)) 
    \i_x_r[0]_i_1__13 
       (.I0(Q[0]),
        .I1(\i[2][3]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(\o_v[2][3] ),
        .O(\s_out_x_reg_reg[1]_0 [0]));
  (* SOFT_HLUTNM = "soft_lutpair137" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \i_x_r[1]_i_1__13 
       (.I0(Q[1]),
        .I1(\i[2][3]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(\o_v[2][3] ),
        .O(\s_out_x_reg_reg[1]_0 [1]));
  LUT6 #(
    .INIT(64'h595959AAAAAAAAAA)) 
    \i_y_r[1]_i_1__13 
       (.I0(\s_out_y_reg_reg[1]_0 [1]),
        .I1(\i[2][3]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(\s_out_y_reg_reg[1]_0 [0]),
        .O(D));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\s[2][2]_36 ),
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
  LUT6 #(
    .INIT(64'hF011001100110011)) 
    o_v_reg_i_1__13
       (.I0(n_in_v_reg_reg_0),
        .I1(n_in_v_reg_reg_1),
        .I2(o_v_reg_reg_0),
        .I3(n_in_v_reg_reg_2),
        .I4(o_v_reg_reg_1),
        .I5(\i[2][3]_36 ),
        .O(dor_o_v));
  LUT6 #(
    .INIT(64'h0000040004000400)) 
    o_v_reg_i_2__12
       (.I0(n_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(w_in_v_reg),
        .I4(w_msg[32]),
        .I5(w_msg[33]),
        .O(n_in_v_reg_reg_0));
  LUT3 #(
    .INIT(8'h2A)) 
    o_v_reg_i_3__13
       (.I0(n_in_v_reg),
        .I1(n_msg[32]),
        .I2(n_msg[33]),
        .O(n_in_v_reg_reg_1));
  LUT4 #(
    .INIT(16'h5155)) 
    o_v_reg_i_5__11
       (.I0(n_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(w_in_v_reg),
        .O(n_in_v_reg_reg_2));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[2][3] ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(\s[2][3]_36 ),
        .R(rst));
  LUT6 #(
    .INIT(64'hB8B888B8B8B8B8B8)) 
    \s_out_x_reg[0]_i_1__13 
       (.I0(n_msg[34]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[0]),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(w_in_v_reg),
        .O(s_msg[34]));
  LUT6 #(
    .INIT(64'hB8B8BBB8B8B8B8B8)) 
    \s_out_x_reg[1]_i_1__13 
       (.I0(n_msg[35]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[1]),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(w_in_v_reg),
        .O(s_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(Q[1]),
        .R(rst));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__13 
       (.I0(n_msg[32]),
        .I1(n_in_v_reg),
        .I2(w_msg[32]),
        .I3(waiting_for_ack_i_4__13_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [0]),
        .O(s_msg[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__13 
       (.I0(n_msg[33]),
        .I1(n_in_v_reg),
        .I2(w_msg[33]),
        .I3(waiting_for_ack_i_4__13_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [1]),
        .O(s_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(\s_out_y_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(\s_out_y_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    w_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\e[1][3]_36 ),
        .Q(w_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[1][3] [2]),
        .Q(w_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[1][3] [3]),
        .Q(w_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[1][3] [0]),
        .Q(w_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[1][3] [1]),
        .Q(w_msg[33]),
        .R(rst));
  LUT6 #(
    .INIT(64'h8A8A8ABAFFFFFFFF)) 
    waiting_for_ack_i_1__13
       (.I0(w_in_v_reg_reg_0),
        .I1(waiting_for_ack_reg[0]),
        .I2(waiting_for_ack_reg[1]),
        .I3(waiting_for_ack_i_4__13_n_0),
        .I4(n_in_v_reg),
        .I5(\i[2][3]_36 ),
        .O(E));
  (* SOFT_HLUTNM = "soft_lutpair136" *) 
  LUT4 #(
    .INIT(16'h5575)) 
    waiting_for_ack_i_3__13
       (.I0(w_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(n_in_v_reg),
        .O(w_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair135" *) 
  LUT4 #(
    .INIT(16'h0020)) 
    waiting_for_ack_i_4__13
       (.I0(w_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(n_in_v_reg),
        .O(waiting_for_ack_i_4__13_n_0));
  LUT6 #(
    .INIT(64'h0D0D0D0D2FDF2F2F)) 
    waiting_for_ack_i_5__11
       (.I0(waiting_for_ack_reg[1]),
        .I1(waiting_for_ack_reg[0]),
        .I2(w_in_v_reg),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(n_in_v_reg),
        .O(\i_x_r_reg[1] ));
endmodule

(* ORIG_REF_NAME = "torus_switch" *) 
module torus_switch__parameterized14
   (\s[3][3]_36 ,
    \e[3][3]_36 ,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    \s_out_x_reg_reg[1]_0 ,
    Q,
    \i_x_r_reg[1] ,
    D,
    \s_out_y_reg_reg[1]_0 ,
    E,
    w_in_v_reg_reg_0,
    \e[3][3] ,
    rst,
    clk,
    dor_s_v,
    dor_e_v,
    \s[3][2]_36 ,
    \e[2][3]_36 ,
    o_v_reg_reg_0,
    o_v_reg_reg_1,
    \i[3][3]_36 ,
    number_tokens_reg,
    waiting_for_ack_reg,
    \s_out_y_reg_reg[1]_1 ,
    \e[2][3] ,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output \s[3][3]_36 ;
  output \e[3][3]_36 ;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output [1:0]Q;
  output \i_x_r_reg[1] ;
  output [0:0]D;
  output [1:0]\s_out_y_reg_reg[1]_0 ;
  output [0:0]E;
  output w_in_v_reg_reg_0;
  output [3:0]\e[3][3] ;
  input rst;
  input clk;
  input dor_s_v;
  input dor_e_v;
  input \s[3][2]_36 ;
  input \e[2][3]_36 ;
  input o_v_reg_reg_0;
  input o_v_reg_reg_1;
  input \i[3][3]_36 ;
  input [1:0]number_tokens_reg;
  input [1:0]waiting_for_ack_reg;
  input [1:0]\s_out_y_reg_reg[1]_1 ;
  input [3:0]\e[2][3] ;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire [3:0]\e[2][3] ;
  wire \e[2][3]_36 ;
  wire [3:0]\e[3][3] ;
  wire \e[3][3]_36 ;
  wire [35:32]e_msg;
  wire \i[3][3]_36 ;
  wire \i_x_r_reg[1] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire \o_v[3][3] ;
  wire o_v_reg_reg_0;
  wire o_v_reg_reg_1;
  wire rst;
  wire \s[3][2]_36 ;
  wire \s[3][3]_36 ;
  wire [35:32]s_msg;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_1 ;
  wire w_in_v_reg;
  wire w_in_v_reg_reg_0;
  wire [35:32]w_msg;
  wire waiting_for_ack_i_4__14_n_0;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_e_v),
        .Q(\e[3][3]_36 ),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair144" *) 
  LUT5 #(
    .INIT(32'hEE22AE22)) 
    \e_out_x_reg[0]_i_1__14 
       (.I0(waiting_for_ack_reg[0]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .O(e_msg[34]));
  (* SOFT_HLUTNM = "soft_lutpair145" *) 
  LUT5 #(
    .INIT(32'hE2E2A2E2)) 
    \e_out_x_reg[1]_i_1__14 
       (.I0(waiting_for_ack_reg[1]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .O(e_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[34]),
        .Q(\e[3][3] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[35]),
        .Q(\e[3][3] [3]),
        .R(rst));
  LUT6 #(
    .INIT(64'hEEEEAEEE2222A222)) 
    \e_out_y_reg[0]_i_1__14 
       (.I0(\s_out_y_reg_reg[1]_1 [0]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .I5(w_msg[32]),
        .O(e_msg[32]));
  LUT6 #(
    .INIT(64'hEEEEAEEE2222A222)) 
    \e_out_y_reg[1]_i_1__14 
       (.I0(\s_out_y_reg_reg[1]_1 [1]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .I5(w_msg[33]),
        .O(e_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[32]),
        .Q(\e[3][3] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[33]),
        .Q(\e[3][3] [1]),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair146" *) 
  LUT4 #(
    .INIT(16'h956A)) 
    \i_x_r[0]_i_1__14 
       (.I0(Q[0]),
        .I1(\i[3][3]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(\o_v[3][3] ),
        .O(\s_out_x_reg_reg[1]_0 [0]));
  (* SOFT_HLUTNM = "soft_lutpair146" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \i_x_r[1]_i_1__14 
       (.I0(Q[1]),
        .I1(\i[3][3]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(\o_v[3][3] ),
        .O(\s_out_x_reg_reg[1]_0 [1]));
  LUT6 #(
    .INIT(64'h595959AAAAAAAAAA)) 
    \i_y_r[1]_i_1__14 
       (.I0(\s_out_y_reg_reg[1]_0 [1]),
        .I1(\i[3][3]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(\s_out_y_reg_reg[1]_0 [0]),
        .O(D));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\s[3][2]_36 ),
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
  LUT6 #(
    .INIT(64'hF011001100110011)) 
    o_v_reg_i_1__14
       (.I0(n_in_v_reg_reg_0),
        .I1(n_in_v_reg_reg_1),
        .I2(o_v_reg_reg_0),
        .I3(n_in_v_reg_reg_2),
        .I4(o_v_reg_reg_1),
        .I5(\i[3][3]_36 ),
        .O(dor_o_v));
  LUT6 #(
    .INIT(64'h0000400040004000)) 
    o_v_reg_i_2__13
       (.I0(n_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(w_in_v_reg),
        .I4(w_msg[32]),
        .I5(w_msg[33]),
        .O(n_in_v_reg_reg_0));
  LUT3 #(
    .INIT(8'h2A)) 
    o_v_reg_i_3__14
       (.I0(n_in_v_reg),
        .I1(n_msg[32]),
        .I2(n_msg[33]),
        .O(n_in_v_reg_reg_1));
  LUT4 #(
    .INIT(16'h1555)) 
    o_v_reg_i_5__12
       (.I0(n_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(w_in_v_reg),
        .O(n_in_v_reg_reg_2));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[3][3] ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(\s[3][3]_36 ),
        .R(rst));
  LUT6 #(
    .INIT(64'hBBB8B8B8B8B8B8B8)) 
    \s_out_x_reg[0]_i_1__14 
       (.I0(n_msg[34]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[0]),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(w_in_v_reg),
        .O(s_msg[34]));
  LUT6 #(
    .INIT(64'hBBB8B8B8B8B8B8B8)) 
    \s_out_x_reg[1]_i_1__14 
       (.I0(n_msg[35]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[1]),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(w_in_v_reg),
        .O(s_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(Q[1]),
        .R(rst));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__14 
       (.I0(n_msg[32]),
        .I1(n_in_v_reg),
        .I2(w_msg[32]),
        .I3(waiting_for_ack_i_4__14_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [0]),
        .O(s_msg[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__14 
       (.I0(n_msg[33]),
        .I1(n_in_v_reg),
        .I2(w_msg[33]),
        .I3(waiting_for_ack_i_4__14_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [1]),
        .O(s_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(\s_out_y_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(\s_out_y_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    w_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\e[2][3]_36 ),
        .Q(w_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[2][3] [2]),
        .Q(w_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[2][3] [3]),
        .Q(w_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[2][3] [0]),
        .Q(w_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[2][3] [1]),
        .Q(w_msg[33]),
        .R(rst));
  LUT6 #(
    .INIT(64'h2A2A2AEAFFFFFFFF)) 
    waiting_for_ack_i_1__14
       (.I0(w_in_v_reg_reg_0),
        .I1(waiting_for_ack_reg[0]),
        .I2(waiting_for_ack_reg[1]),
        .I3(waiting_for_ack_i_4__14_n_0),
        .I4(n_in_v_reg),
        .I5(\i[3][3]_36 ),
        .O(E));
  (* SOFT_HLUTNM = "soft_lutpair145" *) 
  LUT4 #(
    .INIT(16'h55D5)) 
    waiting_for_ack_i_3__14
       (.I0(w_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(n_in_v_reg),
        .O(w_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair144" *) 
  LUT4 #(
    .INIT(16'h0080)) 
    waiting_for_ack_i_4__14
       (.I0(w_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(n_in_v_reg),
        .O(waiting_for_ack_i_4__14_n_0));
  LUT6 #(
    .INIT(64'h070707077F8F8F8F)) 
    waiting_for_ack_i_5__12
       (.I0(waiting_for_ack_reg[1]),
        .I1(waiting_for_ack_reg[0]),
        .I2(w_in_v_reg),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(n_in_v_reg),
        .O(\i_x_r_reg[1] ));
endmodule

(* ORIG_REF_NAME = "torus_switch" *) 
module torus_switch__parameterized2
   (\s[3][0]_36 ,
    \e[3][0]_36 ,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    \s_out_x_reg_reg[1]_0 ,
    Q,
    \i_x_r_reg[1] ,
    D,
    \s_out_y_reg_reg[1]_0 ,
    E,
    w_in_v_reg_reg_0,
    \e[3][0] ,
    rst,
    clk,
    dor_s_v,
    dor_e_v,
    \s[3][3]_36 ,
    \e[2][0]_36 ,
    o_v_reg_reg_0,
    o_v_reg_reg_1,
    \i[3][0]_36 ,
    number_tokens_reg,
    waiting_for_ack_reg,
    \s_out_y_reg_reg[1]_1 ,
    \e[2][0] ,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output \s[3][0]_36 ;
  output \e[3][0]_36 ;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output [1:0]Q;
  output \i_x_r_reg[1] ;
  output [0:0]D;
  output [1:0]\s_out_y_reg_reg[1]_0 ;
  output [0:0]E;
  output w_in_v_reg_reg_0;
  output [3:0]\e[3][0] ;
  input rst;
  input clk;
  input dor_s_v;
  input dor_e_v;
  input \s[3][3]_36 ;
  input \e[2][0]_36 ;
  input o_v_reg_reg_0;
  input o_v_reg_reg_1;
  input \i[3][0]_36 ;
  input [1:0]number_tokens_reg;
  input [1:0]waiting_for_ack_reg;
  input [1:0]\s_out_y_reg_reg[1]_1 ;
  input [3:0]\e[2][0] ;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire [3:0]\e[2][0] ;
  wire \e[2][0]_36 ;
  wire [3:0]\e[3][0] ;
  wire \e[3][0]_36 ;
  wire [35:32]e_msg;
  wire \i[3][0]_36 ;
  wire \i_x_r_reg[1] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire \o_v[3][0] ;
  wire o_v_reg_reg_0;
  wire o_v_reg_reg_1;
  wire rst;
  wire \s[3][0]_36 ;
  wire \s[3][3]_36 ;
  wire [35:32]s_msg;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_1 ;
  wire w_in_v_reg;
  wire w_in_v_reg_reg_0;
  wire [35:32]w_msg;
  wire waiting_for_ack_i_4__2_n_0;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_e_v),
        .Q(\e[3][0]_36 ),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair34" *) 
  LUT5 #(
    .INIT(32'hEE22AE22)) 
    \e_out_x_reg[0]_i_1__2 
       (.I0(waiting_for_ack_reg[0]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .O(e_msg[34]));
  (* SOFT_HLUTNM = "soft_lutpair35" *) 
  LUT5 #(
    .INIT(32'hE2E2A2E2)) 
    \e_out_x_reg[1]_i_1__2 
       (.I0(waiting_for_ack_reg[1]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .O(e_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[34]),
        .Q(\e[3][0] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[35]),
        .Q(\e[3][0] [3]),
        .R(rst));
  LUT6 #(
    .INIT(64'hEEEEAEEE2222A222)) 
    \e_out_y_reg[0]_i_1__2 
       (.I0(\s_out_y_reg_reg[1]_1 [0]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .I5(w_msg[32]),
        .O(e_msg[32]));
  LUT6 #(
    .INIT(64'hEEEEAEEE2222A222)) 
    \e_out_y_reg[1]_i_1__2 
       (.I0(\s_out_y_reg_reg[1]_1 [1]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .I5(w_msg[33]),
        .O(e_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[32]),
        .Q(\e[3][0] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[33]),
        .Q(\e[3][0] [1]),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair36" *) 
  LUT4 #(
    .INIT(16'h956A)) 
    \i_x_r[0]_i_1__2 
       (.I0(Q[0]),
        .I1(\i[3][0]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(\o_v[3][0] ),
        .O(\s_out_x_reg_reg[1]_0 [0]));
  (* SOFT_HLUTNM = "soft_lutpair36" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \i_x_r[1]_i_1__2 
       (.I0(Q[1]),
        .I1(\i[3][0]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(\o_v[3][0] ),
        .O(\s_out_x_reg_reg[1]_0 [1]));
  LUT6 #(
    .INIT(64'h595959AAAAAAAAAA)) 
    \i_y_r[1]_i_1__2 
       (.I0(\s_out_y_reg_reg[1]_0 [1]),
        .I1(\i[3][0]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(\s_out_y_reg_reg[1]_0 [0]),
        .O(D));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\s[3][3]_36 ),
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
  LUT6 #(
    .INIT(64'hF011001100110011)) 
    o_v_reg_i_1__2
       (.I0(n_in_v_reg_reg_0),
        .I1(n_in_v_reg_reg_1),
        .I2(o_v_reg_reg_0),
        .I3(n_in_v_reg_reg_2),
        .I4(o_v_reg_reg_1),
        .I5(\i[3][0]_36 ),
        .O(dor_o_v));
  LUT6 #(
    .INIT(64'h4000400040000000)) 
    o_v_reg_i_2__1
       (.I0(n_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(w_in_v_reg),
        .I4(w_msg[32]),
        .I5(w_msg[33]),
        .O(n_in_v_reg_reg_0));
  LUT3 #(
    .INIT(8'hA8)) 
    o_v_reg_i_3__4
       (.I0(n_in_v_reg),
        .I1(n_msg[32]),
        .I2(n_msg[33]),
        .O(n_in_v_reg_reg_1));
  LUT4 #(
    .INIT(16'h1555)) 
    o_v_reg_i_5__2
       (.I0(n_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(w_in_v_reg),
        .O(n_in_v_reg_reg_2));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[3][0] ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(\s[3][0]_36 ),
        .R(rst));
  LUT6 #(
    .INIT(64'hBBB8B8B8B8B8B8B8)) 
    \s_out_x_reg[0]_i_1__2 
       (.I0(n_msg[34]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[0]),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(w_in_v_reg),
        .O(s_msg[34]));
  LUT6 #(
    .INIT(64'hBBB8B8B8B8B8B8B8)) 
    \s_out_x_reg[1]_i_1__2 
       (.I0(n_msg[35]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[1]),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(w_in_v_reg),
        .O(s_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(Q[1]),
        .R(rst));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__2 
       (.I0(n_msg[32]),
        .I1(n_in_v_reg),
        .I2(w_msg[32]),
        .I3(waiting_for_ack_i_4__2_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [0]),
        .O(s_msg[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__2 
       (.I0(n_msg[33]),
        .I1(n_in_v_reg),
        .I2(w_msg[33]),
        .I3(waiting_for_ack_i_4__2_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [1]),
        .O(s_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(\s_out_y_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(\s_out_y_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    w_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\e[2][0]_36 ),
        .Q(w_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[2][0] [2]),
        .Q(w_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[2][0] [3]),
        .Q(w_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[2][0] [0]),
        .Q(w_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[2][0] [1]),
        .Q(w_msg[33]),
        .R(rst));
  LUT6 #(
    .INIT(64'h2A2A2AEAFFFFFFFF)) 
    waiting_for_ack_i_1__2
       (.I0(w_in_v_reg_reg_0),
        .I1(waiting_for_ack_reg[0]),
        .I2(waiting_for_ack_reg[1]),
        .I3(waiting_for_ack_i_4__2_n_0),
        .I4(n_in_v_reg),
        .I5(\i[3][0]_36 ),
        .O(E));
  (* SOFT_HLUTNM = "soft_lutpair35" *) 
  LUT4 #(
    .INIT(16'h55D5)) 
    waiting_for_ack_i_3__2
       (.I0(w_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(n_in_v_reg),
        .O(w_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair34" *) 
  LUT4 #(
    .INIT(16'h0080)) 
    waiting_for_ack_i_4__2
       (.I0(w_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(n_in_v_reg),
        .O(waiting_for_ack_i_4__2_n_0));
  LUT6 #(
    .INIT(64'h070707077F8F8F8F)) 
    waiting_for_ack_i_5__2
       (.I0(waiting_for_ack_reg[1]),
        .I1(waiting_for_ack_reg[0]),
        .I2(w_in_v_reg),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(n_in_v_reg),
        .O(\i_x_r_reg[1] ));
endmodule

(* ORIG_REF_NAME = "torus_switch" *) 
module torus_switch__parameterized3
   (\s[0][1]_36 ,
    \e[0][1]_36 ,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    \s_out_x_reg_reg[1]_0 ,
    Q,
    \i_x_r_reg[1] ,
    D,
    \s_out_y_reg_reg[1]_0 ,
    E,
    w_in_v_reg_reg_0,
    \e[0][1] ,
    rst,
    clk,
    dor_s_v,
    dor_e_v,
    \s[0][0]_36 ,
    \e[3][1]_36 ,
    o_v_reg_reg_0,
    o_v_reg_reg_1,
    \i[0][1]_36 ,
    number_tokens_reg,
    waiting_for_ack_reg,
    \s_out_y_reg_reg[1]_1 ,
    \e[3][1] ,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output \s[0][1]_36 ;
  output \e[0][1]_36 ;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output [1:0]Q;
  output \i_x_r_reg[1] ;
  output [0:0]D;
  output [1:0]\s_out_y_reg_reg[1]_0 ;
  output [0:0]E;
  output w_in_v_reg_reg_0;
  output [3:0]\e[0][1] ;
  input rst;
  input clk;
  input dor_s_v;
  input dor_e_v;
  input \s[0][0]_36 ;
  input \e[3][1]_36 ;
  input o_v_reg_reg_0;
  input o_v_reg_reg_1;
  input \i[0][1]_36 ;
  input [1:0]number_tokens_reg;
  input [1:0]waiting_for_ack_reg;
  input [1:0]\s_out_y_reg_reg[1]_1 ;
  input [3:0]\e[3][1] ;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire [3:0]\e[0][1] ;
  wire \e[0][1]_36 ;
  wire [3:0]\e[3][1] ;
  wire \e[3][1]_36 ;
  wire [35:32]e_msg;
  wire \i[0][1]_36 ;
  wire \i_x_r_reg[1] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire \o_v[0][1] ;
  wire o_v_reg_reg_0;
  wire o_v_reg_reg_1;
  wire rst;
  wire \s[0][0]_36 ;
  wire \s[0][1]_36 ;
  wire [35:32]s_msg;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_1 ;
  wire w_in_v_reg;
  wire w_in_v_reg_reg_0;
  wire [35:32]w_msg;
  wire waiting_for_ack_i_4__3_n_0;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_e_v),
        .Q(\e[0][1]_36 ),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair43" *) 
  LUT5 #(
    .INIT(32'hE2E2E2EA)) 
    \e_out_x_reg[0]_i_1__3 
       (.I0(waiting_for_ack_reg[0]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .O(e_msg[34]));
  (* SOFT_HLUTNM = "soft_lutpair44" *) 
  LUT5 #(
    .INIT(32'hEE22EE2A)) 
    \e_out_x_reg[1]_i_1__3 
       (.I0(waiting_for_ack_reg[1]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .O(e_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[34]),
        .Q(\e[0][1] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[35]),
        .Q(\e[0][1] [3]),
        .R(rst));
  LUT6 #(
    .INIT(64'hEEEEEEEA2222222A)) 
    \e_out_y_reg[0]_i_1__3 
       (.I0(\s_out_y_reg_reg[1]_1 [0]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .I5(w_msg[32]),
        .O(e_msg[32]));
  LUT6 #(
    .INIT(64'hEEEEEEEA2222222A)) 
    \e_out_y_reg[1]_i_1__3 
       (.I0(\s_out_y_reg_reg[1]_1 [1]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .I5(w_msg[33]),
        .O(e_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[32]),
        .Q(\e[0][1] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[33]),
        .Q(\e[0][1] [1]),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair45" *) 
  LUT4 #(
    .INIT(16'h956A)) 
    \i_x_r[0]_i_1__3 
       (.I0(Q[0]),
        .I1(\i[0][1]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(\o_v[0][1] ),
        .O(\s_out_x_reg_reg[1]_0 [0]));
  (* SOFT_HLUTNM = "soft_lutpair45" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \i_x_r[1]_i_1__3 
       (.I0(Q[1]),
        .I1(\i[0][1]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(\o_v[0][1] ),
        .O(\s_out_x_reg_reg[1]_0 [1]));
  LUT6 #(
    .INIT(64'h595959AAAAAAAAAA)) 
    \i_y_r[1]_i_1__3 
       (.I0(\s_out_y_reg_reg[1]_0 [1]),
        .I1(\i[0][1]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(\s_out_y_reg_reg[1]_0 [0]),
        .O(D));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\s[0][0]_36 ),
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
  LUT6 #(
    .INIT(64'hF011001100110011)) 
    o_v_reg_i_1__3
       (.I0(n_in_v_reg_reg_0),
        .I1(n_in_v_reg_reg_1),
        .I2(o_v_reg_reg_0),
        .I3(n_in_v_reg_reg_2),
        .I4(o_v_reg_reg_1),
        .I5(\i[0][1]_36 ),
        .O(dor_o_v));
  LUT6 #(
    .INIT(64'h0100000001000100)) 
    o_v_reg_i_2__2
       (.I0(n_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(w_in_v_reg),
        .I4(w_msg[33]),
        .I5(w_msg[32]),
        .O(n_in_v_reg_reg_0));
  LUT3 #(
    .INIT(8'h8A)) 
    o_v_reg_i_3__5
       (.I0(n_in_v_reg),
        .I1(n_msg[33]),
        .I2(n_msg[32]),
        .O(n_in_v_reg_reg_1));
  LUT4 #(
    .INIT(16'h5455)) 
    o_v_reg_i_5__3
       (.I0(n_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(w_in_v_reg),
        .O(n_in_v_reg_reg_2));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[0][1] ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(\s[0][1]_36 ),
        .R(rst));
  LUT6 #(
    .INIT(64'hB8B8B888B8B8B8B8)) 
    \s_out_x_reg[0]_i_1__3 
       (.I0(n_msg[34]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[0]),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(w_in_v_reg),
        .O(s_msg[34]));
  LUT6 #(
    .INIT(64'hB8B8B888B8B8B8B8)) 
    \s_out_x_reg[1]_i_1__3 
       (.I0(n_msg[35]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[1]),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(w_in_v_reg),
        .O(s_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(Q[1]),
        .R(rst));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__3 
       (.I0(n_msg[32]),
        .I1(n_in_v_reg),
        .I2(w_msg[32]),
        .I3(waiting_for_ack_i_4__3_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [0]),
        .O(s_msg[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__3 
       (.I0(n_msg[33]),
        .I1(n_in_v_reg),
        .I2(w_msg[33]),
        .I3(waiting_for_ack_i_4__3_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [1]),
        .O(s_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(\s_out_y_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(\s_out_y_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    w_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\e[3][1]_36 ),
        .Q(w_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[3][1] [2]),
        .Q(w_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[3][1] [3]),
        .Q(w_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[3][1] [0]),
        .Q(w_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[3][1] [1]),
        .Q(w_msg[33]),
        .R(rst));
  LUT6 #(
    .INIT(64'hA8A8A8ABFFFFFFFF)) 
    waiting_for_ack_i_1__3
       (.I0(w_in_v_reg_reg_0),
        .I1(waiting_for_ack_reg[0]),
        .I2(waiting_for_ack_reg[1]),
        .I3(waiting_for_ack_i_4__3_n_0),
        .I4(n_in_v_reg),
        .I5(\i[0][1]_36 ),
        .O(E));
  (* SOFT_HLUTNM = "soft_lutpair44" *) 
  LUT4 #(
    .INIT(16'h5557)) 
    waiting_for_ack_i_3__3
       (.I0(w_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(n_in_v_reg),
        .O(w_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair43" *) 
  LUT4 #(
    .INIT(16'h0002)) 
    waiting_for_ack_i_4__3
       (.I0(w_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(n_in_v_reg),
        .O(waiting_for_ack_i_4__3_n_0));
  LUT6 #(
    .INIT(64'h0E0E0E0E1F1F1FEF)) 
    waiting_for_ack_i_5__3
       (.I0(waiting_for_ack_reg[1]),
        .I1(waiting_for_ack_reg[0]),
        .I2(w_in_v_reg),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(n_in_v_reg),
        .O(\i_x_r_reg[1] ));
endmodule

(* ORIG_REF_NAME = "torus_switch" *) 
module torus_switch__parameterized4
   (\s[1][1]_36 ,
    \e[1][1]_36 ,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    \s_out_x_reg_reg[1]_0 ,
    Q,
    \i_x_r_reg[0] ,
    D,
    \s_out_y_reg_reg[1]_0 ,
    E,
    w_in_v_reg_reg_0,
    \e[1][1] ,
    rst,
    clk,
    dor_s_v,
    dor_e_v,
    \s[1][0]_36 ,
    \e[0][1]_36 ,
    o_v_reg_reg_0,
    o_v_reg_reg_1,
    \i[1][1]_36 ,
    number_tokens_reg,
    waiting_for_ack_reg,
    \s_out_y_reg_reg[1]_1 ,
    \e[0][1] ,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output \s[1][1]_36 ;
  output \e[1][1]_36 ;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output [1:0]Q;
  output \i_x_r_reg[0] ;
  output [0:0]D;
  output [1:0]\s_out_y_reg_reg[1]_0 ;
  output [0:0]E;
  output w_in_v_reg_reg_0;
  output [3:0]\e[1][1] ;
  input rst;
  input clk;
  input dor_s_v;
  input dor_e_v;
  input \s[1][0]_36 ;
  input \e[0][1]_36 ;
  input o_v_reg_reg_0;
  input o_v_reg_reg_1;
  input \i[1][1]_36 ;
  input [1:0]number_tokens_reg;
  input [1:0]waiting_for_ack_reg;
  input [1:0]\s_out_y_reg_reg[1]_1 ;
  input [3:0]\e[0][1] ;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire [3:0]\e[0][1] ;
  wire \e[0][1]_36 ;
  wire [3:0]\e[1][1] ;
  wire \e[1][1]_36 ;
  wire [35:32]e_msg;
  wire \i[1][1]_36 ;
  wire \i_x_r_reg[0] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire \o_v[1][1] ;
  wire o_v_reg_reg_0;
  wire o_v_reg_reg_1;
  wire rst;
  wire \s[1][0]_36 ;
  wire \s[1][1]_36 ;
  wire [35:32]s_msg;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_1 ;
  wire w_in_v_reg;
  wire w_in_v_reg_reg_0;
  wire [35:32]w_msg;
  wire waiting_for_ack_i_4__4_n_0;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_e_v),
        .Q(\e[1][1]_36 ),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair52" *) 
  LUT5 #(
    .INIT(32'hEE22EA22)) 
    \e_out_x_reg[0]_i_1__4 
       (.I0(waiting_for_ack_reg[0]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .O(e_msg[34]));
  (* SOFT_HLUTNM = "soft_lutpair53" *) 
  LUT5 #(
    .INIT(32'hE2E2EAE2)) 
    \e_out_x_reg[1]_i_1__4 
       (.I0(waiting_for_ack_reg[1]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .O(e_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[34]),
        .Q(\e[1][1] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[35]),
        .Q(\e[1][1] [3]),
        .R(rst));
  LUT6 #(
    .INIT(64'hEEEEEAEE22222A22)) 
    \e_out_y_reg[0]_i_1__4 
       (.I0(\s_out_y_reg_reg[1]_1 [0]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .I5(w_msg[32]),
        .O(e_msg[32]));
  LUT6 #(
    .INIT(64'hEEEEEAEE22222A22)) 
    \e_out_y_reg[1]_i_1__4 
       (.I0(\s_out_y_reg_reg[1]_1 [1]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .I5(w_msg[33]),
        .O(e_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[32]),
        .Q(\e[1][1] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[33]),
        .Q(\e[1][1] [1]),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair54" *) 
  LUT4 #(
    .INIT(16'h956A)) 
    \i_x_r[0]_i_1__4 
       (.I0(Q[0]),
        .I1(\i[1][1]_36 ),
        .I2(\i_x_r_reg[0] ),
        .I3(\o_v[1][1] ),
        .O(\s_out_x_reg_reg[1]_0 [0]));
  (* SOFT_HLUTNM = "soft_lutpair54" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \i_x_r[1]_i_1__4 
       (.I0(Q[1]),
        .I1(\i[1][1]_36 ),
        .I2(\i_x_r_reg[0] ),
        .I3(\o_v[1][1] ),
        .O(\s_out_x_reg_reg[1]_0 [1]));
  LUT6 #(
    .INIT(64'h595959AAAAAAAAAA)) 
    \i_y_r[1]_i_1__4 
       (.I0(\s_out_y_reg_reg[1]_0 [1]),
        .I1(\i[1][1]_36 ),
        .I2(\i_x_r_reg[0] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(\s_out_y_reg_reg[1]_0 [0]),
        .O(D));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\s[1][0]_36 ),
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
  LUT6 #(
    .INIT(64'hF011001100110011)) 
    o_v_reg_i_1__4
       (.I0(n_in_v_reg_reg_0),
        .I1(n_in_v_reg_reg_1),
        .I2(o_v_reg_reg_0),
        .I3(n_in_v_reg_reg_2),
        .I4(o_v_reg_reg_1),
        .I5(\i[1][1]_36 ),
        .O(dor_o_v));
  LUT6 #(
    .INIT(64'h0400000004000400)) 
    o_v_reg_i_2__3
       (.I0(n_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(w_in_v_reg),
        .I4(w_msg[33]),
        .I5(w_msg[32]),
        .O(n_in_v_reg_reg_0));
  LUT3 #(
    .INIT(8'h8A)) 
    o_v_reg_i_3__6
       (.I0(n_in_v_reg),
        .I1(n_msg[33]),
        .I2(n_msg[32]),
        .O(n_in_v_reg_reg_1));
  LUT4 #(
    .INIT(16'h5155)) 
    o_v_reg_i_5__4
       (.I0(n_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(w_in_v_reg),
        .O(n_in_v_reg_reg_2));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[1][1] ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(\s[1][1]_36 ),
        .R(rst));
  LUT6 #(
    .INIT(64'hB8B8BBB8B8B8B8B8)) 
    \s_out_x_reg[0]_i_1__4 
       (.I0(n_msg[34]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[0]),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(w_in_v_reg),
        .O(s_msg[34]));
  LUT6 #(
    .INIT(64'hB8B888B8B8B8B8B8)) 
    \s_out_x_reg[1]_i_1__4 
       (.I0(n_msg[35]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[1]),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(w_in_v_reg),
        .O(s_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(Q[1]),
        .R(rst));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__4 
       (.I0(n_msg[32]),
        .I1(n_in_v_reg),
        .I2(w_msg[32]),
        .I3(waiting_for_ack_i_4__4_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [0]),
        .O(s_msg[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__4 
       (.I0(n_msg[33]),
        .I1(n_in_v_reg),
        .I2(w_msg[33]),
        .I3(waiting_for_ack_i_4__4_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [1]),
        .O(s_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(\s_out_y_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(\s_out_y_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    w_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\e[0][1]_36 ),
        .Q(w_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[0][1] [2]),
        .Q(w_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[0][1] [3]),
        .Q(w_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[0][1] [0]),
        .Q(w_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[0][1] [1]),
        .Q(w_msg[33]),
        .R(rst));
  LUT6 #(
    .INIT(64'h8A8A8ABAFFFFFFFF)) 
    waiting_for_ack_i_1__4
       (.I0(w_in_v_reg_reg_0),
        .I1(waiting_for_ack_reg[1]),
        .I2(waiting_for_ack_reg[0]),
        .I3(waiting_for_ack_i_4__4_n_0),
        .I4(n_in_v_reg),
        .I5(\i[1][1]_36 ),
        .O(E));
  (* SOFT_HLUTNM = "soft_lutpair53" *) 
  LUT4 #(
    .INIT(16'h5575)) 
    waiting_for_ack_i_3__4
       (.I0(w_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(n_in_v_reg),
        .O(w_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair52" *) 
  LUT4 #(
    .INIT(16'h0020)) 
    waiting_for_ack_i_4__4
       (.I0(w_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(n_in_v_reg),
        .O(waiting_for_ack_i_4__4_n_0));
  LUT6 #(
    .INIT(64'h0D0D0D0D2FDF2F2F)) 
    waiting_for_ack_i_5__4
       (.I0(waiting_for_ack_reg[0]),
        .I1(waiting_for_ack_reg[1]),
        .I2(w_in_v_reg),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(n_in_v_reg),
        .O(\i_x_r_reg[0] ));
endmodule

(* ORIG_REF_NAME = "torus_switch" *) 
module torus_switch__parameterized5
   (\s[2][1]_36 ,
    \e[2][1]_36 ,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    \s_out_x_reg_reg[1]_0 ,
    Q,
    \i_x_r_reg[1] ,
    D,
    \s_out_y_reg_reg[1]_0 ,
    E,
    w_in_v_reg_reg_0,
    \e[2][1] ,
    rst,
    clk,
    dor_s_v,
    dor_e_v,
    \s[2][0]_36 ,
    \e[1][1]_36 ,
    o_v_reg_reg_0,
    o_v_reg_reg_1,
    \i[2][1]_36 ,
    number_tokens_reg,
    waiting_for_ack_reg,
    \s_out_y_reg_reg[1]_1 ,
    \e[1][1] ,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output \s[2][1]_36 ;
  output \e[2][1]_36 ;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output [1:0]Q;
  output \i_x_r_reg[1] ;
  output [0:0]D;
  output [1:0]\s_out_y_reg_reg[1]_0 ;
  output [0:0]E;
  output w_in_v_reg_reg_0;
  output [3:0]\e[2][1] ;
  input rst;
  input clk;
  input dor_s_v;
  input dor_e_v;
  input \s[2][0]_36 ;
  input \e[1][1]_36 ;
  input o_v_reg_reg_0;
  input o_v_reg_reg_1;
  input \i[2][1]_36 ;
  input [1:0]number_tokens_reg;
  input [1:0]waiting_for_ack_reg;
  input [1:0]\s_out_y_reg_reg[1]_1 ;
  input [3:0]\e[1][1] ;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire [3:0]\e[1][1] ;
  wire \e[1][1]_36 ;
  wire [3:0]\e[2][1] ;
  wire \e[2][1]_36 ;
  wire [35:32]e_msg;
  wire \i[2][1]_36 ;
  wire \i_x_r_reg[1] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire \o_v[2][1] ;
  wire o_v_reg_reg_0;
  wire o_v_reg_reg_1;
  wire rst;
  wire \s[2][0]_36 ;
  wire \s[2][1]_36 ;
  wire [35:32]s_msg;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_1 ;
  wire w_in_v_reg;
  wire w_in_v_reg_reg_0;
  wire [35:32]w_msg;
  wire waiting_for_ack_i_4__5_n_0;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_e_v),
        .Q(\e[2][1]_36 ),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair61" *) 
  LUT5 #(
    .INIT(32'hE2E2EAE2)) 
    \e_out_x_reg[0]_i_1__5 
       (.I0(waiting_for_ack_reg[0]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .O(e_msg[34]));
  (* SOFT_HLUTNM = "soft_lutpair62" *) 
  LUT5 #(
    .INIT(32'hEE22EA22)) 
    \e_out_x_reg[1]_i_1__5 
       (.I0(waiting_for_ack_reg[1]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .O(e_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[34]),
        .Q(\e[2][1] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[35]),
        .Q(\e[2][1] [3]),
        .R(rst));
  LUT6 #(
    .INIT(64'hEEEEEAEE22222A22)) 
    \e_out_y_reg[0]_i_1__5 
       (.I0(\s_out_y_reg_reg[1]_1 [0]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .I5(w_msg[32]),
        .O(e_msg[32]));
  LUT6 #(
    .INIT(64'hEEEEEAEE22222A22)) 
    \e_out_y_reg[1]_i_1__5 
       (.I0(\s_out_y_reg_reg[1]_1 [1]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .I5(w_msg[33]),
        .O(e_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[32]),
        .Q(\e[2][1] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[33]),
        .Q(\e[2][1] [1]),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair63" *) 
  LUT4 #(
    .INIT(16'h956A)) 
    \i_x_r[0]_i_1__5 
       (.I0(Q[0]),
        .I1(\i[2][1]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(\o_v[2][1] ),
        .O(\s_out_x_reg_reg[1]_0 [0]));
  (* SOFT_HLUTNM = "soft_lutpair63" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \i_x_r[1]_i_1__5 
       (.I0(Q[1]),
        .I1(\i[2][1]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(\o_v[2][1] ),
        .O(\s_out_x_reg_reg[1]_0 [1]));
  LUT6 #(
    .INIT(64'h595959AAAAAAAAAA)) 
    \i_y_r[1]_i_1__5 
       (.I0(\s_out_y_reg_reg[1]_0 [1]),
        .I1(\i[2][1]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(\s_out_y_reg_reg[1]_0 [0]),
        .O(D));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\s[2][0]_36 ),
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
  LUT6 #(
    .INIT(64'hF011001100110011)) 
    o_v_reg_i_1__5
       (.I0(n_in_v_reg_reg_0),
        .I1(n_in_v_reg_reg_1),
        .I2(o_v_reg_reg_0),
        .I3(n_in_v_reg_reg_2),
        .I4(o_v_reg_reg_1),
        .I5(\i[2][1]_36 ),
        .O(dor_o_v));
  LUT6 #(
    .INIT(64'h0400000004000400)) 
    o_v_reg_i_2__4
       (.I0(n_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(w_in_v_reg),
        .I4(w_msg[33]),
        .I5(w_msg[32]),
        .O(n_in_v_reg_reg_0));
  LUT3 #(
    .INIT(8'h8A)) 
    o_v_reg_i_3__7
       (.I0(n_in_v_reg),
        .I1(n_msg[33]),
        .I2(n_msg[32]),
        .O(n_in_v_reg_reg_1));
  LUT4 #(
    .INIT(16'h5155)) 
    o_v_reg_i_5__5
       (.I0(n_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(w_in_v_reg),
        .O(n_in_v_reg_reg_2));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[2][1] ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(\s[2][1]_36 ),
        .R(rst));
  LUT6 #(
    .INIT(64'hB8B888B8B8B8B8B8)) 
    \s_out_x_reg[0]_i_1__5 
       (.I0(n_msg[34]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[0]),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(w_in_v_reg),
        .O(s_msg[34]));
  LUT6 #(
    .INIT(64'hB8B8BBB8B8B8B8B8)) 
    \s_out_x_reg[1]_i_1__5 
       (.I0(n_msg[35]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[1]),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(w_in_v_reg),
        .O(s_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(Q[1]),
        .R(rst));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__5 
       (.I0(n_msg[32]),
        .I1(n_in_v_reg),
        .I2(w_msg[32]),
        .I3(waiting_for_ack_i_4__5_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [0]),
        .O(s_msg[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__5 
       (.I0(n_msg[33]),
        .I1(n_in_v_reg),
        .I2(w_msg[33]),
        .I3(waiting_for_ack_i_4__5_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [1]),
        .O(s_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(\s_out_y_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(\s_out_y_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    w_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\e[1][1]_36 ),
        .Q(w_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[1][1] [2]),
        .Q(w_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[1][1] [3]),
        .Q(w_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[1][1] [0]),
        .Q(w_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[1][1] [1]),
        .Q(w_msg[33]),
        .R(rst));
  LUT6 #(
    .INIT(64'h8A8A8ABAFFFFFFFF)) 
    waiting_for_ack_i_1__5
       (.I0(w_in_v_reg_reg_0),
        .I1(waiting_for_ack_reg[0]),
        .I2(waiting_for_ack_reg[1]),
        .I3(waiting_for_ack_i_4__5_n_0),
        .I4(n_in_v_reg),
        .I5(\i[2][1]_36 ),
        .O(E));
  (* SOFT_HLUTNM = "soft_lutpair62" *) 
  LUT4 #(
    .INIT(16'h5575)) 
    waiting_for_ack_i_3__5
       (.I0(w_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(n_in_v_reg),
        .O(w_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair61" *) 
  LUT4 #(
    .INIT(16'h0020)) 
    waiting_for_ack_i_4__5
       (.I0(w_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(n_in_v_reg),
        .O(waiting_for_ack_i_4__5_n_0));
  LUT6 #(
    .INIT(64'h0D0D0D0D2FDF2F2F)) 
    waiting_for_ack_i_5__5
       (.I0(waiting_for_ack_reg[1]),
        .I1(waiting_for_ack_reg[0]),
        .I2(w_in_v_reg),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(n_in_v_reg),
        .O(\i_x_r_reg[1] ));
endmodule

(* ORIG_REF_NAME = "torus_switch" *) 
module torus_switch__parameterized6
   (\s[3][1]_36 ,
    \e[3][1]_36 ,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    \s_out_x_reg_reg[1]_0 ,
    Q,
    \i_x_r_reg[1] ,
    D,
    \s_out_y_reg_reg[1]_0 ,
    E,
    w_in_v_reg_reg_0,
    \e[3][1] ,
    rst,
    clk,
    dor_s_v,
    dor_e_v,
    \s[3][0]_36 ,
    \e[2][1]_36 ,
    o_v_reg_reg_0,
    o_v_reg_reg_1,
    \i[3][1]_36 ,
    number_tokens_reg,
    waiting_for_ack_reg,
    \s_out_y_reg_reg[1]_1 ,
    \e[2][1] ,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output \s[3][1]_36 ;
  output \e[3][1]_36 ;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output [1:0]Q;
  output \i_x_r_reg[1] ;
  output [0:0]D;
  output [1:0]\s_out_y_reg_reg[1]_0 ;
  output [0:0]E;
  output w_in_v_reg_reg_0;
  output [3:0]\e[3][1] ;
  input rst;
  input clk;
  input dor_s_v;
  input dor_e_v;
  input \s[3][0]_36 ;
  input \e[2][1]_36 ;
  input o_v_reg_reg_0;
  input o_v_reg_reg_1;
  input \i[3][1]_36 ;
  input [1:0]number_tokens_reg;
  input [1:0]waiting_for_ack_reg;
  input [1:0]\s_out_y_reg_reg[1]_1 ;
  input [3:0]\e[2][1] ;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire [3:0]\e[2][1] ;
  wire \e[2][1]_36 ;
  wire [3:0]\e[3][1] ;
  wire \e[3][1]_36 ;
  wire [35:32]e_msg;
  wire \i[3][1]_36 ;
  wire \i_x_r_reg[1] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire \o_v[3][1] ;
  wire o_v_reg_reg_0;
  wire o_v_reg_reg_1;
  wire rst;
  wire \s[3][0]_36 ;
  wire \s[3][1]_36 ;
  wire [35:32]s_msg;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_1 ;
  wire w_in_v_reg;
  wire w_in_v_reg_reg_0;
  wire [35:32]w_msg;
  wire waiting_for_ack_i_4__6_n_0;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_e_v),
        .Q(\e[3][1]_36 ),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair70" *) 
  LUT5 #(
    .INIT(32'hEE22AE22)) 
    \e_out_x_reg[0]_i_1__6 
       (.I0(waiting_for_ack_reg[0]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .O(e_msg[34]));
  (* SOFT_HLUTNM = "soft_lutpair71" *) 
  LUT5 #(
    .INIT(32'hE2E2A2E2)) 
    \e_out_x_reg[1]_i_1__6 
       (.I0(waiting_for_ack_reg[1]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .O(e_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[34]),
        .Q(\e[3][1] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[35]),
        .Q(\e[3][1] [3]),
        .R(rst));
  LUT6 #(
    .INIT(64'hEEEEAEEE2222A222)) 
    \e_out_y_reg[0]_i_1__6 
       (.I0(\s_out_y_reg_reg[1]_1 [0]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .I5(w_msg[32]),
        .O(e_msg[32]));
  LUT6 #(
    .INIT(64'hEEEEAEEE2222A222)) 
    \e_out_y_reg[1]_i_1__6 
       (.I0(\s_out_y_reg_reg[1]_1 [1]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .I5(w_msg[33]),
        .O(e_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[32]),
        .Q(\e[3][1] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[33]),
        .Q(\e[3][1] [1]),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair72" *) 
  LUT4 #(
    .INIT(16'h956A)) 
    \i_x_r[0]_i_1__6 
       (.I0(Q[0]),
        .I1(\i[3][1]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(\o_v[3][1] ),
        .O(\s_out_x_reg_reg[1]_0 [0]));
  (* SOFT_HLUTNM = "soft_lutpair72" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \i_x_r[1]_i_1__6 
       (.I0(Q[1]),
        .I1(\i[3][1]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(\o_v[3][1] ),
        .O(\s_out_x_reg_reg[1]_0 [1]));
  LUT6 #(
    .INIT(64'h595959AAAAAAAAAA)) 
    \i_y_r[1]_i_1__6 
       (.I0(\s_out_y_reg_reg[1]_0 [1]),
        .I1(\i[3][1]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(\s_out_y_reg_reg[1]_0 [0]),
        .O(D));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\s[3][0]_36 ),
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
  LUT6 #(
    .INIT(64'hF011001100110011)) 
    o_v_reg_i_1__6
       (.I0(n_in_v_reg_reg_0),
        .I1(n_in_v_reg_reg_1),
        .I2(o_v_reg_reg_0),
        .I3(n_in_v_reg_reg_2),
        .I4(o_v_reg_reg_1),
        .I5(\i[3][1]_36 ),
        .O(dor_o_v));
  LUT6 #(
    .INIT(64'h4000000040004000)) 
    o_v_reg_i_2__5
       (.I0(n_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(w_in_v_reg),
        .I4(w_msg[33]),
        .I5(w_msg[32]),
        .O(n_in_v_reg_reg_0));
  LUT3 #(
    .INIT(8'h8A)) 
    o_v_reg_i_3__8
       (.I0(n_in_v_reg),
        .I1(n_msg[33]),
        .I2(n_msg[32]),
        .O(n_in_v_reg_reg_1));
  LUT4 #(
    .INIT(16'h1555)) 
    o_v_reg_i_5__6
       (.I0(n_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(w_in_v_reg),
        .O(n_in_v_reg_reg_2));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[3][1] ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(\s[3][1]_36 ),
        .R(rst));
  LUT6 #(
    .INIT(64'hBBB8B8B8B8B8B8B8)) 
    \s_out_x_reg[0]_i_1__6 
       (.I0(n_msg[34]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[0]),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(w_in_v_reg),
        .O(s_msg[34]));
  LUT6 #(
    .INIT(64'hBBB8B8B8B8B8B8B8)) 
    \s_out_x_reg[1]_i_1__6 
       (.I0(n_msg[35]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[1]),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(w_in_v_reg),
        .O(s_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(Q[1]),
        .R(rst));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__6 
       (.I0(n_msg[32]),
        .I1(n_in_v_reg),
        .I2(w_msg[32]),
        .I3(waiting_for_ack_i_4__6_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [0]),
        .O(s_msg[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__6 
       (.I0(n_msg[33]),
        .I1(n_in_v_reg),
        .I2(w_msg[33]),
        .I3(waiting_for_ack_i_4__6_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [1]),
        .O(s_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(\s_out_y_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(\s_out_y_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    w_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\e[2][1]_36 ),
        .Q(w_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[2][1] [2]),
        .Q(w_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[2][1] [3]),
        .Q(w_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[2][1] [0]),
        .Q(w_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[2][1] [1]),
        .Q(w_msg[33]),
        .R(rst));
  LUT6 #(
    .INIT(64'h2A2A2AEAFFFFFFFF)) 
    waiting_for_ack_i_1__6
       (.I0(w_in_v_reg_reg_0),
        .I1(waiting_for_ack_reg[0]),
        .I2(waiting_for_ack_reg[1]),
        .I3(waiting_for_ack_i_4__6_n_0),
        .I4(n_in_v_reg),
        .I5(\i[3][1]_36 ),
        .O(E));
  (* SOFT_HLUTNM = "soft_lutpair71" *) 
  LUT4 #(
    .INIT(16'h55D5)) 
    waiting_for_ack_i_3__6
       (.I0(w_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(n_in_v_reg),
        .O(w_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair70" *) 
  LUT4 #(
    .INIT(16'h0080)) 
    waiting_for_ack_i_4__6
       (.I0(w_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(n_in_v_reg),
        .O(waiting_for_ack_i_4__6_n_0));
  LUT6 #(
    .INIT(64'h070707077F8F8F8F)) 
    waiting_for_ack_i_5__6
       (.I0(waiting_for_ack_reg[1]),
        .I1(waiting_for_ack_reg[0]),
        .I2(w_in_v_reg),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(n_in_v_reg),
        .O(\i_x_r_reg[1] ));
endmodule

(* ORIG_REF_NAME = "torus_switch" *) 
module torus_switch__parameterized7
   (\s[0][2]_36 ,
    \e[0][2]_36 ,
    \s_out_x_reg_reg[1]_0 ,
    \s_out_x_reg_reg[1]_1 ,
    \i_x_r_reg[1] ,
    D,
    \s_out_y_reg_reg[1]_0 ,
    E,
    w_in_v_reg_reg_0,
    \e[0][2] ,
    rst,
    clk,
    dor_e_v,
    \s[0][1]_36 ,
    \e[3][2]_36 ,
    s_out_v_reg_reg_0,
    o_v_reg_reg_0,
    Q,
    \i[0][2]_36 ,
    number_tokens_reg,
    waiting_for_ack_reg,
    \s_out_y_reg_reg[1]_1 ,
    \e[3][2] ,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output \s[0][2]_36 ;
  output \e[0][2]_36 ;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output [1:0]\s_out_x_reg_reg[1]_1 ;
  output \i_x_r_reg[1] ;
  output [0:0]D;
  output [1:0]\s_out_y_reg_reg[1]_0 ;
  output [0:0]E;
  output w_in_v_reg_reg_0;
  output [3:0]\e[0][2] ;
  input rst;
  input clk;
  input dor_e_v;
  input \s[0][1]_36 ;
  input \e[3][2]_36 ;
  input s_out_v_reg_reg_0;
  input o_v_reg_reg_0;
  input [1:0]Q;
  input \i[0][2]_36 ;
  input [1:0]number_tokens_reg;
  input waiting_for_ack_reg;
  input [1:0]\s_out_y_reg_reg[1]_1 ;
  input [3:0]\e[3][2] ;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire [3:0]\e[0][2] ;
  wire \e[0][2]_36 ;
  wire [3:0]\e[3][2] ;
  wire \e[3][2]_36 ;
  wire [35:32]e_msg;
  wire \i[0][2]_36 ;
  wire \i_x_r_reg[1] ;
  wire n_in_v_reg;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire \o_v[0][2] ;
  wire o_v_reg_i_2__6_n_0;
  wire o_v_reg_i_3__0_n_0;
  wire o_v_reg_reg_0;
  wire rst;
  wire \s[0][1]_36 ;
  wire \s[0][2]_36 ;
  wire [35:32]s_msg;
  wire s_out_v_reg_i_2_n_0;
  wire s_out_v_reg_reg_0;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_x_reg_reg[1]_1 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_1 ;
  wire w_in_v_reg;
  wire w_in_v_reg_reg_0;
  wire [35:32]w_msg;
  wire waiting_for_ack_reg;

  (* SOFT_HLUTNM = "soft_lutpair81" *) 
  LUT4 #(
    .INIT(16'hAAA8)) 
    e_out_v_reg_i_2
       (.I0(w_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(n_in_v_reg),
        .O(w_in_v_reg_reg_0));
  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_e_v),
        .Q(\e[0][2]_36 ),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair80" *) 
  LUT5 #(
    .INIT(32'hDDDF8888)) 
    \e_out_x_reg[0]_i_1__7 
       (.I0(w_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(n_in_v_reg),
        .I4(Q[0]),
        .O(e_msg[34]));
  (* SOFT_HLUTNM = "soft_lutpair81" *) 
  LUT5 #(
    .INIT(32'hF5F7A0A0)) 
    \e_out_x_reg[1]_i_1__7 
       (.I0(w_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(n_in_v_reg),
        .I4(Q[1]),
        .O(e_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[34]),
        .Q(\e[0][2] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[35]),
        .Q(\e[0][2] [3]),
        .R(rst));
  LUT6 #(
    .INIT(64'hBBBBBBBF88888880)) 
    \e_out_y_reg[0]_i_1__7 
       (.I0(w_msg[32]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .I5(\s_out_y_reg_reg[1]_1 [0]),
        .O(e_msg[32]));
  LUT6 #(
    .INIT(64'hBBBBBBBF88888880)) 
    \e_out_y_reg[1]_i_1__7 
       (.I0(w_msg[33]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .I5(\s_out_y_reg_reg[1]_1 [1]),
        .O(e_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[32]),
        .Q(\e[0][2] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[33]),
        .Q(\e[0][2] [1]),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair82" *) 
  LUT4 #(
    .INIT(16'h59A6)) 
    \i_x_r[0]_i_1__7 
       (.I0(\s_out_x_reg_reg[1]_1 [0]),
        .I1(\i[0][2]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(\o_v[0][2] ),
        .O(\s_out_x_reg_reg[1]_0 [0]));
  (* SOFT_HLUTNM = "soft_lutpair82" *) 
  LUT4 #(
    .INIT(16'hA6AA)) 
    \i_x_r[1]_i_1__7 
       (.I0(\s_out_x_reg_reg[1]_1 [1]),
        .I1(\i[0][2]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(\o_v[0][2] ),
        .O(\s_out_x_reg_reg[1]_0 [1]));
  LUT6 #(
    .INIT(64'h959595AAAAAAAAAA)) 
    \i_y_r[1]_i_1__7 
       (.I0(\s_out_y_reg_reg[1]_0 [1]),
        .I1(\i_x_r_reg[1] ),
        .I2(\i[0][2]_36 ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(\s_out_y_reg_reg[1]_0 [0]),
        .O(D));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\s[0][1]_36 ),
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
  LUT6 #(
    .INIT(64'h020F02FF020F0200)) 
    o_v_reg_i_1__7
       (.I0(n_msg[33]),
        .I1(n_msg[32]),
        .I2(o_v_reg_i_2__6_n_0),
        .I3(n_in_v_reg),
        .I4(o_v_reg_i_3__0_n_0),
        .I5(o_v_reg_reg_0),
        .O(dor_o_v));
  LUT6 #(
    .INIT(64'h0100000001000100)) 
    o_v_reg_i_2__6
       (.I0(n_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(w_in_v_reg),
        .I4(w_msg[32]),
        .I5(w_msg[33]),
        .O(o_v_reg_i_2__6_n_0));
  (* SOFT_HLUTNM = "soft_lutpair80" *) 
  LUT4 #(
    .INIT(16'h0002)) 
    o_v_reg_i_3__0
       (.I0(w_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(n_in_v_reg),
        .O(o_v_reg_i_3__0_n_0));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[0][2] ),
        .R(rst));
  LUT6 #(
    .INIT(64'hEAEEEAEEFFFFEAEE)) 
    s_out_v_reg_i_1__7
       (.I0(o_v_reg_i_2__6_n_0),
        .I1(n_in_v_reg),
        .I2(n_msg[32]),
        .I3(n_msg[33]),
        .I4(s_out_v_reg_i_2_n_0),
        .I5(s_out_v_reg_reg_0),
        .O(dor_s_v));
  LUT6 #(
    .INIT(64'h0000000011111101)) 
    s_out_v_reg_i_2
       (.I0(Q[0]),
        .I1(Q[1]),
        .I2(w_in_v_reg),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(n_in_v_reg),
        .O(s_out_v_reg_i_2_n_0));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(\s[0][2]_36 ),
        .R(rst));
  LUT6 #(
    .INIT(64'hB8B8B888B8B8B8B8)) 
    \s_out_x_reg[0]_i_1__7 
       (.I0(n_msg[34]),
        .I1(n_in_v_reg),
        .I2(Q[0]),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(w_in_v_reg),
        .O(s_msg[34]));
  LUT6 #(
    .INIT(64'hB8B8B888B8B8B8B8)) 
    \s_out_x_reg[1]_i_1__7 
       (.I0(n_msg[35]),
        .I1(n_in_v_reg),
        .I2(Q[1]),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(w_in_v_reg),
        .O(s_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(\s_out_x_reg_reg[1]_1 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(\s_out_x_reg_reg[1]_1 [1]),
        .R(rst));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__7 
       (.I0(n_msg[32]),
        .I1(n_in_v_reg),
        .I2(w_msg[32]),
        .I3(o_v_reg_i_3__0_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [0]),
        .O(s_msg[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__7 
       (.I0(n_msg[33]),
        .I1(n_in_v_reg),
        .I2(w_msg[33]),
        .I3(o_v_reg_i_3__0_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [1]),
        .O(s_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(\s_out_y_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(\s_out_y_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    w_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\e[3][2]_36 ),
        .Q(w_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[3][2] [2]),
        .Q(w_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[3][2] [3]),
        .Q(w_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[3][2] [0]),
        .Q(w_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[3][2] [1]),
        .Q(w_msg[33]),
        .R(rst));
  LUT6 #(
    .INIT(64'h777577775557FFFF)) 
    waiting_for_ack_i_1__7
       (.I0(\i[0][2]_36 ),
        .I1(n_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(w_in_v_reg),
        .I5(waiting_for_ack_reg),
        .O(E));
  LUT6 #(
    .INIT(64'hF1F1F1F1E0E0E010)) 
    waiting_for_ack_i_4__7
       (.I0(Q[1]),
        .I1(Q[0]),
        .I2(w_in_v_reg),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(n_in_v_reg),
        .O(\i_x_r_reg[1] ));
endmodule

(* ORIG_REF_NAME = "torus_switch" *) 
module torus_switch__parameterized8
   (\s[1][2]_36 ,
    \e[1][2]_36 ,
    n_in_v_reg_reg_0,
    n_in_v_reg_reg_1,
    n_in_v_reg_reg_2,
    \s_out_x_reg_reg[1]_0 ,
    Q,
    \i_x_r_reg[0] ,
    D,
    \s_out_y_reg_reg[1]_0 ,
    E,
    w_in_v_reg_reg_0,
    \e[1][2] ,
    rst,
    clk,
    dor_s_v,
    dor_e_v,
    \s[1][1]_36 ,
    \e[0][2]_36 ,
    o_v_reg_reg_0,
    o_v_reg_reg_1,
    \i[1][2]_36 ,
    number_tokens_reg,
    waiting_for_ack_reg,
    \s_out_y_reg_reg[1]_1 ,
    \e[0][2] ,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output \s[1][2]_36 ;
  output \e[1][2]_36 ;
  output n_in_v_reg_reg_0;
  output n_in_v_reg_reg_1;
  output n_in_v_reg_reg_2;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output [1:0]Q;
  output \i_x_r_reg[0] ;
  output [0:0]D;
  output [1:0]\s_out_y_reg_reg[1]_0 ;
  output [0:0]E;
  output w_in_v_reg_reg_0;
  output [3:0]\e[1][2] ;
  input rst;
  input clk;
  input dor_s_v;
  input dor_e_v;
  input \s[1][1]_36 ;
  input \e[0][2]_36 ;
  input o_v_reg_reg_0;
  input o_v_reg_reg_1;
  input \i[1][2]_36 ;
  input [1:0]number_tokens_reg;
  input [1:0]waiting_for_ack_reg;
  input [1:0]\s_out_y_reg_reg[1]_1 ;
  input [3:0]\e[0][2] ;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire [3:0]\e[0][2] ;
  wire \e[0][2]_36 ;
  wire [3:0]\e[1][2] ;
  wire \e[1][2]_36 ;
  wire [35:32]e_msg;
  wire \i[1][2]_36 ;
  wire \i_x_r_reg[0] ;
  wire n_in_v_reg;
  wire n_in_v_reg_reg_0;
  wire n_in_v_reg_reg_1;
  wire n_in_v_reg_reg_2;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire \o_v[1][2] ;
  wire o_v_reg_reg_0;
  wire o_v_reg_reg_1;
  wire rst;
  wire \s[1][1]_36 ;
  wire \s[1][2]_36 ;
  wire [35:32]s_msg;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_1 ;
  wire w_in_v_reg;
  wire w_in_v_reg_reg_0;
  wire [35:32]w_msg;
  wire waiting_for_ack_i_4__8_n_0;
  wire [1:0]waiting_for_ack_reg;

  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_e_v),
        .Q(\e[1][2]_36 ),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair89" *) 
  LUT5 #(
    .INIT(32'hEE22EA22)) 
    \e_out_x_reg[0]_i_1__8 
       (.I0(waiting_for_ack_reg[0]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .O(e_msg[34]));
  (* SOFT_HLUTNM = "soft_lutpair90" *) 
  LUT5 #(
    .INIT(32'hE2E2EAE2)) 
    \e_out_x_reg[1]_i_1__8 
       (.I0(waiting_for_ack_reg[1]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .O(e_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[34]),
        .Q(\e[1][2] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[35]),
        .Q(\e[1][2] [3]),
        .R(rst));
  LUT6 #(
    .INIT(64'hEEEEEAEE22222A22)) 
    \e_out_y_reg[0]_i_1__8 
       (.I0(\s_out_y_reg_reg[1]_1 [0]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .I5(w_msg[32]),
        .O(e_msg[32]));
  LUT6 #(
    .INIT(64'hEEEEEAEE22222A22)) 
    \e_out_y_reg[1]_i_1__8 
       (.I0(\s_out_y_reg_reg[1]_1 [1]),
        .I1(w_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(n_in_v_reg),
        .I5(w_msg[33]),
        .O(e_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[32]),
        .Q(\e[1][2] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[33]),
        .Q(\e[1][2] [1]),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair91" *) 
  LUT4 #(
    .INIT(16'h956A)) 
    \i_x_r[0]_i_1__8 
       (.I0(Q[0]),
        .I1(\i[1][2]_36 ),
        .I2(\i_x_r_reg[0] ),
        .I3(\o_v[1][2] ),
        .O(\s_out_x_reg_reg[1]_0 [0]));
  (* SOFT_HLUTNM = "soft_lutpair91" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \i_x_r[1]_i_1__8 
       (.I0(Q[1]),
        .I1(\i[1][2]_36 ),
        .I2(\i_x_r_reg[0] ),
        .I3(\o_v[1][2] ),
        .O(\s_out_x_reg_reg[1]_0 [1]));
  LUT6 #(
    .INIT(64'h595959AAAAAAAAAA)) 
    \i_y_r[1]_i_1__8 
       (.I0(\s_out_y_reg_reg[1]_0 [1]),
        .I1(\i[1][2]_36 ),
        .I2(\i_x_r_reg[0] ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(\s_out_y_reg_reg[1]_0 [0]),
        .O(D));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\s[1][1]_36 ),
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
  LUT6 #(
    .INIT(64'hF011001100110011)) 
    o_v_reg_i_1__8
       (.I0(n_in_v_reg_reg_0),
        .I1(n_in_v_reg_reg_1),
        .I2(o_v_reg_reg_0),
        .I3(n_in_v_reg_reg_2),
        .I4(o_v_reg_reg_1),
        .I5(\i[1][2]_36 ),
        .O(dor_o_v));
  LUT6 #(
    .INIT(64'h0400000004000400)) 
    o_v_reg_i_2__7
       (.I0(n_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(w_in_v_reg),
        .I4(w_msg[32]),
        .I5(w_msg[33]),
        .O(n_in_v_reg_reg_0));
  LUT3 #(
    .INIT(8'h8A)) 
    o_v_reg_i_3__9
       (.I0(n_in_v_reg),
        .I1(n_msg[32]),
        .I2(n_msg[33]),
        .O(n_in_v_reg_reg_1));
  LUT4 #(
    .INIT(16'h5155)) 
    o_v_reg_i_5__7
       (.I0(n_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(w_in_v_reg),
        .O(n_in_v_reg_reg_2));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[1][2] ),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(\s[1][2]_36 ),
        .R(rst));
  LUT6 #(
    .INIT(64'hB8B8BBB8B8B8B8B8)) 
    \s_out_x_reg[0]_i_1__8 
       (.I0(n_msg[34]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[0]),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(w_in_v_reg),
        .O(s_msg[34]));
  LUT6 #(
    .INIT(64'hB8B888B8B8B8B8B8)) 
    \s_out_x_reg[1]_i_1__8 
       (.I0(n_msg[35]),
        .I1(n_in_v_reg),
        .I2(waiting_for_ack_reg[1]),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(w_in_v_reg),
        .O(s_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(Q[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(Q[1]),
        .R(rst));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__8 
       (.I0(n_msg[32]),
        .I1(n_in_v_reg),
        .I2(w_msg[32]),
        .I3(waiting_for_ack_i_4__8_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [0]),
        .O(s_msg[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__8 
       (.I0(n_msg[33]),
        .I1(n_in_v_reg),
        .I2(w_msg[33]),
        .I3(waiting_for_ack_i_4__8_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [1]),
        .O(s_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(\s_out_y_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(\s_out_y_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    w_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\e[0][2]_36 ),
        .Q(w_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[0][2] [2]),
        .Q(w_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[0][2] [3]),
        .Q(w_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[0][2] [0]),
        .Q(w_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[0][2] [1]),
        .Q(w_msg[33]),
        .R(rst));
  LUT6 #(
    .INIT(64'h8A8A8ABAFFFFFFFF)) 
    waiting_for_ack_i_1__8
       (.I0(w_in_v_reg_reg_0),
        .I1(waiting_for_ack_reg[1]),
        .I2(waiting_for_ack_reg[0]),
        .I3(waiting_for_ack_i_4__8_n_0),
        .I4(n_in_v_reg),
        .I5(\i[1][2]_36 ),
        .O(E));
  (* SOFT_HLUTNM = "soft_lutpair90" *) 
  LUT4 #(
    .INIT(16'h5575)) 
    waiting_for_ack_i_3__8
       (.I0(w_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(n_in_v_reg),
        .O(w_in_v_reg_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair89" *) 
  LUT4 #(
    .INIT(16'h0020)) 
    waiting_for_ack_i_4__8
       (.I0(w_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(n_in_v_reg),
        .O(waiting_for_ack_i_4__8_n_0));
  LUT6 #(
    .INIT(64'h0D0D0D0D2FDF2F2F)) 
    waiting_for_ack_i_5__7
       (.I0(waiting_for_ack_reg[0]),
        .I1(waiting_for_ack_reg[1]),
        .I2(w_in_v_reg),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(n_in_v_reg),
        .O(\i_x_r_reg[0] ));
endmodule

(* ORIG_REF_NAME = "torus_switch" *) 
module torus_switch__parameterized9
   (\s[2][2]_36 ,
    \e[2][2]_36 ,
    \s_out_x_reg_reg[1]_0 ,
    \s_out_x_reg_reg[1]_1 ,
    \i_x_r_reg[1] ,
    D,
    \s_out_y_reg_reg[1]_0 ,
    E,
    w_in_v_reg_reg_0,
    \e[2][2] ,
    rst,
    clk,
    dor_e_v,
    \s[2][1]_36 ,
    \e[1][2]_36 ,
    s_out_v_reg_reg_0,
    o_v_reg_reg_0,
    Q,
    \i[2][2]_36 ,
    number_tokens_reg,
    waiting_for_ack_reg,
    \s_out_y_reg_reg[1]_1 ,
    \e[1][2] ,
    \n_in_y_reg_reg[1]_0 ,
    \n_in_x_reg_reg[1]_0 );
  output \s[2][2]_36 ;
  output \e[2][2]_36 ;
  output [1:0]\s_out_x_reg_reg[1]_0 ;
  output [1:0]\s_out_x_reg_reg[1]_1 ;
  output \i_x_r_reg[1] ;
  output [0:0]D;
  output [1:0]\s_out_y_reg_reg[1]_0 ;
  output [0:0]E;
  output w_in_v_reg_reg_0;
  output [3:0]\e[2][2] ;
  input rst;
  input clk;
  input dor_e_v;
  input \s[2][1]_36 ;
  input \e[1][2]_36 ;
  input s_out_v_reg_reg_0;
  input o_v_reg_reg_0;
  input [1:0]Q;
  input \i[2][2]_36 ;
  input [1:0]number_tokens_reg;
  input waiting_for_ack_reg;
  input [1:0]\s_out_y_reg_reg[1]_1 ;
  input [3:0]\e[1][2] ;
  input [1:0]\n_in_y_reg_reg[1]_0 ;
  input [1:0]\n_in_x_reg_reg[1]_0 ;

  wire [0:0]D;
  wire [0:0]E;
  wire [1:0]Q;
  wire clk;
  wire dor_e_v;
  wire dor_o_v;
  wire dor_s_v;
  wire [3:0]\e[1][2] ;
  wire \e[1][2]_36 ;
  wire [3:0]\e[2][2] ;
  wire \e[2][2]_36 ;
  wire [35:32]e_msg;
  wire \i[2][2]_36 ;
  wire \i_x_r_reg[1] ;
  wire n_in_v_reg;
  wire [1:0]\n_in_x_reg_reg[1]_0 ;
  wire [1:0]\n_in_y_reg_reg[1]_0 ;
  wire [35:32]n_msg;
  wire [1:0]number_tokens_reg;
  wire \o_v[2][2] ;
  wire o_v_reg_i_2__8_n_0;
  wire o_v_reg_i_3__1_n_0;
  wire o_v_reg_reg_0;
  wire rst;
  wire \s[2][1]_36 ;
  wire \s[2][2]_36 ;
  wire [35:32]s_msg;
  wire s_out_v_reg_i_2__0_n_0;
  wire s_out_v_reg_reg_0;
  wire [1:0]\s_out_x_reg_reg[1]_0 ;
  wire [1:0]\s_out_x_reg_reg[1]_1 ;
  wire [1:0]\s_out_y_reg_reg[1]_0 ;
  wire [1:0]\s_out_y_reg_reg[1]_1 ;
  wire w_in_v_reg;
  wire w_in_v_reg_reg_0;
  wire [35:32]w_msg;
  wire waiting_for_ack_reg;

  (* SOFT_HLUTNM = "soft_lutpair100" *) 
  LUT4 #(
    .INIT(16'hAA8A)) 
    e_out_v_reg_i_2__0
       (.I0(w_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(n_in_v_reg),
        .O(w_in_v_reg_reg_0));
  FDRE #(
    .INIT(1'b0)) 
    e_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_e_v),
        .Q(\e[2][2]_36 ),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair99" *) 
  LUT5 #(
    .INIT(32'hDDFD8888)) 
    \e_out_x_reg[0]_i_1__9 
       (.I0(w_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(n_in_v_reg),
        .I4(Q[0]),
        .O(e_msg[34]));
  (* SOFT_HLUTNM = "soft_lutpair100" *) 
  LUT5 #(
    .INIT(32'hF5F5A080)) 
    \e_out_x_reg[1]_i_1__9 
       (.I0(w_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(n_in_v_reg),
        .I4(Q[1]),
        .O(e_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[34]),
        .Q(\e[2][2] [2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[35]),
        .Q(\e[2][2] [3]),
        .R(rst));
  LUT6 #(
    .INIT(64'hBBBBBFBB88888088)) 
    \e_out_y_reg[0]_i_1__9 
       (.I0(w_msg[32]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .I5(\s_out_y_reg_reg[1]_1 [0]),
        .O(e_msg[32]));
  LUT6 #(
    .INIT(64'hBBBBBFBB88888088)) 
    \e_out_y_reg[1]_i_1__9 
       (.I0(w_msg[33]),
        .I1(w_in_v_reg),
        .I2(w_msg[34]),
        .I3(w_msg[35]),
        .I4(n_in_v_reg),
        .I5(\s_out_y_reg_reg[1]_1 [1]),
        .O(e_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[32]),
        .Q(\e[2][2] [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \e_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(e_msg[33]),
        .Q(\e[2][2] [1]),
        .R(rst));
  (* SOFT_HLUTNM = "soft_lutpair101" *) 
  LUT4 #(
    .INIT(16'h59A6)) 
    \i_x_r[0]_i_1__9 
       (.I0(\s_out_x_reg_reg[1]_1 [0]),
        .I1(\i[2][2]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(\o_v[2][2] ),
        .O(\s_out_x_reg_reg[1]_0 [0]));
  (* SOFT_HLUTNM = "soft_lutpair101" *) 
  LUT4 #(
    .INIT(16'hA6AA)) 
    \i_x_r[1]_i_1__9 
       (.I0(\s_out_x_reg_reg[1]_1 [1]),
        .I1(\i[2][2]_36 ),
        .I2(\i_x_r_reg[1] ),
        .I3(\o_v[2][2] ),
        .O(\s_out_x_reg_reg[1]_0 [1]));
  LUT6 #(
    .INIT(64'h959595AAAAAAAAAA)) 
    \i_y_r[1]_i_1__9 
       (.I0(\s_out_y_reg_reg[1]_0 [1]),
        .I1(\i_x_r_reg[1] ),
        .I2(\i[2][2]_36 ),
        .I3(number_tokens_reg[1]),
        .I4(number_tokens_reg[0]),
        .I5(\s_out_y_reg_reg[1]_0 [0]),
        .O(D));
  FDRE #(
    .INIT(1'b0)) 
    n_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\s[2][1]_36 ),
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
  LUT6 #(
    .INIT(64'h020F02FF020F0200)) 
    o_v_reg_i_1__9
       (.I0(n_msg[33]),
        .I1(n_msg[32]),
        .I2(o_v_reg_i_2__8_n_0),
        .I3(n_in_v_reg),
        .I4(o_v_reg_i_3__1_n_0),
        .I5(o_v_reg_reg_0),
        .O(dor_o_v));
  LUT6 #(
    .INIT(64'h0400000004000400)) 
    o_v_reg_i_2__8
       (.I0(n_in_v_reg),
        .I1(w_msg[35]),
        .I2(w_msg[34]),
        .I3(w_in_v_reg),
        .I4(w_msg[32]),
        .I5(w_msg[33]),
        .O(o_v_reg_i_2__8_n_0));
  (* SOFT_HLUTNM = "soft_lutpair99" *) 
  LUT4 #(
    .INIT(16'h0020)) 
    o_v_reg_i_3__1
       (.I0(w_in_v_reg),
        .I1(w_msg[34]),
        .I2(w_msg[35]),
        .I3(n_in_v_reg),
        .O(o_v_reg_i_3__1_n_0));
  FDRE #(
    .INIT(1'b0)) 
    o_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_o_v),
        .Q(\o_v[2][2] ),
        .R(rst));
  LUT6 #(
    .INIT(64'hEAEEEAEEFFFFEAEE)) 
    s_out_v_reg_i_1__9
       (.I0(o_v_reg_i_2__8_n_0),
        .I1(n_in_v_reg),
        .I2(n_msg[32]),
        .I3(n_msg[33]),
        .I4(s_out_v_reg_i_2__0_n_0),
        .I5(s_out_v_reg_reg_0),
        .O(dor_s_v));
  LUT6 #(
    .INIT(64'h0000000044044444)) 
    s_out_v_reg_i_2__0
       (.I0(Q[0]),
        .I1(Q[1]),
        .I2(w_in_v_reg),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(n_in_v_reg),
        .O(s_out_v_reg_i_2__0_n_0));
  FDRE #(
    .INIT(1'b0)) 
    s_out_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(dor_s_v),
        .Q(\s[2][2]_36 ),
        .R(rst));
  LUT6 #(
    .INIT(64'hB8B888B8B8B8B8B8)) 
    \s_out_x_reg[0]_i_1__9 
       (.I0(n_msg[34]),
        .I1(n_in_v_reg),
        .I2(Q[0]),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(w_in_v_reg),
        .O(s_msg[34]));
  LUT6 #(
    .INIT(64'hB8B8BBB8B8B8B8B8)) 
    \s_out_x_reg[1]_i_1__9 
       (.I0(n_msg[35]),
        .I1(n_in_v_reg),
        .I2(Q[1]),
        .I3(w_msg[35]),
        .I4(w_msg[34]),
        .I5(w_in_v_reg),
        .O(s_msg[35]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[34]),
        .Q(\s_out_x_reg_reg[1]_1 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[35]),
        .Q(\s_out_x_reg_reg[1]_1 [1]),
        .R(rst));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[0]_i_1__9 
       (.I0(n_msg[32]),
        .I1(n_in_v_reg),
        .I2(w_msg[32]),
        .I3(o_v_reg_i_3__1_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [0]),
        .O(s_msg[32]));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \s_out_y_reg[1]_i_1__9 
       (.I0(n_msg[33]),
        .I1(n_in_v_reg),
        .I2(w_msg[33]),
        .I3(o_v_reg_i_3__1_n_0),
        .I4(\s_out_y_reg_reg[1]_1 [1]),
        .O(s_msg[33]));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[32]),
        .Q(\s_out_y_reg_reg[1]_0 [0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_out_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(s_msg[33]),
        .Q(\s_out_y_reg_reg[1]_0 [1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    w_in_v_reg_reg
       (.C(clk),
        .CE(1'b1),
        .D(\e[1][2]_36 ),
        .Q(w_in_v_reg),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[1][2] [2]),
        .Q(w_msg[34]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_x_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[1][2] [3]),
        .Q(w_msg[35]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[1][2] [0]),
        .Q(w_msg[32]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \w_in_y_reg_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(\e[1][2] [1]),
        .Q(w_msg[33]),
        .R(rst));
  LUT6 #(
    .INIT(64'h775777775575FFFF)) 
    waiting_for_ack_i_1__9
       (.I0(\i[2][2]_36 ),
        .I1(n_in_v_reg),
        .I2(w_msg[35]),
        .I3(w_msg[34]),
        .I4(w_in_v_reg),
        .I5(waiting_for_ack_reg),
        .O(E));
  LUT6 #(
    .INIT(64'hF2F2F2F2D020D0D0)) 
    waiting_for_ack_i_4__9
       (.I0(Q[1]),
        .I1(Q[0]),
        .I2(w_in_v_reg),
        .I3(w_msg[34]),
        .I4(w_msg[35]),
        .I5(n_in_v_reg),
        .O(\i_x_r_reg[1] ));
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
