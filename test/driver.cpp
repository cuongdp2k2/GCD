#define MAX_SIM 20

void set_random(Vtop *dut, vluint64_t sim_unit) {
// -----------------Test for Design 1 ----------------------------------------
	// dut->data1_i = 12 ;
	// dut->data2_i = 1 ;
	// //dut->sel_i   = rand() % 2   ;

// -----------------Test for Design 2 ----------------------------------------
	dut -> A_in  = 13 ;    
	dut -> B_in  = 2  ;     
	dut -> go_in = 1  ;  
}
