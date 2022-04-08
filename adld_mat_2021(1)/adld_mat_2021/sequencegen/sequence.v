`timescale 1ns / 1ps
/*This design models a sequence detector using Mealy FSM.
* Whenever the sequence 1101 occurs, output goes high.
* Overlapping sequences are allowed.
*/

module checker (
input wire clk,
input wire rst,
input wire sequence ,
output reg tick
) ;

//State declarations
localparam a = 2'b00 ;
localparam b = 2'b01 ;
localparam c = 2'b10 ;
localparam d = 2'b11 ;

//Signals
reg [1:0] presentState ;
reg [1:0] nextState ;

//State assignments
always @ (posedge clk)
begin
if(rst)     begin presentState <= a ; tick = 1'b0 ; end
else  presentState <= nextState ;
end



always @(presentState or sequence)
begin

case(presentState)
    a : begin if (sequence)   nextState = b ;  else nextState = a; end
    b : begin if (~sequence)  nextState = c ;  else nextState = b; end
    c : begin if (sequence)   nextState = d ;  else nextState = a; end
    d : begin if(sequence)    nextState = b ;  else nextState = c ;end
	
endcase

if (presentState==d)	tick = 1'b1; else tick = 1'b0; 


end
endmodule 
