"""
2022-03-29 22:29:06
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1692 KB
Accepted | 1 * (4 / 10) | 1 ms | 1712 KB

"""

#include <stdio.h>

long long f=1;
double a=1;
int main()
{
    int n,i;
    scanf("%d", &n);
    if(n>25){	 
        n=25;
    }
    for(i=1;i<=n;i++){
        f=f*i;
        a=a+1.0/f;
    }
    printf("%.14lf",a);
    return 0;
}