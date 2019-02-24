#include <stdio.h>
#include <stdlib.h>

int main(void) {
 unsigned int h,m,f1,f2,h1,m1;
   scanf("%d\t%d",&h,&m);
   scanf("%d\t%d",&h1,&m1);
   f1=abs(h-h1);
   f2=abs(m-m1);
 
    printf("%d\t%d",f1,f2);
 
 

  return 0;
}
