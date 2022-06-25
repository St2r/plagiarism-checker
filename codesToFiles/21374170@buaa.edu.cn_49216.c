"""
2022-03-28 00:17:10
AC
1.0
Accepted | 1 * (1 / 10) | 11 ms | 1720 KB
Accepted | 1 * (1 / 10) | 7 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1720 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1656 KB
1640 KB
Wrong Answer | 0 * (1 / 8) | 12 ms | 1640 KB
Wrong Answer | 0 * (1 / 8) | 3 ms | 1660 KB
Wrong Answer | 0 * (1 / 8) | 2 ms | 1620 KB
 KB

"""

#include<stdio.h>
int main()
{
	long long n,i,j,m;
	m=1;
	double a=1,b;
	scanf("%lld",&n);
	if(n<=17)   
	{for(i=1;i<=n;i++)
		{
			m*=i;
			b=(double)1/m;
			a+=(double)b;
		}
		printf("%.14lf",a);
	}
	else
	{
		for(i=1;i<=17;i++)
		{
			m*=i;
			b=(double)1/m;
			a+=(double)b;
		}
		printf("%.14lf",a);
	}