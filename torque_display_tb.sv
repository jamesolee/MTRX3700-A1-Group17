module torque_display_tb;
    // Step 1: Define test bench variables:
    logic enable;
    logic [1:0]  instruction;
    logic [2:0]  torque; 
    logic [8:0]  left_LED; // LEDR[17:9]
    logic [8:0]  right_LED; // LEDR[8:0]

    // Step 2: Instantiate Device Under Test:
    torque_display DUT (.*); // SystemVerilog feature: `.*` automatically connects ports of the instantiated module to variables in this module with the same port/variable name!! So useful :D.

    // Step 3: Toggle the clock variable every 10 time units to create a clock signal **with period = 20 time units**:
    // initial forever #10 clk = ~clk; // forever is an infinite loop!

    // Log every clock cycle:
    initial begin
        forever begin // strobe: print values at end of the current timestep
            $strobe("t: %d ps, enable: %b, direc: %b, torque: %b", $time, enable,instruction, torque);
            $strobe("left_LED: %b", left_LED);
            $strobe("right_LED: %b", right_LED);
            #1;
        end
    end

    // Step 4: Initial block with initial inputs. To specify later inputs, use the delay operator `#`.
    initial begin
        $dumpfile("torque_display.vcd");  // Tell the simulator to dump variables into the 'waveform.vcd' file during the simulation. Required to produce a waveform .vcd file.
        $dumpvars();
        enable = 1;
        instruction = 0;
        torque = 0;

        repeat(15)begin
            #1
            instruction = (torque == 3'b011)? instruction + 1: instruction; 
            torque = torque + 1'b1;
        end       
            
        #1 enable = 0;
        #1
        $finish(); // Important: must end simulation (or it will go on forever!)
    end

endmodule
