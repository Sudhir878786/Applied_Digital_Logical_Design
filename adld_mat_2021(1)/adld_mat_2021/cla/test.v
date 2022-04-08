`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:46:46 02/11/2020
// Design Name:   rippe_adder
// Module Name:   /home/ise/cla/test.v
// Project Name:  cla
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: rippe_adder
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
	reg [3:0] X;
	reg [3:0] Y;

	// Outputs
	wire [3:0] S;
	wire Co;

	// Instantiate the Unit Under Test (UUT)
	rippe_adder uut (
		.X(X), 
		.Y(Y), 
		.S(S), 
		.Co(Co)
	);

	initial begin
		// Initialize Inputs
		X = 0;
		Y = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		X = 2;
		Y = 3;
        
		// Add stimulus here

	end
      
endmodule

