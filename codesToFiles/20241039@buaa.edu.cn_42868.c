"""
2022-03-26 11:34:27
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1592 KB
Accepted | 1 * (1 / 10) | 15 ms | 1652 KB
Accepted | 1 * (2 / 10) | 14 ms | 1596 KB
Accepted | 1 * (2 / 10) | 9 ms | 1656 KB
Accepted | 1 * (4 / 10) | 2 ms | 1616 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    double e=1.0;
    int i=1;
    double x=1.0;
    while((i<=n)&&(i<20)){
        x=x/i;
        e=e+x;
        i++;
    }
    printf("%.14lf",e);
    return 0;
}