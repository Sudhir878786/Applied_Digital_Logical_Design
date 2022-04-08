`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:14:06 01/30/2020 
// Design Name: 
// Module Name:    ludesign 
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




module ludesign(a,b,sel, out);
 
input [3:0] a;
input [3:0] b;
input [2:0]sel;
output   out;
 
wire [3:0] a;
wire [3:0] b;
wire [2:0]sel;
reg   out;
reg [4:0] temp_add;

always @(a or b) temp_add = a+b;
 
always @(sel or a or b)
begin
 
   case( sel )
       0 : begin 
		     if(a > b ) out =0;  
			  if (a<=b)  out =1; 
			  end

       1 : begin 
		     if(a[0]  ==0) out =0;  
			  if (a[0] ==1)  out =1; 
			  end
			  
	    2 : begin 
		     if(b[0]  ==0) out =0;  
			  if (b[0] ==1) out =1; 
			  end
			  
		 3 : begin 
		     if(temp_add[4]  ==0) out =0;  
			  if (temp_add[4] ==1) out =1; 
			  end	  
   endcase
end
endmodule
