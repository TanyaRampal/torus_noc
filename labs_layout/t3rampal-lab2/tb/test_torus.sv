/*verilator lint_off DECLFILENAME*/
module top (
  input wire clk,
  input wire rst
  );
  //THESE need to be kept like this due to yosys scripts.. 
  //If we want to test more things, we can generate multiple 
  //hoplite and client files to provide..

  parameter PACKLIMIT = 6;
  parameter X_MAX = 4;
  parameter Y_MAX = 4;

  reg [16:0] destx [X_MAX*Y_MAX*PACKLIMIT];
  reg [16:0] desty [X_MAX*Y_MAX*PACKLIMIT];

  initial begin
    $readmemh(`TEST_FILE_X,destx);
    $readmemh(`TEST_FILE_Y,desty);
  end

  torus #(.X_W(2), .Y_W(2))
  dut(.clk(clk), .rst(rst));

  `ifdef VCD
    initial begin
      $dumpfile(`VCD_FILE);
      $dumpvars;
    end
  `endif

  endmodule
  /*verilator lint_on DECLFILENAME*/
