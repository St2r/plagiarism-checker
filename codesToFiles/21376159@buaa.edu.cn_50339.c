"""
2022-03-29 23:52:20
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (1 / 10) | 1 ms | 1716 KB
Accepted | 1 * (2 / 10) | 0 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1744 KB
Accepted | 1 * (4 / 10) | 1 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
 int n;
 double ans=1;
 scanf("%d",&n);
 double g=1;
 for(double i=1;i<=n;i++)
 {
  g*=i;
  ans+=1/(g);
  if(i>17)
  break;
 }
 printf("%.14f",ans);
}