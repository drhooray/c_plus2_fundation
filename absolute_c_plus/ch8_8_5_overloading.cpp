#include <iostream>
#include <cstdlib>
#include <cmath>

//class for amounts of money in U.S. currency
class Money {
public:
	Money();
	Money(double amount);
	Money(int dollars, int cents);
	Money(int dollars);
	double getAmount() const;
	double getDollar() const;
	double getCent() const;

	friend const Money operator +(const Money& amount1, const Money& amount2);
	friend const Money operator -(const Money& amount1, const Money&amount2);
	friend bool operator ==(const Money& amount1, const Money& amount2);
	friend const Money operator -(const Money& amount);
	friend ostream& operator <<(ostream& output, const Money& amount);
	friend istream& operator >>(istream& input, const Money& amount);

private:
	int dollars, cents;
	int dollarsPart(double amount) const;
	int centsPart(double amount) const;
	int round(double number) const;

};

int main(){

}

ostream& operator <<(ostream& output, const Money& amount){
	int absDollar = std::abs(amount.dollars);
	int absCent = std::abs(amount.cents);
	if (amount.dollars < 0) || (amount.cents < 0)
		output << "$-";
	else
		output << "$";
	output << absDollar;

	if (absCent > 10)
		output << '.' << absCent;
	else 
		output << '.' << '0' << absCent;

	return	output;
}


istream& operator >>(istream& input, Money& amount){

}


