module lcdverilog(input clk, output data, output lcd_e, output lcd_rw,output lcd_rs, input reset);
 
	 reg [7:0] data;
	 reg [32:0] count;
	 reg [7:0]  data_comand;
	 reg lcd_e, lcd_rw, lcd_rs; 
	 	 
	always @(posedge clk)
	begin 
		if(reset == 1)
		begin 
			lcd_e=1;
			lcd_rw=0;
			lcd_rs=0;
			count =0;
			data_comand=0;
		end
		
	else 
		
			begin
			
				if (count <=100) 
				begin
					count = count + 1;
					lcd_e = 1;
					if (data_comand <=3) lcd_rs=0; else lcd_rs=1;
					
					if (data_comand==0) data = 8'h38;
					else if (data_comand==1) data = 8'b00001101;
					else if (data_comand==2) data = 8'b00000001;
					else if (data_comand==3) data = 8'b10000010;
					else if (data_comand==4) data = 8'b01000001;
					else if (data_comand==5) data = 8'b01010010;
					else if (data_comand==6) data = 8'b01001001;
					else if (data_comand==7) data = 8'b01000110;
					else data = 8'hff;
			  end
			
			else if (count > 100 && count < 200) begin count = count + 1;  lcd_e=0; end
			else if (count >= 200) begin count = 0; data_comand = data_comand +1; end
			
			if (data_comand==8) data_comand =0;
			
		end // else-reset
		
	end  //clock end 
	
endmodule	