#include <stdio.h>
#include <stdlib.h>


int main() {
	int nombre;
	printf("choisir un nombre : ");
	scanf("%d",&nombre);
	printf("la valeur equivalente en octal est : %o\n",nombre);
	printf("la valeur equivalente en hexadecimal : %x",nombre);
	
	return 0;
}
