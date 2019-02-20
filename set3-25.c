#include <stdio.h>
   #include<math.h>  
    int main()
    {
        int i, j, s, n,a[30];
        scanf("%d", &n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++) 
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j]) 
                {
                    s=a[i];
                    a[i]=a[j];
                    a[j]=s;
                }
            }
        }
        for (i = 1; i <= n; ++i)
        { 
            if(n%2==1)
              {
              printf("%d",a[n/2]);
              break;
            }   
        }    
      return 0;
    }
