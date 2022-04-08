`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:53:23 01/24/2020 
// Design Name: 
// Module Name:    two_complement 
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
module two_complement(
    input [3:0] a,
    output [3:0] b,
	 output err
    );
reg [3:0] input_temp;
wire  [3:0] temp;
reg err_temp; 

always @(a)  input_temp = a;

always @(input_temp) 
begin
if  (input_temp >= 9)  err_temp =1;
else  err_temp =0;
end


assign temp = ~a;
assign b = temp + 1;
assign err= err_temp; 
endmodule
