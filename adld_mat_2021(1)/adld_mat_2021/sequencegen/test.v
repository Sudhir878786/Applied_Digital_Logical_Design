`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:47:48 04/07/2019
// Design Name:   checker
// Module Name:   /home/ise/sequencecheck/testbench.v
// Project Name:  sequencecheck
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: checker
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testbench;

	// Inputs
	reg clk;
	reg rst;
	reg[15:0] sequence;

	// Outputs
	wire tick;

	// Instantiate the Unit Under Test (UUT)
	checker uut (
		.clk(clk), 
		.rst(rst), 
		.sequence(in), 
		.tick(tick)
	);


	
reg in;
integer i;

initial
begin

        clk = 0;
        rst = 1;
        sequence = 16'b1011110111010000;
		  #2 clk = 1;
		  #5 rst = 0;
		  #2 clk = 0;
		  #2 clk = 1;


   for( i = 0; i <= 15; i = i + 1)
   begin
      in = sequence[i];
      #2 clk = 0;
      #2 clk = 1;
   end
 end
    
endmodule
