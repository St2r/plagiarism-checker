"""
2022-03-29 00:15:21
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 0 ms | 1648 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1628 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
    long long n,j=1;
    double e=1,pro;
    scanf("%lld",&n);
    if(n>20)
        printf("2.71828182845905\n");
    else{
    for(int i=1;i<=n;i++)
    {
        j=j*i;
        pro=1.0/j;
        e=e+pro;
    }

    printf("%.14f",e);}
    return 0;
}