#include <iostream>
#include <string>


using namespace std;

int main()
{
	char Array[6] = {'H', 'a', 'p', '\0'};
	string bd_s = "birth";
        cout<<Array + bd_s<<endl;
        return 0;
}

