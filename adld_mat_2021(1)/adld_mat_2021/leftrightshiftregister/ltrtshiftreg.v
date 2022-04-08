`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:44:56 02/25/2020 
// Design Name: 
// Module Name:    ltrtshiftreg 
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
module ltrtshiftreg(sl, sr, din, clk, reset,Q);
input sl, sr, din, clk, reset;
reg [7:0] Q;
output [7:0] Q;

always @ (posedge clk) begin
 if (~reset) begin
 
 if (sl) begin
 Q <= {Q[6:0],din};
 end
 
 else if (sr) begin
 Q <= {din, Q[7:1]};
 end
 else Q <= Q;
 end
 
end



always @ (posedge reset) begin
 Q<= 8'b00000000;
end

endmodule


