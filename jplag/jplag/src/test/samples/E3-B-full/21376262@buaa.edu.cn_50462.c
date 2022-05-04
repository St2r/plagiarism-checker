"""
2022-03-29 22:45:38
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1736 KB
Accepted | 1 * (35 / 100) | 1 ms | 1676 KB
Accepted | 1 * (60 / 100) | 3 ms | 1728 KB

"""

#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    int s,j;
    for(i=1;i<=n;i++)
    {
        s=0;
        for(j=1;j<a[i];j++)
        {
            if(a[i]%j==0)
            s += j;
        }

            if(s==a[i])
                printf("YES\n");
            else
                printf("NO\n");
    }
	return 0;
 }