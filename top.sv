module top (
    // input
        input logic [7:0]          A_in         ,
        input logic [7:0]          B_in         ,
        input logic                clk_i        ,
        input logic                go_in        ,

    // output
        output logic               Done_out     ,
        output logic [7:0]         Output_out
     
);
//---------- Design1--------------------------------
    // ex02 #(.BusSize(8)) dut(
    //     // input
    //     .A_i(data1_i)       ,
    //     .B_i(data2_i)       ,
    //     .clk_i(clk_i)        ,

    //     // output
    //     .result_o(result_o)  
    // );

//--------- Design 2 --------------------------------
    ex02b #(.BusSize(8)) dut (
        .A_in          (A_in)      ,
        .B_in          (B_in)      ,
        .clk_in        (clk_i)     ,
        .go_in         (go_in)     ,

        .Done_out     (Done_out)   ,
        .Output_out   (Output_out)  
    );

endmodule : top 

/*      

//-- For Design1 --------------------------------
    // input
    input logic [7:0] data1_i , 
    input logic [7:0] data2_i , 
    input logic        clk_i , //sel_i,

    // output
    output logic [7:0] result_o


//-- For Design 2---------------------------------
    // input
        input logic [7:0]          A_in         ,
        input logic [7:0]          B_in         ,
        input logic                clk_i        ,
        input logic                go_in        ,

    // output
        output logic               Done_out     ,
        output logic [7:0]         Output_out

*/
