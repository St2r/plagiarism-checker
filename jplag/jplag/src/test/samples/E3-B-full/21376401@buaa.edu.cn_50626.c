"""
2022-03-28 22:05:15
WA
0.0
Wrong Answer | 0 * (5 / 100) | 1 ms | 1688 KB
Wrong Answer | 0 * (35 / 100) | 1 ms | 1732 KB
Wrong Answer | 0 * (60 / 100) | 3 ms | 1624 KB

"""

#include <stdio.h>
int main()
{
    int n, a, i, j, sum = 0;
    scanf("%d", &n);
    for(j = 0; j<n; j++)
    {
    scanf("%d", &a);
    for(i = 1; i<a; i++)
    {
        if(a%i == 0)
        {
            sum += i;
        }
    }
    if(sum == a) printf("YES\n");
    else printf("NO\n");
    }
    return 0;
}