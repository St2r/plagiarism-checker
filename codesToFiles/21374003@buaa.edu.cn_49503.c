"""
2022-03-29 22:26:29
WA
0.6
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (1 / 10) | 0 ms | 1652 KB
Accepted | 1 * (2 / 10) | 1 ms | 1744 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Wrong Answer | 0 * (4 / 10) | 1 ms | 1664 KB

"""

#include <stdio.h>
#include <stdlib.h>


int main()
{
   int n;
   double a=1,b,sum=1;
   scanf("%d",&n);
   if(n<=20){
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=i;j++)
       {
           a=a*j;
       }
       b=(double)1/a;
       sum+=b;
       a=1;
   }
   }
   printf("%.14lf",sum);
    return 0;
}