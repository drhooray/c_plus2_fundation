#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string steveQuote = "A dat without sunshine is like, you know, nigh";
	ofstream writer("stevequote.txt");

	if(!writer){
		cout << "error opening file" <<endl;
		return -1;
	} else {
		writer << steveQuote <<endl;
		writer.close();

	}

		ofstream writer2("stevequote2.txt", ios::app);

		// Open a stream to append to whats there with ios::app
		// ios::binary : Treat the file as binary
		// ios::in : Open a file to read input
		// ios::trunc : Default 
		// ios::out : Open a file to write output

	if(!writer2){
		cout << "error opening file" <<endl;
		return -1;
	} else {
		writer2 << " \n jason " <<endl;
		writer.close();

	}

	char letter;

	ifstream reader("stevequote.txt");
	if(!reader){
		cout << "Error opening file"<<endl;
		return -1;
	} else {
		for (int i=0; !reader.eof(); i++){
			reader.get(letter);
			cout<<letter;
		}

		cout <<endl;
		reader.close();
	}

}
