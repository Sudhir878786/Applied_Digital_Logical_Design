`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   04:27:10 01/30/2020
// Design Name:   ludesign
// Module Name:   /home/ise/LUdesign/testalu.v
// Project Name:  LUdesign
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ludesign
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testalu;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;
	reg [2:0] sel;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	ludesign uut (
		.a(a), 
		.b(b), 
		.sel(sel), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 2;
		sel = 0;

		// Wait 100 ns for global reset to finish
		#100;
		a = 8;
		b = 8;
		sel = 3;
        
		// Add stimulus here

	   #100;
		a = 1;
		b = 2;
		sel = 3;
	end
      
endmodule

