"""
2022-03-29 20:14:47
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (1 / 10) | 0 ms | 1692 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1640 KB
Accepted | 1 * (4 / 10) | 0 ms | 1568 KB

"""

#include <stdio.h>
int main() 
{
	double e,a;
	long long n;
	e=1;
	a=1;
	
	scanf("%lld",&n);
	if(n<=18)
	{
		for(int i=1; i<=n; i++)
		{
			a/=i;
			e+=1.0*a;
		}
		printf("%.14lf",e);
	}
	else
		printf("2.71828182845905");
	
	return 0;
}