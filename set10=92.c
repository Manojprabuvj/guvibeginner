#include <stdio.h>
int main(void) 
{
	int n,s[50],i,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
		sum=sum+s[i];	
	}
	printf("\n%d",sum);
	return 0;
}
