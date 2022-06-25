"""
2022-03-29 23:57:30
WA
0.6
Accepted | 1 * (1 / 10) | 1 ms | 1640 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 0 ms | 1728 KB
Wrong Answer | 0 * (4 / 10) | 1 ms | 1656 KB

"""

#include <stdio.h>
#include <math.h>
long long fact(int n) //求阶乘
{
int i;
long long c = 1;
for(i=1;i<=n;i++)
c = c*i;
return c;
}

int main()
{
    int n=1,nmax;
    double c=1, c1=0;
    scanf("%d",&nmax);
    while(n<16&&n<=nmax) //迭代
    {
        c1 = c;
        c = c + 1.0/fact(n);
        n++;
    }
    printf("%.14lf\n", c);
    return 0;
}