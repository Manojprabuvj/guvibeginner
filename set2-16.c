 #include <stdio.h>  
    int main()
    {
      int n,k,i,flag;
	    scanf("%d",&n);
      scanf("%d",&k);
      while(n<k)
      {
        flag=0;
        for(i=2;i<=k/2;i++)
         {
           if(n%i==0)
            {
               flag=1;
               break;
            }
        }
        if(flag==0)
        {
          printf("%d ",n);
        }
        n++;
      }
      return 0;
    }
