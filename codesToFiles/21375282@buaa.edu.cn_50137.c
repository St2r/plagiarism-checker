"""
2022-03-29 13:00:27
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1736 KB
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1676 KB
Accepted | 1 * (2 / 10) | 1 ms | 1648 KB
Accepted | 1 * (4 / 10) | 1 ms | 1668 KB

"""

#include <stdio.h>

int main ()
{
    double e=1.0,a=1.0;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n&&i<10000;i++)
    {
        a=a/(i+1);
        e=e+a;
    }
    printf("%.14lf",e);
}