#include <stdio.h>

/* print Fahrenheit to Celcius table 20 degree increments from 0 to 300. This solutin is different than the one in the book. Is it important to declare lower, upper, and step variables as the  book does? */

/* I realized that the benefit is that the variables are easily changeable. We declare the lower bound, upper bound, and step in order to compute different tables quickly. */

int main() {
	int fahr, celc, lower, upper, step;
	lower=0, upper=300, step=20, fahr=lower;
	while (fahr <= upper) {
		celc = 5*(fahr-32)/9;
		printf(" %d \t %d \n", fahr, celc);
		fahr=fahr+step;
	}
}
	
	

