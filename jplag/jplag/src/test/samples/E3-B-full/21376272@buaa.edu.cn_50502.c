"""
2022-03-27 21:07:13
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1524 KB
Accepted | 1 * (35 / 100) | 2 ms | 1692 KB
Accepted | 1 * (60 / 100) | 6 ms | 1560 KB

"""

#include <stdio.h>

int pefct(int a)
{
    int b[a], sum = 0, count = 0;

    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            b[count] = i;
            count += 1;
        }
    }
    for (int i = 0; i < count; i++)
    {
        sum += b[i];
    }
    if (sum == a)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (pefct(a[i]) == 1)
        {
            printf("YES\n");
        }
        else if (pefct(a[i]) == -1)
        {
            printf("NO\n");
        }
    }

    return 0;
}