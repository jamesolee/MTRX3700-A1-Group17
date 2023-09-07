module led_toplevel(
    input KEY[3:0], //save, execute, reset, delete (respectively)
    input CLOCK50, //Clk
    output LEDR [17:0],//Left torque & right torque
    output LEDG [3:0]
);

logic save, delete, reset, execute;

debounce u_debounce0 (
    .clk(CLOCK50), 
    .button(!KEY[0]),
    .button_edge(delete));
debounce u_debounce1 (
    .clk(CLOCK50), 
    .button(!KEY[1]),
    .button_edge(reset));
debounce u_debounce2 (
    .clk(CLOCK50), 
    .button(!KEY[2]),
    .button_edge(execute));
debounce u_debounce3 (
    .clk(CLOCK50), 
    .button(!KEY[3]),
    .button_edge(save));

always_ff @(posedge CLOCK50) begin
    if (save) begin
        case (LEDG[3])
            0: LEDG[3] <= 1;
            1: LEDG[3] <= 1;
        endcase
    end
    if (execute) begin
        case (LEDG[2])
            0: LEDG[2] <= 1;
            1: LEDG[2] <= 1;
        endcase
    end
    if (reset) begin
        case (LEDG[1])
            0: LEDG[1] <= 1;
            1: LEDG[1] <= 1;
        endcase
    end
    if (delete) begin
        case (LEDG[1])
            0: LEDG[1] <= 1;
            1: LEDG[1] <= 1;
        endcase
    end
end

endmodule
