"""
2022-03-27 09:48:22
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (1 / 10) | 2 ms | 1680 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1676 KB
Accepted | 1 * (4 / 10) | 3 ms | 1680 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
    long long n,jie=0;
    double e1=1,e=1;
    scanf("%lld",&n);
    if(n<=17)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                jie++;
                e1=1.0*e1/jie;
            }
            e=e+e1;
            jie=0;
            e1=1;
        }
        printf("%.14f",e);
    }
    else
    {
       for(int i=1;i<=17;i++)
        {
            for(int j=1;j<=i;j++)
            {
                jie++;
                e1=1.0*e1/jie;
            }
            e=e+e1;
            jie=0;
            e1=1;
        }
        printf("%.14f",e);
    }
    return 0;
}