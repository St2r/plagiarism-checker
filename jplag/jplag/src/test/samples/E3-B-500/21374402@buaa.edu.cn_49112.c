"""
2022-03-28 19:30:57
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1584 KB
Accepted | 1 * (35 / 100) | 1 ms | 1660 KB
Accepted | 1 * (60 / 100) | 2 ms | 1684 KB

"""

#include <stdio.h>
void isperfect(int a);
int main()
{
    int a[110], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        isperfect(a[i]);
    }
    return 0;
}
void isperfect(int a)
{
    int i, sum = 1;

    for (i = 2; i <= a / 2 + 1; i++)
    {
        if (a % i == 0)
            sum += i;
        else
            continue;
    }
    if (sum == a)
        printf("YES\n");
    else
        printf("NO\n");
}