`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:23:29 02/19/2020 
// Design Name: 
// Module Name:    clkdiv 
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
module clkdiv ( clk ,rst,out_clk );
output reg [31:0]out_clk;
input clk ;
input rst;
always @(posedge clk)
begin
if (~rst)
     out_clk <= 32'b0;
else
     out_clk <= out_clk+1;     
end

endmodule

