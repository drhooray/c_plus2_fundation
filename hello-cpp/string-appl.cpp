#include <iostream>
#include <string>


using namespace std;

int main()
{
        string yourName;
        cout<< "what is yourName";
        getline(cin, yourName);

        string wholeName = yourName.assign(yourName);
        cout << wholeName <<endl;
        string firstName = wholeName.assign(wholeName, 0, 5);
        cout << wholeName <<endl;


        return 0;
}
