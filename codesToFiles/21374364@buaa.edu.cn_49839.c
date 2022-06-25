"""
2022-03-27 21:59:04
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1668 KB
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1668 KB
Accepted | 1 * (4 / 10) | 2 ms | 1676 KB

"""

#include <stdio.h>
int main()
{
    int n;
    double e=1;
    long long k =1;
    scanf("%d",&n);
    if(n>34) n=34;
    for(int i=1;i<=n;i++)
    {
        k=i*k;
        e=e+1.0*1/k;
    }
    printf("%.14lf\n",e);
    return 0;
}