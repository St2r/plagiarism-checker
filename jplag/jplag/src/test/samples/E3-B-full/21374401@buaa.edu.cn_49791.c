"""
2022-03-28 23:42:04
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1572 KB
Accepted | 1 * (35 / 100) | 0 ms | 1584 KB
Accepted | 1 * (60 / 100) | 2 ms | 1660 KB

"""

#include <stdio.h>
int main()
{
    int n, x, sum;
    sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x);
        for (int j = 1; j < x; j++)
        {
            if (x % j == 0)
            {
                sum += j;
            }
        }
        if (sum == x)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        sum = 0;
    }
}