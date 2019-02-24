#include<stdio.h>
int main(void)
{
int n,i,flag=0;
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("\nyes");
}
else
{
printf("\nno");
}
return 0;
}
