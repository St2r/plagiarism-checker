"""
2022-03-28 22:48:42
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1748 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 0 ms | 1680 KB
Accepted | 1 * (4 / 10) | 1 ms | 1680 KB

"""

#include<stdio.h>
int main()
{
	int i;
	long long int n;
	double count=1,a;
	scanf("%lld",&n);
	if(n<200)
	{
		a=1;
		for(i=1;i<=n;i++)
	{
		a*=(1.0/i);
		count+=a;
	}
	printf("%.14lf",count);
	}
	else
	{
		a=1;
		for(i=1;i<=200;i++)
	{
		a*=(1.0/i);
		count+=a;
	}
	printf("%.14lf",count);
	}
	return 0;
}