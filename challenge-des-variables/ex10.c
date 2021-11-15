#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float c , r;
	const float pi = 3.14;
	printf("entre le rayon du cercle : ");
	scanf("%f",&r);
	c = 2 * pi * r;
	printf("la circonference du cercle est : %.2f",c);
	return 0;
}
