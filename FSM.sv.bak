module FSM(
    input [3:0] KEY, //save, execute, reset, delete
    input [3:0]SW, //basic instruction, torque level
    input CLOCK50, //Clk
    output [6:0] HEX3, HEX2, HEX1, HEX0, //7 seg display
    output [17:0] LEDR, //Left torque & right torque
);

    logic save, execute, reset, delete;
    logic write_enable, read_enable, timer_enable;
    logic [3:0]instruction;
    logic empty, full;
    logic timer;
    enum {idle, saving, waiting, read, display} state = idle; 

    always_ff @(posedge clk) begin
        case (state)
            idle: state <= (save)? saving: idle;
            saving: state <= (reset)? idle: waiting;
            waiting: state <= (reset)? idle:
                                (save)? saving:
                                (execute | full)? read: waiting;
            read: state <= (reset)? idle: 
                            (timer)? display: read;
            display: state <= (empty | reset)? idle: read;
        endcase
    end
    
    assign write_enable = (state == save)? 1:0;
    assign read_enable = (state == read)? 1:0;
    assign timer_enable = (state == read | state == display)? 1:0;


    debounce u0 (
        .clk(CLOCK50), 
        .button(KEY[0]),
        .button_pressed(delete));
    debounce u1 (
        .clk(CLOCK50), 
        .button(KEY[1]),
        .button_pressed(reset));
    debounce u2 (
        .clk(CLOCK50), 
        .button(KEY[2]),
        .button_pressed(execute));
    debounce u3 (
        .clk(CLOCK50), 
        .button(KEY[3]),
        .button_pressed(save));

    fifo u5 (
        .clk(CLOCK50),
        .rst(reset),
        .we(write_enable),
        .re(read_enable),
        .del(delete),
        .data_in(SW[3:0]),
        .data_out(instruction),
        .empty(empty),
        .full(full));

    torque_display u6(
    .enable(timer_enable);
    .direc(instruction[1:0]),
    .torque(instruction[3:2]),
    .left_LED(LEDR[17:9]),
    .right_LED(LEDR[8:0])
);

    direction_display u7(
    .enable(timer_enable);
    .direc(instruction[1:0]),
    .HEX0(HEX0), // right
    .HEX1(HEX1), // left
    .HEX2(HEX2), // forward
    .HEX3(HEX3)  // reverse backwards
);
endmodule
