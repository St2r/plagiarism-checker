"""
2022-03-29 22:22:23
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1648 KB
Accepted | 1 * (35 / 100) | 1 ms | 1692 KB
Accepted | 1 * (60 / 100) | 2 ms | 1736 KB

"""

#include <stdio.h>

int is_wanquan(int x)
{

    int sum = 0;
    for (int i = 1; i<x; i++)
    {
        if (x%i == 0)
            sum = i+sum;
    }
    if (sum == x)
        return 1;
    else
        return 0;

}

int main()
{
    int n ;
    int x;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d",&x);
    if (is_wanquan(x) == 1)
    {
        printf("YES\n");
    }
        else
            printf("NO\n");
    }
    return 0;
}