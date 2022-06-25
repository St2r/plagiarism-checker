"""
2022-03-27 09:29:08
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 3 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (4 / 10) | 2 ms | 1656 KB

"""

#include <stdio.h>

int main()
{
 int n,i;
 double eps=1e-14,d,x=1;
 scanf("%d",&n);
 for(i=1,d=1;i<=n&&d>=eps;i++)
 {
     d=d/i;
     x=x+d;
 }
 printf("%.14f",x);
 return 0;
}