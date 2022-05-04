"""
2022-03-27 19:48:57
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1604 KB
Accepted | 1 * (1 / 4) | 2 ms | 1548 KB
Accepted | 1 * (1 / 4) | 2 ms | 1552 KB
Accepted | 1 * (1 / 4) | 2 ms | 1604 KB

"""

#include <stdio.h>

int main()
{
    int n,i,x,a,sum;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        scanf("%d",&x);
        for(a=1;a<x;a++)
        {
            if(x%a==0)
            {
                sum=sum+a;
            }
        }
        if(sum==x)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        sum=0;
    }
    return 0;
}