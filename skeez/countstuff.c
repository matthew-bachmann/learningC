#include <stdio.h>

/*This program counts all spaces, new lines, and tabs. Press Z to end input.*/

int main(){
	
	int s,l,t,c;
	s=0;
	l=0;
	t=0;

	while((c=getchar()) != 'z')
		if(c==' ')
			++s;
		else if(c=='\n')
			++l;
		else if(c=='\t')
			++t;
	printf("spaces= %d, lines= %d, tabs= %d \n", s, l, t);
return 0;
}
