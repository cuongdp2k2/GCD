module control_unit #( parameter BusSize = 8 ) (
    // input
        input logic [BusSize-1:0] A_i       , 
                                  B_i       ,

    // output
        output logic              done_o ,
        output logic [1:0]        A_op_o ,
        output logic [1:0]        B_op_o 
);
    // A    :  Discription   
    // 00   :  A = A - B
    // 01   :  A = A_in 
    // 10   :  A = B 
    // 11   :  A = A

    // B    : Discription
    // 00   : B = B_in
    // 01   : B = A
    // 10   : B = B 


    always_latch begin
        if( A_i > B_i ) begin
            
            done_o = 1'b0  ;
            A_op_o = 2'b00 ;
            B_op_o = 2'b10 ;

        end else if( B_i > A_i ) begin
            
            done_o = 1'b0  ;
            A_op_o = 2'b10 ;
            B_op_o = 2'b01 ;

        end else if( A_i == B_i || B_i == 0 || B_i == 1 ) begin  // Done -> A_i = B_i 

            done_o = 1'b1  ;
            A_op_o = 2'b01 ;
            B_op_o = 2'b00 ;

        end
    end

endmodule : control_unit 
