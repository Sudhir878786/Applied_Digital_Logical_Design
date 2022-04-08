`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:42:35 02/25/2020
// Design Name:   parallellaod
// Module Name:   /home/ise/parallelaod/testparallelload.v
// Project Name:  parallelaod
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: parallellaod
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testparallelload;

	// Inputs
	reg clk;
	reg parallelload;
	reg [7:0] input1;
	reg sin;

	// Outputs
	wire sout;

	// Instantiate the Unit Under Test (UUT)
	parallelload1 uut (
		.clk(clk), 
		.parallelload(parallelload), 
		.input1(input1), 
		.sin(sin), 
		.sout(sout)
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
 parallelload = 0;
 #10
 input1=8'b11111111;
 #10
 parallelload = 1;
 #10
 parallelload = 0;
end

initial begin
 forever begin
 sin = 0;
 #7
 sin = 0;
 #8
 sin = 0;
 end
end
 

      


      
endmodule

