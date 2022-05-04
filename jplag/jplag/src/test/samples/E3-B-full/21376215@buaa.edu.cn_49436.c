"""
2022-03-29 19:57:39
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1632 KB
Accepted | 1 * (35 / 100) | 2 ms | 1556 KB
Accepted | 1 * (60 / 100) | 4 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
 int n;
 scanf("%d", &n);
 int a[1005],i;
 for (i = 0; i < n; i++)
 {
  scanf("%d", &a[i]);
  int b = a[i],j,c=0;
  for (j = 1; j < b; j++)
  {
   if (b % j == 0)c += j;
  }
  if (c == b)printf("YES\n");
  else printf("NO\n");
 }
 return 0;
}