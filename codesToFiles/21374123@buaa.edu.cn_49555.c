"""
2022-03-26 12:41:19
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (1 / 10) | 3 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1708 KB
Accepted | 1 * (2 / 10) | 2 ms | 1712 KB
Accepted | 1 * (4 / 10) | 3 ms | 1712 KB

"""

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n;
    double sum=1,fact=1;
    scanf("%d",&n);
    for(int i=1;i<=n&&i<=1e5;i++)
    {
        fact/=i;
        sum+=fact;
    }
    printf("%.14lf",sum);
    return 0;
}