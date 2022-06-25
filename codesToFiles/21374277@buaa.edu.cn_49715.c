"""
2022-03-29 21:48:35
TLE
0.6
Accepted | 1 * (1 / 10) | 0 ms | 1644 KB
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1640 KB
Accepted | 1 * (2 / 10) | 0 ms | 1664 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 0 KB

"""

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#define eps 1e-10
int a[1000000000];
int main()
{
	long long n;
	double j=1;
	double e=1.0,xn=1.0;
	scanf("%lld",&n);
	for(double i=1;i<=n;i++)
	{
		for(j=1.0;j<=i;j++)
		{ 
		xn=xn*(double)1.0/j;
		
	}
	
	e=e+xn;
	xn=1.0;
	
	
}
	
	printf("%.14lf",e);
	return 0;
}