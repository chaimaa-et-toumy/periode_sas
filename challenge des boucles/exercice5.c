#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,r,res = 0;
	printf("entrer un nombre : ");
	scanf("%d",&n);
	r = n;
	while(r!=0)
	{
		res = res *10 + (r%10);
		r = r / 10;
	}
	printf("l'inverse est :%d",res);
	return 0;
}
