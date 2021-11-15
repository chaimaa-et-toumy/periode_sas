#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n1,n2,Somme;
	printf("entrer le premier nombre ");
	scanf("%d",&n1);
	printf("entrer le deuxieme nombre ");
	scanf("%d",&n2);
	if(n1==n2)
	{
		Somme = (n1+n2)*3;
	}
	else
	{
		Somme = n1 + n2;
	}
	printf("la somme est : %d",Somme);
	return 0;
}
