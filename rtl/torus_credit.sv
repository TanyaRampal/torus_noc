module torus_credit #(
  parameter SIGMA = 3,   // max burst length, (token bucket depth)
  parameter RATE  = 20,  // one packet every RATE CYCLES
	parameter VC_W  = 3,
	parameter X_W   = 2,
	parameter Y_W   = 2,
	parameter D_W   = 128,
  parameter N_PACKETS = 128,
  // NoC Size
  parameter X_MAX		  = 1<<X_W,
  parameter Y_MAX		  = 1<<Y_W
) (
  input  wire clk,
  input  wire rst,
  output wire out_v,
  output wire [D_W-1:0] out,
  output done
);

    `define Msg_W (X_W+Y_W+D_W+1)
    `define Msg [`Msg_W-1:0]

    `define x_addr [X_W+Y_W+D_W-1:Y_W+D_W]
    `define y_addr [Y_W+D_W-1:D_W]
    `define data   [D_W-1:0]
    `define valid  [X_W+Y_W+D_W]
    `define x1 ((x+X_MAX-1)%X_MAX)
    `define xp1 ((x+1)%X_MAX)

    // XY + PE connections
    wire `Msg i [X_MAX][Y_MAX];
    wire `Msg s [X_MAX][Y_MAX];
    wire `Msg n [X_MAX][Y_MAX];

    // tx outputs
    wire `Msg s_tx [X_MAX][Y_MAX];

    // PE interface
    wire o_v [X_MAX][Y_MAX];
    wire i_ack [X_MAX][Y_MAX];

    // i_vc
    (* keep="soft" *)
    wire [VC_W-1:0] i_vc [X_MAX][Y_MAX];

    // done signals
    wire done_pe [X_MAX][Y_MAX];
    wire done_switch [X_MAX][Y_MAX];

    genvar x, y, j;
    generate for (y = 0; y < Y_MAX; y = y + 1) begin : yss
      for (x = 0; x < X_MAX; x = x + 1) begin : xss
        noc_if #(.D_W(D_W), .X_W(X_W), .Y_W(Y_W), .VC_W(VC_W))
        noc_if_inst_conn (.clk(clk), .rst(rst));
      end
    end endgenerate

    generate for (y = 0; y < Y_MAX; y = y + 1) begin : ys
        for (x = 0; x < X_MAX; x = x + 1) begin : xs
          // your switch and client code here
          // Instantiate client - will generate message signals that go in torus switch
        client #(
          .SIGMA(SIGMA), .RATE(RATE),
          .VC_W(VC_W), .X_W(X_W), .Y_W(Y_W), .D_W(D_W),
          .X(x), .Y(y),
          .N_PACKETS(N_PACKETS),
          .X_MAX(X_MAX), .Y_MAX(Y_MAX)
          )
          client_xy(
          .rst(rst), .clk(clk),
          // Input to client from south port output of switch
          .i_ack(i_ack[x][y]), .o_v(o_v[x][y]),
          .o_x(s[x][y]`x_addr), .o_y(s[x][y]`y_addr), .o_data(s[x][y]`data),

          // Output of client that contains message signal from PE (ie token bucket)
          .i_v(i[x][y]`valid), .i_vc(i_vc[x][y]), .i_x(i[x][y]`x_addr), .i_y(i[x][y]`y_addr), .i_data(i[x][y]`data),
          .done(done_pe[x][y])
        );


        // Instantiate the interface modules to be used in credit switch
        noc_if #(.VC_W(VC_W), .X_W(X_W), .Y_W(Y_W), .D_W(D_W))
        noc_if_inst_east(.clk(clk), .rst(rst)),
        noc_if_inst_west(.clk(clk), .rst(rst));

        // Instantiate torus switch bp - accepts packets from the client or from other switches thru rx
        torus_switch_credit #(
          .VC_W(VC_W), .X_W(X_W), .Y_W(Y_W), .D_W(D_W),
          .X_MAX(X_MAX), .Y_MAX(Y_MAX),
          .X(x), .Y(y)
          )
          torus_switch_xy(
          .clk(clk), .rst(rst),
          .n_in_v(n[x][y]`valid), .n_in_x(n[x][y]`x_addr), .n_in_y(n[x][y]`y_addr), .n_in_data(n[x][y]`data),
          .i_vc(i_vc[x][y]), .i_v(i[x][y]`valid),	.i_x(i[x][y]`x_addr),	 .i_y(i[x][y]`y_addr), .i_data(i[x][y]`data),
          .to_east_rx(noc_if_inst_east), .from_west_tx(noc_if_inst_west),

          .i_ack(i_ack[x][y]), .o_v(o_v[x][y]),
          .s_out_v(s[x][y]`valid), .s_out_x(s[x][y]`x_addr), .s_out_y(s[x][y]`y_addr), .s_out_data(s[x][y]`data),
          .done(done_switch[x][y])
        );

            for (j = 0; j < VC_W; j = j + 1) begin : conns_vc_info
              // your EW low swing instances here
              //output from west receiver to interface line to credit west receiver of switch
              low_swing_rx west_rx_vc(
                .i(yss[y].xss[`x1].noc_if_inst_conn.vc_target[j]), //common noc connection to rx
                .o(noc_if_inst_west.vc_target[j]) //rx o/p to interface to i/p of credit west
                );
              low_swing_tx west_tx_g(
                .i(noc_if_inst_west.vc_credit_gnt[j]),
                .c(yss[y].xss[x].noc_if_inst_conn.vc_credit_gnt[j])
                );

              //credit east receiver of switch gives input via interface line to east receiver
              low_swing_tx east_tx_vc(
                .i(noc_if_inst_east.vc_target[j]), //o/p of credit east to interface to tx i/p
                .c(yss[y].xss[x].noc_if_inst_conn.vc_target[j]) //tx to common noc connection
                );
              low_swing_rx east_rx_g(
                .i(yss[y].xss[`xp1].noc_if_inst_conn.vc_credit_gnt[j]),
                .o(noc_if_inst_east.vc_credit_gnt[j])
                );
            end


            for (j = 0; j < D_W; j = j + 1) begin : conns_data
              // your EW low swing instances here
              low_swing_rx west_rx_data(
                .i(yss[y].xss[`x1].noc_if_inst_conn.packet.payload.data[j]),
                .o(noc_if_inst_west.packet.payload.data[j])
                );

              low_swing_tx east_tx_data(
                .i(noc_if_inst_east.packet.payload.data[j]),
                .c(yss[y].xss[x].noc_if_inst_conn.packet.payload.data[j])
                );
            end


            for (j = 0; j < X_W+Y_W; j = j + 1) begin : conns_addr
              // your EW low swing instances here
              low_swing_rx west_rx_addr(
                .i(yss[y].xss[`x1].noc_if_inst_conn.packet.routeinfo.addr[j]),
                .o(noc_if_inst_west.packet.routeinfo.addr[j])
                );

              low_swing_tx east_tx_addr(
                .i(noc_if_inst_east.packet.routeinfo.addr[j]),
                .c(yss[y].xss[x].noc_if_inst_conn.packet.routeinfo.addr[j])
                );
            end

            for (j = 0; j < `Msg_W; j = j + 1) begin : msg_txrx
              // your NS low swing instances here
              low_swing_rx north_rx(.i(s_tx[x][(y == 0) ? (Y_MAX - 1) : (y - 1)][j]), .o(n[x][y][j]));
              low_swing_tx south_tx(.i(s[x][y][j]), .c(s_tx[x][y][j]));
            end
        end
    end endgenerate

  assign out_v = o_v[0][0];
  assign out = s[0][0][D_W-1:0];

  logic done_all_pe;
  logic done_all_switch;
  integer xx, yy;
  // reduction tree
  always_comb begin
    done_all_pe = 1'b1;
    done_all_switch = 1'b1;
    for (xx = 0; xx < X_MAX; xx = xx + 1) begin : xred
      for (yy = 0; yy < Y_MAX; yy = yy + 1) begin : xred
        done_all_pe &= done_pe[xx][yy];
        done_all_switch &= done_switch[xx][yy];
      end
    end
  end

  assign done = done_all_pe & done_all_switch;

endmodule
