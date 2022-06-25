"""
2022-03-29 20:36:01
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 1 ms | 1648 KB
Accepted | 1 * (2 / 10) | 0 ms | 1656 KB
Accepted | 1 * (4 / 10) | 1 ms | 1644 KB

"""

#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    double e=1;
    if(n<20)
    {
        for(i=1;i<=n;i++)
        {
            double a=1;
            for(j=1;j<=i;j++)
            {
                a=a*j;
            }
            e=e+1/a;
        }

    }
    else if(n>=20)
    {
        for(i=1;i<=20;i++)
    {
        double a=1;
        for(j=1;j<=i;j++)
        {
            a=a*j;
        }
        e=e+1/a;
    }
    }
    printf("%.14f",e);
    return 0;
        }