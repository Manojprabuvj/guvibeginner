#include <stdio.h>
int main()
{
    int n,r=0,s=0;
    scanf("%d",&n);
    while(n!=0)
    {
        s=n%10;
        r=(r*10)+s;
        n=n/10;
    }
    n=r;
    r=0;
    s=0;
    while(n!=0)
    {
        s=n%10;
        if(s%2==1)
        {
            printf("%d ",s);
        }
        r=(r*10)+s;
        n=n/10;
    }
    return 0;
}

