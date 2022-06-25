"""
2022-03-29 18:22:51
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1660 KB
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 1 ms | 1676 KB
Accepted | 1 * (2 / 10) | 0 ms | 1736 KB
Accepted | 1 * (4 / 10) | 230 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
    int i,j,n;
    double e=1,a;
    scanf("%d",&n);
    for(i=1;i<=n&&i<=10000;i++){
        a=1;
        for(j=1;j<=i;j++){
            a=a/(1.0*j);
        }
        e=e+a;
    }
    printf("%.14lf\n",e);
    return 0;
}