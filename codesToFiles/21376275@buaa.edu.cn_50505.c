"""
2022-03-29 21:05:43
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1716 KB
Accepted | 1 * (2 / 10) | 0 ms | 1716 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (4 / 10) | 1 ms | 1756 KB

"""

#include <stdio.h>
int main()
{
	long long i=1,t=1,n;
	double e=1;
	scanf("%lld",&n);
	if(n<=17)
	{while(i<=n)
	{
		e += 1.0/t;
		i++;
		t *= i;
	}}
	if(n>17)
	{while(i<=18)
		{
			e += 1.0/t;
			i++;
			t *= i;
		}}
	printf("%.14lf\n",e);
	return 0;
}