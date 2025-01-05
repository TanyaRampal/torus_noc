`timescale 1ns/1ps

module token_bucket #(
    parameter SIGMA = 3,  // max burst length, (token bucket depth)
	parameter RATE  = 5  // one packet every RATE CYCLES
) (
    input  wire clk,
    input  wire rst,
    input  wire consume,

    output wire token_available
);

    reg [$clog2(SIGMA)-1:0] number_tokens;
    reg [$clog2(RATE)-1:0] rate_counter;
    
    // your Lab4 code here
	
	always @(posedge clk) begin
		if(rst) begin
			number_tokens <= SIGMA[$clog2(SIGMA)-1:0];
			rate_counter <= 0;
		end else begin
		// Write your code here
		 // Token addition and counter logic
		if (rate_counter == ($clog2(RATE)'(RATE - 1))) begin
			rate_counter <= 0;  // Reset rate_counter
			if (!consume && number_tokens < SIGMA[$clog2(SIGMA)-1:0])
				number_tokens <= number_tokens + 1;  // Add a token if the bucket is not full
		end else begin
			rate_counter <= rate_counter + 1;  // Increment rate_counter
			// Token consumption logic
			if (consume && number_tokens > 0) 
			  number_tokens <= number_tokens - 1;  // Consume a token if available
		end
		end
	end

	assign token_available = |number_tokens;


    //ASSERTIONS, DO NOT REMOVE
    always @(posedge clk) begin
        if(!rst & (consume & !token_available)) begin
            $display("Client attempted to consume from empty token bucket");
            $fatal();
        end
    end
endmodule
