`timescale 1ns/1ps

// DOR routing but for BP
// Routing decision and backpressure based off the following rules:
// No backpressure signal along North to South -> NS priority
//      if there is a north input that wants to go south, it goes south 
// If west wants to turn south, but north to south is used, then bp on west
// If PE wants to go south but N->S or W->S used, no ack
// If PE wants to go west but BP, no ack
// If West wants to go East but BP, propagate BP

module DOR_BP #(
	parameter X_W	= 2,	// X address width
	parameter Y_W	= 2,	// Y address width
    parameter X = 0,
    parameter Y = 0
) (
    input  wire [X_W-1:0] n_x,
    input  wire [Y_W-1:0] n_y,
    input  wire n_v,

    input  wire [X_W-1:0] w_x,
    input  wire [Y_W-1:0] w_y,
    input  wire w_v,

    input  wire [X_W-1:0] i_x,
    input  wire [Y_W-1:0] i_y,
    input  wire i_v,

    input  wire e_b,        // backpressure signals
    output reg w_b,

    output reg e_v,
    output reg s_v,
    output reg o_v,

    output reg n2s,
    output reg w2s,
    output reg w2e,
    output reg i_ack
);


// Your lab3 code here

always @(*) begin
    // Default values
    n2s = 0;
    w2s = 0;
    w2e = 0;
    e_v = 1'b0;
    s_v = 1'b0;
    o_v = 1'b0;
    w_b = 1'b0;
    i_ack = 1'b0;

	// Process North input (Same as DOR)
    if (n_v) begin
        if ((n_y == Y[Y_W-1:0])) begin
            // Destination reached
			n2s = 1;
            o_v = 1;
        end
		else begin
            // Route along Y-axis (South)
            n2s = 1;
            s_v = 1;
		end
    end

 
	// Process West input
	if (w_v) begin
		if (!n2s) begin
			// If south free, and dest reached
			if (w_x == X[X_W-1:0] && w_y == Y[Y_W-1:0]) begin
				w2s=1;
				o_v=1;
			end
			// If south free, and y dest not reached
			else if (w_x == X[X_W-1:0] && w_y != Y[Y_W-1:0]) begin	
				w2s=1;
				s_v=1;
			end
			// If south free, and x dest not reached
			else if (w_x != X[X_W-1:0]) begin
				if (!e_b) begin		// no east backpressure, so route east
					w2e=1;
					e_v=1;
				end 
				else 				// east backpressure so w_b=1
					w_b=1;
			end
		end	
		else begin		
			if (w_x != X[X_W-1:0] && !e_b) begin		// no east backpressure, so route east
				w2e=1;
				e_v=1;
			end 
			else 				// east backpressure so w_b=1
				w_b=1;
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
			// x matches but y does not, route through y if no conflict with w-s and n-s
			if (!(n2s || w2s)) begin
				s_v = 1;
				i_ack = 1;
			end
		end else if (!w2e && !e_b) begin
			// x doesn't match, route through east if no conflict with w-e and east buffer is available
			e_v = 1;
			i_ack = 1;
		end
	end
end 

endmodule


