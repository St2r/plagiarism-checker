"""
2022-03-26 12:03:06
AC
1.0
Accepted | 1 * (3 / 5) | 13 ms | 1672 KB
Accepted | 1 * (1 / 5) | 13 ms | 1608 KB
Accepted | 1 * (1 / 5) | 11 ms | 1608 KB

"""

#include <stdio.h>
int a[20];
int main()
{
    a[1]=1;
    for(int i = 2;i<=15;i++)
    {
        a[i]=a[i-1]*i;
    }
    int n=0;
    double res=1;
    scanf("%d",&n);
    for(int i=1;i<=n&&i<=15;i++)
    {
        res+=1/(double)a[i];
    }
    printf("%.14lf",res);
}