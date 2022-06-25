"""
2022-03-29 11:39:31
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (2 / 10) | 0 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1752 KB
Accepted | 1 * (4 / 10) | 1 ms | 1580 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    double e=1.0,k=1.0;
    scanf("%d",&n);
    if(n<=20)
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=i; j++)
            {
                k=(double)k/j;
            }
            e=e+k;
            k=1.0;
        }
        printf("%.14lf",e);
    }
    if(n>20)
    {
        printf("2.71828182845905");
    }

    return 0;
}