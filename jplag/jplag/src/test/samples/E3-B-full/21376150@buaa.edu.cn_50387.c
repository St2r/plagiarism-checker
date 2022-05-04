"""
2022-03-26 16:06:24
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1556 KB
Accepted | 1 * (60 / 100) | 4 ms | 1552 KB

"""

#include<stdio.h>
int main()
{
    int n,x,i,sum,j;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        sum=0;
        for(int j=1;j<=x-1;j++)
        {
            if(x%j==0)
                sum+=j;
        }
        if(x==sum)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}