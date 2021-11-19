#include <stdio.h>
#include <stdlib.h>
int a,b;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void echanger(int a, int b){
	int c;
	c=a;
	a=b;
	b=c;
	printf("a=%d b=%d",a,b);
}

int main() {
	printf("entrer le premier nombre ");
	scanf("%d",&a);
	printf("entrer le deuxieme nombre ");
	scanf("%d",&b);
	printf("avant changement a=%d b=%d \n",a,b);
	printf("apres changement ");
	echanger(a,b);
	return 0;
}
