"""
2022-03-27 19:26:12
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1532 KB
Accepted | 1 * (1 / 4) | 2 ms | 1572 KB
Accepted | 1 * (1 / 4) | 2 ms | 1528 KB
Accepted | 1 * (1 / 4) | 2 ms | 1572 KB


"""

#include<stdio.h>
double delta=1e-15;
long double fact(int n)
{
    int i;
    long long res=1;
    for(i=2;i<=n && 1.0/res>=delta;i++)
        res*=i;
    if(1.0/res<delta)
        return 0;
    else
        return (long double)1.0/res;
}
int main()
{
    int n,i;
    double e=1.0;
    scanf("%d",&n);
    for(i=1;i<=20 || i<=n;i++)
        e+=fact(i);
    printf("%.14lf",e);
    return 0;
}