#include <stdio.h>
   int main(void) {
   int i,c=0;
  char s[100];
  scanf("%[^\n]s",s);
  for(i=0;s[i]!='\0';i++) 
  {
    if(s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='0'||s[i]=='9')
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
