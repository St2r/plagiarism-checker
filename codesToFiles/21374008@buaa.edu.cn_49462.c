"""
2022-03-28 21:50:57
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 0 ms | 1756 KB
Accepted | 1 * (4 / 10) | 1 ms | 1688 KB

"""

#include<stdio.h>
#include<ctype.h>
#include<math.h>
int main()
{
	long long n;
	double e=1.0;
	scanf("%lld",&n);
	if(n<=17)
	{
		for(int i=1;i<=n;i++)
		{
			double k=1.0;
			for(int j=1;j<=i;j++)
			{
				k=k*j;
			}
			e+=((1.0)/k);
		}
		printf("%.14lf",e);
	}
	else
	{
		for(int i=1;i<=17;i++)
		{
			long long k=1;
			for(int j=1;j<=i;j++)
			{
				k=k*j;
			}
				e+=((1.0)/k);
		}
		printf("%.14lf",e);
	}
return 0;
}