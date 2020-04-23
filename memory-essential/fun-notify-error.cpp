#include <stdio.h>

int* Max(int *a, int *b){
	int x = *a>*b?*a:*b;
	return &x;

}

int main(){

	int a =10, b=5;	
	int *y = Max(&a,&b);
	printf("max: %d \n",*y);
	return 0;

}

