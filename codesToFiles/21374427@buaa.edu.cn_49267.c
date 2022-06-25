"""
2022-03-26 10:24:19
AC
1.0
Accepted | 1 * (1 / 10) | 12 ms | 1588 KB
Accepted | 1 * (1 / 10) | 22 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1672 KB
Accepted | 1 * (2 / 10) | 11 ms | 1596 KB
Accepted | 1 * (4 / 10) | 16 ms | 1592 KB

"""

#include<stdio.h>
int main()
{
	long long n,a=1,i;
    double e=0;
	scanf("%lld",&n);
	if(n<=45)
	{
		for(i=1;i<=n;i++)
		{
			a=a*i;
			e=e+(1.0/a);
		}
	}
	else
	{
		for(i=1;i<=45;i++)
		{
			a=a*i;
			e=e+(1.0/a);
		}
	}
	e=e+1;
	printf("%.14lf",e);
	return 0;
}