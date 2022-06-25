"""
2022-03-29 21:34:37
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1676 KB
Accepted | 1 * (4 / 10) | 1 ms | 1632 KB

"""

#include <stdio.h>

long long x = 1;
double sum = 1;
int main()
{
    int n,i;
    scanf("%d", &n);
    if(n > 25) 
    n = 25;
    for( i = 1; i <= n; i++)
    {
    x *= i;
    sum += 1.0 / x;
    }
 printf("%.14lf", sum);
 return 0;
}