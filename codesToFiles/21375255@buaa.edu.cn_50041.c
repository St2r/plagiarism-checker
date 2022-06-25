"""
2022-03-26 13:06:07
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1716 KB
Accepted | 1 * (1 / 4) | 3 ms | 1608 KB
Accepted | 1 * (1 / 4) | 2 ms | 1620 KB
Accepted | 1 * (1 / 4) | 2 ms | 1620 KB
KB

"""

#include<stdio.h>
long long j(long long n)
{
	long long tol=1,i;
	for(i=1;i<=n;i++)
	{
		tol=tol*i;
	}
	return tol;
}
int main()
{
	double e=0;
	long long i,n;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{
		e=e+1.0/j(i);
		if(i==17)
		{
			break;
		}
	}
	printf("%.14lf",e+1);
	return 0;
	
}