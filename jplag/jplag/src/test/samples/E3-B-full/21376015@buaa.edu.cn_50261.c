"""
2022-03-26 23:56:43
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1700 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1544 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        sum=0;
        for(j=1;j<m;j++)
        {
            if(m%j==0)
            {
                sum+=j;
            }
        }
        if(sum==m)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}