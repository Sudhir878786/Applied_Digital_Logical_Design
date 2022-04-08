`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:24:02 02/23/2020
// Design Name:   counter
// Module Name:   /home/ise/counter/tesrtbench.v
// Project Name:  counter
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

module tesrtbench;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire [3:0] counter;

	// Instantiate the Unit Under Test (UUT)
	counter uut (
		.clk(clk), 
		.reset(reset), 
		.counter(counter)
	);

initial begin 
clk=0;
forever #5 clk=~clk;
end
initial begin
reset=1;
#20;
reset=0;
end
    
endmodule

