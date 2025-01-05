`timescale 1ns/1ps

module torus_xbar_1b
(
	input wire w2e,
	input wire w2s,
	input wire n2s,
	input wire p2s, // ignore in standard-cell/FPGA flow but keep for custom cell compatibility
	input wire p2e, // ignore in standard-cell/FPGA flow but keep for custom cell compatibility
	input wire ni,
	input wire wi,
	input wire pi,
	output wire so,
	output wire eo

	input noc_packet ni_packet,
	input wire wi,
	input wire pi,
	output wire so,
	output wire eo
);

// Your Lab1 code here
	// 2:1 mux (east exit port)
	assign eo = (w2e) ? wi : pi;

	// 3:1 mux (south exit port)
	assign so = (n2s) ? ni :
				(w2s) ? wi :
				pi;  // Default case


endmodule
