"""
2022-03-28 23:57:11
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1664 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1712 KB
Accepted | 1 * (2 / 10) | 1 ms | 1744 KB
Accepted | 1 * (4 / 10) | 0 ms | 1688 KB

"""

#include <stdio.h>
int main()
{
	long long n,sum=1;
	double e=1;
	scanf("%lld",&n);
	if(n<=17)
	{for(int i=1;i<=n;i++)
	{
	for(int j=1;j<=i;j++)
	{
		sum=sum*j;
		}
		e=e+1.0/sum;
		sum=1;	
	}
	printf("%.14lf",e);
	}
	else
	{for(int i=1;i<=17;i++)
	{
	for(int j=1;j<=i;j++)
	{
		sum=sum*j;
		}
		e=e+1.0/sum;
		sum=1;	
	}
	printf("%.14lf",e);
	}
	return 0;
}