"""
2022-03-28 12:07:12
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 5 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include <stdio.h>

int main()
{
    long long int n,i,k;
    scanf("%lld",&n);
    double e=1,b=1,c;
    if(n>20)
    {
        n=20;
    }
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i;k++)
        {
            b*=k;
        }
        c=1/b;
        e+=c;
        b=1;
    }
    printf("%.14f",e);
    return 0;
}