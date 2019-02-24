#include <stdio.h>
int main()
{
    int j,n;
    scanf("%d",&n);
    for(j=1;j<n;j++)
    {
        if(n%j==0)
        {
            printf("%d ",j);
        }
    }
    return 0;
}
