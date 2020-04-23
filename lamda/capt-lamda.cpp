#include <iostream>
#include <vector>
#include <algorithm>

void show(int &value){
	std::cout<<"value"<<value<<std::endl;
}

int main(){
	std::vector<int> *v = new std::vector<int> (3,1);
	for_each(v->begin(),v->end(),show);
	return 0;
}
