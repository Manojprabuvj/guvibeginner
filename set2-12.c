#include <stdio.h>  
    int main()
    {
      int n,r=0,rr,k;
	    scanf("%d",&n);
      k=n;
      while(n>0)
      {
        rr=n%10;
        r=(r*10)+rr;
        n=n/10;
      }
      if(k==r)
      {
        printf("\nyes");
      }
      else
      {
        printf("\nno");
      }
      return 0;
    }
