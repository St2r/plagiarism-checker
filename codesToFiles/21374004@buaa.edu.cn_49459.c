"""
2022-03-28 21:36:22
REG
0.6
Accepted | 1 * (1 / 10) | 1 ms | 1748 KB
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 0 ms | 1748 KB
Accepted | 1 * (2 / 10) | 1 ms | 1756 KB
Runtime Error (SIGSEGV) | 0 * (4 / 10) | 137 ms | 1540 KB

"""

#include <stdio.h>
int main()
{
    int n,i,k;
    double s=1.0;
    scanf("%d",&n);
    double a[n],b[n];
    for(k=n;k>=1;k--)
    {
        b[k]=1.0;
        for (i=1;i<=k;i++)
        {
            a[i]=1.0*1/ i;
            b[k]*=a[i];        
        }
        s+=b[k];
    }
    printf("%.14lf",s);


return 0;
}