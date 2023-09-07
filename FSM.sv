module FSM(
    input clk,
    input logic save, execute, reset,
    input logic empty,full, timer,
    output logic write_enable, read_enable, timer_enable
);

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
    
    assign write_enable = (state == saving)? 1:0;
    assign read_enable = (state == read)? 1:0;
    assign timer_enable = (state == read | state == display)? 1:0;

endmodule
