module top_level_tb;
    // Step 1: Define test bench variables:
    logic [3:0] KEY; //save, execute, reset, delete (respectively)
    logic [3:0]SW; //basic instruction/direction SW[1:0], torque level SW[3:2]
    logic CLOCK50; //Clk
    logic [6:0] HEX3, HEX2, HEX1, HEX0; //7 seg display
    logic [17:0] LEDR; //Left torque & right torque    

    // Step 2: Instantiate Device Under Test:
    top_level DUT (.*); // SystemVerilog feature: `.*` automatically connects ports of the instantiated module to variables in this module with the same port/variable name!! So useful :D.

    // Step 3: Toggle the clock variable every 10 time units to create a clock signal **with period = 20 time units**:
    // initial forever #1 clk = ~clk; // forever is an infinite loop!

    // Log every clock cycle:
    // initial begin
    //     forever begin // strobe: print values at end of the current timestep
    //         $monitor("we: %b, re:%b, te:%b", write_enable, read_enable, timer_enable);
    //         #2;
    //     end
    // end

    // Step 4: Initial block with initial inputs. To specify later inputs, use the delay operator `#`.
    initial begin
        $dumpfile("top_level.vcd");  // Tell the simulator to dump variables into the 'waveform.vcd' file during the simulation. Required to produce a waveform .vcd file.
        $dumpvars();
        #2
        SW[3:0] = 0011;
        KEY[3] = 1;
        #200000000
        SW[3:0] = 1111;
        KEY[3] = 1;
        #200000000
        KEY[3] = 0;
        KEY[2] = 1;
        #200000000
        #200000000

        $finish(); // Important: must end simulation (or it will go on forever!)
    end

endmodule
