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
        for (i = 0; i < n; ++i)
            printf("%d\n",a[i]);
      return 0;
    }

