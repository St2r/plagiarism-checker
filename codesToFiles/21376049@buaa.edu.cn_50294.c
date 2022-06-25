"""
2022-03-26 09:36:39
AC
1.0
Accepted | 1 * (5 / 100) | 16 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1532 KB
Accepted | 1 * (60 / 100) | 15 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    double i,sum=1.0,t=1.0;
    for(i=1;i<=n;i++)
    {
        t=t/i;
        sum=sum+t;
    }
    printf("%.14lf",sum);
    return 0;
}