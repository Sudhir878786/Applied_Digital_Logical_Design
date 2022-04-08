`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:06:39 01/24/2020
// Design Name:   two_compadder
// Module Name:   /home/ise/comp_adder_sub/comp_adder_test.v
// Project Name:  comp_adder_sub
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: two_compadder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module comp_adder_test;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;

	// Outputs
	wire [3:0] out;

	// Instantiate the Unit Under Test (UUT)
	two_compadder uut (
		.a(a), 
		.b(b), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		a = 5;
		b = 2;

		// Wait 100 ns for global reset to finish
		#100;
        
		  a = 10;
		b = 6;
		// Add stimulus here

	end
      
endmodule

