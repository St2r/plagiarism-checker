"""
2022-03-30 16:42:02
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (1 / 10) | 0 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 0 ms | 1692 KB

"""

#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  int i,a;
double e=1;


  for(i=1;i<=n&&i<=100;i++)
  {
 double s=1;
      for(a=1;a<=i;a++)
      {
          s=s*a;
      }
      e=e+1/s;
  }
  printf("%.14f",e);
return 0;
}
