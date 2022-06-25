"""
2022-03-29 00:02:21
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1728 KB
Accepted | 1 * (4 / 10) | 1 ms | 1656 KB

"""

#include <stdio.h>
int main()
{
    int n;
    double num = 1;
    double e = 1;
    scanf("%d", &n);
    if (n >= 25)
    {
        printf("2.71828182845905");
        return 0;
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (double j = 1; j <= i; j++)
        {
            num *= 1 / j;
        }
        e += num;
        num = 1;
    }
    printf("%.14lf", e);

}