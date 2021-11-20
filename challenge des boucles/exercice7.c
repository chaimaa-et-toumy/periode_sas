#include <stdio.h>
int main()
{
    int n,i,un,u0=1,u1=1;
    printf("entrer un nombre : ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("les nombres sont interdits");
    }
    else if(n == 0 || n == 1)
    {
        printf("un%d = 1",n);
    }
    for(i=0;i<n-1;i++)
    {
			
            un = u0 + u1;
            u0 = u1;
            u1 = un;
            /*un = un - 1 + un - 2;*/
    }
    printf("u%d = %d", n, un);
}
