"""
2022-03-27 16:16:51
AC
1.0
Accepted | 1 * (1 / 10) | 10 ms | 1540 KB
Accepted | 1 * (1 / 10) | 8 ms | 1592 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 11 ms | 1624 KB
Accepted | 1 * (4 / 10) | 12 ms | 1612 KB

"""

#include <stdio.h>

int main()
{
 int n, i, j = 1;
 double p, sum = 1;
 scanf("%d", &n);
 if(n >= 17)
 n = 17;
 else
 n = n;
 while(j <= n)
 {
  i = 1, p = 1;
  while(i <= j)
  {
   p = p / (1.0*i);
   i = i + 1;
  }
  sum = sum + p;
  j = j + 1;
 }
 printf("%.14lf", sum);
 return 0;
}