"""
2022-03-29 18:35:22
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (1 / 10) | 0 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1640 KB
Accepted | 1 * (4 / 10) | 1 ms | 1692 KB

"""

#include <stdio.h>
int main()
{
    long long i, j, n, r;
    double  sum = 1.0;
    scanf("%lld", &n);
    if(n > 26) n = 26;
    for(r=i=1;i<=n;i++)
    {
            r *= i;
        sum += (1.0/r);
    }
    printf("%.14f\n", sum);
    return 0;

}