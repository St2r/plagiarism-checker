"""
2022-03-26 20:47:07
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1720 KB
Accepted | 1 * (1 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1696 KB
Accepted | 1 * (2 / 10) | 2 ms | 1680 KB
Accepted | 1 * (4 / 10) | 2 ms | 1700 KB

"""

#include <stdio.h>
double fxjc(double x)
{
    if(x<1.5) return 1.0;
    return 1.0*(1/x)*fxjc(x-1);
}
int main() {
    int n;
    double sum=1.0;
    scanf("%d",&n);
    int i=1;
    while (i <= n)
    {
        sum=sum+fxjc(i);
        i++;
        if(i>18) break;
    }
    printf("%.14lf",sum);
    return 0;
}