`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:11:18 01/19/2020 
// Design Name: 
// Module Name:    adder_block 
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
module adder_block(a,b,cin,sum,cout);
input [3:0] a,b;
	input cin;
	output [3:0]sum;
	output cout;
	assign {cout,sum}=a+b+cin;


endmodule
