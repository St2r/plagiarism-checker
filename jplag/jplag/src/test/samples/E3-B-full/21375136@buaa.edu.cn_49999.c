"""
2022-03-27 12:39:56
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1628 KB
Accepted | 1 * (35 / 100) | 2 ms | 1632 KB
Accepted | 1 * (60 / 100) | 4 ms | 1624 KB

"""

#include<stdio.h>
#include<math.h>
int main ()
{
    int n, tmp, ans = 0;
    scanf("%d", &n);
    for (int  i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        for (int j = 1; j < tmp; j++)
        {
            if (tmp%j==0)
            {
                ans += j; 
            }
            
        }
        if (ans==tmp)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        ans = 0;
    }
    return 0;
}