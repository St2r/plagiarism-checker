"""
2022-03-26 12:52:54
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (1 / 10) | 2 ms | 1684 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (4 / 10) | 2 ms | 1660 KB

"""

#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    double a[20], b = 1;
    a[0] = 1;
    scanf("%d", &n);
    if (n >= 20)
    {
        n = 20;
    }
    for (int i = 1; i < n; i++)
    {
        a[i] = a[i - 1] * (i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        b += 1/a[i];
    }
    printf("%.14f", b);
    return 0;
}