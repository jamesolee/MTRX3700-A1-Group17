module fifo (
  input        clk,
  input        rst,
  input        we,
  input        re,
  input        del,
  input        [3:0] data_in,
  output reg   [3:0] data_out,
  output       empty,
  output       full
);
    //exact same thing as lab 2 FIFO
    //except 2 commented parts

    //changed the width to 256 (8-bit adress)
    reg [3:0]       ram [255:0];

    localparam a_width = 8;
    reg [a_width:0] r_ptr, w_ptr;

    always @(posedge clk) begin
        if (rst) begin
            r_ptr <= 0;
            w_ptr <= 0; 
        end
        // added new rule to move back one pointer
        else if (del) w_ptr <= w_ptr -1;
        else begin
            if (we & ~full) begin
                ram[w_ptr[a_width-1:0]] <= data_in;
                w_ptr <= w_ptr + 1;
            end
            if (re & ~empty) begin
                data_out <= ram[r_ptr[a_width-1:0]];
                r_ptr <= r_ptr + 1;
            end
        end
    end

    assign empty = r_ptr == w_ptr? 1:0;
    assign full = r_ptr[a_width-1:0] != w_ptr[a_width-1:0]? 0: 
                    r_ptr[a_width] != w_ptr[a_width]? 1:0;

endmodule
