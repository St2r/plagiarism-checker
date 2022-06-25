"""
2022-03-26 20:56:27
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1640 KB
Accepted | 1 * (1 / 10) | 2 ms | 1668 KB
Accepted | 1 * (2 / 10) | 2 ms | 1692 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1704 KB

"""

#include<stdio.h>
#define eps 1e-15
int main()
{
    long long n;
    scanf("%lld",&n);
    double e=1,jc=1,ds;

    for (int i=1;i<=n;i++)
    {

        jc*=i;

        ds=1/jc;
        if (ds<eps)
        {
            break;
        }
        e+=ds;

    }
    printf("%.14f\n",e);
    return 0;
}