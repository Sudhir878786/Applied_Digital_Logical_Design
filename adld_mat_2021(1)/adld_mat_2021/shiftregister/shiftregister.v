`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:05:45 02/25/2020 
// Design Name: 
// Module Name:    shiftregister 
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
module shiftregsiter(
    input clk,
    input si,
    output so,
    input reset
    );

reg [7:0] tmp; 
 
  always @(posedge clk) 
    begin 
      if (~reset) 
        begin 
          tmp = tmp << 1; 
          tmp[0] = si; 
        end 
		  else tmp = tmp;
    end 
   
	assign so  = tmp[7]; 
	 
always @(posedge reset)  tmp = 8'b00000000;
	 
	 
endmodule
