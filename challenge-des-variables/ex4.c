#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float Mile,Metre;
	float km;
	printf("entrer  la distance en Mile ");
	scanf("%f",&Mile);
    Metre = Mile * (1.609*1000);
	printf("la transforme en metre est : %f",Metre);
	
	

	
	return 0;
}
