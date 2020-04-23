#include <string>
#include <iostream>

int main()
{
std::string s("hello world");
if (s.begin() != s.end()) {
	auto it = s.begin();
	*it = toupper(*it);
}

std::cout<<it;
return 0;
}

