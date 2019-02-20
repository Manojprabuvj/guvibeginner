#include <stdio.h>  
    int main()
    {
     int n,rr, rem,i= 0;
    scanf("%d", &n);
    rr=n;
    while (rr!=0)
    {
        rem=rr%10;
        i+=rem*rem*rem;
        rr/= 10;
    }

    if(i==n)
        printf("\nyes");
    else
        printf("\nno");
      return 0;
    }
