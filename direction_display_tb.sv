module direction_display_tb;
    // Step 1: Define test bench variables:
    logic enable;
    logic [1:0]  direc;
    logic [6:0]  HEX0; // right
    logic [6:0]  HEX1; // left
    logic [6:0]  HEX2; // forward
    logic [6:0]  HEX3;  // reverse backwards

    // Step 2: Instantiate Device Under Test:
    direction_display DUT (.*); // SystemVerilog feature: `.*` automatically connects ports of the instantiated module to variables in this module with the same port/variable name!! So useful :D.

    // Step 3: Toggle the clock variable every 10 time units to create a clock signal **with period = 20 time units**:
    // initial forever #10 clk = ~clk; // forever is an infinite loop!

    // Log every clock cycle:
    initial begin
        forever begin // strobe: print values at end of the current timestep
            $strobe("t: %d ps, enable: %b, direc: %b, HEX0: %b, HEX1: %b, HEX2: %b, HEX3: %b", $time, enable, direc, HEX0, HEX1, HEX2, HEX3);
            #10;
        end
    end

    // Step 4: Initial block with initial inputs. To specify later inputs, use the delay operator `#`.
    initial begin
        $dumpfile("direction_display.vcd");  // Tell the simulator to dump variables into the 'waveform.vcd' file during the simulation. Required to produce a waveform .vcd file.
        $dumpvars();
        enable = 1;

            direc = 2'b00;
        #10 direc = 2'b01;
        #10 direc = 2'b10;
        #10 direc = 2'b11;
            
        #10 enable = 0;
        $finish(); // Important: must end simulation (or it will go on forever!)
    end

endmodule
