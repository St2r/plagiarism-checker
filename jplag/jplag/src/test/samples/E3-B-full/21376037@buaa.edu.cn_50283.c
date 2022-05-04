"""
2022-03-27 16:50:13
AC
1.0
Accepted | 1 * (5 / 100) | 9 ms | 1608 KB
Accepted | 1 * (35 / 100) | 12 ms | 1472 KB
Accepted | 1 * (60 / 100) | 14 ms | 1604 KB

"""

#include <stdio.h>

int main()
{
    int n;
    int x;
    scanf("%d",&n);
    int i,j;
    int sum=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        for(j=1;j<x;j++)
        {
            if(x%j==0)
            {
                sum+=j;
                //printf("%d\n",sum);
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
        continue;
    }
    return 0;


}