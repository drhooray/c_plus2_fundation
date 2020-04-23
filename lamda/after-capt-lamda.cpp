#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main(){
	std::vector<int> *v = new std::vector<int> (3,1);
	for_each(v->begin(),v->end(), [](int &v){
		std::cout<<"value "<<v<<std::endl;
	});
	return 0;
}
