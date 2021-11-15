#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char caractere;
	printf("entre un caractere ");
	scanf("%c",&caractere);
	switch (caractere)
	{
		case 'A' : printf("ce caractere est voyelle");
		break;
		case 'E' : printf("ce caractere est voyelle");
		break;
		case 'I' : printf("ce caractere est voyelle");
		break;
		case 'O' : printf("ce caractere est voyelle");
		break;
		case 'U' : printf("ce caractere est voyelle");
		break;
		case 'Y' : printf("ce caractere est voyelle");
		break;
		case 'a' : printf("ce caractere est voyelle");
		break;
		case 'e' : printf("ce caractere est voyelle");
		break;
		case 'i' : printf("ce caractere est voyelle");
		break;
		case 'o' : printf("ce caractere est voyelle");
		break;
		case 'u' : printf("ce caractere est voyelle");
		break;
		case 'y' : printf("ce caractere est voyelle");
		break;
		default :
		printf("ce caractere est  non voyelle");		
	}	
	return 0;
}
