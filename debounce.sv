module debounce (
    input clk, button,
    output reg button_pressed
);
  localparam delay_val = 2500; // 50us with clk period 20ns is ____ counts
  int count = 0;
  reg deb = 0;
  
  // Your code here!
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

endmodule


