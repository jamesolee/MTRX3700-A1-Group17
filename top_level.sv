module top_level(
    input [3:0] KEY, //save, execute, reset, delete (respectively)
    input [4:0]SW, //basic instruction/direction SW[1:0], torque level SW[4:2]
    input CLOCK_50, //Clk
    output [6:0] HEX7, HEX6, HEX5, HEX4, HEX3, HEX2, HEX1, HEX0, //7 seg display
    output [17:0] LEDR, //Left torque & right torque
	 output [8:0] LEDG //for observing states
);

	 // Debounced KEY values - KEY[3], KEY[2], KEY[1], KEY[0]
    logic save, execute, reset, delete;
	 
	 // FIFO flags and Timer flags 
    logic write_enable, read_enable, timer_enable, fifo_reset;
    logic [4:0]instruction;
    logic empty, full;     
    logic timer; 

	 // Module calls 
    FSM u_FSM (
        .clk(CLOCK_50),
        .save(save),
        .execute(execute),
        .reset(reset),
        .empty(empty),
        .full(full),
        .timer(timer),
        .write_enable(write_enable),
        .read_enable(read_enable),
        .timer_enable(timer_enable),
		  .fifo_reset(fifo_reset),
		  .lights(LEDG[2:0])
    );
	 
    countdown u_clock (
        .clk(CLOCK_50), 
        .enable(timer_enable), 
        .timer(timer));

    debounce u_debounce0 (
        .clk(CLOCK_50), 
        .button(!KEY[0]),
        .button_edge(delete));
    debounce u_debounce1 (
        .clk(CLOCK_50), 
        .button(!KEY[1]),
        .button_edge(reset));
    debounce u_debounce2 (
        .clk(CLOCK_50), 
        .button(!KEY[2]),
        .button_edge(execute));
    debounce u_debounce3 (
        .clk(CLOCK_50), 
        .button(!KEY[3]),
        .button_edge(save));

    fifo u_fifo (
        .clk(CLOCK_50),
        .rst(fifo_reset),
        .we(write_enable),
        .re(read_enable),
        .del(delete),
        .data_in(SW[4:0]),
        .data_out(instruction),
        .empty(empty),
        .full(full));

    torque_display u_torque(
    .enable(timer_enable),
    .instruction(instruction[1:0]),
    .torque(instruction[4:2]),
    .LEDR(LEDR[17:0]));

    direction_display u_direction(
    .enable(timer_enable),
    .direc(instruction[1:0]),
    .HEX0(HEX0), // right
    .HEX1(HEX1), // left
    .HEX2(HEX2), // forward
    .HEX3(HEX3)  // reverse backwards
    );

    speed_display u_speed(
    .enable(timer_enable),
    .read_enable(read_enable),
    .instruction(instruction[1:0]),
    .torque(instruction[4:2]),
    .HEX4(HEX4), // right digit
    .HEX5(HEX5), // right tenth
    .HEX6(HEX6), // left digit
    .HEX7(HEX7)  // left tenth
	 );
	
endmodule