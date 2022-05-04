"""
2022-03-29 22:04:19
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1728 KB
Accepted | 1 * (35 / 100) | 1 ms | 1660 KB
Accepted | 1 * (60 / 100) | 2 ms | 1668 KB

"""

#include <stdio.h>


int main()
{
    int n,a[100],i,j,sum=0,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        scanf("%d\n",&a[i]);
        for(j=1;j<a[i];j++)
        {
           b=a[i]%j;
           if(b==0)
               sum=sum+j;
           else
               sum=sum;

        }
       if(sum==a[i])
           printf("YES\n");
       else
           printf("NO\n");
       sum=0;
    }
    return 0;
}