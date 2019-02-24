#include <stdio.h>
int main(void) 
{
	int n,t,sum=0;
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		t=n%10;
		sum=sum+t;
		n=n/10;
	}
	printf("\n%d",sum);
	return 0;
}
