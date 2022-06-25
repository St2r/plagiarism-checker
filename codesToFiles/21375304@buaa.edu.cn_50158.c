"""
2022-03-29 23:57:04
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (1 / 10) | 0 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1652 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 1 ms | 1680 KB

"""

#include<stdio.h>
#define min 1e-14
int main()
{
 int n;
 scanf("%d",&n);
 int i,j;
 double sum = 1.0;
 double b,a = 1.0;
 for(i = 1;i <= n;i++)
 {
  for(j = i;j > 0;j--)
  {
   a *= j;
  }
  b = 1.0 / a;
  sum += b;
  a = 1.0;
  if(b < min) break;
 }
 printf("%.14lf",sum);
 return 0;
}