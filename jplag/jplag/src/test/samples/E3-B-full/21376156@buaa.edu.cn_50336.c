"""
2022-03-27 09:56:51
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1676 KB
Accepted | 1 * (35 / 100) | 2 ms | 1620 KB
Accepted | 1 * (60 / 100) | 4 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
    int n,a[100],sum[100],j,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum[i]=0;
        scanf("%d",&a[i]);
    for(j=1;j<a[i];j++)
    {
        if(a[i]%j==0)
        {
            sum[i]=sum[i]+j;
        }

    }
    }
    for(i=0;i<n;i++)
    {
    if(sum[i]==a[i])
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