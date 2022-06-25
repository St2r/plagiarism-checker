"""
2022-03-26 11:01:30
AC
1.0
Accepted | 1.0 * (3 / 15) | 18 ms | 1600 KB
Accepted | 1.0 * (2 / 15) | 22 ms | 1656 KB
Accepted | 1.0 * (4 / 15) | 2 ms | 1652 KB
Accepted | 1.0 * (1 / 15) | 14 ms | 1616 KB
Accepted | 1.0 * (5 / 15) | 14 ms | 1604 KB

"""

#include<stdio.h>

int main()
{
    long long int n,m=1,i;//最多迭代16次
    double e=1;
    scanf("%lld",&n);
    if(n<=16)
    {
        for(i=1; i<=n; i++)
        {
            m=m*i;
            e=e+1.0/m;
        }
    }
    else
    {
        for(i=1; i<=16; i++)
        {
            m=m*i;
            e=e+1.0/m;
        }
    }
    printf("%.14lf",e);
    return 0;
}