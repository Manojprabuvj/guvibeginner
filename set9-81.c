#include <stdio.h>
int main(void) {
	int a[10],b[10],c[10];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		c[i]=a[i]-b[i];
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",c[i]);
	}
	return 0;
}
