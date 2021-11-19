#include <stdio.h>

int main()
{
    int n,i;
    printf("entrer un nombre ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
    	if(n%2 == 0)
    {
        printf("le nombre n'pas premier");
    }
    else
       printf(" le nombre est premier");  
    
	}
	if(n==2||n==0)
	{
		 printf("le nombre n'pas premier");
	}
	 else
       printf(" le nombre est premier");  
    
    
   
    return 0;
}

