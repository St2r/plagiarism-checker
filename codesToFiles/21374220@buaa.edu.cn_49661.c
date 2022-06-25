"""
2022-03-29 23:17:29
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1640 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 0 ms | 1636 KB
Accepted | 1 * (2 / 10) | 0 ms | 1740 KB
Accepted | 1 * (4 / 10) | 0 ms | 1680 KB

"""

#include <stdio.h>
int main()
{
int i,n;
double sum=1.0,tem=1.0;
scanf("%d",&n);
if(n>=20)
  n=20;
for(i=1;i<=n;i++)
  {tem=tem*1/i;
  sum=sum+tem;
  }
printf("%.14lf",sum);
return 0;
}