#include <iostream>
#include <string.h>
#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
int main()
{
	int n=3, *p=(int *)malloc(sizeof(int)*n);
	memset(p,0,sizeof(int)*n);
	for (int i=0; i<n; ++i)
		printf("%d, 0x%0X\n",p[i],p[i]);
	memset(p,255,sizeof(int)*n);
	for (int i=0; i<n; ++i)
		printf("%d, 0x%0X\n",p[i],p[i]);
	free(p);
	memset(p,65537,sizeof(int)*n);
	for (int i=0; i<n; ++i)
		printf("%d, 0x%0X\n",p[i],p[i]);
	memset((int *)memset(p,0,12)+1,255,4);
	for (int i=0; i<n; ++i)
		printf("%d, 0x%0X\n",p[i],p[i]);
	return 0;
}
