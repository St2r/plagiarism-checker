"""
2022-03-29 17:43:56
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (2 / 10) | 0 ms | 1732 KB
Accepted | 1 * (2 / 10) | 0 ms | 1732 KB
Accepted | 1 * (4 / 10) | 1 ms | 1656 KB

"""

#include <stdio.h>
double jiecheng(long long);
int main()
{
	long long n,a;
	double e=1;
	scanf("%lld",&n);
	
	if(n<=16)
	a=n;
	else
	a=17;
	
	for(int i=1;i<=a;i++)
	{
		e=e+jiecheng(i);
	}
	printf("%.14f",e);
	
	
	return 0;
}

double jiecheng(long long n)
{
	double m=1;
	for(int i=1;i<=n;i++)
	{
	    m=m/i;
	}
	return m;
}