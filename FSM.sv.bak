module FSM(
    input clk,
    input logic save, execute, reset,
    input logic empty,full, timer,
    output logic write_enable, read_enable, timer_enable
);

    typedef enum logic [2:0] {idle, saving, waiting, read, display} State;
	
	 State current_state, next_state;

    always_comb begin
        case (current_state)
            idle: next_state = (save)? saving: idle;
            saving: next_state = (reset)? idle: waiting;
            waiting: next_state = (reset)? idle:
                                (save)? saving:
                                (execute | full)? read: waiting;
            read: next_state = (reset)? idle: display;
            display: next_state = (empty | reset)? idle: (timer)? read: display;
        endcase
    end
	 
	 always_ff @(posedge clk) begin 
		current_state <= next_state;
	 end
    
    assign write_enable = (current_state == saving)? 1:0;
    assign read_enable = (current_state == read)? 1:0;
    assign timer_enable = (current_state == read | current_state == display)? 1:0;

endmodule
