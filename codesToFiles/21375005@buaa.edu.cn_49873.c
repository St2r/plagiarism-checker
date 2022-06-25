"""
2022-03-28 20:28:10
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 0 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (4 / 10) | 1 ms | 1656 KB

"""

#include<stdio.h>

long long get(int a)
{
 int i;
 long long ans = 1;
 for( i = 1 ; i <= a ; i++ )
 {
  ans *= i;
 }
 return ans;
}
int main()
{
 int n;
 double ans = 0;
 scanf("%d",&n);
 int i;
 if(n>=20)
 {
                ans += 1;
  for( i = 1 ; i <= 20 ; i++ )
  {
   ans += (double)(1)/(double)(get(i));
  }
 }
 else
 {
  ans += 1;
  for( i = 1 ; i <= n ; i++ )
  {
   ans += (double)(1)/(double)(get(i));
  }
 }
 printf("%.14f",ans);
}