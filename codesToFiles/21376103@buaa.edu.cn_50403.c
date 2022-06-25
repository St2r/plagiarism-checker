"""
2022-03-28 21:32:29
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1640 KB
Accepted | 1 * (2 / 10) | 1 ms | 1640 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 0 ms | 1740 KB

"""

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>

int main() 
{
 long long int n;
 scanf("%lld",&n);
 int i,j,k;
 double sum=1,b=1;
 if(n<=17)
 {
  for(i=1;i<=n;i++)
  {
   b*=i;
   sum+=(1/b);
  }
 }
 else if(n>17)
 {
  for(i=1;i<=17;i++)
  {
   b*=i;
   sum+=(1/b);
  }
 }
 printf("%.14f",sum);
 return 0;
}