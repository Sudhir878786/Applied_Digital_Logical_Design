`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:05:36 11/13/2020 
// Design Name: 
// Module Name:    dflip 
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
module dflip(D,clk,Q);
input D; // Data input 
input clk; // clock input 
output Q; // output Q 
reg Q;
always @(posedge clk) 
begin
 Q <= D; 
end 
endmodule 
