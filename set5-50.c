#include <stdio.h>
#include<math.h>  
int main()
{
    int n;
    int t,flag;
    scanf("%d",&n);
    t=n;
    flag=0;
    while(t!=1)
    {
        if(t%2!=0){
            flag=1;
            break;
        }
        t=t/2;
    }
    if(flag==0)
        printf("yes");
    else
        printf("no"); 
    return 0;
}
