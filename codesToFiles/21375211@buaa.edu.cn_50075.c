"""
2022-03-26 21:05:57
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1628 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (4 / 10) | 2 ms | 1696 KB

"""

#include <stdio.h>

int main()

{
	long long n,m=1,i=1;
	double x=0;
	scanf("%lld",&n);
	if(n>17)
	{
		printf("2.71828182845905");
		return 0;
	}
	while(i<=n)
	{
	m=m*i;
	x=x+(double)1/m;
	i++;
	}
	printf("%.14lf",x+1);
	return 0;
}