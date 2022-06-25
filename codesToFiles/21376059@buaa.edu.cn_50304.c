"""
2022-03-29 21:33:39
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1744 KB
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (2 / 10) | 1 ms | 1744 KB
Accepted | 1 * (2 / 10) | 0 ms | 1644 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sum=0.0,a=1.0,b=0.0;
    long long n;
    scanf("%lld",&n);
    long long i=n;
    if(n>=17)
    {
        n=17;
    }
    while(n>0)
    {
        for(i=n;i>0;i--)
        {
            a=a*(1.0/i)*1.0;
        }

        sum=sum+a;
        n--;
        a=1.0;
    }

    printf("%.14lf",sum+1.0);
    return 0;
}