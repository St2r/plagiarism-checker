"""
2022-03-29 20:54:11
TLE
0.4
Accepted | 1 * (1 / 10) | 0 ms | 1648 KB
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 0 ms | 1736 KB
Wrong Answer | 0 * (2 / 10) | 1 ms | 1680 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 0 KB

"""

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,a;
    double e,b;
    a=1;
    e=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=a*i;
        b=1.0/a;
        e=e+b;
    }
    printf("%.14f",e);
    return 0;
}