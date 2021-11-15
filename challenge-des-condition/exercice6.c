#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int Annee,Mois,Jours,Heures,Minutes,Secondes;
	printf("entrer le nombre d'annees ");
	scanf("%d",&Annee);
	Mois = Annee * 12;
	Jours = Annee * 365;
	Heures = Jours * 24;
	Minutes = Heures * 60 ;
	Secondes = Minutes * 60 ;
	printf ("le nombre de Mois est : %d\n ",Mois);
	printf ("le nombre de Jours est : %d\n ",Jours);
	printf ("le nombre de Heures est : %d\n ",Heures);
	printf ("le nombre de Minutes est : %d\n ",Minutes);
	printf ("le nombre de Secondes est : %d\n ",Secondes);
		
	return 0;
}
