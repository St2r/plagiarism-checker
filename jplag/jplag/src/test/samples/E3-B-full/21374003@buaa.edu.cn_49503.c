"""
2022-03-29 22:03:55
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1736 KB
Accepted | 1 * (35 / 100) | 1 ms | 1580 KB
Accepted | 1 * (60 / 100) | 2 ms | 1660 KB

"""

#include <stdio.h>
#include <stdlib.h>


int main()
{
     int n, a[100], sum ;
      scanf("%d", &n);
      for (int i=1;i<= n;i++)
        {
           scanf("%d", &a[i]);
           sum=0;
           for (int b = 1; b<a[i];b++)
            {
                if (a[i]%b==0)
                {
                  sum = sum + b;
                }

            }
            if(sum==a[i])
               {
                    printf("YES\n");
               }
            else{
                printf("NO\n");}
        }

    return 0;
}