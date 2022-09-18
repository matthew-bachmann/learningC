#include <stdio.h>

int main(){
	int celc;

	printf("Celcius to Fahrenheit Table \n");

	for (celc=0; celc<=300; celc = celc +20){
		printf("%3d  %6.1f\n", celc, (9.0/5.0*celc+32) );
	}	

}
