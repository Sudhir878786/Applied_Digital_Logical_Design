`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:46:44 02/25/2020
// Design Name:   ltrtshiftreg
// Module Name:   /home/ise/leftrightshiftregister/testbench.v
// Project Name:  leftrightshiftregister
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ltrtshiftreg
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
	reg sl;
	reg sr;
	reg din;
	reg clk;
	reg reset;

	// Outputs
	wire [7:0] Q;

	// Instantiate the Unit Under Test (UUT)
	ltrtshiftreg uut (
		.sl(sl), 
		.sr(sr), 
		.din(din), 
		.clk(clk), 
		.reset(reset), 
		.Q(Q)
	);

	initial begin
 forever begin
 clk <= 0;
 #5
 clk <= 1;
 #5
 clk <= 0;
 end
 end
 
initial begin
 reset = 1;
 #12
 reset = 0;
 #90
 reset = 1;
 #12
 reset = 0;
end

initial begin
 sl = 1;
 #20
 sr = 0;
 #50
 sl = 0;
 #12
 sr = 1;
end

initial begin
 forever begin
 din = 0;
 #7
 din = 1;
 #8
 din = 0;
 end
end

endmodule 

