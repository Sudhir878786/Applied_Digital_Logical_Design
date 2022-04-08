`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:18:35 01/31/2020 
// Design Name: 
// Module Name:    addercomp 
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
module addercomp(a,b, sum, overflow);

input [3:0] a;
input [3:0] b;
output [3:0] sum;
output reg overflow;
wire [4:0] tempadd;
	 

assign tempadd = a+b;
always @( tempadd)
begin
if(tempadd[4]==1)  overflow =1;
else overflow = 0;
end
assign sum = tempadd[3:0]; 
endmodule

