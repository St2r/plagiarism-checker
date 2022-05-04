"""
2022-03-25 19:08:48
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1496 KB
Accepted | 1 * (35 / 100) | 2 ms | 1624 KB
Accepted | 1 * (60 / 100) | 3 ms | 1496 KB

"""

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int cnt = 1;
        for (int i = 2; i <= n / 2; i++)
            cnt += n % i ? 0 : i;
        if (cnt == n)
            puts("YES");
        else
            puts("NO");
    }
}