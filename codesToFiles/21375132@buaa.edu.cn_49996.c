"""
2022-03-29 23:51:34
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (1 / 10) | 0 ms | 1676 KB
Accepted | 1 * (2 / 10) | 1 ms | 1728 KB
Accepted | 1 * (2 / 10) | 1 ms | 1756 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
   double n,i,j=1,k=0;
   scanf("%lf",&n);
   for(i=1;i<=n&&i<100;i++)
   {
       j=j*i;
       k+=1/j;
   }
   printf("%.14f",k+1);
   return 0;
}