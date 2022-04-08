`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:33:19 01/26/2020
// Design Name:   mux21
// Module Name:   /home/ise/mux_modular/test41mux.v
// Project Name:  mux_modular
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux21
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test41mux;

	// Inputs
	reg a;
	reg b;
	reg s;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	mux21 uut (
		.out(out), 
		.a(a), 
		.b(b), 
		.s(s)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		s = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

