#include <stdio.h>

/*This program counts all spaces, new lines, and tabs. ctrl+d mimics EOF from terminal.*/

int main(){
	
	int s,l,t,c;
	s=0;
	l=0;
	t=0;

	while((c=getchar()) != EOF)
		if(c==' ')
			++s;
		else if(c=='\n')
			++l;
		else if(c=='\t')
			++t;
	printf("spaces= %d, new lines= %d, tabs= %d \n", s, l, t);
return 0;
}
