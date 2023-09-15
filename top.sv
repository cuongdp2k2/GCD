module top (
    // input
    input logic [7:0] data1_i , 
    input logic [7:0] data2_i , 
    input logic        clk_i , //sel_i,

    // output
    output logic [7:0] result_o 
);
    ex02 #(.BusSize(8)) dut(
        // input
        .A_i(data1_i)       ,
        .B_i(data2_i)       ,
        .clk_i(clk_i)        ,

        // output
        .result_o(result_o)  
    );

endmodule : top 
