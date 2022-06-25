"""
2022-03-29 22:16:02
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1712 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 1 ms | 1684 KB

"""

#include<stdio.h>
int main()
{
    double e=1;
    int i,n,j;
    long long k;
    scanf("%d",&n);
    if(n>=18)
        printf("2.71828182845905");
    else
    {
        for(i=1;i<=n;i++)
         {
        k=1;
        j=1;
        while(j<=i)
        {
            k=k*j;
            j++;
        }
        e=e+1.0/k;
         }
    printf("%.14f",e);
    }
    
    return 0;
}