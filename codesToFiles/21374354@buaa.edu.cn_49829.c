"""
2022-03-29 14:14:43
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1640 KB
Accepted | 1 * (2 / 10) | 0 ms | 1732 KB
Accepted | 1 * (4 / 10) | 1 ms | 1656 KB

"""

#include <stdio.h>
int main()
{
    int n;
    double k = 1.0;
    double sum = 1.0;
    scanf("%d", &n);
    if (n > 40) n = 40;
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            k *= j;    
        }
        sum += 1/k;
        k = 1.0;
    }
    printf("%.14lf\n", sum);
    return 0;
}