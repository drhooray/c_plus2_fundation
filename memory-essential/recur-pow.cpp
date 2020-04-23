#include <stdio.h>
#include <iostream>
#include <chrono>

typedef std::chrono::high_resolution_clock Clock;

int pow(int x,int y){
	if (y<=0)
		return 1;
	return x*pow(x,y-1);
}

int main(){
	auto t1 = Clock::now();
	int x=pow(2,3);
	auto t2 = Clock::now();
	std::cout << "Delta t2-t1:"
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(t2-t1).count()
		<<"nanoseconds" <<std::endl;
	printf("pow = %d \n",x);
	return 0;
}
