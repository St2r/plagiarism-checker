"""
2022-03-26 23:04:20
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (4 / 10) | 2 ms | 1700 KB

"""

#include<stdio.h>
int main()
{
    long n; int ret;
    double sum=1;
    double a=1;
    scanf("%ld",&n);
    if(n>=17)
        ret=17;
    else
        ret=n;            //  initialize the data
    int i=1;
    for(i=1;i<=ret;i++)
    {
        a=a/i;
        sum+=a;
    }
    printf("%.14lf",sum);
    return 0;
}