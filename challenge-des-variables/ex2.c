#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float  Fahrenheit,Celsius;
	printf("la température en Fahrenheit : ");
	
	scanf("%f", &Fahrenheit);
	
	Celsius = (Fahrenheit -32 ) * 5/9 ;
	
	printf("la transforme en degre Celsius %f ",Celsius);

	
	
	return 0;
}
