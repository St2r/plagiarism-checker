"""
2022-03-28 19:56:47
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1580 KB
Accepted | 1 * (35 / 100) | 1 ms | 1740 KB
Accepted | 1 * (60 / 100) | 3 ms | 1676 KB

"""

#include<stdio.h>

int main()
{
    int n,i=0,a[100],k[10000],j=0,m=1,sum=0;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
        i=0;
    while(i<n)
      {

      while(j<a[i])
    {
        if(a[i]%m==0&&a[i]>m)
           {
            k[j]=m;
            m++;
            sum=sum+k[j];
            j++;
           }
        else
           {
               m++;
               k[j]=0;
               sum=sum+k[j];
               j++;
           }
    }
            if(a[i]==sum)
                {
                    if(i<n-1)
                       printf("YES\n");
                    else
                        printf("YES");
                }

            else {
                if(i<n-1)
                    printf("NO\n");
                else
                    printf("NO");
            }

         i++;
         m=1;
         j=0;
         sum=0;
      }
         return 0;
}