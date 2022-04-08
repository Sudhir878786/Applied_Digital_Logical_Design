`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:48:35 02/13/2020 
// Design Name: 
// Module Name:    sevensegment 
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
module sevensegment( IN, A, B, C, D, E, F, G);

    input [3:0] IN;
    output A;
    output B;
    output C;
    output D;
    output E;
    output F;
    output G;
	 
	 reg A;
    reg B;
    reg C;
    reg D;
    reg E;
    reg F;
    reg G;
always@(IN)
begin	 
	case (IN)
   4'b0000 : begin {A,B,C,D,E,F,G} = 7'b1111110; end
   4'b0001 : begin {A,B,C,D,E,F,G} = 7'b0110000; end
   4'b0010 : begin {A,B,C,D,E,F,G} = 7'b1101101; end
   4'b0011 : begin {A,B,C,D,E,F,G} = 7'b1111001; end
   4'b0100 : begin {A,B,C,D,E,F,G} = 7'b0110011; end
   4'b0101 : begin {A,B,C,D,E,F,G} = 7'b1011011; end
   4'b0110 : begin {A,B,C,D,E,F,G} = 7'b1011111; end
   4'b0111 : begin {A,B,C,D,E,F,G} = 7'b1110000; end
   4'b1000 : begin {A,B,C,D,E,F,G} = 7'b1111111; end
   4'b1001 : begin {A,B,C,D,E,F,G} = 7'b1111011; end
	
	4'b1010 : begin {A,B,C,D,E,F,G} = 7'b1110111; end
   4'b1011 : begin {A,B,C,D,E,F,G} = 7'b0011111; end
   4'b1100 : begin {A,B,C,D,E,F,G} = 7'b1001110; end
   4'b1101 : begin {A,B,C,D,E,F,G} = 7'b0111101; end
	4'b1110 : begin {A,B,C,D,E,F,G} = 7'b1001111; end
	4'b1111 : begin {A,B,C,D,E,F,G} = 7'b1000111; end
   
  endcase
  end 

endmodule
