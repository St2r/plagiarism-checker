"""
2022-03-27 22:38:16
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (4 / 10) | 2 ms | 1668 KB

"""

#include<stdio.h>

int main()
{
    long long  a = 1, n;
    int i;
    double k = 0, m;
    scanf("%lld", &n);
    for (i = 1; i <= n&&i<=50; i++)
    {
        a = a * i;
        m = 1.0 * 1 / a;
        k = k + m;
    }
    printf("%.14f", k + 1);
    return 0;

}