module seven_seg(
    input timer;
    input      [1:0]  direc,
    output logic [6:0]  HEX0, // right
    output logic [6:0]  HEX1, // left
    output logic [6:0]  HEX2, // forward
    output logic [6:0]  HEX3  // reverse backwards
);

    always_ff @(posedge timer)begin
        HEX0 = (direc == 2'b11)? 7'b0101111: 7'b1111111;
        HEX1 = (direc == 2'b10)? 7'b1000111: 7'b1111111;
        HEX2 = (direc == 2'b00)? 7'b0001110: 7'b1111111;
        HEX3 = (direc == 2'b01)? 7'b0000011: 7'b1111111;
    end
endmodule