"""
2022-03-27 10:54:35
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1548 KB
Accepted | 1 * (35 / 100) | 3 ms | 1548 KB
Accepted | 1 * (60 / 100) | 4 ms | 1628 KB

"""

#include<stdio.h>
#include<math.h>
int is_perfect(int x)
{
    int sum = 0;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            sum += i;
        }
    }
    if (sum == x)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int a=0,n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (is_perfect(a) == 1)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}