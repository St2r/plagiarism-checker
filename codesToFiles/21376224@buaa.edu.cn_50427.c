"""
2022-03-29 22:31:10
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1756 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 0 ms | 1756 KB
Accepted | 1 * (2 / 10) | 0 ms | 1756 KB
Accepted | 1 * (4 / 10) | 1 ms | 1692 KB

"""

#include<stdio.h>
int main()
{
    long long i, j, n;
    double item, sum;
    sum = 1 ;
    scanf( "%lld", &n );
    if (n<17) {
        
    
    for( i = 1; i <= n; i++ )
    {
        item = 1;
        for( j = 1; j <= i; j++ )
        {
            item = item * j;
        }

        item = 1.0 / item;
        sum+= item;
    }

    printf("%.14f", sum);
    }
    else
        printf("2.71828182845905");
    return 0;
}