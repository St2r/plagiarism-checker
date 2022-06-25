"""
2022-03-26 15:54:55
WA
0.0
Wrong Answer | 0 * (1 / 10) | 2 ms | 1652 KB
Wrong Answer | 0 * (1 / 10) | 2 ms | 1648 KB
Wrong Answer | 0 * (2 / 10) | 2 ms | 1700 KB
Wrong Answer | 0 * (2 / 10) | 2 ms | 1692 KB
Wrong Answer | 0 * (4 / 10) | 2 ms | 1488 KB

"""

#include <stdio.h>

int main()
{
    int n,i=1;
    double sum=1,a=1;
    scanf("%d",&n);
    while((i<=n)&&(i<18))
    {
        a=a*i;
        sum=sum+(1/a);
        i=i+1;
    }
    printf("%.14llf",sum);
    return 0;
}