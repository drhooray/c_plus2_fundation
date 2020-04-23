#include <iostream>

int main()
{
	shared_ptr<int> p3 = make_shared<int>(42);
	shared_ptr<string> p4 = make_shared<string>(10,'9');


	return 0;
}
