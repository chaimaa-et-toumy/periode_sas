#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	int n,max = 0,sum = 0;
	printf("entrer un nombre : ");
	scanf("%d",&n);
	while(n!=0)
	{
	    if(n>100)
	    {
	        printf("entrez un entier inferieur ou egal a 100");
	    }
	    else {
	        
	  
	        sum = sum + n;
	          if(n>max)
	             {
	                  max = n;
	       
	              }     
	    }
    	scanf("%d",&n);
    
    }
      	printf("le max est : %d \n",max);
        printf("la somme est : %d \n",sum);
    
		return 0;
	}


/*int main() {
	int i,n,max = 0,sum = 0;
	for(i=0;i<=100;i++)
	{
	printf("entrer un nombre : ");
	scanf("%d",&n);
	if(n < 0 || n > 100)
	{
	printf("entre un nombre entre 0 et 100 \n");
	}
	  else if(n%10 == 0)
	{
	    sum = sum + n;
	    if(n>max)
	    {
	        max = n;
	       
	    }
	}	 
    }
    printf("le max est : %d \n",max);
    printf("la somme est : %d \n",sum);
    
		return 0;
	}*/


