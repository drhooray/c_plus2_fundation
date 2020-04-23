#include <iostream>

using namespace std;
int main()
{
	int n = 12, i=42;
	int *p = &n, *q=&i;
	*p = 30;
	cout<<"*p : "<<*p <<"&n: "<<n<<endl;
	p = q;
	
	cout<<"*p : "<<*p <<" &n: "<<n<<" *q : "<<*q<<" i : "<<i<<endl;

	*p= 300;

	cout<<"*p : "<<*p <<" &n: "<<n<<" *q : "<<*q<<" i : "<<i<<endl;
	return 0;
}
	
