#include <stdio.h>
#include<string.h>
int main(void)
{
	char s[10];
	scanf("%s",s);
	int i,flag=0,n;
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]=='1' || s[i]=='0')
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("yes");
	}
  else
  {
    printf("no");
  }
}
