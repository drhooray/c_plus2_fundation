#include <iostream>

class digiTime {
public:
	digiTime(int tHr, int tMin);
	digiTime();

	int getHr() const;
	int getMin() const;
	void advance(int minAdded);

	void advance(int hrAdded, int minAdded);

	friend bool operator ==(const digiTime& time1, const digiTime& time2);
	friend istream& operator >>(istream& ins, digiTime& theObj);
	friend ostream& operator <<(ostream& outs, const digiTime& theObj);

private:
	int hr;
	int min;

	static void readHr(int& tHr);
	static void readMin(int& tMin);
	static int digit2Int(char c);
}