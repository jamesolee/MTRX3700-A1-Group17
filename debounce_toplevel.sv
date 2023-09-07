module debounce_toplevel(
    input KEY[3:0], //save, execute, reset, delete (respectively)
    input CLOCK50, //Clk
    output LEDR [17:0]//Left torque & right torque
);

debounce u_debounce0 (
        .clk(CLOCK50), 
        .button(KEY[3]),
        .button_pressed(LEDR[1]));

endmodule
