`timescale 1ns/1ns
module debounce_tb;

    logic clk;
    logic button;/* verilator lint_off UNUSEDSIGNAL*/
    logic button_edge;
    logic button_pressed;

    debounce DUT (.*);

    initial forever #10 clk = ~clk; 
    
    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars();
        clk = 0;
        button = 0;
        $display("Button is: %b, button_pressed is: %b correct button_pressed is 0", button, button_pressed);
        #100
        button = 1;
        #20000
        $display("Button is: %b, button_pressed is: %b, correct button_pressed is 0", button, button_pressed);
        button = 0;
        #2000
        $display("Button is: %b, button_pressed is: %b, correct button_pressed is 0", button, button_pressed);
        button = 1;
        #51000
        $display("Button is: %b, button_pressed is: %b, correct button_pressed is 1", button, button_pressed);
        #2000
        $finish();
    end

endmodule
