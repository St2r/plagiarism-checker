"""
2022-03-27 12:27:19
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (4 / 10) | 2 ms | 1636 KB

"""

#include<stdio.h>
int main()
{
	long long n,i;
	double a=1,b=1,e=0;
	scanf("%lld",&n);
	if(n<=18)
	{
		for(i=1;i<=n;i++)
	{
		a=1.0*a*i;
		b=1.0/a;
		e=e+b;
	}
	printf("%.14f",e+1);

	}
	else printf("2.71828182845905");
	
	return 0;
}