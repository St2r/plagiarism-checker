"""
2022-03-29 19:13:27
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1720 KB
Accepted | 1 * (4 / 10) | 2 ms | 1664 KB

"""

#include<stdio.h>
int main()
{
	long long n;
	double e,a=1.0;
	scanf("%lld",&n);
	if(n<=30)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=i;j++)
			{
				a=a/j;
			}
			e=e+a;
			a=1.0;
		}
	}
	else
	{
		for(int i=1;i<=30;i++)
		{
			for(int j=1;j<=i;j++)
			{
				a=a/j;
			}
			e=e+a;
			a=1.0;
		}
	}
	e=e+1.0;
	printf("%.14lf",e);
	return 0;
}