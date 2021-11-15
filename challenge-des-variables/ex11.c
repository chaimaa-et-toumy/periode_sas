#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int longueur , largeur , c;
	printf("la longueur est :");
	scanf("%d",&longueur);
	printf("la largeur est :");
	scanf("%d",&largeur);
	c = (longueur + largeur) * 2 ;
	printf("Circonférence d'un rectangle  : %d",c);
	 
	return 0;
}
