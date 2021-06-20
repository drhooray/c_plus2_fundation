#include <iostream>
#include "ch15_1_base_class_sale.hpp"
#include <ch15_3_discountsale.hpp>

using std::cout;
using std::endl;
using std::ios;

int main(){
	localsale::sale simple(10);
	localsale::discountSale discount(11, 10);

	cout.setf(ios::fexed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	if(discount < simple){
		cout<<"discounted item is cheapter. \n";
		cout<<"saving is $ " << simple.savings(discount)<<endl;
	} else 
		cout <<"discounted item is not cheapter";
	return 0;
}