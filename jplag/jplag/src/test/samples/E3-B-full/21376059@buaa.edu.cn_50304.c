"""
2022-03-29 20:42:22
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1732 KB
Accepted | 1 * (35 / 100) | 1 ms | 1652 KB
Accepted | 1 * (60 / 100) | 2 ms | 1580 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n-1];
    int sum=0,i=0,j=0,k=2,l=0;
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
    i=0;
    for(i=0;(k<=a[i])&&(i<n);i++)
    {
          while (k<=(a[i]))
             {
                if(a[i]%k==0)
                {
                sum=sum+a[i]/k;
                }
                k++;
             }
          if (sum==a[i])
             {
                 printf("YES\n");
             }
         else
             {
                 printf("NO\n");
             }
     k=2;
     sum=0;
    }


    return 0;
}