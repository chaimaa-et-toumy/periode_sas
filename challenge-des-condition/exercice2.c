#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int nombre;
	printf("entre un nombre ");
	scanf("%d",&nombre);
	if(nombre % 2 == 0)
	{
		printf("le nombre est pair");
		
	}
	else
	{
		printf("le nombre est impair");
	}
	return 0;
}
