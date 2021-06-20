#ifndef DISCOUNTSALE_H
#define DISCOUNTSALE_H
#include "ch15_1_base_class_sale.hpp"

namespace localsale{
	class discountSale:public sale {
	public:
		discountSale();
		discountSale(double tPrice, double tDiscount);
		double getDiscount() const;
		void setDiscount() const;
		void setDiscount(double nDiscount);
		double bill() const; //因為在base 類別已經宣告 virtual, 它會自動 virtual 在衍伸類別中. 你可以在家 virtual in the class discountsale. 我們傾向包含 virtual in all virutal functions, 即使他不需要. 但在這裡我們把它拿掉

	private:
		double discount;
	};

}
#endif
