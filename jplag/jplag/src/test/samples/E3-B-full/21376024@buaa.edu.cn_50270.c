"""
2022-03-29 23:47:00
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1688 KB
Accepted | 1 * (35 / 100) | 1 ms | 1736 KB
Accepted | 1 * (60 / 100) | 2 ms | 1732 KB

"""

#include<stdio.h>
int main()
{
    int n, m, i, j, total;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        total = 0;
        scanf("%d", &m);
            if(m == 1)
            {
                printf("NO\n");
            }
            else
            {
        for(j = 1; j <= m/2; j++)
        {
            if(m % j == 0)
            {
               total += j;
            }
        }
        if(total != m)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }

    }
  }
    return 0;

}