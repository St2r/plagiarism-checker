"""
2022-03-26 12:06:52
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1644 KB
Accepted | 1 * (1 / 10) | 2 ms | 1640 KB
Accepted | 1 * (2 / 10) | 2 ms | 1692 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (4 / 10) | 2 ms | 1596 KB

"""

#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	double e=1,pro=1;
	int i,n;
	scanf("%d",&n);
	for(i=1;(i<=n)&&(pro>=1e-16);i++,pro/=i)
	e+=pro;
	printf("%.14lf",e);
	return 0;
}