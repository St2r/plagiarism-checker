"""
2022-03-27 15:45:51
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include <stdio.h>
int main()
{
    int n,i,j;
    double sum=1,a;
    scanf("%d",&n);
    if(n<17)
    {
        for(i=1;i<=n;i++)
        {
            a=1;
            for(j=1;j<=i;j++)
            {
                a=(double)a*j;
            }
            sum=(double)sum+1.0/a;
        }
        printf("%.14lf\n",sum);
    }
    else
        printf("2.71828182845905\n");
    return 0;
}