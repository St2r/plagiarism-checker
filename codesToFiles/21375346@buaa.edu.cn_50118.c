"""
2022-03-28 19:01:50
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1696 KB
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (4 / 10) | 2 ms | 1612 KB

"""

#include <stdio.h>

int main()
{
    int n,i;
    long long j,m;
    double e=1.0;
    scanf("%d",&n);
    if(n<17){
        for(i=1;i<=n;i++){
            m=1;
            for(j=1;j<=i;j++)
                m=j*m;
            e=e+1.0/m;
        }
    }
    else
        e=2.71828182845905;
    printf("%.14lf",e);
    return 0;
}