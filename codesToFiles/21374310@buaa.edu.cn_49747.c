"""
2022-03-29 00:26:57
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (1 / 10) | 1 ms | 1748 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1648 KB
Accepted | 1 * (4 / 10) | 1 ms | 1688 KB

"""

#include <stdio.h>
#include <ctype.h>

int main()
{
 int n;
 double a=1,q=1;
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
  for(int j=i;j>0;j--){
   q=q*j;
  }
  a=a+1.0/q;
  q=1;
  if(i>=60){
   break;
  }
 }
 printf("%.14f",a);
 return 0;
}