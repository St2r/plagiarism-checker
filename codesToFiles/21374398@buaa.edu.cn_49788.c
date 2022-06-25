"""
2022-03-26 21:51:57
AC
1.0
Accepted | 1 * (5 / 100) | 7 ms | 1704 KB
Accepted | 1 * (35 / 100) | 2 ms | 1664 KB
Accepted | 1 * (60 / 100) | 4 ms | 1552 KB


"""

#include <stdio.h>
double jc(int n)
{
    int i;
    double a=1;
    for(i=1;i<=n;i++)
    {
        a*=i;
    }
    a=(1/a);
    return a;
}
int main()
{
    int n,j;
    double e=2.71828182845904;
    double ans=0;
    scanf("%d",&n);
    if(n>=17)
    {
        printf("2.71828182845905");
        return 0;
    }
    for(j=1;j<=n;j++)
    {
        ans+=jc(j);
        if(ans>=e)
    }
    printf("%.14lf",ans+1);
    return 0;
}