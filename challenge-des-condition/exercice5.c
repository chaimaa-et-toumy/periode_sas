#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float a , b , c , x1 , x2 , x3 , delta;
	printf("entrer le premier nombre : ");
	scanf("%f",&a);
	printf("entrer le deuxieme nombre : ");
	scanf("%f",&b);
	printf("entrer le troixieme nombre : ");
	scanf("%f",&c);
	delta = pow(b,2)-4*a*c;
	if(delta < 0)
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
