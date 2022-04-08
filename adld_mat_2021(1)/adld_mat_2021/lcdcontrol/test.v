module lcdvTSET;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire [7:0] data;
	wire lcd_e;
	wire lcd_rw;
	wire lcd_rs;

	// Instantiate the Unit Under Test (UUT)
	lcdverilog uut (
		.clk(clk), 
		.data(data), 
		.lcd_e(lcd_e), 
		.lcd_rw(lcd_rw), 
		.lcd_rs(lcd_rs), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#10;
		reset = 1;
		#15;
		reset = 0;
		#323855360;	
      reset = 0;		

        
		// Add stimulus here

	end
	
always #10 clk = ~clk; 	
      
endmodule
