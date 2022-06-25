"""
2022-03-29 23:17:32
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1636 KB
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 0 ms | 1676 KB
Accepted | 1 * (4 / 10) | 1 ms | 1712 KB

"""

#include <stdio.h>
int main()
{
    double e=1,n=1,i,m=1;
    scanf("%lf",&i);
    if(i>20)i=20;
    while(n<=i)
    {
        m=m*n;
        e=e+(1/m);
        n++;
    }
    printf("%.14f",e);
    return 0;
}