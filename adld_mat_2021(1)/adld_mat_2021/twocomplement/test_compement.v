`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:56:19 01/24/2020
// Design Name:   two_complement
// Module Name:   /home/ise/twocomplement/test_compement.v
// Project Name:  twocomplement
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: two_complement
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_compement;

	// Inputs
	reg [3:0] a;

	// Outputs
	wire [3:0] b;

	// Instantiate the Unit Under Test (UUT)
	two_complement uut (
		.a(a), 
		.b(b)
	);

	initial begin
		// Initialize Inputs
		a = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
			a = 7;

	end
      
endmodule

