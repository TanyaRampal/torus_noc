module torus #(
    // Packet Format
    parameter X_W		  = 2,
    parameter Y_W		  = 2,
    parameter D_W		  = 512,
    // NoC Size
    parameter X_MAX		  = 1<<X_W,
    parameter Y_MAX		  = 1<<Y_W
) (
    input  wire clk,
    input  wire rst
);

	// Declare input/output signals for each router
    wire [X_MAX-1:0][Y_MAX-1:0][1+D_W+X_W+Y_W-1:0] north_in, south_out;
    wire [X_MAX-1:0][Y_MAX-1:0][1+D_W+X_W+Y_W-1:0] west_in, east_out;
    wire [X_MAX-1:0][Y_MAX-1:0][1+D_W+X_W+Y_W-1:0] client_out;
    wire [X_MAX-1:0][Y_MAX-1:0] i_ack, o_v;



    genvar x, y;
    generate
        // Nested generate loops to create 2D grid of routers and clients
        for (x = 0; x < X_MAX; x = x + 1) begin: x_loop
            for (y = 0; y < Y_MAX; y = y + 1) begin: y_loop
                // Router instantiation
                Router router_inst (
                    .clk(clk),
                    .rst(rst),
                    .n_in(north_in[x][y]),    // From router above (north)
                    .w_in(west_in[x][y]),     // From router to the left (west)
                    .i(client_out[x][y]),     // From corresponding client
                    .X(x[X_W-1:0]),           // X position of the router
                    .Y(y[Y_W-1:0]),           // Y position of the router
                    .i_ack(i_ack[x][y]),      // Acknowledgment signal to the client
                    .o_v(o_v[x][y]),          // Output valid signal to the client
                    .s_out(south_out[x][y]), // South output - also input to client
                    .e_out(east_out[x][y])   // East output
                );

                // Client instantiation
                Client client_inst (
                    .clk(clk),
                    .rst(rst),
                    .i_ack(i_ack[x][y]),      // Acknowledgment signal to the client
                    .o_v(o_v[x][y]),          // Output valid signal to the client
                    .o(south_out[x][y]),     // Input to the client, south output from router
                    .X(x[X_W-1:0]),           // X position of the client
                    .Y(y[Y_W-1:0]),           // Y position of the client
                    .i(client_out[x][y])       // Output of client, input to router
                );

                 
                // Connecting east-west, north-south torus
                assign west_in[x][y] = (x == 0) ? east_out[X_MAX-1][y] : east_out[x-1][y]; // Wrap west to east
                //assign east_out[x][y] = (x == X_MAX-1) ? west_in[0][y] : west_in[x+1][y]; // Wrap east to west
                assign north_in[x][y] = (y == 0) ? south_out[x][Y_MAX-1] : south_out[x][y-1]; // Wrap north to south
                //assign south_out[x][y] = (y == Y_MAX-1) ? north_in[x][0] : north_in[x][y+1]; // Wrap south to north
            end
        end
    endgenerate



endmodule
