module debounce (
    input clk, button,
    output reg button_edge
);
  localparam delay_val = 20; 
  int count = 0;
  reg deb = 0;
  logic button_q0, button_pressed;
  
  always @(posedge clk) begin
    if (button != deb) begin
      deb <= button;
      count <= 0;
    end
    else if (count == delay_val) 
      button_pressed <= deb;
    else
      count <= count + 1;
  end 
  
  always_ff @(posedge clk) begin : edge_detect
      button_q0 <= button_pressed;
  end
  assign button_edge = (button_pressed > button_q0);

endmodule

