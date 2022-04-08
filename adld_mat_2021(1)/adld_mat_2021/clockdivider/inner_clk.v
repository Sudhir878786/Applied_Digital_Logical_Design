`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:03:21 02/23/2020 
// Design Name: 
// Module Name:    inner_clk 
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
module inner_clk(
    input clk_in,
    input rst_in,
    output reg final_out_clk
    );

always @ (posedge clk_in)
begin
if (~rst_in) final_out_clk <= 0;
else final_out_clk <= ~final_out_clk;
end

endmodule
