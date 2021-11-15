#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float  Fahrenheit,Celsius;
	printf("la temperature en Fahrenheit ");
	
	scanf("%f", &Fahrenheit);
	
	Celsius = (Fahrenheit -32 ) * 5/9 ;
	
	printf("la transforme en degre Celsius :%f  \n",Celsius);
	
	if (Celsius <= 0 )
	{
			printf("tres froid");
	}
	else if (Celsius > 1 && Celsius <= 23 )
	{
			printf("froid");
	}
	else if (Celsius >= 23 && Celsius <= 30 )
	{
		printf("chaud");
	}
	else {
			printf(" tres chaud");
	}
	

	
	
	return 0;
}
