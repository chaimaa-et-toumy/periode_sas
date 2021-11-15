#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n1,n2,n3,n4,Somme;
	float Moyenne;
	printf("entrer  premier nombre ");
	scanf("%d",&n1);
	printf("entrer  deuxieme nombre ");
	scanf("%d",&n2);
	printf("entrer  Troixieme nombre ");
	scanf("%d",&n3);
	printf("entrer  quatrieme nombre ");
	scanf("%d",&n4);
	Somme = n1+n2+n3+n4;
	Moyenne = Somme / 4;
	printf("la somme est : %d \n",Somme);
	printf("la moyenne est : %f",Moyenne);
	return 0;
}
