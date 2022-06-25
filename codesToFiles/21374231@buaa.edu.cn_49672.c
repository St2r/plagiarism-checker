"""
2022-03-29 20:18:08
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1752 KB
Accepted | 1 * (4 / 10) | 1 ms | 1680 KB

"""

#include<stdio.h>

int main()
{
    int i, n;
    double sum = 1, t = 1;
    scanf("%d", &n);
    for (i = 1; (i <= n) && (i <= 17); i++)
    {
        t = t * i;
        sum = sum + 1 / t;
    }
    printf("%.14lf", sum);
    return 0;
}

// e=2.71828182845905 100
// e=2.71828182845905 50
// e=2.71828182845905 20
// e=2.71828182845904 16
// e=2.71828182845905 17