"""
2022-03-28 21:55:54
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1756 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 0 ms | 1652 KB
Accepted | 1 * (4 / 10) | 1 ms | 1684 KB

"""

#include<stdio.h>
int main()
{
	long long n;
	int m,i;
	double a,e=0;
	scanf("%lld",&n);
	if(n<18)
	{
		a=1;
		for(m=1;m<=n;m++)
		{
			a= (a/(double)m);
			e=a+e;
		}
	}
	else
	{
			a=1;
		for(m=1;m<=17;m++)
		{
			a= (a/(double)m);
			e=a+e;
		}
	}
	printf("%.14lf",e+1);
	return 0;
}