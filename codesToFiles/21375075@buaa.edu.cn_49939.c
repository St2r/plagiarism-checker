"""
2022-03-27 00:32:33
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1676 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1708 KB

"""

#include <stdio.h>
int main()
{
    int i, n;
    double e = 1, s = 1;
    scanf("%d", &n);
    if(n<=20)
    {
        for (i = 1; i <= n; i++)
        {
            s = s * i;
            e = e + 1 / s;
        }
    }
    else
    {
        for (i = 1; i <= 20;i++)
        {
            s = s * i;
            e = e + 1 / s;
        }
    }
    printf("%.14f", e);
    return 0;
}