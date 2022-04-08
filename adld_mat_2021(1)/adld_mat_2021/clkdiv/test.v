`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:49:46 02/23/2020
// Design Name:   counter
// Module Name:   /home/ise/clkdiv/test.v
// Project Name:  clkdiv
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire count1;
	wire count2;
	wire count3;
	wire count4;

	// Instantiate the Unit Under Test (UUT)
	counter uut (
		.clk(clk), 
		.count1(count1), 
		.count2(count2), 
		.count3(count3), 
		.count4(count4), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		#10
		clk = 1;
		#10
		clk = 0;
		reset = 1;
		end
		
always #10 clk = ~clk; 
        
	
      
endmodule

