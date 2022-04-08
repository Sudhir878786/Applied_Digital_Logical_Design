`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:09:04 03/30/2019 
// Design Name: 
// Module Name:    seqmult 
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
module seqmult(op,ready_out,a,b,load,clk,rst_a);
output reg [7:0] op;
output reg ready_out;
input [3:0] a,b;
input load,clk,rst_a;
reg [7:0] tmp0;
reg [2:0] count;
reg [7:0] tmp;



always @(posedge clk)
begin 
 if (rst_a)
 begin
      op=8'b00000000;
      ready_out=1'b0;
		count=0;
		tmp = {4'b0000,b};
		tmp0 =8'b00000000;
 end
	
 else if (load && (count < 4))
     begin
	       if (a[count])  begin tmp0 = tmp<<count;  op = op + tmp0; end
          else  op <= op;  
   
		
		count = count +1; 
		end
		
	if (count == 4) ready_out = 1'b1;
	
end
		 
	 

endmodule
