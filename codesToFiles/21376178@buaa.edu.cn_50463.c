"""
2022-03-29 20:20:56
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (2 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (4 / 10) | 2 ms | 1684 KB

"""

#include<stdio.h>
double jiecheng(int num)
{

    double ret=1;
     for(int i=1;i<=num;i++)
        {
            ret=ret*i;
        }
    return ret;
}
int main()
{
    double sum=0;
    int n;
    scanf("%d",&n);
    if(n>100)
    {
        n=100;
    }
    for(int i=0;i<=n;i++)
    {
        double ret=jiecheng(i);
        sum=sum+1.0/ret;
    }
    printf("%.14lf",sum);
    return 0;
}