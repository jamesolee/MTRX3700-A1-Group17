module torque_display(
    input enable,
    input      [1:0]  instruction,
    input      [2:0]  torque,
    output logic [17:0]  LEDR // LEDR[17:0]
);
	 
	 //wires for LEDs
	 logic [17:0] leds;

    always_comb begin: torque_display
        if (~enable) begin
            leds = 0;
        end
        else begin
            case (instruction)
                2'b00: begin // Forward
                    case (torque)
                        3'b000: leds = {4'b0000,1'b0,4'b0000,4'b0000,1'b0,4'b0000}; // Forward 0
                        3'b001: leds = {4'b0000,1'b0,4'b1000,4'b0000,1'b0,4'b1000}; // Forward 1
                        3'b010: leds = {4'b0000,1'b0,4'b1100,4'b0000,1'b0,4'b1100}; // Forward 2
                        3'b011: leds = {4'b0000,1'b0,4'b1110,4'b0000,1'b0,4'b1110}; // Forward 3
                        3'b100: leds = {4'b0000,1'b0,4'b1111,4'b0000,1'b0,4'b1111}; // Forward 4
                        default: leds = {4'b0000,1'b0,4'b0000,4'b0000,1'b0,4'b0000}; // 0
                    endcase
                end
                2'b01: begin // Backward
                    case (torque)
                        3'b000: leds = {4'b0000,1'b0,4'b0000,4'b0000,1'b0,4'b0000}; // Backward 0
                        3'b001: leds = {4'b0001,1'b0,4'b0000,4'b0001,1'b0,4'b0000}; // Backward 1
                        3'b010: leds = {4'b0011,1'b0,4'b0000,4'b0011,1'b0,4'b0000}; // Backward 2
                        3'b011: leds = {4'b0111,1'b0,4'b0000,4'b0111,1'b0,4'b0000}; // Backward 3
                        3'b100: leds = {4'b1111,1'b0,4'b0000,4'b1111,1'b0,4'b0000}; // Backward 4
                        default: leds = {4'b0000,1'b0,4'b0000,4'b0000,1'b0,4'b0000}; // 0
                    endcase
                end
                2'b10: begin // Left
                    case (torque)
                        3'b000: leds = {4'b0000,1'b0,4'b0000,4'b0000,1'b0,4'b0000}; // Left 0
                        3'b001: leds = {4'b0000,1'b0,4'b0000,4'b0000,1'b0,4'b1000}; // Left 1
                        3'b010: leds = {4'b0000,1'b0,4'b1000,4'b0000,1'b0,4'b1100}; // Left 2
                        3'b011: leds = {4'b0000,1'b0,4'b1100,4'b0000,1'b0,4'b1110}; // Left 3
                        3'b100: leds = {4'b0000,1'b0,4'b1110,4'b0000,1'b0,4'b1111}; // Left 4
                        default: leds = {4'b0000,1'b0,4'b0000,4'b0000,1'b0,4'b0000}; // 0
                    endcase
                end
                2'b11: begin // Right
                    case (torque)
                        3'b000: leds = {4'b0000,1'b0,4'b0000,4'b0000,1'b0,4'b0000}; // Right 0
                        3'b001: leds = {4'b0000,1'b0,4'b1000,4'b0000,1'b0,4'b0000}; // Right 1
                        3'b010: leds = {4'b0000,1'b0,4'b1100,4'b0000,1'b0,4'b1000}; // Right 2
                        3'b011: leds = {4'b0000,1'b0,4'b1110,4'b0000,1'b0,4'b1100}; // Right 3
                        3'b100: leds = {4'b0000,1'b0,4'b1111,4'b0000,1'b0,4'b1110}; // Right 4
                        default: leds = {4'b0000,1'b0,4'b0000,4'b0000,1'b0,4'b0000}; // 0
                    endcase
                end
                default: leds = {4'b0000,1'b0,4'b0000,4'b0000,1'b0,4'b0000}; // 0
            endcase
        end
    end
	 
	 assign LEDR = leds;
	 
endmodule
