#include <stdio.h>
int main(void) 
{
int a,b,r,lcm,gcd,x,y;
scanf("%d",&a);
scanf("%d",&b);
x=a;
y=b;
do
{
r=a%b;
if(r==0)
break;
a=b;
b=r;
}while(r!=0);
gcd=b;
lcm=(x*y)/gcd;
printf("\n%d",lcm);
return 0;
}
