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
	int grossMin = min + minAdded;
	min = grossMin % 60;
	int hrAdj = grossMin / 60;
	hr = (hr + hrAdj)%24;
}

void digiTime::advance(int hrAdded, int minAdded){
	hr = (hr + hrAdded) % 24;
	advance(minAdded);
}

bool operator ==(const digiTime& time1, const digiTime& time2){
	return (time1.hr == time2.hr && time1.min == time2.min);
}

ostream& operator <<(ostream& outs, const digiTime& theObj){
	outs << theObj.hr <<' : ';
	if (theObj.min < 10)
		outs << '0';
	outs << theObj.min;
	return outs;
}

istream& operator >>(istream& ins, digiTime& theObj){
	digiTime::readHr(theObj.hr);
	digiTime::readMin(theObj.min);
	return ins;
}

int digiTime::digit2Int(char c){
	return (static_cast<int>(c) - static_cast<int>('0'));
}

void digiTime::readMin(int& tMin){
	char c1, c2;
	cin >> c1 >> c2;

	if ( !(std::isdigit(c1) && std::isdigit(c2))) {
		std::cout<<" error : illegal input to readMin \n";
		exit(1);
	}
	tMin = digit2Int(c1) * 10 + digit2Int(c2);

	if (tMin < 0 || tMin > 59){
		std::cout<<"error: illegal input to readMin \n";
		exit(1);
	}
}

void digiTime::readHr(int& tHr){
	char c1, c2;
	std::cin>>c1 >>c2;
	if (!(std::isdigit(c1) && (std::isdigit(c2) || c2 == ':'))) {
		std::cout << "error : illegal input to readHr \n";
		exit(1);
	}

	if (std::isdigit(c1) && c2 == ':') {
		tHr = digiTime::digit2Int(c1);
	} else {
		tHr = digiTime::digit2Int(c1) * 10 + digiTime::digit2Int(c2);
		std::cin >> c2;
		if (c2 != ':'){
			std::cout<<"error : illegal input to read hr \n";
			exit(1);
		}
	}

	if (tHr == 24)
		tHr = 0;
	if (tHr < 0 || tHr > 23) {
		std::cout << "error ill input \n";
		exit(1);
	}

}


