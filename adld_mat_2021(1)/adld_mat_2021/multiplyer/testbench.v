module multitest;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;
	reg load;
	reg clk;
	reg rst_a;

	// Outputs
	wire [7:0] op;
	wire ready_out;

	// Instantiate the Unit Under Test (UUT)
	seqmult uut (
		.op(op), 
		.ready_out(ready_out), 
		.a(a), 
		.b(b), 
		.load(load), 
		.clk(clk), 
		.rst_a(rst_a)
	);

	initial begin
		// Initialize Inputs
		a = 7;
		b = 1;
		load = 0;
		clk = 0;
		rst_a = 0;
		
		#5
		
		rst_a = 1;
		
		#20
		
			rst_a = 0;
			#10;
			load = 1;
					
end
		// Wait 100 ns for global reset to finish
always #10 clk=~clk;
        
		// Add stimulus here

	
      
endmodule