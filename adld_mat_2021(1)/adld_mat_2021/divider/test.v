`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:04:14 04/07/2019
// Design Name:   divider
// Module Name:   /home/ise/seqdivider/testdiv.v
// Project Name:  seqdivider
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: divider
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testdiv;

	// Inputs
	reg [7:0] a;
	reg [3:0] b;
	reg rst;
	reg clk;

	// Outputs
	wire ready_out;
	wire [7:0] qu;
	wire [3:0] rem;

	// Instantiate the Unit Under Test (UUT)
	divider uut (
		.a(a), 
		.b(b), 
		.rst(rst), 
		.ready_out(ready_out), 
		.qu(qu), 
		.rem(rem), 
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		a = 54;
		b = 7;
		clk = 0;
		rst = 0;
		
		#5
		
		rst = 1;
		
		#20
		
			rst = 0;
				
end
		// Wait 100 ns for global reset to finish
always #10 clk=~clk;
        
		// Add stimulus here

	
     

endmodule

