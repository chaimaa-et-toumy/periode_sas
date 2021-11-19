#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int add(int a , int b) {
	int c = a+b;
	return c;
}
int main() {
	int n1,n2,res;
	printf("entrer le premier nombre : ");
	scanf("%d",&n1);
	printf("entrer le deuxieme nombre : ");
	scanf("%d",&n2);
 	res = add(n1,n2);
 	printf("l'addition est : %d ",res);
	return 0;
}
