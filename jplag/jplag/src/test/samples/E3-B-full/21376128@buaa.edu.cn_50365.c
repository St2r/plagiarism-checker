"""
2022-03-28 19:19:29
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1660 KB
Accepted | 1 * (35 / 100) | 15 ms | 1652 KB
Accepted | 1 * (60 / 100) | 17 ms | 1684 KB

"""

#include<stdio.h>
int main()
{
    int n,a[100],i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        k=0;
        for(j=1;j<a[i];j++)
        {
            if(a[i]%j==0)
                k+=j;
        }
        if(k==a[i])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}