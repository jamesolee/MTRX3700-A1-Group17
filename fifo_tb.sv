module fifo_tb;
    // Step 1: Define test bench variables:
    logic clk; //Clk
    logic rst;
    logic we;
    logic re;
    logic del;
    logic [4:0] data_in;
    logic [4:0] data_out;
    logic empty;
    logic full;

    // Step 2: Instantiate Device Under Test:
    fifo DUT (.*); // SystemVerilog feature: `.*` automatically connects ports of the instantiated module to variables in this module with the same port/variable name!! So useful :D.

    // Step 3: Toggle the clock variable every 10 time units to create a clock signal **with period = 20 time units**:
    // initial forever #10 clk = ~clk; // forever is an infinite loop!

    // Log every clock cycle:
    initial begin
        forever begin // strobe: print values at end of the current timestep
            $strobe("t: %d ps, data_in = %b", $time, data_in);
            #(units); // every 0.25 units = 4Hz
        end
    end

    initial forever #10 clk = ~clk; // every 20ns = 50MHz (simulating board clock)

    localparam units = 20; // timescale for the simulation

    // Step 4: Initial block with initial inputs. To specify later inputs, use the delay operator `#`.
    initial begin
        $dumpfile("test_fifo.vcd");  // Tell the simulator to dump variables into the 'waveform.vcd' file during the simulation. Required to produce a waveform .vcd file.
        $dumpvars();
        clk = 0;
        #(4*units);

        // Nothing should be written to BRAM
        re = 0;
        we = 0;
        del = 0;
        rst = 0;
        #(1*units);
        data_in = 5'b00111;
        #(1*units);
        data_in = 5'b00100;
        #(1*units);
        data_in = 5'b00011;
        #(1*units);

        
        #(1*units);
        data_in = 5'b00111;
        we = 1; // Write Enable
        #(1*units);
        data_in = 5'b00100;
        #(1*units);
        data_in = 5'b00010;
        #(1*units);
        del = 1; // Delete
        #(1*units);
        del = 0; // Delete off
        data_in = 5'b00010;
        #(1*units);
        rst = 1; // Reset
        #(4*units);
        // 3 instructions should have been added, then 1 removed, then 1 added, then rst

        rst = 0; // Reset off
        data_in = 5'b00000;
        #(1*units);
        data_in = 5'b00001;
        #(1*units);
        data_in = 5'b00010;
        #(1*units);
        data_in = 5'b00011;
        #(1*units);
        data_in = 5'b00100;
        #(1*units);
        data_in = 5'b00101;
        #(1*units);
        data_in = 5'b00110;
        #(1*units);
        we = 0; // Write disable
        re = 1; // Read enable
        // Should output to data_out until empty
        #(20*units)


        $finish(); // Important: must end simulation (or it will go on forever!)
    end

endmodule
