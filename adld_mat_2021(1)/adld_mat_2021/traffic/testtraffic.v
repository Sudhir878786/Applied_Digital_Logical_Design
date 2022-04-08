`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:39:28 03/31/2019
// Design Name:   fsmtraffic
// Module Name:   /home/ise/traffic/testtraffic.v
// Project Name:  traffic
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fsmtraffic
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testtraffic;

	// Inputs
	reg clk;
	reg clr;

	// Outputs
	wire [5:0] lights;

	// Instantiate the Unit Under Test (UUT)
	fsmtraffic uut (
		.clk(clk), 
		.clr(clr), 
		.lights(lights)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clr = 0;

		// Wait 100 ns for global reset to finish
		#24
		clr = 1;
		#14
		clr = 0;
        
		// Add stimulus here

	end
	
always #10 clk=~clk;
      
endmodule

