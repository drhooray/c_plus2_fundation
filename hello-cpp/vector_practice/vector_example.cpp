#include <iostream>
#include <vector>

/* 
 * 1. assign num 1 to 100 to a `vector<int>` 
 * 2. sqaure every num
 * 3. print the first five num which can be divided by 4
 */
std::vector<int> arr;

for (int i = 1 ; i< 101; i++) {
	arr.push_back(i*i);
}

for ( auto i = arr.begin(); i != arr.end(); ++i){
	int count = 0;
	if (count > =5 ) {
		break;
	}
	if ( *i % 4 == 0)
		count++;
}
