"""
2022-03-29 20:46:42
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1676 KB
Accepted | 1 * (35 / 100) | 1 ms | 1652 KB
Accepted | 1 * (60 / 100) | 2 ms | 1572 KB

"""

#include "stdio.h"
int main()
{
    int n,i,j,a,b=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        for(j=1;j<a;j++)
        {
            if(a%j==0)
            b=b+j;
        }
        if(a==b)
            printf("YES\n");
        else
            printf("NO\n");
        b=0;
    }
    return 0;
}