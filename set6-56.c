#include <stdio.h>
#include<string.h>
int main() 
{
	char s[100];
	int i,n,c1=0,c2=0,c3=0;
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
	    if((s[i]>='a') && (s[i]<='z')||(s[i]>='A') && (s[i]<='Z'))
	    {
	       c1=1;
	    }
	    else if((s[i]>=0) && (s[i]>=9))
	    {
	        c2=1;
	    }
	    else
	    {
	        c3=1;
	    }
	}
	if((c1==1) && (c2==1))
	{
	  printf("yes");
	}
	else
	{
	    printf("no");
	}
	return 0;
}
