"""
2022-03-29 12:56:30
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 0 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (4 / 10) | 1 ms | 1680 KB

"""

#include<stdio.h>
#define min 1e-15
int main()
{
 int n;
 scanf("%d",&n);
 int i,j;
 double sum =1.0;
 double s,a=1.0;
 for(i=1;i<=n;i++)
 {
  for(j=i;j>0;j--)
  {
   a*=j;
  }
  s=1.0/a;
  sum +=s;
  a=1.0;
  if(s<min) 
break;
 }
 printf("%.14lf",sum);
 
 
 return 0;
}