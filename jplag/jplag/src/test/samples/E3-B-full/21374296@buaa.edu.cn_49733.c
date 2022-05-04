"""
2022-03-26 13:49:28
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1716 KB
Accepted | 1 * (35 / 100) | 3 ms | 1660 KB
Accepted | 1 * (60 / 100) | 4 ms | 1664 KB

"""

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int i;
    int x[10000];
    int sum[10000];
    for(i=1;i<=n;i++)
    {

        scanf("%d",&x[i]);



        int k;
        for(k=1;k<x[i];k++)
        {
            if(x[i]%k==0)
            {
                sum[i]=sum[i]+k;
            }
            else
            {
                sum[i]=sum[i]+0;
            }
        }
    }

     for(i=1;i<=n;i++)
     {
         if(x[i]==sum[i])
         {
             printf("YES\n");
         }
         else
         {
             printf("NO\n");
         }
     }

    return 0;

}