#include<stdio.h>

int main()
{
	int c;
	int d;
	while( (c=getchar()) != 'z'){
		if((c==' ') && (c==d))
		;
		else{
		putchar(c);
		}
	d=c;
	}	
return 0;
}
