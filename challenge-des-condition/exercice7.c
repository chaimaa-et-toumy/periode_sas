#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n;
	printf("entrer un nombre : ");
	scanf("%d",&n);
	if(n > 0)
	{
		printf("le nombre est positif");
	}
	else if (n < 0)
	{
		printf(" le nombre est negatif");
	}
	else {
		printf("le nombre est egal a zero");
	}
	return 0;
}
