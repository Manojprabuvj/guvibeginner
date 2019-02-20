#include <stdio.h>  
    int main()
    {
      int n,i=1,k;
	    scanf("%d",&n);
      scanf("%d",&k);
      while(k!=0)
      {
        i=i*n;
        k--;
      }
      printf("%d",i);
      return 0;
    }
