#include <iostream>

typedef int* intPtr;

void fillArray(int a[], int size);
int seasrch(int a[], int size, int target);

int main()
{
	int arrSize;
	std::cout << " enter number of the list ";
	std::cin >> arrSize;
	intPtr p;
	p = new int[arrSize];

	fillArray(p, arrSize);

	int target ;
	std::cout << "seasrch a num ";
	cin >> target;
	int location = seasrch(p, arrSize, target);
	if (location != -1)
		std::cout << "find out the location is at : arr[" << location<<"] here \n "
	else
		std::cout<< "can't find the number \n";

	delete[] p;
	return 0;
}

void fillArray(int a[], int size){
	std::cout << "enter " << size << ".\n ";
	for (int i = 0; i < size; i++){
		std::cin >> a[i];
	}
}

int seasrch(int a[], int size, int target){
	int index = 0;
	while (( a[index] != target) && ( index < size))
		index++;
	if (index == size)
		index = -1;
	return index;
}