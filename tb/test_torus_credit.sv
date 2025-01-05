module top #(
    parameter SIGMA = 5,
    parameter RATE = 15,
	parameter X_W   = 2,  
	parameter Y_W   = 2,  
	parameter D_W   = 28,  
	parameter N_PACKETS = 12,
    parameter X_MAX = 1 << X_W,
    parameter Y_MAX = 1 << Y_W
)
(
    input wire clk,
    input wire rst
);
    integer cycle_num = 0;
    reg done_r;
    wire done;
    always @(posedge clk) begin
        if(rst) begin
            cycle_num <= 0;
            done_r <= 0;
        end else begin
            done_r <= done;
            if(done_r && done) begin
                $finish;
            end
            if(cycle_num == 1024) begin
                $display("Did not receive finish, ending due to cycle number reached");
                $finish;
            end
        end
    end
    
    torus_credit #(.SIGMA(SIGMA), .RATE(RATE), .X_W(X_W), .Y_W(Y_W), .VC_W(3), .D_W(D_W), .N_PACKETS(N_PACKETS), .X_MAX(X_MAX), .Y_MAX(Y_MAX))
    dut (
        .clk(clk),
        .rst(rst),
        .out_v(),
        .out(),
        .done(done)
    );

    `ifdef VCD
    initial begin
        $dumpfile(`VCD_FILE);
        $dumpvars;
    end
    `endif

endmodule

