#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float Metre,Mile,km;
	printf(" la distance en Metre : ");
	scanf("%f",&Metre);
	km = Metre  / 1000;
	Mile= km  * 1.609;
	printf("la transforme en Mile est %f",Mile);
		
	
	return 0;
}
