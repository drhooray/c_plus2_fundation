#include <iostream>
#include <string>

void newline();

int main(){
	string firstName, lastName, recordName;
	string motto = "hi";
	cin >> firstName >> lastName;
	newline();

	recordName = lastName + " " + firstName;
	std::getline(cin, motto);


}

void newline()
{
	char nextChar;
	do
	{
		std::cin.get(nextChar);
	} while (nextChar != '\n');
}