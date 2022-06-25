"""
2022-04-02 09:55:14
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1744 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1748 KB
Accepted | 1 * (4 / 10) | 0 ms | 1636 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>20)
        n=20;
    double tmp=1.0,ans=1.0;
    for(int i=1;i<=n;i++)
    {
        tmp=tmp*i;
        ans=ans+1/tmp;
    }
    printf("%.14lf\n",ans);
    return 0;
}
