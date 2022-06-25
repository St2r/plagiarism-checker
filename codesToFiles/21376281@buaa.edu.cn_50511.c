"""
2022-03-26 12:40:01
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1684 KB
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1708 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
 
 double jiecheng(int x)
 {
     double b=1;
     for(int i=1;i<=x;i++)
     {
        b=b/(i*1.0);
     }
     return b;
 }
int main()
{
   int n,b=1,i,j;
   scanf("%d",&n);
   double e=1;
   for(i=1;i<=n&&i<19;i++)
   {
        e=e+jiecheng(i);
   }
   printf("%.14lf",e);
   return 0;
}