#include <iostream>
#include <cctype>
#include <cstdlib>

#include "ch11_11_1_d_time.h"

digiTime::digiTime(int tHr, int tMin){
	if (tHr < 0 || tHr > 24 || tMin <0 || tMin > 59){
		std::cout<<"illegal arg to ditiTime constructor";
		exit(1);
	} else {
		hr = tHr;
		min = tMin;
	}

	if ( hr == 24)
		hr = 0; //standardize midnight as 0:00
}

digiTime::digiTime(){
	hr = 0;
	min = 0;
}

int digiTime::getHr() const{
	return hr;
}

int digiTime::getMin() const {
	return min;
}

void digiTime::advance(int minAdded){
	
}