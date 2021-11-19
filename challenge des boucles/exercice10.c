#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,s=0,m=0,i;
    for(i=0;i<=10;i++)
    {
        printf("entrer un nombre : ");
        scanf("%d",&n);
        if(n<0 || n>10)
        printf("entrer un nombre entre 0 et 10");
        else if(n>m)
        {
            m = n;
        }
            s = s+n;
    }
     printf("la somme est %d:\n",s);
     printf("le max est %d:",m);
  
     return 0;
}
