module FSM_tb;
    // Step 1: Define test bench variables:
    logic [3:0] KEY; //save, execute, reset, delete (respectively)
    logic [3:0]SW; //basic instruction/direction SW[1:0], torque level SW[3:2]
    logic CLOCK50; //Clk

    logic [6:0]  HEX0; // right
    logic [6:0]  HEX1; // left
    logic [6:0]  HEX2; // forward
    logic [6:0]  HEX3;  // reverse backwards
    logic [17:0] LEDR; //Left torque & right torque

    // Step 2: Instantiate Device Under Test:
    FSM DUT (.*); // SystemVerilog feature: `.*` automatically connects ports of the instantiated module to variables in this module with the same port/variable name!! So useful :D.

    // Step 3: Toggle the clock variable every 10 time units to create a clock signal **with period = 20 time units**:
    // initial forever #10 clk = ~clk; // forever is an infinite loop!

    // Log every clock cycle:
    initial begin
        forever begin // strobe: print values at end of the current timestep
            $strobe("t: %d ps, LEDR: %b, HEX0: %b, HEX1: %b, HEX2: %b, HEX3: %b", $time, LEDR, HEX0, HEX1, HEX2, HEX3);
            #10;
        end
    end

    initial forever #1 CLOCK50 = ~CLOCK50;

    // Step 4: Initial block with initial inputs. To specify later inputs, use the delay operator `#`.
    initial begin
        $dumpfile("test_fsm.vcd");  // Tell the simulator to dump variables into the 'waveform.vcd' file during the simulation. Required to produce a waveform .vcd file.
        $dumpvars();
        CLOCK50 = 0;
        #40;

        SW = 4'b0000; // forward 0
        KEY[3] = 1; // pressed save
        #10;
        KEY[3] = 0;
        #40;

        SW = 4'b0100; // forward 1
        KEY[3] = 1; // pressed save
        #10;
        KEY[3] = 0;
        #40;

        SW = 4'b1000; // forward 2
        KEY[3] = 1; // pressed save
        #10;
        KEY[3] = 0;
        #40;

        SW = 4'b1100; // forward 2
        KEY[3] = 1; // pressed save
        #10;
        KEY[3] = 0;
        #40;

        SW = 4'b1010; // left 2
        KEY[3] = 1; // pressed save
        #10;
        KEY[3] = 0;
        #40;

        KEY[2] = 1; // pressed execute/read
        #10;
        KEY[2] = 0;
        #40;

        #1200;



        $finish(); // Important: must end simulation (or it will go on forever!)
    end

endmodule
