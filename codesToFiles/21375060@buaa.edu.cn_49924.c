"""
2022-03-28 23:10:28
REG
0.0
Wrong Answer | 0 * (1 / 10) | 1 ms | 1644 KB
Time Limit Exceed | 0 * (1 / 10) | 1000 ms | 0 KB
Time Limit Exceed | 0 * (2 / 10) | 1000 ms | 0 KB
Time Limit Exceed | 0 * (2 / 10) | 1000 ms | 0 KB
Runtime Error (SIGSEGV) | 0 * (4 / 10) | 150 ms | 9640 KB

"""

#include <stdio.h>

int main()
{
	long long n,b,c,d;
	double a[n];
	scanf("%lld",&n);
	c=n;
	d=n;
	double q[c];
	double e;
	e=0.00;
	while(n>0)
	{
		b=n;
		while(n>0)
		{
			n=n*n-1;
			n=n-1;
		}
		q[c]=(1.0)*1/n;
		n=b;
		n=n-1;
		c=c-1;
	}
	c=d;
	while(c>0)
	{
		e=e+q[c];
		c=c-1;
	}
	printf("%.14lf",e);
	return 0;
 }