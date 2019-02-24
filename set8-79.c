#include <stdio.h>
int main()
{
    int j,n,m,s,ss,c=0;
    scanf("%d %d",&n,&m);
    s=n*m;
    for(j=1;j<=s;j++)
    {
        ss=(j*j);
        if(s==ss)
        {
            c++;
            printf("yes");
            break;
        }
    }
    if(c==0)
        {
            printf("no");
        }
    return 0;
}
