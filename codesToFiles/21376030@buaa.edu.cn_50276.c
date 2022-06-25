"""
2022-03-29 23:51:44
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1640 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1692 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 0 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    double t=1.0, e=1.0;
    for(int i=1;i<=n;i++)
    {
        t=t*i;
        e=e+1.0/t;
        if(1/t<1e-14)
            break;
    }
    printf("%.14f", e);

    return 0;
}