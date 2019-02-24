#include <stdio.h>
#include<string.h>
int main(void) {
	char a[10];
	int i,j;
	scanf("%s",a);
	j=strlen(a);
	for(i=0;i<j;i++)
	{
		if(i%2==0)
		{
			printf("%c",a[i]);
		}
		
	}
	printf("\t");
	for(i=0;i<j;i++)
	{
		if(i%2!=0)
		{
			printf("%c",a[i]);
		}
		
	}
	return 0;
}
