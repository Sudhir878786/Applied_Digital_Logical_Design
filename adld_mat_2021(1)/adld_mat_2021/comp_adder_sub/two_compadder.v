`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:01:11 01/24/2020 
// Design Name: 
// Module Name:    two_compadder 
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
module two_compadder(
    input [3:0] a,
    input [3:0] b,
    output [3:0] out
    );

wire [3:0] complement;

assign complement = ~b + 1;
assign out = a + complement;


endmodule
