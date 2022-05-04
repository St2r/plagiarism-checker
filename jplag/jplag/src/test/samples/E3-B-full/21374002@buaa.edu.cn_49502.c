"""
2022-03-28 22:45:34
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1680 KB
Accepted | 1 * (35 / 100) | 1 ms | 1580 KB
Accepted | 1 * (60 / 100) | 3 ms | 1680 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,a[100],sum;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        sum=0;
        for(int v=1;v<a[i];v++)
        {
            if(a[i]%v==0)
            {
                sum=sum+v;
            }
        }
                if(sum==a[i])
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