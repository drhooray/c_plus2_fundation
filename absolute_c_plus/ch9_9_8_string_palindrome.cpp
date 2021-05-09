#include <iostream>
#include <string>
#include <cctype>

void swap(char& s1, char& s2); //interchange the values of s1, s2
string reverse(const string& s); //returns a copy of string but with char in reverse order.

string removePunct(const string& s, const string& punct);

string makeLower (const string& s);
//return a copy of s that has all uppercase
//characters changed to lowcase

bool isPal(const string& s);

int main(){
	return 0;
}

void swap(char& s1, char& s2){
	char tmp = s1;
	s1 = s2;
	s2 = tmp;
}

string reverse(const string& s){
	int start = 0;
	int end = s.length();
	string tmp(s);

	while(start < end){
		end--;
		swap(tmp[start], tmp[end]);
		start++;
	}
	return tmp;
}

//uses cctype and string
string makeLower(const string& s){
	string tmp(s);
	for (int i = 0; i< s.length(); i++){
		tmp[i] = std::tolower(s[i]);
	}
	return tmp;
}

string removePunct(const string& s, const string& punct){

}
