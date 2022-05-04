"""
2022-03-26 08:11:44
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1636 KB
Accepted | 1 * (60 / 100) | 4 ms | 1628 KB

"""

#include <stdio.h>

int main()
{
   int n,a,i,j,sum=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a);
       for(j=1;j<=a;j++)
       {
           if(a%j==0) sum+=(j+a/j);
       }
       if(sum==4*a) printf("YES\n");
       else printf("NO\n");
       sum=0;
   }
   return 0;
}