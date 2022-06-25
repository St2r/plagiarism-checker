"""
2022-03-28 22:49:48
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1660 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1748 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (4 / 10) | 1 ms | 1736 KB

"""

#include <stdio.h>
int main()
{
   int n, i, j;
   double e = 1, J=1;
   scanf("%d", &n);
   for(i = 1;i <= n;i++)
   {
       J/=1.0*i;

    if(J<0.0000000000000000001)
        break;
       e = e + J;
   }

    printf("%.14lf\n", e);

    return 0;
}