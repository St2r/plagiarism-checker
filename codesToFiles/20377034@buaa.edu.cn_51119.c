"""
2022-03-29 16:49:10
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1636 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1640 KB
Accepted | 1 * (4 / 10) | 0 ms | 1712 KB

"""

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    double e=1.0;
    double q;
    for(i=1;i<=n;i++)
    {
        q=1;
        for(j=i;j>0;j--)
        {
            q=q*j;
        }
        if(q>10E16)
        {
            break;
        }
        e=e+1.0/q;
    }
    printf("%.14lf",e);
    return 0;
}