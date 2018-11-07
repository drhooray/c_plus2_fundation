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
        int lastNameIndex = yourName.find("jason", 0);
        cout << "index for lastNameIndex" << lastNameIndex <<endl;

        yourName.insert(4, " justin");
        cout << yourName <<endl;

        yourName.erase(6, 7);
        cout << yourName <<endl;

        yourName.replace(6, 5, "Maximus");
        cout << yourName <<endl;
        
        return 0;
}
