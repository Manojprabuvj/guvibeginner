#include <stdio.h>
   #include<math.h>  
    int main()
    {
    int s, e, i, t1, t2, rem, n = 0, r= 0;
    scanf("%d %d", &s, &e);
    for(i = s+ 1; i <e; ++i)
    {
        t2 = i;
        t1 = i;
        while (t1 != 0)
        {
            t1 /= 10;
            ++n;
        }
        while (t2 != 0)
        {
            rem = t2 % 10;
            r += pow(rem, n);
            t2 /= 10;
        }
        if (r == i) {
            printf("%d ", i);
        }
        n = 0;
        r= 0;
    }
      return 0;
    }
