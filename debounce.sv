// module debounce (
//     input clk, button,
//     output reg button_pressed
// );
//   localparam delay_val = 2500; // 50us with clk period 20ns is ____ counts
//   int count = 0;
//   reg deb = 0;
  
//   // Your code here!
//   always @(posedge clk) begin
//     if (button != deb) begin
//       deb <= button;
//       count <= 0;
//     end
//     else if (count == delay_val) 
//       button_pressed <= deb;
//     else
//       count <= count + 1;
//   end 

// endmodule

module debounce (
    input clk, button,
    output reg button_pressed
);
  parameter delay_val = 2; 
  integer count = 0;
  reg new_button_pressed=0;
  always @(posedge clk) begin
      if (button != new_button_pressed) begin
        new_button_pressed <= button;
        count <= 0;
      end
      else if (count == delay_val) button_pressed <= new_button_pressed;
      else count <= count + 1;
  end
endmodule


