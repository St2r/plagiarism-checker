"""
2022-03-29 10:39:33
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1680 KB
Accepted | 1 * (35 / 100) | 1 ms | 1580 KB
Accepted | 1 * (60 / 100) | 3 ms | 1580 KB

"""

#include <stdio.h>
int main()
{
    int n, i, j,sum=0, a[105];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 1; j < a[i]; j++)
        {
            if (a[i] % j == 0)
                sum += j;
        }
        if (sum == a[i])
            printf("YES\n");
        else
            printf("NO\n");
        sum = 0;
    }

    return 0;
}