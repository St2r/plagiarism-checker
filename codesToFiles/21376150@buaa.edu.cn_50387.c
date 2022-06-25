"""
2022-03-26 21:21:08
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1728 KB
Accepted | 1 * (1 / 10) | 6 ms | 1708 KB
Accepted | 1 * (2 / 10) | 2 ms | 1688 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (4 / 10) | 2 ms | 1704 KB
B

"""

#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    double m,sum;
    sum=1;
    for(i=1; i<=n; i++)
    {
        m=1;
        for(j=1; j<=i; j++)
        {
            m=m*j;  
        }
        m=1.0/m;   
        sum+=m;
        if(i>=17)
            break;
    }
    printf("%.14lf",sum);
}