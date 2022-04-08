`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:04:19 04/07/2019 
// Design Name: 
// Module Name:    divider 
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
module divider(a, b, rst, ready_out, qu, rem, clk);

output reg [7:0] qu;
output reg ready_out;
input [7:0] a;
input [3:0] b;
input clk,rst;
output reg [3:0] rem;


reg [3:0] count;
reg [15:0] tmp;
reg [7:0] tmp0;



always @(posedge clk)
begin 
 if (rst)
 begin
		rem=4'b0000;
      ready_out=1'b0;
		count=0;
		tmp = {8'b00000000,a};
		tmp0 = 8'b00000000;
		qu =8'b00000000;
 end
	
 else if (count < 8)
     begin
	  
	       tmp = tmp << 1;
			 tmp0 = tmp[15:8];
			 if (tmp0 > b) 
			 begin
			     qu[7-count] = 1;
				  tmp0 = tmp0-b;
				  tmp[15:8]= tmp0;
			end	  
			else
              qu[7-count] = 0;
			  
     end				  
	  
	  
	  
	  if (~rst)  count = count +1; 
				  
		if (count == 8) begin rem = tmp0; ready_out = 1'b1; end
	
end
		 
	 

endmodule
