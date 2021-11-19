#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,l,s,t;
	printf("entre le nombre de ligne : ");
	scanf("%d",&l);
	for(i=1;i<=l;i++)
	{
		for(s=0;s<l-i;s++)
			printf(" ");
			for(t=0;t<i*2-1;t++)
			printf("*");
			printf("\n");
	}
	return 0;
}
