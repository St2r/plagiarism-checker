"""
2022-03-27 19:32:46
AC
1.0
Accepted | 1 * (1 / 10) | 12 ms | 1624 KB
Accepted | 1 * (1 / 10) | 14 ms | 1612 KB
Accepted | 1 * (2 / 10) | 11 ms | 1544 KB
Accepted | 1 * (2 / 10) | 2 ms | 1600 KB
Accepted | 1 * (4 / 10) | 2 ms | 1696 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long n,i,k;
   double a,sum;
   scanf("%lld",&n);
   for(i=1;i<=20&&i<=n;i++)
   {a=1;
       for(k=1;k<=i;k++)
       {
           a=a/k;
       }
       sum=sum+a;
   }
printf("%.14f",sum+1);

    return 0;
}