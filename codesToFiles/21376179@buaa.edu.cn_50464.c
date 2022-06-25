"""
2022-03-26 13:50:33
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 3 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1608 KB

"""

#include<stdio.h>
int main()
{
 int i,j,n;
 double a,sum;
 sum=1;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  a=1;
  for(j=1;j<=i;j++)
   {
    a=a*j;
   }
  a=1.0/a;
  if(a>1e-15)
  sum=sum+a;
  else 
  break;
 }
 printf("%.14f", sum);
 return 0;
}