#include <stdio.h>
#include <stdlib.h>


void permuter(float a, float b)
{
	float c;
	c = a;
	a = b;
	b = c;
	printf("%f %f",a,b);
	
}
int main() {
    float a,b;
	printf("entrer le premier nombre ");
	scanf("%f",&a);
	printf("entrer le deuxieme nombre ");
	scanf("%f",&b);
	printf("avant changement : \n");
	printf("%f %f \n",a,b);
	printf("apres changement : \n");
	permuter(a,b);
	return 0;
}
