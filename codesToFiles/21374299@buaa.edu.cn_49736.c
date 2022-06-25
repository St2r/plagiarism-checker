"""
2022-03-26 09:20:45
AC
1.0
Accepted | 1 * (5 / 100) | 5 ms | 1684 KB
Accepted | 1 * (35 / 100) | 2 ms | 1536 KB
Accepted | 1 * (60 / 100) | 18 ms | 1640 KB
B

"""

#include<stdio.h>
int main()
{
    long long n,i;
    double a=1.0,b=1.0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        a=a/(1.0*i);
        b=b+a;
    }
   printf("%.14lf",b);
   return 0;
}