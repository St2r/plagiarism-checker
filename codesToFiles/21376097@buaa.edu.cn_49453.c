"""
2022-03-27 22:26:34
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1676 KB
Accepted | 1 * (1 / 10) | 2 ms | 1680 KB
Accepted | 1 * (2 / 10) | 2 ms | 1668 KB
Accepted | 1 * (2 / 10) | 2 ms | 1680 KB
Accepted | 1 * (4 / 10) | 2 ms | 1620 KB

"""

#include <stdio.h>
int main()
{
 int n,i,j;
 double b,c=1,sum=0;
 scanf("%d",&n);
 if(n>20)
 n=20;
 for(i=1;i<=n;i++)
 {
  c=1;
  for(j=1;j<=i;j++)
  {
   c=c*j;
  }
  b=1/(c);
  sum=sum+b;
 }
 sum=sum+1;
 printf("%.14f",sum);
 return 0;
}