"""
2022-03-26 08:58:23
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1608 KB
Accepted | 1 * (1 / 4) | 10 ms | 1672 KB
Accepted | 1 * (1 / 4) | 11 ms | 1596 KB
Accepted | 1 * (1 / 4) | 11 ms | 1604 KB

"""

#include <stdio.h>
int main()
{
  int n, i, s, sum = 0;
  scanf("%d", &n);

  for (int j = 0; j < n; j++)
  {
    scanf("%d", &s);
    // printf("%d", s);
    for (i = 1; i < s; i++)
    {
      if ((s % i) == 0)
        sum += i;
    }
    // printf("%d", sum);
    if (s == sum)
      printf("YES\n");
    else
      printf("NO\n");
    sum = 0;
  }

  return 0;
}