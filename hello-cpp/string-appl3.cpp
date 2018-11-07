#include <stdio.h>
#include <string.h>

int main(void) {
	char text[] = "hello";
	int length = sizeof(text) / sizeof(text[0]);

	for (int i=0; i<length; i++) {
		if(text[i] == '\0') {
			puts("null");
		} else {
			printf("%c",text[i]);
		}
	}
	putchar('\n');
	return 0;
}

