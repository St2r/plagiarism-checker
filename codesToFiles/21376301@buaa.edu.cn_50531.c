"""
2022-03-27 14:18:07
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1716 KB
Accepted | 1 * (1 / 4) | 8 ms | 1664 KB
Accepted | 1 * (1 / 4) | 2 ms | 1640 KB
Accepted | 1 * (1 / 4) | 3 ms | 1716 KB

"""

#include<stdio.h>
int main()
{
    int n,k,i;
    double e;
    scanf("%d",&n);
     k=1;e=1;
    for(i=1;i<=n&&i<=16;i++)
    {
        k=k*i;
        e=e+1.0/k;
    }
    printf("%.14f",e);
    return 0;
}