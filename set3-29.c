#include <stdio.h>
   #include<math.h>  
    int main()
    {
      int m,h,mm;
      scanf("%d",&m);
      if(m>=60)
      {
        h=m/60;
        mm=m%60;
        printf("%d %d",h,mm);
      } 
      else
      {
        printf("0 %d",m);
      }
      return 0;
    }
