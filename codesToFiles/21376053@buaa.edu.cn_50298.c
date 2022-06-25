"""
2022-03-29 19:06:49
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1684 KB
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1628 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 135 ms | 1636 KB

"""

#include<stdio.h>
int main()
{
    int n,i,j;
    double a,e=1;
    scanf("%d",&n);
    if(n>=10000)
    {
        for(i=1;i<=10000;i++)
    {
        for(j=1,a=1;j<=i;j++)
        {
           a*=j;
        }
        e+=1.0*1/a;
    }
    }
    else
    {for(i=1;i<=n;i++)
    {
        for(j=1,a=1;j<=i;j++)
        {
           a*=j;
        }
        e+=1.0*1/a;
    }}
printf("%.14lf",e);
return 0;
}