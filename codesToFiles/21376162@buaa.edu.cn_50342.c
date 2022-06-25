"""
2022-03-28 19:43:45
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (1 / 10) | 0 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1632 KB
Accepted | 1 * (4 / 10) | 1 ms | 1712 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    double s,x;
    scanf("%d",&n);
    i=1,x=1,s=1;
    while(i<=n && i<=17){
        x=x*i;
        s=s+1.0*1/x;
        i++;
    }
    printf("%.14lf",s);
    return 0;
}