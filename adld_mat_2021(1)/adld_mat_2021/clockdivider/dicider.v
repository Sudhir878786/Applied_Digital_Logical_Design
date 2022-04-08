`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:56:23 02/23/2020 
// Design Name: 
// Module Name:    dicider 
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
module dicider(
    input clk,
    input rst,
     output reg out_clk
    );

always @ (posedge clk)
begin
if (~rst) out_clk <= 0;
else out_clk <= ~out_clk;
end
endmodule
