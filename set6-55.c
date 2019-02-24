#include<stdio.h>
int main()
{
    int n,m,res;
    scanf("%d",&n);
    scanf("%d",&m);
    res=n*m;
    if(res%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
