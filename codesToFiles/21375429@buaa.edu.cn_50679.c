"""
2022-03-29 19:53:29
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 3 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1668 KB
Accepted | 1 * (4 / 10) | 2 ms | 1552 KB

"""

#include <stdio.h>
int main()
{
	long long i,x;
	long long a=1;
	double b=1;
	scanf("%lld",&x);
	if(x<=17)
	{
		for(i=1;i<=x;i++)
		{
			a*=i;
			b+=1.0*1/a;
		}
		printf("%.14lf",b);
	}
	else
	{
		printf("2.71828182845905");
	}
	return 0;
}