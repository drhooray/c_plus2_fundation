#include <iostream>
#include "sale.h"

using std::cout;

namespace localsale{
	sale::sale() : price(0){

	}

	sale::sale(double tPrice){
		if (tPrice >= 0)
			price = tPrice;
		else{
			cout<<"error: can't have a negative price \n";
			exit(1);
		}
	}

	double sale::bill()const{
		return price;
	}

	double sale::getPrice() const {
		return price;
	}

	void sale::setPrice(double newPrice){
		if (newPrice>=0)
			price=newPrice;
		else {
			cout<<"error can't have a negative price";
			exit(1);
		}
	}

	double sale::savings(const sale& other) const {
		return (bill() - other.bill());
	}

	bool operator < (const sale& first, const sale& second){
		return (first.price < second.price);
	}
}