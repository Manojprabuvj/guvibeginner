#include <stdio.h>
 
int main(void) 
{
	int n,m,s;
	scanf("%d",&n);
	scanf("%d",&m);
	s=n+m;
	if(s%2==0)
	{
		printf("\neven");
	}
	else
	{
		printf("\nodd");
	}
	return 0;
}
