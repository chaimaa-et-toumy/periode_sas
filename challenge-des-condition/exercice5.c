#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a , b , c ;
	float x1 , x2 , x3 , delta;
	printf("entrer le premier nombre : ");
	scanf("%d",&a);
	printf("entrer le deuxieme nombre : ");
	scanf("%d",&b);
	printf("entrer le troixieme nombre : ");
	scanf("%d",&c);
	delta = pow(b,2)-4*a*c;
	if (a==0 && b==0 && c==0)
	{
		printf("Tout réel est une solution de cette équation.\n");
	}
	else if (a==0 && b==0)
	{
		printf("Cette equation ne possede pas de solutions.\n");
	}
	else if (a==0)
	{
		printf("cette equation est premier degre  %.2f.\n",-(float)b/c);
	}
	else if(delta < 0)
	{
		printf("n'pas de Solution Reelles");
	}
	else if (delta == 0)
	{
		x1 = (-b)/2*a;
		printf("une unique solution %.2f ",x1);
	}
	else 
	{
		x2 = (-b-sqrt(delta))/2*a;
		x3 = (-b+sqrt(delta))/2*a;
		printf("les solution sont : %.2f %.2f",x2,x3);
	}
		return 0;
}
