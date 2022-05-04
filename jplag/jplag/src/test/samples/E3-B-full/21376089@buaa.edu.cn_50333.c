"""
2022-03-28 21:37:24
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1624 KB
Accepted | 1 * (35 / 100) | 1 ms | 1732 KB
Accepted | 1 * (60 / 100) | 3 ms | 1680 KB

"""

#include <stdio.h>
int main()
{
    int n;
    int x, i, j, sum;
    scanf("%d", &n);

    for(i = 1;i <= n;i++)
    {
        scanf("%d", &x);
        sum = 0;
        for(j = 1;j < x;j++)
        {
            if(x % j == 0)
            {
                sum = sum + j;
            }
        }

        if(sum == x)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}