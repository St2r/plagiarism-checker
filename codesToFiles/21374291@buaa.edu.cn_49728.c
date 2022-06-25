"""
2022-03-29 23:19:31
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1692 KB
Accepted | 1 * (4 / 10) | 1 ms | 1648 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
 double n,jie=1.0;
 double e=1;
 scanf("%lf",&n);
 for (int a=0;a<n;a++)
 {
  if (a>=20)
  {
   break;
  }else
  jie *=(a+1);
  e += 1/jie;
 }
 printf("%.14f",e);
 return 0;
}