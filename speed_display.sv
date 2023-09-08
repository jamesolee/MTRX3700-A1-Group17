module speed_display(
    input enable,
    input read_enable,
    input      [1:0]  instruction,
    input      [1:0]  torque,
    output logic [6:0]  HEX4, // right digit
    output logic [6:0]  HEX5, // right tenth
    output logic [6:0]  HEX6, // left digit
    output logic [6:0]  HEX7  // left tenth
);

    logic [4:0]vel_r = 0;
    logic [4:0]vel_l = 0;
    logic [4:0]acc_fr, acc_br =0; //change in right speed
    logic [4:0]acc_fl, acc_bl =0; //change in left speed

    //set absolute change in speed for left & right wheel
    always_comb begin
        case (instruction):
            2'b00: begin
                acc_fl = (torque == 0)? 0: 
                        (torque == 1)? 2:
                        (torque == 2)? 4:
                        (torque == 3)? 6: 
                        (torque == 4)? 8:0;   
                acc_fr = acc_fl;
                acc_bl = 0;
                acc_br = 0;
            end
            2'b01: begin
                acc_bl = (torque == 0)? 0: 
                        (torque == 1)? 2:
                        (torque == 2)? 4:
                        (torque == 3)? 6: 
                        (torque == 4)? 8:0;   
                acc_br = acc_fl;
                acc_fl = 0;
                acc_fr = 0;
            end
            2'b10: begin //left
                acc_fl = (torque == 0)? 0: 
                        (torque == 1)? 0:
                        (torque == 2)? 2:
                        (torque == 3)? 4:
                        (torque == 4)? 6:0;
                acc_fr = (torque == 0)? 0: 
                        (torque == 1)? 2:
                        (torque == 2)? 4:
                        (torque == 3)? 6: 
                        (torque == 4)? 8:0;
                acc_bl = 0;
                acc_br = 0;  
            end
            2'b11:begin //right
                acc_l = (torque == 0)? 0: 
                        (torque == 1)? 2:
                        (torque == 2)? 4:
                        (torque == 3)? 6: 
                        (torque == 4)? 8:0;   
                acc_r = (torque == 0)? 0: 
                        (torque == 1)? 0:
                        (torque == 2)? 2:
                        (torque == 3)? 4:
                        (torque == 4)? 6:0;
                acc_bl = 0;
                acc_br = 0;
            end 
            else: begin
                acc_bl = 0;
                acc_br = 0;
                acc_fl = 0;
                acc_fr = 0;
            end
        endcase 
    end

    output logic [4:0]bcd_r1, bcd_r2, bcd_l1, bcd_l2;

    always_ff @(posedge read_enable) begin
        //calculate current speed
        vel_r = (vel_r-acc_br > 9)? vel_r: (vel_r+acc_fr-acc_br); 
        vel_l = (vel_l-acc_bl > 9)? vel_l: (vel_l+acc_fl-acc_bl);

        bcd_r2 = (~enable)? 12: //force HEX to be off
                 (vel_r > 9)? 9: 0;
        bcd_r1 = (~enable)? 12: //force HEX to be off
                 (vel_r >= 9)? 9: vel_r;   

        bcd_l2 = (~enable)? 12: //force HEX to be off
                 (vel_l > 9)? 9: 0;
        bcd_l1 = (~enable)? 12: //force HEX to be off
                 (vel_l >= 9)? 9: vel_l;     
    end
    
        //// Seven-Segment Displays
    seven_seg u0(
    .bcd(bcd_r2),
    .segments(HEX4));

    seven_seg u1(
    .bcd(bcd_r1),
    .segments(HEX5));

    seven_seg u2(
    .bcd(bcd_l2),
    .segments(HEX6));

    seven_seg u3(
    .bcd(bcd_l1),
    .segments(HEX7));
endmodule
