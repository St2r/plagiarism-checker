"""
2022-03-28 21:21:25
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (1 / 10) | 0 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (4 / 10) | 1 ms | 1732 KB

"""

#include<stdio.h>
int main()
{
    int n;
    double i,e=1,x=1;
    scanf("%d",&n);
    if(n<=18)
    {
        for(i=1;i<=n;i++)
        {
            x=x/i;
            e=e+x;
        }
        printf("%.14f",e);
    }
    if(n>>18)
        printf("2.71828182845905");
    return 0;
}