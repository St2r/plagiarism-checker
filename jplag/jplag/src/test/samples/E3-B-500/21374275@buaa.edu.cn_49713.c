"""
2022-03-26 21:52:06
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1680 KB
Accepted | 1 * (35 / 100) | 3 ms | 1652 KB
Accepted | 1 * (60 / 100) | 6 ms | 1632 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        for(int j=1;j<=x;j++)
        {
            if(x%j==0)
            {
                sum=sum+j;
            }
            else
                continue;
        }
        sum=sum-x;
        if(x==sum)
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