"""
2022-03-29 20:23:27
WA
0.6
Accepted | 1 * (1 / 10) | 1 ms | 1664 KB
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 0 ms | 1740 KB
Wrong Answer | 0 * (4 / 10) | 1 ms | 1500 KB

"""

#include<stdio.h>
int main()
{
    int n,i,j;
    double sum=1;
    scanf("%d",&n);
    if(n<=100000000)
    {
    for(int i=1;i<=n;i++)
    {
        double fart=1;
        for(int j=1;j<=i;j++)
        {
            fart=fart*j;
        }
        sum=sum+1.0/fart;
    }
    printf("%.14f",sum);
    }
    return 0;
}