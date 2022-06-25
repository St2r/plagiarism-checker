"""
2022-03-29 21:07:31
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1656 KB
Accepted | 1 * (1 / 10) | 1 ms | 1632 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 0 ms | 1728 KB
Accepted | 1 * (4 / 10) | 1 ms | 1712 KB

"""

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int main()
{
    long long n = 0;
    long long i = 0;
    double b = 1;
    double c = 1;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
       b=b*i;
       c=c+1/b;
       if(i==17)
       {
           break;
       }
    }
    printf("%.14lf",c);
    return 0;
}