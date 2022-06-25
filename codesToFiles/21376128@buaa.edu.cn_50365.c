"""
2022-03-28 21:15:22
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1744 KB
Accepted | 1 * (1 / 10) | 0 ms | 1756 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 0 ms | 1648 KB
Accepted | 1 * (4 / 10) | 1 ms | 1748 KB

"""

#include<stdio.h>
int main()
{
    int n,i,j;
    double e,k;
    scanf("%d",&n);
    e=1;
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=i;j++)
            k*=j;
        if(k>1000000000000000)
            break;
        e+=1/k;
    }
    printf("%.14f",e);
    return 0;
}