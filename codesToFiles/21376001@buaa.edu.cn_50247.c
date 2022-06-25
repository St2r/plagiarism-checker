"""
2022-03-27 13:15:48
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (1 / 10) | 2 ms | 1696 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (4 / 10) | 2 ms | 1596 KB

"""

#include<stdio.h>
int main()
{
	long long n;
	double e=1.0;
	scanf("%lld",&n);
	
	if(n<=17)
	{
	    double p=1.0;
		for(int i=0;i<n;i++)
		{
			p = p*(1.0/(i+1));
			e = e+p;
		}
		printf("%.14lf",e);	
	}
	else printf("2.71828182845905");
	return 0;
}