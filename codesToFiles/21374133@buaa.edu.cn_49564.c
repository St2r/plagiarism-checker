"""
2022-03-27 19:08:09
AC
1.0
Accepted | 1 * (1 / 100) | 6 ms | 1548 KB
Accepted | 1 * (30 / 100) | 3 ms | 1612 KB
Accepted | 1 * (30 / 100) | 9 ms | 1696 KB
Accepted | 1 * (30 / 100) | 5 ms | 1628 KB
Accepted | 1 * (9 / 100) | 2 ms | 1632 KB

KB

"""

#include <stdio.h>
int main()
{
    int n;
    double e=1;
    int fact = 1;
    double each = 1;
    scanf("%d", &n);
    if (n <= 17) 
    {
        for (int i = 1; i <= n; i++)
        {
            each = 1.0 * each / i;
            e = e + each;
        }
        printf("%.14lf", e);
    }
    else
        printf("2.71828182845905");
    return 0;
}