#include <iostream>

class server {
public:
	server(char letterName);
	static int getTurn();
	void serverOne();
	void showName();
	static bool stillOpen();
	static void showStatus();

private:
	static int turn;
	static int lastServed;
	static bool nowOpen;
	char name;
};

int server::turn = 0;
int server::lastServed = 0;
bool server::nowOpen = true;

int main(){
	server s1('a'), s2('b');
	int num, count;

	do {
		std::cout << "how many in your group?";
		std::cin >> num;
		std::cout<<"your turns are: ";
		for (count =0; count <num; count++){
			std::cout<< server::getTurn() << ' ';
		}
		std::cout << std::endl;
		s1.serverOne();
		s1.showName();
		s1.showStatus();
		s2.serverOne();
		s2.showName();
		s2.showStatus();
	} while (server::stillOpen());

	std::cout <<"new cloasing service \n";
	return 0;
}

server::server(char letterName) : name(letterName){

}

int server::getTurn(){ //since getTurn is static, only static member can be ref in here.
	turn++;
	return turn;
}

void server::serverOne(){
	if (nowOpen && lastServed < turn){
		lastServed++;
		std::cout << " server : " << name << " now serving " << lastServed << std::endl;
	}
	if (lastServed >= turn) //everyone served
		nowOpen = false;
}

bool server::stillOpen(){
	return nowOpen;
}

void server::showStatus(){
	std:: cout<<" served turn : " << turn <<std::endl;
}

void server::showName(){
	std::cout <<" server name: " << name;
}