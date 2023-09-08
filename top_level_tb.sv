module top_level_tb;
    // Step 1: Define test bench variables:
    logic [3:0] KEY; //save, execute, reset, delete (respectively)
    logic [4:0]SW; //basic instruction/direction SW[1:0], torque level SW[3:2]
    logic CLOCK_50; //Clk

    logic [6:0]  HEX0; // right
    logic [6:0]  HEX1; // left
    logic [6:0]  HEX2; // forward
    logic [6:0]  HEX3;  // reverse backwards
    logic [17:0] LEDR; //Left torque & right torque

    logic [8:0] LEDG;

    // Step 2: Instantiate Device Under Test:
    top_level DUT (.*); // SystemVerilog feature: `.*` automatically connects ports of the instantiated module to variables in this module with the same port/variable name!! So useful :D.

    // Step 3: Toggle the clock variable every 10 time units to create a clock signal **with period = 20 time units**:
    // initial forever #10 clk = ~clk; // forever is an infinite loop!

    // Log every clock cycle:
    // initial begin
    //     forever begin // strobe: print values at end of the current timestep
    //         $strobe("t: %d ps, LEDR: %b, HEX0: %b, HEX1: %b, HEX2: %b, HEX3: %b", $time, LEDR, HEX0, HEX1, HEX2, HEX3);
    //         #(seconds/4); // every 0.25 seconds = 4Hz
    //     end
    // end

    initial forever #10 CLOCK_50 = ~CLOCK_50; // every 20ns = 50MHz (simulating board clock)

    // localparam seconds = 1000000000; // conversion from nanoseconds to seconds
    localparam units = 1000;

    // Step 4: Initial block with initial inputs. To specify later inputs, use the delay operator `#`.
    initial begin
        $dumpfile("test_top_level.vcd");  // Tell the simulator to dump variables into the 'waveform.vcd' file during the simulation. Required to produce a waveform .vcd file.
        $dumpvars();
        CLOCK_50 = 0;
        #(4*units);

        SW = 5'b00000; // forward 0
        #(1*units); // 1 second delay between setting instruction switches and pressing the save key
        KEY[3] = 1; // pressed save
        #(3*units);
        KEY[3] = 0; // unpress save
        #(4*units);

        SW = 5'b00100; // forward 1
        #(1*units); // 1 second delay between setting instruction switches and pressing the save key
        KEY[3] = 1; // pressed save
        #(3*units);
        KEY[3] = 0; // unpress save
        #(4*units);

        SW = 5'b01000; // forward 2
        #(1*units); // 1 second delay between setting instruction switches and pressing the save key
        KEY[3] = 1; // pressed save
        #(3*units);
        KEY[3] = 0; // unpress save
        #(4*units);

        SW = 5'b01100; // forward 3
        #(1*units); // 1 second delay between setting instruction switches and pressing the save key
        KEY[3] = 1; // pressed save
        #(3*units);
        KEY[3] = 0; // unpress save
        #(4*units);

        SW = 5'b01110; // left 3
        #(1*units); // 1 second delay between setting instruction switches and pressing the save key
        KEY[3] = 1; // pressed save
        #(3*units);
        KEY[3] = 0; // unpress save
        #(4*units);

        KEY[2] = 1; // pressed execute/read
        #(3*units);
        KEY[2] = 0;

        #(100*units); // leave to execute for 12 seconds



        $finish(); // Important: must end simulation (or it will go on forever!)
    end

endmodule
