"""
2022-03-28 21:30:18
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1756 KB
Accepted | 1 * (2 / 10) | 0 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1652 KB
Accepted | 1 * (4 / 10) | 1 ms | 1652 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
    long long n,sum = 1;
    double e,eve,en = 0.0;

    scanf("%lld",&n);

    if(n>17)
        n = 17;


        for(int k = 1;k<=n;k++)
        {
            sum *=k;
            eve = 1.0/sum;
            en += eve;
        }



    e = 1+en;
    printf("%.14f",e);
    return 0;

}