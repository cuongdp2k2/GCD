module control_unit #( parameter BusSize = 8 ) (
    // input
        input logic [BusSize-1:0] A_i       , 
                                  B_i       ,
        input logic               Go_i      ,

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


    always_comb begin
        if(Go_i) begin
            
            // default A > B
            done_o = 1'b0  ; 
            A_op_o = 2'b00 ; //A = A - B
            B_op_o = 2'b10 ; // B = B

            if(A_i < B_i) begin
                done_o = 1'b0  ;
                A_op_o = 2'b10 ; // A = B
                B_op_o = 2'b01 ; // B = A
            end else if(A_i == B_i) begin
                done_o = 1'b1  ;
                A_op_o = 2'b01 ; // new A input
                B_op_o = 2'b00 ; // new B input
            end
        end else begin
            done_o = 1'bx  ;
            A_op_o = 2'b11 ; // A = A 
            B_op_o = 2'b10 ; // B = B
        end
    end

endmodule : control_unit 
