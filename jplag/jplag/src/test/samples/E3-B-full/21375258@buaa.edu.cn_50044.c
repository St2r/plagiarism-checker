"""
2022-03-29 19:29:45
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1584 KB
Accepted | 1 * (35 / 100) | 0 ms | 1628 KB
Accepted | 1 * (60 / 100) | 2 ms | 1580 KB

"""

#include<stdio.h>

int main()
{
    int n,i,x,j;
    int sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {


        scanf("%d",&x);

        for(j=1;j<=(x/2);j++)
        {


            if(0==(x%j))
                sum=sum+j;
        }
        if(sum==x)
            printf("YES\n");
        else
            printf("NO\n");

    sum=0;
    }
    return 0;
}