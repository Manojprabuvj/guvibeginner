#include <stdio.h>
int main(void) 
{
	int x,y,z,n;
	scanf("%d %d %d",&x,&y,&z);
	n=((x*y)%z);
	printf("\n%d",n);
	return 0;
}
