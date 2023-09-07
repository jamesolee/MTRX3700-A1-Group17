#!/bin/sh

testbench_name="top_level_tb";   # The testbench used for the simulation

### Run this to use Verilator and g++ to build and simulate your Verilog code.
# Output: A waveform .png for a quick reference, and a .vcd that you can download and view in GTKWave, etc, for more detailed analysis.
set -o errexit;   # Exit on errorr.

verilator -Wall -Wno-TIMESCALEMOD -Wno-UNUSEDSIGNAL -Wno-UNDRIVEN --trace --timing --assert --top $testbench_name --cc $testbench_name.sv --main --exe;  # 'Verilate' your verilog source into C++ code.
make -C obj_dir -f V$testbench_name.mk V$testbench_name;    # Compile your C++ into a simulation executable.
echo "Running simulation:";
./obj_dir/V$testbench_name; # Run simulation.
