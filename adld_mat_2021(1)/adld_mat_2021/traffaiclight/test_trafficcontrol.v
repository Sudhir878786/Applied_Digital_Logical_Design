`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:09:32 06/16/2020
// Design Name:   trafficcircuit
// Module Name:   /home/ise/traffaiclight/test_trafficcontrol.v
// Project Name:  traffaiclight
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: trafficcircuit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_trafficcontrol;

	// Inputs
	reg clk;
	reg clr;

	// Outputs
	wire [5:0] lights;

	// Instantiate the Unit Under Test (UUT)
	trafficcircuit uut (
		.clk(clk), 
		.clr(clr), 
		.lights(lights)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clr = 0;
		#2;
		clr = 1;
		#2;
		clr = 0;
		#2;
  
		// Add stimulus here

	end
	
always  #5  clk = ~clk;
      
endmodule

