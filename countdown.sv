`timescale 1ns/1ns
//The above compiler directive explicitly specifies <time unit>/<time precision>


module countdown (
    input             clk, 
    input             enable, 
    output logic      timer
);
	 localparam delay_val = 100000000;

    logic [27:0]clk_cnt = 0;

    //set timer to 1 for 1 clk cycle every 2s
    always_ff @(posedge clk)begin
        if(!enable) begin
            clk_cnt <= 0;
            timer <= 0;
        end
        else begin
            if (clk_cnt == delay_val-1) begin
                timer <= 1;
                clk_cnt <= 0;
            end
            else begin
                clk_cnt <= clk_cnt + 1;
                timer <= 0;
            end
        end
        
    end

endmodule
