"""
2022-03-28 10:09:25
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 2 ms | 1692 KB
Accepted | 1 * (2 / 10) | 2 ms | 1724 KB
Accepted | 1 * (4 / 10) | 2 ms | 1616 KB

"""

#include<stdio.h>
int main()
{
	long long int n,a;
	double m,i,s;
	scanf("%lld",&n);
	a=1;
	m=1;
	s=1;
	if(n<=17)
	for(a;a<=n;a++)
	{
		i=m*(1.0*1/a);
		s=s+i;
		m=m*(1.0*1/a);
	}
	else
	{
		for(a;a<=17;a++)
	{
		i=m*(1.0*1/a);
		s=s+i;
		m=m*(1.0*1/a);
	}
	}
	printf("%.14lf",s);
	return 0;
}