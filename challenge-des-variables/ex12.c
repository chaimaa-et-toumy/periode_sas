#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n,x,y,z,res,w;
	printf("choisir un nombre :");
	scanf("%d",&n);
	if((n>=100 && n<=999)||(n>=-999 && n<=-100))
	{
	x = n % 10;
	w = n / 10;
	y = w % 10;
	z = w / 10;
	res = z * 1 + y * 10 + x * 100;
	}
	printf ("le resultat est : %d",res);
	return 0;
}
