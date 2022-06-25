"""
2022-03-29 10:36:48
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1676 KB
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (4 / 10) | 1 ms | 1652 KB

"""

#include <stdio.h>
#define maxNum 25

int main()
{
    int n;
    scanf("%d", &n);
    n = n > maxNum ? maxNum : n;
    double sum = 1.0;
    long long factorial = 1;
    for (int i = 1; i <= n; ++i, factorial *= i)
    {
        sum += 1.0 / factorial;
    }
    printf("%.14lf", sum);
    return 0;
}