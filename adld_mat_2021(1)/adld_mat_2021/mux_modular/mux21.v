`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:40:37 01/27/2020 
// Design Name: 
// Module Name:    mux21 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module mux21(out, a, b,s);
	 
input a;
input b;
input s;
output reg out;

always @ (a or b or s)
if (s==0) out =a;
else out=b;

endmodule
