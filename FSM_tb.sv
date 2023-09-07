module FSM_tb;
    // Step 1: Define test bench variables:
    logic clk;
    logic save, execute, reset;
    logic empty,full, timer;
    logic write_enable, read_enable, timer_enable;

    // Step 2: Instantiate Device Under Test:
    FSM DUT (.*); // SystemVerilog feature: `.*` automatically connects ports of the instantiated module to variables in this module with the same port/variable name!! So useful :D.

    // Step 3: Toggle the clock variable every 10 time units to create a clock signal **with period = 20 time units**:
    initial forever #1 clk = ~clk; // forever is an infinite loop!

    // Log every clock cycle:
    initial begin
        forever begin // strobe: print values at end of the current timestep
            $monitor("we: %b, re:%b, te:%b", write_enable, read_enable, timer_enable);
            #2;
        end
    end

    // Step 4: Initial block with initial inputs. To specify later inputs, use the delay operator `#`.
    initial begin
        $dumpfile("FSM_display.vcd");  // Tell the simulator to dump variables into the 'waveform.vcd' file during the simulation. Required to produce a waveform .vcd file.
        $dumpvars();
        clk = 0;
        save = 0;
        execute = 0;
        reset = 0;
        empty = 0;
        full = 0;
        timer = 0;

        #3
        save = 1;
        #2
        save = 0;
        execute = 1;
        #4
        execute = 0;
        timer = 1;
        #2
        timer = 0;
        empty = 1;
        #2

        $finish(); // Important: must end simulation (or it will go on forever!)
    end

endmodule
