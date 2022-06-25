"""
2022-03-29 09:40:49
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (4 / 10) | 2 ms | 1696 KB

"""

#include <stdio.h>
double calc(int );
int main()
{
	int n,i;
	double e=1;
	scanf("%d",&n);
	if(n>17)
	{
	
	for(i=1;i<=17;i++)
	{
		e+=(1/calc(i));
	}
	printf("%.14lf",e);
	}
	else
	{
	
	for(i=1;i<=n;i++)
	{
		e+=(1/calc(i));
	}
	printf("%.14lf",e);
	}
	return 0;
}
double calc(int n)
{
	double r=1,i;
	for(i=n;i>=1;i--)
	r*=i;
	return r;
	
}