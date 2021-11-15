#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double ab;
	double x1,x2;
	double y1,y2;
	printf("entre coordonne de x1 : ");
	scanf("%lf",&x1);
	printf("entre coordonne de x2 : ");
	scanf("%lf",&x2);
	printf("entre coordonne de y1 : ");
	scanf("%lf",&y1);
	printf("entre coordonne de y2 : ");
	scanf("%lf",&y2);
	ab = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
	printf("la distance entre deux points est : %lf\n",ab);
	
	return 0;
}
