module ex02 #(parameter BusSize = 8 ) (
    // input
        input logic                clk_i    ,
        input logic  [BusSize-1:0] A_i      ,
        input logic  [BusSize-1:0] B_i      ,

    // output
        output logic [BusSize-1:0] result_o 
) ;

    // Store data
    //reg [BusSize-1:0] result_reg ;
    reg [BusSize-1:0] A_data_reg ;
    reg [BusSize-1:0] B_data_reg ;
    reg [1:0]         A_op_reg   ;
    reg [1:0]         B_op_reg   ;

    // logic A
    logic [BusSize-1:0] A_data    ;
    reg   [BusSize-1:0] AsubB     ;

    // Logic B
    logic [BusSize-1:0] B_data  ;
    
    // Control
    logic       done ;
    logic [1:0] A_op ;
    logic [1:0] B_op ;

    assign result_o = ( done == 0 ) ? 0 : (B_data_reg == 0 || A_data_reg == 0) ? 0 : (B_data_reg == 1) ? B_data_reg : A_data ;

    always @(posedge clk_i ) begin
        A_data_reg <= A_data ;
        B_data_reg <= B_data ;
        A_op_reg   <= A_op   ;
        B_op_reg   <= B_op   ;
        AsubB      <= A_data - B_data ;
    end

    always_comb begin :  A_selector
        // case (A_op)
        //     00     :    A_data = AsubB      ;
        //     01     :    A_data = A_orgin    ; 
        //     10     :    A_data = B_data_reg ;
        //     11     :    A_data = A_data_reg ;   
        //     default:    A_data = 0          ;
        // endcase

        if(A_op_reg == 2'b00)      A_data = AsubB      ;
        else if(A_op_reg == 2'b11) A_data = A_data_reg ;
        else if(A_op_reg == 2'b10) A_data = B_data_reg ;
        else                       A_data = A_i        ;

    end

    always_comb begin : B_selector
        // case (B_op)
        //     00     : B_data = B_orgin     ;
        //     01     : B_data = A_data_reg  ;
        //     10     : B_data = B_data_reg  ;
        //     default: B_data = 0 ;
        // endcase

        if(B_op_reg == 2'b00)      B_data = B_i        ;
        else if(B_op_reg == 2'b01) B_data = A_data_reg ;
        else if(B_op_reg == 2'b10) B_data = B_data_reg ;
        else                       B_data = 0          ;

    end

    control_unit #(.BusSize(BusSize)) admin (
        // input
            .A_i    (A_data) ,
            .B_i    (B_data) ,

        // output
            .done_o (done)   ,
            .A_op_o (A_op)   ,
            .B_op_o (B_op)   
    );

endmodule : ex02
