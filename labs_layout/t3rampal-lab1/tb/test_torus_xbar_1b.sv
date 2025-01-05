`include "torus_xbar_1b_define.h"

module top (
    input wire clk,
    input wire rst
);
    
    reg [63:0] tests [`MAX_TEST_DEPTH];
    reg [63:0] cur_test;

    //This could also technically just be fopen?
    initial begin
        $readmemh(`DATA_PATH, tests);
    end

    integer test_num = 0;
    always @(posedge clk) begin
        if(rst) begin
            test_num = 0;
        end else begin
            if(test_num == `MAX_TEST_DEPTH - 1) begin
                $finish;
            end

            cur_test = tests[test_num];
            test_num = test_num + 1;
        end
    end

    wire so;
    wire eo;

    torus_xbar_1b dut(
        .wtoe(cur_test`DUT_SIG_WTOE), .wtos(cur_test`DUT_SIG_WTOS), .ntos(cur_test`DUT_SIG_NTOS), 
        .ni(cur_test`DUT_SIG_NI), .wi(cur_test`DUT_SIG_WI), .pi(cur_test`DUT_SIG_PI), 
        .so(so), .eo(eo)
    );

    integer __TEST_trace_fd;
    initial begin
      __TEST_trace_fd = $fopen(`TRACE_FILE, "w");
    end

    always @(negedge clk) begin
        if(~rst) begin
            $fwrite(__TEST_trace_fd, "%b %b\n", so, eo);
        end
    end

    `ifdef VCD
    initial begin
        $dumpfile(`VCD_FILE);
        $dumpvars;
    end
    `endif

endmodule
