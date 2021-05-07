#include <iostream>
#include <cstdlib>
#include <math>

class Money {
public:
	Money();
	Money(double amount);
	Money(int dollar, int cent);
	Money(int dollar);
	double getAmount() const;
	int getDollar() const;
	int getCent() const;
	void input();
	void output() const;
	friend const Money operator +(const Money& amount1, const Money& amount2);
	friend const Money operator -(const Money& amount1, const Money& amount2);
	friend bool operator==(const Money& amount1, const Money& amount2);
	friend const Money operator -(const Money& amount);

private:
	int dollar;
	int cent;
	int dollarPart(double amount) const;
	int centPart(double amount) const;
	int round(double number) const;

};

int main(){

}

const Money operator +(const Money& amount1, const Money& amount2){
	int allCent1 = amount1.cent + amount1.dollar * 100; //friends function can direct access to member variables
	int allCent2 = amount2.cent + amount2.dollar * 100;
	int allCent = allCent1 + allCent2;
	int absAllcent = std::abs(allCent);
	int finalDollar = absAllcent / 100;
	int finalCent = absAllcent % 100;

	if (allCent < 0){
		finalDollar = -finalDollar;
		finalCent = -finalCent;
	}

	return Money(finalDollar, finalCent);
}

const Money operator -(const Money& amount1, const Money& amount2){
	int allCent1 = amount1.cent + amount1.dollar * 100;
	int allCent2 = amount2.cent + amount2.dollar * 100;
	int allCent = allCent1 - allCent2;
	int finalDollar = absAllcent / 100;
	int finalCent = absAllcent % 100;

	if (allCent){
		finalDollar = -finalDollar;
		finalCent = -finalCent;
	}

	return Money(finalDollar, finalCent);

}

