"""
2022-03-26 12:14:24
AC
1.0
Accepted | 1 * (1 / 4) | 8 ms | 1640 KB
Accepted | 1 * (1 / 4) | 8 ms | 1648 KB
Accepted | 1 * (1 / 4) | 9 ms | 1608 KB
Accepted | 1 * (1 / 4) | 4 ms | 1644 KB
KB

"""

#include <stdio.h>
int main()
{
    long long n,j=1;
    scanf("%lld",&n);
    double e=2;
    for(int i=2;i<=n&&i<=65;i++)
    {
        j*=i;
        e+=1.0/j;
    }
    printf("%.14lf",e);
    return 0;
}