"""
2022-03-25 19:13:57
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1712 KB
Accepted | 1 * (1 / 10) | 2 ms | 1640 KB
Accepted | 1 * (2 / 10) | 2 ms | 1640 KB
Accepted | 1 * (2 / 10) | 2 ms | 1708 KB
Accepted | 1 * (4 / 10) | 2 ms | 1648 KB

"""

#include <stdio.h>
int main()
{
    int n;
    double e = 1;
    scanf("%d", &n);
    if(n>=17)
        n = 17;
    double tmp = 1;
    for (int i = 1; i <= n; i++)
    {
        tmp /= i;
        e += tmp;
    }
    printf("%.14f", e);
}