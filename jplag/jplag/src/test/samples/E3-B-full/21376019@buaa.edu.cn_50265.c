"""
2022-03-28 22:45:25
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1628 KB
Accepted | 1 * (35 / 100) | 0 ms | 1624 KB
Accepted | 1 * (60 / 100) | 2 ms | 1648 KB

"""

#include <stdio.h>
int main()
{
    int n, i, a;
    scanf("%d", &n);
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        for (int j = 1; j <= a/2; j++)
        {
            if ((a % j) == 0)
            {
                sum += j;
            }
        }
        if (sum == a)
            printf("YES\n");
            
        else
            printf("NO\n");
        sum = 0;
    }
    return 0;
}