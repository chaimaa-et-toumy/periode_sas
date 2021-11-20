#include <stdio.h>

int somme(int n)
{
    if(n!=0)
    {
     return n+somme(n-1);   
    }
    else 
    return 0;
}
int main()
{
    int nombre,res;
    printf("entrer un nombre : ");
    scanf("%d",&nombre);
    printf("la somme :%d",somme(nombre));
    return 0;
}

