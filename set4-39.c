#include <stdio.h>
   #include<math.h>  
    int main()
    {
        int i, j, s,a[30];
        for(i=0;i<10;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<10;i++) 
        {
            for(j=i+1;j<10;j++)
            {
                if(a[i]>a[j]) 
                {
                    s=a[i];
                    a[i]=a[j];
                    a[j]=s;
                }
            }
        }
        for (i = 0; i < 10; ++i)
        {
            printf("%d\n",a[9]);
            break;
        }
      return 0;
    }
