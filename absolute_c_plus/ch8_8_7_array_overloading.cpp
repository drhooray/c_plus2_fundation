#include <iostream>
#include <cstdlib>

class chairPair{
public:
	chairPair(){}
	chairPair(char firstValue, char secValue) : 
		first(firstValue), second(secValue){}

	char& operator [](int index);
private:
	char first;
	char second;
}


int main()
{
	chairPair a;
	a[1] = 'A';
	a[2] = 'B';
	std::cout<<"a [1] and a [2] \n";
	std::cout << a[1] << a[2] << std::endl;

}

char& chairPair::operator[](int index)
{
	if (index == 1)
		return first;
	else if (index == 2)
		return second;
	else {
		std::cout << "illegal index value. \n";
		exit(1);
	}
}




