"""
2022-03-29 22:33:50
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1652 KB
Accepted | 1 * (2 / 10) | 1 ms | 1760 KB
Accepted | 1 * (4 / 10) | 0 ms | 1692 KB

"""

#include <stdio.h>
int main()
{
	long long n;
	double e=1,x=1;
	scanf("%lld",&n);
	if (n>=17)
	{
		for (int i=1;i<=17;i++)
			{
				for (int j=1;j<=i;j++)
				{
					x=x/(j*1.0);
				}
					e=e+x;
					x=1;
			}
	} 
	else 
	{
		for (int i=1;i<=n;i++)
			{
				for (int j=1;j<=i;j++)
				{
					x=x/(j*1.0);
				}
					e=e+x;
					x=1;
			}
	}
	printf("%.14lf",e);
	return 0;
}