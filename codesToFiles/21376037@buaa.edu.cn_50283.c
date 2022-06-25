"""
2022-03-28 22:04:57
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1748 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 0 ms | 1732 KB

"""

#include <stdio.h>

int main()
{
    int n;
    double x;
    scanf("%d",&n);
    int i,j;
    double sum=0.0;
    double mlt=1.0;
    double rev;
    if(n>=1000)
    {
        printf("2.71828182845905\n");
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=i; j++)
            {
                mlt=j*mlt;
            }
            //printf("%lf\n",mlt);
            rev=1.0/mlt;
            //printf("%.14lf\n",rev);
            sum+=rev;
            //printf("%.14lf\n",sum);
            mlt=1.0;
        }
        printf("%.14lf\n",sum+1);
    }
    return 0;
}