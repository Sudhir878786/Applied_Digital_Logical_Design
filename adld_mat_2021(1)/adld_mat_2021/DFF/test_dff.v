`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   06:06:34 11/13/2020
// Design Name:   dflip
// Module Name:   /home/ise/DFF/test_dff.v
// Project Name:  DFF
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: dflip
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_dff;

	// Inputs
	reg D;
	reg clk;

	// Outputs
	wire Q;

	// Instantiate the Unit Under Test (UUT)
	dflip uut (
		.D(D), 
		.clk(clk), 
		.Q(Q)
	);

initial begin
  clk=0;
     forever #10 clk = ~clk;  
end 
initial begin 
  D <= 0;
 #100;
 D <= 1;
 #100;
 D <= 0;
 #100;
 D <= 1;
end 
endmodule

