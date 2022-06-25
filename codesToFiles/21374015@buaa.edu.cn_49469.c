"""
2022-03-26 10:40:47
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (1 / 10) | 11 ms | 1616 KB
Accepted | 1 * (2 / 10) | 20 ms | 1696 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 12 ms | 1660 KB

"""

#include <stdio.h>
int main()
{
    
    double n,sum = 1;
    scanf("%lf", &n);
    if (n < 17)
    {
        for (int i = 1; i <= n; i++)
        {
            double k = 1;
            for (int j = 1; j <= i; j++)
            {
                k *= j;
            }
            sum += 1 / k;
        }
    }
    else if (n >= 17)
    {
        n = 17;
        for (int i = 1; i <= n; i++)
        {
            double k = 1;
            for (int j = 1; j <= i; j++)
            {
                k *= j;
            }
            sum += 1 / k;
        }
    }
    printf("%.14lf",sum);
return 0;
}