#include <stdio.h>
#include<math.h>
int main(void) 
{
	float p,r,am;
	int s,n;
	scanf("%f %d %f",&p,&n,&r);
	am=((p*n*r)/100);
	s=floor(am);
	printf("\n%d",s);
	return 0;
}
