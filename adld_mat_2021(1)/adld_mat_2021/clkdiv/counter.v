`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:37:30 02/23/2020 
// Design Name: 
// Module Name:    counter 
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
module counter(
    input clk,
    output reg count1,
    output reg count2,
    output reg count3,
    output reg count4,
    input reset
    );




always @(reset)
    if (~reset) begin count1 = 0; count2 = 0; count3 = 0; count4 = 0; end


always @( posedge  clk && reset)
    count1 = ~count1;

always @( posedge  count1 && reset)
    count2 = ~count2;
	 
always @( posedge  count2 && reset)
    count3 = ~count3;
	 
always @( posedge  count3 && reset)
    count4 = ~count4;


endmodule
