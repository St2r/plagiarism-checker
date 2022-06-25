"""
2022-03-28 16:46:20
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Accepted | 1 * (4 / 10) | 2 ms | 1604 KB

"""

#include <stdio.h>
int main()
{
    int n,i,j;
    double sum1=1,sum=1;

    scanf("%d",&n);
    if(n>50){n=50;}

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum1*=j;
        }
        sum+=(double)1/sum1;
        sum1=1;
    }
    printf("%.14f",sum);
    return 0;
}