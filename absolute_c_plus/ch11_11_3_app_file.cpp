#include <iostream>
#include "ch11_11_1_d_time.h"

int main(){
	digitTime clk, oldclk;

	std::cout<<" enter the time in 24-hr notation: ";
	std::cin >> clk;

	oldclk = clk;
	clk.advance(15);

	if (clk == oldclk)
		std::cout<<"sth is wrong";
	return 0;
}