#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int number,number2;
	cout << "enter a number" <<endl;
	cin >> number;
	cout << "enter a divider" <<endl;
	cin >>number2;

	if((!cin>>number)||(!cin>>number2)){
		cout<<"failed enter a number"<<endl;
		return -1;
	}
		
	try{
		if(number2 != 0){
			cout<< number/number2 <<endl;
		} else throw(number2);

	}
	catch (int number2){
		cout << number2 << " is not valid "<<endl;
	}


    return 0;
}
