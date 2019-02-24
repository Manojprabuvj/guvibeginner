#include <stdio.h>
int main()
{
    int i,n,s=2;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            s++;
        }
    }
    if(s>2)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
