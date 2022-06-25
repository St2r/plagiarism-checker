"""
2022-03-27 13:14:11
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1532 KB
Accepted | 1 * (35 / 100) | 8 ms | 1576 KB
Accepted | 1 * (60 / 100) | 5 ms | 1628 KB

"""

#include<stdio.h>

int main()
{
	double n;
	scanf("%lf",&n);
	double e=1.0;
	double i;
	for(i=1.0;i<=n;i++)
	{
		double j;
		double x=1.0;
		for(j=1;j<=i;j++)
		{
			x=x*j;
		}
		e=e+1/x;
	}
	printf("%.14lf",e);
	return 0;
}