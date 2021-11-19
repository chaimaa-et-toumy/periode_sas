#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i , n , m;
	printf("entrer un nombre : ");
	scanf("%d",&n);
	printf("la multiplication est :\n");
	for(i=0;i<=10;i++)
	{
		m = i * n;
		printf("%d * %d = %d \n",i,n,m);
	}
	return 0;
}
