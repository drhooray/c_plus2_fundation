#include <iostream>

class foo{
public:
	foo():_x(3){}
	void func(){
		[this](){std::cout<<_x<<std::endl;}();
	}
private:
	int _x;
};

int main(){
	foo f;
	f.func();
}
