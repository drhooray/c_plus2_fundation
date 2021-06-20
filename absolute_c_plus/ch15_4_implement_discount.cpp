#include "ch15_3_discoutsale.h"

namespace localsale {
	discountSale::discountSale():sale(), discount(0) {

	}
	discountSale::discountSale(double tPrice, double tDiscount) : sale(tPrice), discount(tDiscount){

	}
	double discountSale::getDiscount() const{
		return discount;
	}
	void discountSale::setDiscount(double nDiscount) {
		if (nDiscount >=0)
			sale.discount = nDiscount;
		else {
			std::cout<<"can't use negative numbmer";
			exit(1);
		}
	}
	double discountSale::bill() const {
		double fraction = discount/100;
		return (1-fraction) * getPrice(); //you don't repeat the quaitlier `virtual` in the func def
	}
}