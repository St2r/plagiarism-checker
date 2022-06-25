"""
2022-03-29 23:15:55
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1644 KB
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (2 / 10) | 0 ms | 1652 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 1 ms | 1648 KB

"""

#include<stdio.h>
int main()
{
	long long n,l=1;
	double e=1;
	scanf("%lld",&n);
	for (int i=1;i<=n&&i<=19;i++)
	{
		l=l*i;
		e=e+1.0/l;
	}
	printf("%.14f",e);
	return 0;
}