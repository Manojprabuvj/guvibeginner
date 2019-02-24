#include <stdio.h>
int main(void) 
{
int a,y,rem,g;
scanf("%d",&a);
scanf("%d",&b);
do
{
rem=a%b;
if(rem==0)
break;
a=b;
b=rem;
}while(rem!=0);
g=b;
printf("%d",g);
return 0;
}
