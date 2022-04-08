`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:57:10 08/04/2021 
// Design Name: 
// Module Name:    div 
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



module div #(parameter SIZE = 16, parameter LG2_SIZE = 4)(  
   input clk, input reset,  
   input [SIZE-1:0] A, input [SIZE-1:0] B,  
   output [SIZE-1:0] Q, output [SIZE-1:0] Rem,  
   output done, // set to 1 when the results are ready  
   output overflow
   );  
   reg [LG2_SIZE:0] cycle_ctr; // Number of cycles to go
   reg [SIZE-1:0] result; // Begin with A, end with R
   // Calculate the current digit. This is a continuous assignment
   // shortcut. May want to explain the same.
   //wire [SIZE:0] sub = {work[SIZE-2:0], result[SIZE-1]} - denom;
   // Notice sub is SIZE+1 bits wide and accommodates a borrow in.  
   // Outputs - Explain the assign vs. assignment using the last    
   // clock cycle. In one case, values will change whenever 
   // temporary variables are changed.
   assign overflow = !B;  
   assign Rem = result;  
   always @(posedge clk) begin  
     if (reset) begin  
       done = 0;
       result = A;  
       cycle_ctr = SIZE-1;
     end  
     else begin
         if (cycle_ctr != 0) begin  
             // Run an iteration of the divide.
             sub = (result>>cycle_ctr) -B;
             if (sub[SIZE] == 0) begin 
               Q[cycle_ctr] = 1'b1;
               result = result - (B << cycle_ctr);
             end
				 else begin
             cycle_ctr = cycle_ctr - 1;
				 Q[cycle_ctr] = 1'b0;
             result = result;
             end
          else done = 1;
     end  
   end  
	end
endmodule
