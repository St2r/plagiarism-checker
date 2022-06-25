"""
2022-03-28 21:50:21
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1756 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (4 / 10) | 0 ms | 1740 KB

"""

#include <stdio.h>
int main()
{
    int n,x=1;
    double a=1,e=1;
    scanf("%d",&n);
    while(x<=n&&a>0.0000000000000001)
    {
        a=a*1.0/x;
        x++;
        e=e+a;
    }
    printf("%.14f",e);
    return 0;
}