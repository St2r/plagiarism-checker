"""
2022-03-29 23:20:40
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1716 KB
Accepted | 1 * (2 / 10) | 1 ms | 1744 KB
Accepted | 1 * (4 / 10) | 1 ms | 1740 KB

"""

#include <stdio.h>
int main ()
{
	long long a=0;
	scanf("%lld",&a);
	double e;
	int i = 0;
    long long ret=1;
    for (i = 1; i <= a&&i<=20; i++)
    {
        ret=ret*i;
        e=e+1.0/ret;
    }
    printf("%.14lf",e+1);
    return 0;
}