"""
2022-03-28 23:51:46
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (2 / 10) | 0 ms | 1676 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (4 / 10) | 1 ms | 1664 KB

"""

#include <stdio.h>
#include <stdlib.h>
long long f(int);
int main()
{
    int n;
    double sum=0.0,p;
    scanf("%d",&n);
    if(n>17)
        n=17;
    for(int i=0;i<n+1;i++)
    {
        p=1.0/f(i);
        sum+=p;
    }
    printf("%.14f",sum);
    return 0;
}

    long long f(int n)
    {
        if(n<=1)
            return 1;
        return(n*f(n-1));
    }