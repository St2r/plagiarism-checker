"""
2022-03-27 22:43:13
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (1 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1708 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include<stdio.h> 
#include<stdlib.h> 
#define eps 1e-14
int main() 
{
	long long int n;
	double e=1.0;
	scanf("%lld",&n);
	int i,k;
	double m;
	double jd=1.0;
	int j;
		for(j=1;jd>eps;j++)
		{
			jd=jd*(1.0/(j*1.0));
			k=j;
		}
		if(n>j)
		{
			n=j;
		}
	for(i=1;i<=n;i++)
	{
		m=1.0;
		for(j=1;j<=i;j++)
		{
			m=m*(j*1.0);
		}
		m=(1.0/(1.0*m));
		e=e+m;
	}
	printf("%.14lf",e);
	return 0;
}