"""
2022-03-27 12:02:55
AC
1.0
Accepted | 1 * (1 / 10) | 11 ms | 1648 KB
Accepted | 1 * (1 / 10) | 11 ms | 1584 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 11 ms | 1584 KB
Accepted | 1 * (4 / 10) | 11 ms | 1636 KB

"""

#include <stdio.h>
int main()
{
  int i,j;
  double f,c;
  long long n;
  scanf("%lld",&n);
  if (n>=20)
  {
      printf("2.71828182845905\n");
      return 0;
  }
  i=1;
  f=1;
  while (i<=n)
  {
      j=1;
      c=1;
      while (j<=i)
      {
          c=c/j;
          j++;
      }
      f+=c;
      i++;
  }
  printf("%.14f\n",f);
  return 0;
}