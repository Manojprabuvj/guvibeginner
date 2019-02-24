#include<stdio.h>
#include<math.h>
int main(void)
{
	int s,i,a,b,n;
	scanf("%d",&s);
	for(i=1;i<=s;i++)
	{
		a=pow(2,i);
		if(a>s)
		{
			b=i;
			break;
		}
	}
	n=pow(2,b);
	printf("\n%d",n);
	
	return 0;
}


