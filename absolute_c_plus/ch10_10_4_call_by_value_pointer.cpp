#include <iostream>

typedef int* intPtr;

void sneaky(intPtr tmp);

int main(){
	intPtr p;
	p = new int;
	*p = 77;
	sneaky(p);

	return 0;
}

void sneaky(intPtr tmp){
	*tmp = 99;
	std::cout<<"inside func call *tmp == " << *tmp << std::endl;
}