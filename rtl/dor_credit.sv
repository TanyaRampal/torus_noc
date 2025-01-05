`timescale 1ns/1ps

// simple exact same thing as dor_bp but with 
// multiple virtual channels, w_b acts as ack
// i_vc and w_v are source vc for i input and w input respectively

module DOR_CREDIT #(
    parameter VC_W  = 3,
	parameter X_W	= 2,	// X address width
	parameter Y_W	= 2,	// Y address width
	parameter D_W	= 32,
    parameter X = 0,
    parameter Y = 0
) (
    input  wire [X_W-1:0] n_x,
    input  wire [Y_W-1:0] n_y,
    input  wire n_v,

    input  wire [X_W-1:0] w_x,
    input  wire [Y_W-1:0] w_y,
    input  wire [VC_W-1:0]  w_v,

    input  wire [X_W-1:0] i_x,
    input  wire [Y_W-1:0] i_y,
    input  wire i_v,
    input  wire [VC_W-1:0] i_vc,

    input  wire [VC_W-1:0] e_b,        // backpressure signal
    output reg [VC_W-1:0] e_v,         // east 
    output reg w_b,

    output reg s_v,
    output reg o_v,

    output reg n2s,
    output reg w2s,
    output reg w2e,
    output reg i_ack
);

// Your code here

always @(*) begin
    // Initialize outputs to default values
    n2s = 0;
    w2s = 0;
    w2e = 0;
    e_v = 0;
    s_v = 0;
    o_v = 0;
    w_b = 0;
    i_ack = 0;

    // Process North input routing
    if (n_v) begin
        if (n_y == Y[Y_W-1:0]) begin
            // Destination reached for North input
            n2s = 1;
            o_v = 1;
        end else if (n_x == X[X_W-1:0]) begin
            // Route North input along Y-axis (South)
            n2s = 1;
            s_v = 1;
        end
    end

    // Process West input routing with credit-based flow control
    if (|w_v) begin
        if (w_x == X[X_W-1:0] && w_y == Y[Y_W-1:0]) begin
            // Destination reached for West input
            if (!n2s) begin
                w2s = 1;
                o_v = 1;
            end else begin
                w_b = 1;
            end
        end else if (w_x == X[X_W-1:0]) begin
            // Route West input along Y-axis (South)
            if (!n2s) begin
                w2s = 1;
                s_v = 1;
            end else begin
                w_b = 1;
            end
        end else if (w_x != X[X_W-1:0]) begin
            // Route West input along X-axis (East) if credits are available
            if ((e_b & w_v) == 0) begin
                w2e = 1;
                e_v = w_v;
            end else begin
                w_b = 1;  // Apply backpressure if credits are unavailable
            end
        end
    end

    // Process Injection (i) input routing
    if (i_v) begin
        if (i_x == X[X_W-1:0] && i_y == Y[Y_W-1:0]) begin
            // Destination reached for Injection input
            if (!(n2s || w2s)) begin
                o_v = 1;
                i_ack = 1;
            end
        end else if (i_x == X[X_W-1:0]) begin
            // Route Injection input along Y-axis (South)
            if (!(n2s || w2s)) begin
                s_v = 1;
                i_ack = 1;
            end
        end else if ((e_b & i_vc) == 0 && !w2e) begin
            // Route Injection input along X-axis (East) if credits are available
            e_v = i_vc;
            i_ack = 1;
        end
    end
end

endmodule


