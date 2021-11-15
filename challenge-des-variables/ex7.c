#include <stdio.h>
#include <stdlib.h>

int main() {
	int a , b ;
	float somme , soustraction , multiplication ,division;
	float quotient;
	printf("entrer le premier nombre ");
	scanf("%d",&a);
	printf("entrer le deuxieme nombre ");
	scanf("%d",&b);
	somme = a + b;
	soustraction = a-b;
	multiplication = a * b ;
	division = a / b;
	quotient = a % b;
	printf(" la somme est : %f\n ",somme);
	printf("la soustraction est : %f\n ",soustraction);
	printf("la multiplication est : %f\n ",multiplication);
	printf("la division est : %f\n ",division);
	printf("la quotient est : %f ",quotient);
	
	return 0;
}
