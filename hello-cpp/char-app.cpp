#include <iostream>
#include <string>


using namespace std;

int main()
{
        double eulerConstant = .57721;
	string eulerGuess;
	double eulerGuessDouble;

	cout<<"what is euler's const ? ";
	getline(cin, eulerGuess);

	eulerGuessDouble = stod(eulerGuess);
	if(eulerGuessDouble == eulerConstant){
		cout<<" you are right" <<endl;
	} else {
		cout<<" you are wrong" <<endl;
	}

	cout << "size of string "<<eulerGuess.size()<<endl;
	cout << "Is string empty"<<eulerGuess.empty()<<endl;
	cout<<eulerGuess.append("was your guess")<<endl;

	
        return 0;
}
