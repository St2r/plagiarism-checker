"""
2022-03-29 23:37:26
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1676 KB
Accepted | 1 * (35 / 100) | 0 ms | 1580 KB
Accepted | 1 * (60 / 100) | 3 ms | 1740 KB

"""

#include<stdio.h>
int main()
{
 int n,a;
 scanf("%d",&n);
 int b,c;
 for(b = 0;b < n;b++)
 {
  scanf("%d",&a);
  int sum = 0;
  for(c = 1;c < a;c++)
  {
   if(a % c == 0) {
   sum += c;
   }
  }
   if(sum == a) printf("YES\n");
   else printf("NO\n");
 }
 return 0;
}