module control_unit(
    // input
        input logic B_zero_i ,
        input logic A_less_i ,
        input logic go_i     ,

    // output
        output logic A_mux_sel_o    ,
        output logic A_reg_en_o     ,
        output logic B_mux_sel_o    ,
        output logic B_reg_en_o     ,
        output logic out_mux_sel_o  ,
        output logic done_o 
) ;
    // A    :  Description
    // 0    :  A_in 
    // 1    :  Forward_A  : A - B or B

    // B    :  Description
    // 0    :  B_in 
    // 1    :  A_in  

    // FwdA :  Description
    // 0    : RegA - regB 
    // 1    : RegB

    always_comb begin : Control_FLow 
        // process 
        if( go_i ) begin
            // default mode -> Case A > B
            A_mux_sel_o   = 1 ;
            A_reg_en_o    = 1 ;
            B_mux_sel_o   = 0 ;
            B_reg_en_o    = 0 ;
            out_mux_sel_o = 0 ;
            done_o        = 0 ; 
            
            if( A_less_i ) begin       // Case  A < B -> A = B , B = A
                out_mux_sel_o = 1 ;
                B_reg_en_o    = 1 ;
                B_mux_sel_o   = 1 ; 
            end    

            if(B_zero_i) begin    // Case B=0    -> DONE 
                done_o        = 1 ;
                A_mux_sel_o   = 0 ;
                B_reg_en_o    = 1 ;
            end
        end else begin
            A_mux_sel_o   = 1'bx ;
            A_reg_en_o    = 0    ;
            B_mux_sel_o   = 1'bx ;
            B_reg_en_o    = 0    ;
            out_mux_sel_o = 1'bx ;
            done_o        = 1'bx ; 
        end
    end

endmodule : control_unit
