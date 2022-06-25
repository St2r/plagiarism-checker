"""
2022-03-26 18:27:26
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1676 KB
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1680 KB
Accepted | 1 * (2 / 10) | 2 ms | 1680 KB
Accepted | 1 * (4 / 10) | 2 ms | 1548 KB

"""

#include <stdio.h>
int main()
{
    long long n;double e=1.0;double nn=1.0;
    scanf("%lld",&n);
    if (n>20) printf("2.71828182845905");
    else {
        for (int i = 1; i <=n ; i++) {
            nn*=i;
            e+=(1/nn);
        }
        printf("%.14f",e);}
}