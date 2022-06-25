"""
2022-03-29 16:03:14
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1748 KB
Accepted | 1 * (1 / 10) | 1 ms | 1716 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1648 KB
Accepted | 1 * (4 / 10) | 1 ms | 1692 KB

"""

#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);

    double a = 1.0, ans = 1.0;

    for (int i = 1; i <= n && i <= 100; i++)
    {
        a /= i;
        ans += a;
    }
    printf("%.14f", ans);
    return 0;
}