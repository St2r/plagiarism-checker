"""
2022-03-28 12:19:06
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (1 / 10) | 2 ms | 1672 KB
Accepted | 1 * (2 / 10) | 2 ms | 1676 KB
Accepted | 1 * (2 / 10) | 3 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1716 KB

"""

#include <stdlib.h>
#include<stdio.h>
double jiecheng(int n);
int main() {
	int n,i;
	double e=1.;
	scanf("%d",&n);
	if (n<=17)
	{
		for ( i = 1; i <= n; i++)
		{
			e += 1. / jiecheng(i);
		}
		printf("%.14lf", e);
	}
	else
	{
		for (i = 1; i <= 17; i++)
		{
			e += 1. / jiecheng(i);
		}
		printf("%.14lf", e);
	}
}
double jiecheng(int n) {
	double re = 1.0;
	int i;
	for (i = 1; i <=n; i++)
	{
		re *= i;
	}
	return re;
}