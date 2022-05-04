"""
2022-03-26 10:40:12
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1700 KB
Accepted | 1 * (35 / 100) | 9 ms | 1548 KB
Accepted | 1 * (60 / 100) | 13 ms | 1540 KB

"""

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define max(x,y) x>y?x:y
int main()
{
   int n,num,sum=0;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       scanf("%d",&num);
       for(int j=1;j<num;j++)
       {
           if(0==num%j)
           {
               sum=sum+j;
           }
       }
       if(num==sum)
       printf("YES\n");
       else
       printf("NO\n");
       sum=0;
   }
   return 0;
}