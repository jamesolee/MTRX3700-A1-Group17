`timescale 1ns/1ns
module countdown_tb;

    logic clk;
    logic enable;
    logic display_next;

    countdown DUT (.*);

    localparam delay_cnt = 1000; // Mock cycle value
    localparam cycle_len = 20; // 1 clk cycle = 20ns

    initial forever #10 clk = ~clk; // Clock period of 20ns
    
    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars();
        clk = 0;
        enable = 1;

        #(delay_cnt * cycle_len)
        $display("display next is %b", display_next);
        #(cycle_len*10)
        enable = 0;
        $display("display next is %b", display_next);
        #(cycle_len*10)
        enable = 1;
        #(cycle_len*500)
        $display("display next is %b", display_next);
        #(cycle_len*500)
        $display("display next is %b", display_next);

        

        
        $finish();
    end

endmodule
