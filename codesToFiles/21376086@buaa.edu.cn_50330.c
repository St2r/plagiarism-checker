"""
2022-03-26 10:32:59
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1656 KB
Accepted | 1 * (1 / 4) | 3 ms | 1660 KB
Accepted | 1 * (1 / 4) | 2 ms | 1704 KB
Accepted | 1 * (1 / 4) | 3 ms | 1636 KB

"""

#include<stdio.h>
int main()
{
  double  n;

  scanf("%lf",&n);

  double s=0.0;

  double d=1.0;

  double e=1.0e-14;


  for(double i=1.0;i<=n;i++)
  {

      d=1.0;

      for(double j=i;j>=1;j--)
      {
          d=d*(1/j);

          if(d<=e)
          {

              break;



          }

      }

      s=s+d;

  }
  printf("%0.14lf",s+1.0);

  return 0;

}