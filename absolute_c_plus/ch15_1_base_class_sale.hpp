#ifndef SALE_H
#define SALE_H

namespace localsale {
	class sale{
	public:
		sale();
		sale(double tPrice);
		double getPrice() const;
		void setPrice(double newPrice);
		virtual double bill() const;
		double savings(const sale& other) const;
	private:
		double price;
	};

	bool operator<(const sale& first, const sale& second);
}

#endif
