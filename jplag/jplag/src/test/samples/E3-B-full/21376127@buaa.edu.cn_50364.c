"""
2022-03-26 13:59:28
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1620 KB
Accepted | 1 * (35 / 100) | 3 ms | 1720 KB
Accepted | 1 * (60 / 100) | 4 ms | 1648 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
        int n,a[30010],i,k,sum[30010];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=1;i<=n;i++)
    {sum[i]=0;
        for(k=1;k<=a[i];k++)
        {
          if(a[i]%k==0)
            sum[i]+=k;
    }
    sum[i]=sum[i]-a[i];

    }
    for(i=1;i<=n;i++)
    {
        if(sum[i]==a[i])
        printf("YES\n");
    else
        printf("NO\n");

    }

    return 0;
}