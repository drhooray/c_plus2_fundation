#include <iostream>
//#include <cstdlib>

class charPair{
public:
	charPair(){}
	charPair(char firstValue, char secValue): first(firstValue), second(secValue){}

	//char& operator[](int index);
private:
	char first;
	char second;
};

int main(){
	charPair a;
	a[1] = 'a';
	a[2] = 'b';

	std::cout<<"a[1] and a[2] are : \n";
	std::cout << a[1] << a[2] <<std::endl;

	std::cin >> a[1] >> a[2];
	std::cout << "here is cahning : \n";
	std::cout <<a[1] <<a[2]<< std::endl;
	return 0;
}
/*
char& charPair::operator[](int index)
{
	if (index == 1)
		return first;
	else if (index ==2 )
		return second;
	else {
		std::cout<<"illegal index value";
		exit(1);
	}
}

*/