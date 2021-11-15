#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    char Alphabet;
	printf("entrer un caractere ");
	scanf("%c",&Alphabet);
	if(Alphabet >= 65 && Alphabet <= 90)
	{
		printf("ce caractere est un  alphabet majuscule");
	}
	else
	{
		printf("ce caractere n'est pas majuscule");
	}
	return 0;
}
