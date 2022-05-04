"""
2022-03-28 12:01:42
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1636 KB
Accepted | 1 * (35 / 100) | 3 ms | 1676 KB
Accepted | 1 * (60 / 100) | 5 ms | 1620 KB

"""

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,a[5000]={0},x,k,sum;
    for(i=0;i<n;i++)
    {

        scanf("%d",&x);

        for(k=1;k<x;k++)
        {
            if(x%k==0)
            {
                a[k]=k;
            }
        }
        for(k=0;k<5000;k++)
        {
            sum+=a[k];
        }
        if(sum==x)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        for(k=0;k<5000;k++)
        {
            a[k]=0;
        }
        sum=0;
    }
    return 0;
}