"""
2022-03-28 22:14:47
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1676 KB
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1648 KB
Accepted | 1 * (4 / 10) | 0 ms | 1656 KB

"""

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    long long x=1;
    int n;
    double e=1;
    scanf("%d",&n);
    if(n>=17)
        {
            n=17;
        }
    for(int i=1;i<=n;i++)
    {
        x=x*i;
        e=e+1.0/x;
    }
    printf("%.14lf\n",e);
    return 0;
}