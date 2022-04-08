`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:38:27 02/25/2020 
// Design Name: 
// Module Name:    parallellaod 
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
module parallelload1(
    input clk,
    input parallelload,
	 input  [7:0] input1,
    input sin,
    output sout
    );
	 

reg [7:0] tmp; 
 

  always @(posedge clk) 
  begin 
    if (parallelload) 
      tmp <= input1; 
    else 
      begin 
        tmp = {tmp[6:0], sin}; 
      end 
  end 
  assign sout  = tmp[7]; 
endmodule 