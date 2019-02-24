#include <stdio.h>
int main(void) 
{
	int n,m,dif;
	scanf("%d",&n);
	scanf("%d",&m);
	dif=n-m;
	if(dif%2==0)
	{
		printf("\neven");
	}
	else
	{
		printf("\nodd");
	}
	return 0;
}
