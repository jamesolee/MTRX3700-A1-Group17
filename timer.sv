`timescale 1ns/1ns

module timer (
    input             clk, 
    input             enable, 
    output logic      timer
);

    logic [27:0]clk_cnt = 0;

    always_ff @(posedge clk & enable)begin
        if(clk_cnt >= 50000000-1) begin
            timer <= ~timer; //period of 2s for 50MHz
            clk_cnt <= 0;
        end
        else clk_cnt <= clk_cnt + 1;
    end

endmodule