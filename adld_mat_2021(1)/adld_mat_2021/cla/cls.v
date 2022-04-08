`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:38:57 02/11/2020 
// Design Name: 
// Module Name:    cls 
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

	 
module rippe_adder(X, Y, S, Co);
 input [3:0] X, Y;// Two 4-bit inputs
 output [3:0] S;
 output Co;
 wire w1, w2, w3;
 // instantiating 4 1-bit full adders in Verilog
 fulladder u1(X[0], Y[0], 1'b0, S[0], w1);
 fulladder u2(X[1], Y[1], w1, S[1], w2);
 fulladder u3(X[2], Y[2], w2, S[2], w3);
 fulladder u4(X[3], Y[3], w3, S[3], Co);
endmodule


