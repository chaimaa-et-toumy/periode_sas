#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() {
	float  Fahrenheit,Celsius;
	printf("la temperature en Celsius ");
	
	scanf("%f", &Celsius);
	
	Fahrenheit = (Celsius * 1.8 ) + 32 ;
	
	printf("la transforme en degre Celsius %.2f",Fahrenheit);

	
	
	return 0;
}
