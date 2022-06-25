"""
2022-03-28 20:13:13
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1756 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 0 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	long long n;
	long long a=1;
	double sum=1.0;
	scanf("%lld",&n);
	
	if(n<=17)
	{
		for(int i=1;i<=n;i++)
		{
			a *= i;
			sum += 1.0/a;
		}
	}
	else
	{
		for(int i=1;i<=17;i++)
		{
			a *= i;
			sum += 1.0/a;
		}
	}
	
	printf("%.14lf",sum);
	
	return 0;
}