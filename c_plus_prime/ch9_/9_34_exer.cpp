#include <iostream>

int main(){
	iter = vi.begin();
	while (iter != vi.end())
		if (*iter % 2)
			iter = vi.insert(iter, *iter);
		++iter;

return 0;
}
