#include <stdio.h>
#include <string.h>
int main()
{
    int m,n;
    char s[10],a[10];
    scanf("%s %s",s,a);
    n=strlen(s);
    m=strlen(a);
    if(n<m)
    {
       printf("%s",a);
    }
    return 0;
}
