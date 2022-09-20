#include <stdio.h>

/* 9/18 This simply reads user input. ctrl+D to EOF from terminal */

int main(void)
{
	int c;

	c=getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
	return 0;	
}
