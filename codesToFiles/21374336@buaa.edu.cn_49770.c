"""
2022-03-26 09:13:20
AC
1.0
Accepted | 1 * (1 / 10) | 11 ms | 1692 KB
Accepted | 1 * (1 / 10) | 7 ms | 1592 KB
Accepted | 1 * (2 / 10) | 2 ms | 1600 KB
Accepted | 1 * (2 / 10) | 2 ms | 1640 KB
Accepted | 1 * (4 / 10) | 2 ms | 1636 KB

"""

#include <stdio.h>
int main()

{
  int n, i, j;
  double sum = 0, he;
  scanf("%d", &n);
  if (n >= 35)
    n = 35;
  for (i = 1; i <= n; i++)
  {
    he = 1;
    for (j = 1; j <= i; j++)
    {
      he /= j;
    }
    printf("%lf\n", he);
    sum = sum + he;
  }
  printf("%.14lf", sum);
  return 0;
}