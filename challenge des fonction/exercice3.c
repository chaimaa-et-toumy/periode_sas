#include <stdio.h>
#include <stdbool.h>

bool isPremier(int n) {
	int i;

    for(i=2;i<n;i++)
    {
		if(n%2 == 0)
		{
			return false;
		}
		else
			return true;
	}
	if(n==2||n==0)
	{
		return false;
	}
	else
		return true;
}

int main(int argc, char *argv[]) {
	int a;
    printf ("entrer un nombre : ");
	scanf("%d", &a);
	printf("%d", isPremier(a));

	return 0;
}
