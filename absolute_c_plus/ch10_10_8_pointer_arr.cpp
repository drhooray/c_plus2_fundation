#include <iostream>

int* double(int a[], int size);

int main(){

	int a[] ={ 1,2,3,4,5};
	int* b;

	b = double(a, 5);

	delete[] b;
	return 0;
}

int* double(int a[], int size){
	int* tmp = new int[size];
	for (int i = 0; i<size; i++)
		tmp[i] = 2*a[i];
	return tmp;
}