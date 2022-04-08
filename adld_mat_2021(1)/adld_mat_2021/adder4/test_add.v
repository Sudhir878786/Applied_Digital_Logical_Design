`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   04:35:01 01/20/2020
// Design Name:   addrev
// Module Name:   /home/ise/adder4/test_add.v
// Project Name:  adder4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: addrev
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_add;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;

	// Outputs
	wire [3:0] c;

	// Instantiate the Unit Under Test (UUT)
	addrev uut (
		.a(a), 
		.b(b), 
		.c(c)
	);

	initial begin
		// Initialize Inputs
		a = 4'b0000;
		b = 4'b0000;

		// Wait 100 ns for global reset to finish
		#100;
		
		a = 4'b0000;
		b = 4'b0110;
        
		// Add stimulus here

	end
      
endmodule

