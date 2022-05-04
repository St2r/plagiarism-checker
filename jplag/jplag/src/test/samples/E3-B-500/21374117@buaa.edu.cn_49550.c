"""
2022-03-29 20:12:08
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1568 KB
Accepted | 1 * (35 / 100) | 1 ms | 1584 KB
Accepted | 1 * (60 / 100) | 3 ms | 1736 KB

"""

#include <stdio.h>

int main()
{
    int n,a[100]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++)
     {
        if(1==a[i])
        {printf("NO\n");continue;}
        int sum,k;
        for(sum=0,k=1;k<a[i];k++)
        {
            if(a[i]%k==0)
            {sum+=k;}
        }
        if(sum==a[i])
            printf("YES\n");
        else printf("NO\n");
     }
    return 0;
}