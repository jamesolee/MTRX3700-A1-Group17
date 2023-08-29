module seven_seg(
    input timer;
    input      [1:0]  direc,
    output logic [8:0]  left_LED, // LEDR[17:9]
    output logic [8:0]  right_LED, // LEDR[8:0]
);

    always_ff @(posedge timer)begin
        left_LED = (direc == 2'b00)? 9'b000001111:  //forward
                    (direc == 2'b01)? 9'b111100000: //reverse
                    (direc == 2'b10)? 9'b000001100: //left
                    (direc == 2'b11)? 9'b000001111; //right

        left_LED = (direc == 2'b00)? 9'b000001111:  //forward
                    (direc == 2'b01)? 9'b111100000: //reverse
                    (direc == 2'b10)? 9'b000001111: //left
                    (direc == 2'b11)? 9'b000001100; //right

    end
endmodule