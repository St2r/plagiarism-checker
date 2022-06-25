"""
2022-03-29 19:54:43
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (4 / 10) | 2 ms | 1604 KB

"""

#include<stdio.h>

int main()
{
    double sum=1,i,jiecheng=1;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n&&i<=19;++i)
    {
        jiecheng=jiecheng*(1/i);
        sum=sum+jiecheng;
    }


    printf("%.14lf",sum);
    return 0;
}