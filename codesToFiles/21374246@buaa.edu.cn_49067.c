"""
2022-03-26 08:19:47
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1620 KB
Accepted | 1 * (1 / 4) | 3 ms | 1620 KB
Accepted | 1 * (1 / 4) | 2 ms | 1648 KB
Accepted | 1 * (1 / 4) | 3 ms | 1664 KB

"""

#include <stdio.h>

int main()
{
   int n,i,j;
   long long a=1;
   double sum;
   scanf("%d",&n);
   if(n<20)
   {
       for(i=1;i<=n;i++)
       {
           for(j=1;j<=i;j++)
           {
               a*=j;
           }
           sum+=(double)(1.0/a);
           a=1;
       }
   }
   else sum=1.7182818284590452353602874713527;
   sum+=1;
   printf("%.14f",sum);
   return 0;
}