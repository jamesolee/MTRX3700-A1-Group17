module torque_display(
    input enable,
    input      [1:0]  instruction,
    input      [1:0]  torque,
    output logic [8:0]  left_LED, // LEDR[17:9]
    output logic [8:0]  right_LED // LEDR[8:0]
);

    //torque values
    logic [3:0] zero = 4'b0000;
    logic [3:0] quart = 4'b0010; 
    logic [3:0] half = 4'b1000; 
    logic [3:0] three_quart = 4'b1100;
    logic [3:0] full = 4'b1111;

    always_comb begin: torque_display
        if (~enable) begin
            left_LED = {zero, 1'b0, zero};
            right_LED = {zero, 1'b0, zero};
        end

        //no extension version
        else begin
            left_LED = (instruction == 2'b00)? {zero, 1'b0, full}:  
                        (instruction == 2'b01)? {full, 1'b0, zero}: 
                        (instruction == 2'b10)? {zero, 1'b0, three_quart}:
                        (instruction == 2'b11)? {zero, 1'b0, full} : {zero, 1'b0, zero};

            right_LED = (instruction == 2'b00)? {zero, 1'b0, full}:
                        (instruction == 2'b01)? {full, 1'b0, zero}:
                        (instruction == 2'b10)? {zero, 1'b0, full}:
                        (instruction == 2'b11)? {zero, 1'b0, three_quart} : {zero, 1'b0, zero};
        end    
		  
		  //extension version
        /* else begin
				case (instruction)
              2'b00:begin //forward
                 left_LED = (torque == 2'b00)? {zero, 1'b0, zero}:  
                     (torque == 2'b01)? {zero, 1'b0, half}: 
                     (torque == 2'b10)? {zero, 1'b0, three_quart}:
                     (torque == 2'b11)? {zero, 1'b0, full} : {zero, 1'b0, zero};

                 right_LED = (torque == 2'b00)? {zero, 1'b0, zero}:  
                     (torque == 2'b01)? {zero, 1'b0, half}: 
                     (torque == 2'b10)? {zero, 1'b0, three_quart}:
                     (torque == 2'b11)? {zero, 1'b0, full} : {zero, 1'b0, zero};
             end
             2'b01:begin //reverse
                 left_LED = (torque == 2'b00)? {zero, 1'b0, zero}:  
                     (torque == 2'b01)? {half, 1'b0, zero}: 
                     (torque == 2'b10)? {three_quart, 1'b0, zero}:
                     (torque == 2'b11)? {full, 1'b0, zero} : {zero, 1'b0, zero};

                 right_LED = (torque == 2'b00)? {zero, 1'b0, zero}:  
                     (torque == 2'b01)? {half, 1'b0, zero}: 
                     (torque == 2'b10)? {three_quart, 1'b0, zero}:
                     (torque == 2'b11)? {full, 1'b0, zero} : {zero, 1'b0, zero};
             end
             2'b10:begin //left
                 left_LED = (torque == 2'b00)? {zero, 1'b0, zero}:  
                     (torque == 2'b01)? {zero, 1'b0, quart}: 
                     (torque == 2'b10)? {zero, 1'b0, half}:
                     (torque == 2'b11)? {zero, 1'b0, full} : {zero, 1'b0, zero};

                 right_LED = (torque == 2'b00)? {zero, 1'b0, zero}:  
                     (torque == 2'b01)? {zero, 1'b0, half}: 
                     (torque == 2'b10)? {zero, 1'b0, three_quart}:
                     (torque == 2'b11)? {zero, 1'b0, full} : {zero, 1'b0, zero};
             end
             2'b11:begin
                 left_LED = (torque == 2'b00)? {zero, 1'b0, zero}:  
                     (torque == 2'b01)? {zero, 1'b0, half}: 
                     (torque == 2'b10)? {zero, 1'b0, three_quart}:
                     (torque == 2'b11)? {zero, 1'b0, full} : {zero, 1'b0, zero};

                 right_LED = (torque == 2'b00)? {zero, 1'b0, zero}:  
                     (torque == 2'b01)? {zero, 1'b0, quart}: 
                     (torque == 2'b10)? {zero, 1'b0, half}:
                     (torque == 2'b11)? {zero, 1'b0, full} : {zero, 1'b0, zero};
             end
          endcase  
         end 
			*/

    end
endmodule
