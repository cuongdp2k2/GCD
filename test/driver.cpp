#define MAX_SIM 200000

void set_random(Vtop *dut, vluint64_t sim_unit) {
// -----------------Test for Design 1 ----------------------------------------
	// if(dut->done_o == 1) {
	// 	dut->data1_i = rand() % 255 ;
	// 	dut->data2_i = rand() % 255 ;
	// }
	
	// dut->Go_i    = 1   ;

// -----------------Test for Design 2 ----------------------------------------
	if(dut->Done_out) {
		dut -> A_in  = rand() % 256  ;    
		dut -> B_in  = rand() % 256  ;
	}     
	dut -> go_in = 1  ;  
}

int GCD(int a , int b){
	// Case a = 0 or b = 0 
	if(a == 0) return b;  
	if(b == 0) return a;

	while (a != b)
	{
		if( a > b) {
			a = a - b ;
		} else {
			b = b - a ;
		}
	}

	return a ;
	
}

void check_result(Vtop *dut ){
	// Testbench Design 1
	// static int result_count = 0 ;
	// if(dut->done_o){
	// 	result_count ++ ;
	// 	if(dut->result_o == GCD(dut->data1_i, dut->data2_i)) 
	// 		printf("Test %d : %d %d :  \033[0;32mPASSS\033[0m\n ",result_count,dut->data1_i,dut->data2_i) ;
	// 	else
	// 		printf("Test %d : %d %d :  \033[0;31mFAILL\033[0m\n ",result_count,dut->data1_i,dut->data2_i)  ;
	// }

	// Testbench Desing 2
	static int result_count = 0 ;
	if(dut->Done_out){
		result_count ++ ;
		if(dut->Output_out == GCD(dut->A_in, dut->B_in)) 
			printf("Test %d : %d %d -> %d:  \033[0;32mPASSS\033[0m\n ",result_count,dut->A_in,dut->B_in,dut->Output_out) ;
		else
			printf("Test %d : %d %d -> %d:  \033[0;31mFAILL\033[0m\n ",result_count,dut->A_in,dut->B_in,dut->Output_out)  ;
	}
}