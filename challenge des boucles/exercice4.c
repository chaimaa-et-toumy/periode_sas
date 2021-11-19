#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	int n, max = 0,sum = 0;
	printf("entrer un nombre : ");
	scanf("%d",&n);
	while(n!=0)
	{
	   if(n>100 || n < 0)
	    {
	        printf("entrez un entier entre 0 et 100 \n");
	    } 
	  else if(n >0 && n<=100)
	    {
	          if(n>max)
	                  max = n;
	                   sum = sum + n;
	     }
    	printf("entrer un nombre : ");
 	    scanf("%d",&n);
    }
    	printf("le max est : %d \n",max);
        printf("la somme est : %d \n",sum);
      
    	return 0;
	}

