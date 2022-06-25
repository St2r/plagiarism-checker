"""
2022-03-26 19:22:18
WA
0.4
Wrong Answer | 0 * (1 / 10) | 2 ms | 1636 KB
Wrong Answer | 0 * (1 / 10) | 3 ms | 1604 KB
Wrong Answer | 0 * (2 / 10) | 3 ms | 1720 KB
Wrong Answer | 0 * (2 / 10) | 3 ms | 1716 KB
Accepted | 1 * (4 / 10) | 3 ms | 1632 KB

"""

#include<stdio.h>
int main()
{
    long long int n;
    long long int i;
    double e=1;
    long long int b;
    double c=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=c*(double)1/i;

        if(i>100000)
            break;
        else
        e=e+c;

    }
    printf("%.14f",e);

}