`timescale 1ns / 1ps
module shifttest;

	// Inputs
	reg clk;
	reg si;
	reg reset;

	// Outputs
	wire so;

	// Instantiate the Unit Under Test (UUT)
	shiftregsiter uut (
		.clk(clk), 
		.si(si), 
		.so(so), 
		.reset(reset)
	);

initial begin
 forever begin
 clk <= 0;
 #5
 clk <= 1;
 #5
 clk <= 0;
 end
end

initial begin
 reset <= 0;
 #6
 reset <= 1;
 #6
 reset <= 0;
end


initial begin
 forever begin
 si= 0;
 #7
 si = 1;
 #8
 si = 0;
  #8
 si = 1;
  #8
 si = 1;
 end
end
endmodule 

