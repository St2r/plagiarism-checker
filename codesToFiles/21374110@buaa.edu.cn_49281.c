"""
2022-03-28 20:08:22
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 0 ms | 1652 KB
Accepted | 1 * (4 / 10) | 1 ms | 1656 KB

"""

#include <stdio.h>

int main()
{
	long long n;
	double e=0,e1=1;
	int i;
	scanf("%lld",&n);
	if(n>20)
		printf("2.71828182845905");
	else 
	{
		for(i=0;i<=n;i++)
		{
			e+=1.0/e1;
			e1*=(i+1);
		}
		printf("%.14lf",e);
	}
	return 0;
}