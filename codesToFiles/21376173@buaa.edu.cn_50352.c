"""
2022-03-29 18:36:00
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (1 / 10) | 1 ms | 1632 KB
Accepted | 1 * (2 / 10) | 0 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (4 / 10) | 1 ms | 1728 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n,i,j;
    double e=1.0,k=1.0;
    scanf("%ld",&n);
    if(n<=16)
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=i; j++)
            {
                k=k/(double)j;
            }
            e=e+k;
            k=1.0;
        }
        printf("%.14f",e);
    }
    if(n>16)
    {
        printf("2.71828182845905");
    }

    return 0;
}