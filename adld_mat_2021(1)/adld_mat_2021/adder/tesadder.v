`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:13:29 01/19/2020
// Design Name:   adder_block
// Module Name:   /home/ise/adder/tesadder.v
// Project Name:  adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: adder_block
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tesadder;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;
	reg cin;

	// Outputs
	wire [3:0] sum;
	wire cout;

	// Instantiate the Unit Under Test (UUT)
	adder_block uut (
		.a(a), 
		.b(b), 
		.cin(cin), 
		.sum(sum), 
		.cout(cout)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		cin = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
	a = 0;
		b = 2;
		cin = 0;
		
	#100;
		// Add stimulus here
	a = 3;
		b = 2;
		cin = 0;
	end
      
endmodule

