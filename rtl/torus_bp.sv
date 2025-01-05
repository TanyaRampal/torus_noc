module torus_bp #(
  parameter SIGMA = 3,   // max burst length, (token bucket depth)
  parameter RATE  = 20,  // one packet every RATE CYCLES
  parameter VC_W  = 3,
  parameter X_W   = 2,
  parameter Y_W   = 2,
  parameter D_W   = 256,
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
    `define vcvec  [VC_W-1:0]
    `define data   [D_W-1:0]
    `define valid  [X_W+Y_W+D_W]

    // XY + PE connections
    wire `Msg i [X_MAX][Y_MAX];
    wire `Msg e [X_MAX][Y_MAX];
    wire `Msg s [X_MAX][Y_MAX];
    wire `Msg w [X_MAX][Y_MAX];
    wire `Msg n [X_MAX][Y_MAX];

    // tx outputs
    wire `Msg e_tx [X_MAX][Y_MAX];
    wire `Msg s_tx [X_MAX][Y_MAX];

    // back pressures
    wire e_b [X_MAX][Y_MAX];
    wire w_b [X_MAX][Y_MAX];
    wire w_b_tx [X_MAX][Y_MAX];

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
    generate for (y = 0; y < Y_MAX; y = y + 1) begin : ys
        for (x = 0; x < X_MAX; x = x + 1) begin : xs
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

        // Instantiate torus switch bp - accepts packets from the client or from other switches thru rx
        torus_switch_bp #(
          .X_W(X_W), .Y_W(Y_W), .D_W(D_W),
          .X(x), .Y(y)
          )
          torus_switch_xy(
          .clk(clk), .rst(rst),
          .n_in_v(n[x][y]`valid), .n_in_x(n[x][y]`x_addr), .n_in_y(n[x][y]`y_addr), .n_in_data(n[x][y]`data),
          .w_in_v(w[x][y]`valid), .w_in_x(w[x][y]`x_addr), .w_in_y(w[x][y]`y_addr), .w_in_data(w[x][y]`data),
          .i_v(i[x][y]`valid),	.i_x(i[x][y]`x_addr),	 .i_y(i[x][y]`y_addr), .i_data(i[x][y]`data),
          .e_b(e_b[x][y]),

          .w_b(w_b[x][y]),
          .i_ack(i_ack[x][y]), .o_v(o_v[x][y]),
          .s_out_v(s[x][y]`valid), .s_out_x(s[x][y]`x_addr), .s_out_y(s[x][y]`y_addr), .s_out_data(s[x][y]`data),
          .e_out_v(e[x][y]`valid), .e_out_x(e[x][y]`x_addr), .e_out_y(e[x][y]`y_addr), .e_out_data(e[x][y]`data),
          .done(done_switch[x][y])
        );

        // Transmitter for west backpressure and receiver for east backpressure
        low_swing_rx east_bp_rx (.i(w_b_tx[(x+1)%X_MAX][y]), .o(e_b[x][y]));
        low_swing_tx west_bp_tx (.i(w_b[x][y]), .c(w_b_tx[x][y]));

        // Since tx and rx are 1 bit, instantiate them msg_w times
        for (j = 0; j < `Msg_W; j = j + 1) begin : msg_txrx
          // Instantiate the north receiver of torus switch
          low_swing_rx north_rx(.i(s_tx[x][(y == 0) ? (Y_MAX - 1) : (y - 1)][j]), .o(n[x][y][j]));
          // Instantiate the west receiver of torus switch
          low_swing_rx west_rx(.i(e_tx[(x == 0) ? (X_MAX - 1) : (x - 1)][y][j]), .o(w[x][y][j]));

          // Instantiate the south transmitter of torus switch
          low_swing_tx south_tx(.i(s[x][y][j]), .c(s_tx[x][y][j]));
          // Instantiate the east transmitter of torus switch
          low_swing_tx east_tx(.i(e[x][y][j]), .c(e_tx[x][y][j]));
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
