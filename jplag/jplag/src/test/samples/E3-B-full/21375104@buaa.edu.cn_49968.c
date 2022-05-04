"""
2022-03-27 18:50:06
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 2044 KB
Accepted | 1 * (35 / 100) | 2 ms | 2044 KB
Accepted | 1 * (60 / 100) | 3 ms | 2096 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,i,j,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        sum=1;
        for(j=2;j<=sqrt(x);j++)
            if(x%j==0 && j!=x/j)
                sum+=j+x/j;
            else if(x%j==0 && j==x/j)
                sum+=j;
        if(sum==x)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}