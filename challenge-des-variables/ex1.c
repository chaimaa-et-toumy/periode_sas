#include <stdio.h>
//#include <stdlib.h>

int main() {
	char nom[20];
	char prenom[20];
	int Age,num;
	char Sexe[20];
	printf("entrer svp votre nom ");
	scanf("%s",&nom);
	printf("entrer svp votre prenom ");
    scanf("%s",&prenom);
	printf("entrer svp votre age ");
    scanf("%d",&Age);
	printf("entrer svp votre Sexe ");
	scanf("%s",&Sexe);
	printf("entrer svp votre numero de telefone ");
	scanf("%d",&num);
	printf("vos informotions personelles est : %s %s %d %s %d",nom,prenom,Age,Sexe,num);
	
	 return 0;
}
