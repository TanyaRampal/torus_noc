module shadow_reg_combi #(
    parameter D_W = 32
) (
    input wire clk, 
    input wire rst, 

    input wire i_v,
    input wire [D_W-1:0] i_d, 
    input wire o_b,

    output wire i_b,
    output wire o_v,
    output wire [D_W-1:0] o_d
);
    reg s_v_r, o_b_r;
    reg [D_W-1:0] s_d_r;
    always @(posedge clk) begin
	    if(rst) begin
		    o_b_r <= 1'b0;
		    s_v_r <= 1'b0;
	    end else begin
		    o_b_r <= o_b;
            // if no backpressure, then the contents of shadow register will
            // become invalid
            if(!o_b) begin 
                s_v_r <= 1'b0;
            end 
		    else if(!o_b_r) begin 
                // if previously backpressured, and currently backpressured
                // then that means that we still have not accepted our packet
			    s_v_r <= i_v;
			    s_d_r <= i_d;
		    end 
	    end
    end

    assign o_v = (o_b_r) ? s_v_r : i_v;
    assign o_d = (o_b_r) ? s_d_r : i_d;
    assign i_b = o_b_r;
endmodule 
