#include <stdio.h>
   int main(void) {
   int i,c=1;
  char s[100];
  scanf("%[^\n]s",s);
  for(i=0;s[i]!='\0';i++) 
  {
    if(s[i]==' ')
    {
       c++;
    }
    else
    {
      
    }
  }
printf("%d",c);
  	return 0;
}
