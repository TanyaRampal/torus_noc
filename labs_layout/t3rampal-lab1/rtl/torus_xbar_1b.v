module torus_xbar_1b 
(
	input wire wtoe,
	input wire wtos,
	input wire ntos,
	input wire ni,
	input wire wi,
	input wire pi,
	output wire so,
	output wire eo
);

// YOUR CODE HERE
	// 2:1 mux (east exit port) 
	assign eo = (wtoe) ? wi : pi;

	// 3:1 mux (south exit port) 
	assign so = (ntos) ? ni : 
				(wtos) ? wi : 
				pi;  // Default case


endmodule


