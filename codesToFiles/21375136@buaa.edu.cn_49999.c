"""
2022-03-27 12:46:48
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1652 KB
Accepted | 1 * (1 / 4) | 11 ms | 1708 KB
Accepted | 1 * (1 / 4) | 2 ms | 1588 KB
Accepted | 1 * (1 / 4) | 23 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
    int n;
    double ans = 1, tmp = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        tmp /= i;
        if (tmp)
        {
            ans += tmp;
        }
        else
        {
            break;
        }
        
        
    }
    printf("%.14lf", ans);
    return 0;
}