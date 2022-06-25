"""
2022-03-28 21:42:42
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1676 KB
Accepted | 1 * (1 / 10) | 0 ms | 1756 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (4 / 10) | 1 ms | 1664 KB

"""

#include <stdio.h>
int main()
{
int n,i=1;
double e=1,s=1;
scanf("%d",&n);
while(i<=n && i<=17)
{
	s=s*i;
	e=e+1/s;
	i++;
}
printf("%.14lf",e);
	return 0;
 }