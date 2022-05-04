"""
2022-03-26 12:42:58
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 3 ms | 1680 KB
Accepted | 1 * (60 / 100) | 2 ms | 1684 KB

"""

#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    int a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if ((a[i] == 6) || (a[i] == 28) || (a[i] == 496) || (a[i] == 8128))
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