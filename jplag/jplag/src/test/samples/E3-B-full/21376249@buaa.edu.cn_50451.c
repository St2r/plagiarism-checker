"""
2022-03-26 22:34:25
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 2 ms | 1596 KB
Accepted | 1 * (60 / 100) | 3 ms | 1548 KB

"""

#include<stdio.h>
#include<math.h>

int main()
{
    int a, i, n,sum = 0,i1;
    scanf("%d", &n);
    for (i1 = 0; i1 < n; i1++)
    {
        scanf("%d", &a);
        for (i = 1; i < a; i++)
        {
            if (a % i == 0)
            {
                sum += i;
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