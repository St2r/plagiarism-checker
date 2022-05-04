"""
2022-03-26 09:28:36
AC
1.0
Accepted | 1 * (5 / 100) | 11 ms | 1664 KB
Accepted | 1 * (35 / 100) | 7 ms | 1608 KB
Accepted | 1 * (60 / 100) | 27 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    int i,j,sum;
    for(i=0;i<n;i++)
    {
        sum=0;
        scanf("%d",&x);
        for(j=1;j<x;j++)
        {
            if((x%j)==0)
            {
               sum+=j;
            }
        }
        if(sum==x)
        {
            printf("YES\n");
        }
        if(sum!=x)
        {
            printf("NO\n");
        }
    }
    return 0;
}