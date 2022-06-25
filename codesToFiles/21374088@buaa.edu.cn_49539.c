"""
2022-03-29 23:36:35
WA
0.4
Accepted | 1 * (1 / 10) | 0 ms | 1736 KB
Accepted | 1 * (1 / 10) | 1 ms | 1744 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Wrong Answer | 0 * (2 / 10) | 1 ms | 1684 KB
Wrong Answer | 0 * (4 / 10) | 1 ms | 1748 KB

"""

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n;
    double sum = 1;
    scanf("%d", &n);
    int a=0;
    if (n >= 33)
    {
        for (int j = 1; j <=33; j++)
        {
            sum+=(double)(1/(double)func(j));
        }
    }
    else
    {
        for (int k = 1; k <=n; k++)
        {
            sum +=(double)(1/(double)func(k));
        }
    }
    //sum = (1/ (double)func(2)) + (1/ (double)func(3));
    printf("%.14lf", sum);
    
    return 0;
}
int func(int n)
{
    int j = 1;
    for (int i = 1; i <= n; i++)
    {
        j *= i;
    }
    return j;
}