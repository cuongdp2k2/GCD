module ex02b #( parameter BusSize = 8 ) (
    // input
        input logic [BusSize-1:0]  A_in         ,
        input logic [BusSize-1:0]  B_in         ,
        input logic                clk_in       ,
        input logic                go_in        ,

    // output
        output logic               Done_out     ,
        output logic [BusSize-1:0] Output_out 
);
    // Data register
    reg [BusSize-1:0] __A ;
    reg [BusSize-1:0] __B ;

    // Control Signal
    logic A_mux_sel   ;
    logic B_mux_sel   ;
    logic A_reg_en    ; 
    logic B_reg_en    ; 
    logic out_mux_sel ;

    // Brigde 
    logic [BusSize-1:0] Mux_Forward_A ;

    always @( posedge clk_in ) begin : A_selector 
        if(A_reg_en)
            __A <= (A_mux_sel) ? Mux_Forward_A : A_in  ;  
    end

    always @( posedge clk_in ) begin : B_selector 
        if(B_reg_en) 
            __B <= (B_mux_sel) ? __A : B_in ;  
    end

    assign Mux_Forward_A = (out_mux_sel) ? __B : __A - __B ;
    assign Output_out    = __A ;

    control_unit ADMIN (
        // input
            .B_zero_i       ( (__B == 0) )    ,
            .A_less_i       ( (__A < __B) ) ,
            .go_i           ( go_in  )    ,

        // output
            .A_mux_sel_o     (A_mux_sel)   ,
            .B_mux_sel_o     (B_mux_sel)   ,
            .A_reg_en_o      (A_reg_en)    ,
            .B_reg_en_o      (B_reg_en)    ,
            .out_mux_sel_o   (out_mux_sel) ,
            .done_o          (Done_out)    
    );

endmodule : ex02b
