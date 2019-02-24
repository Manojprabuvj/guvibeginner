#include <stdio.h>
int main(void) 
{
	int le,b,h;
	scanf("%d %d %d",&le,&b,&h);
	int vol,ta;
	vol=le*b*h;
	ta=2*((le*b)+(b*h)+(h*le));
	printf("\n%d",vol);
	printf("\n%d",ta);
	return 0;
}
