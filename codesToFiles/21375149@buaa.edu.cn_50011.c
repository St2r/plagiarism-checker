"""
2022-03-27 23:13:08
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 3 ms | 1604 KB
Accepted | 1 * (2 / 10) | 3 ms | 1640 KB
Accepted | 1 * (4 / 10) | 2 ms | 1596 KB

"""

#include <stdio.h>
int main()
{
 int n,i,j;
 double a=1,sum=0;
 scanf("%d",&n);
 if(n>20)
 n=20;
 for(i=1;i<=n;i++)
 {
  a=1;
  for(j=1;j<=i;j++)
  {
   a=a*j;
  }
  
  sum=sum+1/a;
 }
 printf("%.14f",sum+1);
 return 0;
}