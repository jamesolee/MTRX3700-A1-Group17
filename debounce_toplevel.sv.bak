module debounce_toplevel(
    input KEY[0], //save, execute, reset, delete (respectively)
    input CLOCK50, //Clk
    output LEDR[0] //Left torque & right torque
);

debounce u_debounce0 (
        .clk(CLOCK50), 
        .button(KEY[0]),
        .button_pressed(LEDR[0]));

endmodule
