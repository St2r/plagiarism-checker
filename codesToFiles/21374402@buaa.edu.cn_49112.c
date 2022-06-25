"""
2022-03-28 19:34:57
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (1 / 10) | 0 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 0 ms | 1752 KB

"""

#include <stdio.h>
#define E 2.718281828459045
int main()
{
    double j = 1, e = 1.0;
    int i, n;
    scanf("%d", &n);
    if (n > 17)
        n = 17;
    for (i = 1; i <= n; i++)
    {
        j *= i;
        e += 1.0 / j;
    }
    printf("%.14lf", e);
    return 0;
}