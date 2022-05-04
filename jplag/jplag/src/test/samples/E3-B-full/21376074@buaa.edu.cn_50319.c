"""
2022-03-27 11:50:21
AC
1.0
Accepted | 1 * (5 / 100) | 8 ms | 1632 KB
Accepted | 1 * (35 / 100) | 11 ms | 1584 KB
Accepted | 1 * (60 / 100) | 12 ms | 1704 KB

"""

#include <stdio.h>
int main()
{
   int n,c,i,s;
   scanf("%d",&n);
   while (n--)
   {
       scanf("%d",&c);
       i=1;
       s=0;
       while (i<c)
       {
           if (c%i==0)
           {
               s+=i;
           }
           i++;
       }
       if (s==c)
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