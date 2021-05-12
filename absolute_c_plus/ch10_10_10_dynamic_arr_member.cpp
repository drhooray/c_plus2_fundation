#include <iostream>

class pfArr{
public:
	pfArr();
	pfArr(int capValue);
	pfArr(const pfArr& pfobjec); //copy constructor
	void addElement(double element); //precondition: the arr is not full, postcondition: the ele has been added
	bool full() const{ return (cap == used);}
	int getCap() const { return cap;}
	int getNumUsed() const{ return used; }
	void emptyArr() { used = 0; } //empty this arr
	double& operator[](int index); //read and change access to elements 0 through numUsed - 1
	pfArr& operator=(const pfArr& rSide); //overloaded assignment
	~pfArr();

private:
	double *a; //for an arr of double
	int cap; //for the size of the arr
	int used; //for num of arr position currently in use


};