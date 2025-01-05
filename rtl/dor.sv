`timescale 1ns/1ps

///////////////////////////////////////////////////////////////////////////////
// DOR -- dimension ordered routing function
//
module dor #(
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

    output reg e_v,
    output reg s_v,
    output reg o_v,
    output reg n2s,
    output reg w2s,
    output reg w2e,
    output reg i_ack
);
// Lab3 code here

// Main routing logic
always @(*) begin
    // Default values
    n2s = 0;
    w2s = 0;
    w2e = 0;
    i_ack = 0;
    o_v = 0; 
    s_v = 0; 
    e_v = 0; 

    // Process North input
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
			// If south free, and y not reached
			else if (w_x == X[X_W-1:0] && w_y != Y[Y_W-1:0]) begin
				w2s=1;
				s_v=1;
			end
			// If south free, and x dest not reached
			else if (w_x != X[X_W-1:0]) begin
				w2e=1;
				e_v=1;
			end
		end	
		else begin
			w2e=1;
			e_v=1;
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
		end else if (!w2e) begin
			// x doesn't match, route through east if no conflict with w-e
			e_v = 1;
			i_ack = 1;
		end
	end
	
end	

endmodule

