`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:42:34 01/27/2020 
// Design Name: 
// Module Name:    mux41 
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
module mux41(out,i0,i1,i2,i3,s1,s0);
input i0,i1,i2,i3,s1,s0;
output out;
wire mux1,mux2;
mux21 mux_1(mux1,i0,i1,s1);
mux21 mux_2(mux2,i2,i3,s1);
mux21 mux_3(out,mux1,mux2,s0);
endmodule
