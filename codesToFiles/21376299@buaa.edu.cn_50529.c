"""
2022-03-26 13:31:45
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (1 / 10) | 3 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1708 KB

"""

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define N 5000
#define ll long long
#define ArrayNum(x) (sizeof(x)/sizeof(x[0]))
#define max(x,y) (x>y)?x:y

ll com(int n)
{
    ll k=1;
    for(int i=2;i<=n;i++)
    {
        k*=i;
    }
    return k;
}

int main()
{
    int n;
    double sum=0.0;
    scanf("%d",&n);
    for(int i=1;i<=n && i<=17;i++)
    {
        sum+=1.0/com(i);
    }
    printf("%.14lf",sum+1.0);
    return 0;
}