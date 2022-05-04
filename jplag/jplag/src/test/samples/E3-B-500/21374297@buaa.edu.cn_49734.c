"""
2022-03-26 09:53:26
AC
1.0
Accepted | 1 * (5 / 100) | 6 ms | 1648 KB
Accepted | 1 * (35 / 100) | 11 ms | 1708 KB
Accepted | 1 * (60 / 100) | 11 ms | 1676 KB

"""

#include <stdio.h>
int main()
{
    int n,i,x,j,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        scanf("%d",&x);
        for(j=x;j>0;j--)
        {
            if(x%j==0)
                sum=sum+j;
        }
        if(x*2==sum)
            printf("YES\n");
        else
            printf("NO\n");
    }



    return 0;

}