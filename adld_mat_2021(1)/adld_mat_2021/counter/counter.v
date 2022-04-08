`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:21:50 02/23/2020 
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
module counter(input clk, input reset, output reg[3:0] counter);


// up counter
always @(posedge clk)
begin
if(reset)
 counter <= 4'd0;
else
 counter <= counter + 4'd1;
end 
endmodule
