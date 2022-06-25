"""
2022-03-26 12:56:16
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1720 KB
Accepted | 1 * (2 / 10) | 3 ms | 1708 KB
Accepted | 1 * (4 / 10) | 2 ms | 1648 KB

"""

#include<stdio.h>
int main()
{
    int n;
    double e=1,a=1;
    scanf("%d",&n);
    for (int i = 1; i < n+1; i++)
    {
        a=a*i;
        e=e+1/a;
        if (i==18)
        {    break;    }
    }
    printf("%.14f",e);
    return 0;
}