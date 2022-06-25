"""
2022-03-27 10:16:37
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (4 / 10) | 2 ms | 1636 KB

"""

#include<stdio.h>
int main()
{
    long long a;
    int i,j,n;
    double e;
    e=1.0;
    a=1;
    scanf("%d",&n);
    if(n<=36)
    {

    for(i=1;i<=n;i++)
    {
        a=a*i;
        e=e+1.0*1/a;
    }
    printf("%.14lf",e);
    }
    else
    {
        printf("2.71828182845905");
    }
    return 0;
}