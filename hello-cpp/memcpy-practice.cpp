#include <memory.h>
#include <stdio.h>


int main()
{
	char *s1[]="hello i am ";
        const char *s2="find the one";
        memcpy(s1,s2,3);

	printf("%s\n",s1);	
	return 0;
}
