"""
2022-03-29 14:24:59
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (4 / 10) | 1 ms | 1652 KB

"""

#include "stdio.h"
#include "stdlib.h"
int main()
{
    int n, i, j;
    double s = 1, x = 1, d, eps = 0.00000000000001;
    scanf("%d", &n );
    if(n < 150) 
    {
        for(i = 1; i <= n; i++) 
        {
            
            
            x = (double) (x * i);
            d = (double) (1/x);
            s = s + d;
            if (d < eps) 
            s = 2.71828182845905;
        }}
    else 
    s = 2.71828182845905;
    printf("%.14lf", s);
    return 0;
    
}