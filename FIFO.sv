module fifo (
  input        clk,
  input        rst,
  input        we,
  input        re,
  input        del,
  input        [1:0] data_in,
  output reg   [1:0] data_out,
  output       empty,
  output       full
);
    localparam a_width = int'($ceil($clog2(256)));

    reg [1:0]       ram [2**a_width-1:0];
    reg [a_width:0] r_ptr, w_ptr;

    always @(posedge clk) begin
        if (rst) begin
            r_ptr <= 0;
            w_ptr <= 0; 
        end
        else if (del) w_ptr <= w_ptr -1;
        else begin
            if (we & ~full) begin
                ram[w_ptr] <= data_in;
                w_ptr <= w_ptr + 1;
            end
            if (re & ~empty) begin
                data_out <= ram[r_ptr];
                r_ptr <= r_ptr + 1;
            end
        end
    end

    assign empty = r_ptr == w_ptr? 1:0;
    assign full = r_ptr[a_width-1:0] != w_ptr[a_width-1:0]? 0: 
                    r_ptr[a_width] != w_ptr[a_width]? 1:0;

endmodule
