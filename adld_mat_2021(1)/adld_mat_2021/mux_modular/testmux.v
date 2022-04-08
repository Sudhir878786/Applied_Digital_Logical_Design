`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:34:29 01/26/2020
// Design Name:   mux41
// Module Name:   /home/ise/mux_modular/testmux.v
// Project Name:  mux_modular
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux41
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testmux;

	// Inputs
	reg i0;
	reg i1;
	reg i2;
	reg i3;
	reg s1;
	reg s0;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	mux41 uut (
		.out(out), 
		.i0(i0), 
		.i1(i1), 
		.i2(i2), 
		.i3(i3), 
		.s1(s1), 
		.s0(s0)
	);

	initial begin
		// Initialize Inputs
		i0 = 1;
		i1 = 0;
		i2 = 0;
		i3 = 0;
		s1 = 1;
		s0 = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		i0 = 0;
		i1 = 0;
		i2 = 0;
		i3 = 1;
		s1 = 1;
		s0 = 1;
		
		#100;
        
		// Add stimulus here
		i0 = 1;
		i1 = 0;
		i2 = 0;
		i3 = 0;
		s1 = 1;
		s0 = 1;




	end
      
endmodule

