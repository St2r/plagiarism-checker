"""
2022-03-29 22:31:53
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1736 KB
Accepted | 1 * (1 / 10) | 1 ms | 1668 KB
Accepted | 1 * (2 / 10) | 2 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (4 / 10) | 1 ms | 1716 KB

"""

#include <stdio.h>
int main()
{
    unsigned int i,n;
    double r=1,sum=1;
    scanf("%u",&n);
    if(1<=n && n<26)
    {
        for(i=1;i<=n;i++)
        {
        r=r*i;
        sum=sum+1/r;
        }
        printf("%.14lf",sum);
    }
    else
    {
        printf("2.71828182845905");
    }
    system("pause");
    return 0;
}