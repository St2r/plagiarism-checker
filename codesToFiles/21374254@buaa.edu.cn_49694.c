"""
2022-03-27 01:08:21
TLE
0.4
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1668 KB
Wrong Answer | 0 * (2 / 10) | 2 ms | 1680 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 872 KB

"""

#include <stdio.h>

int fac(long n)
{
	long j=1,fac=1;
	while(j<=n)
	{
		fac=fac*j;
		j++;
	}
	return fac;
}

int main() 
{
	long n, i=1;
	scanf("%ld",&n);
	double e=1;
	double temp;
	while(i<=n)
	{
		temp=fac(i);
		e=e+(1/temp);
		i++;
	}
	printf("%.14f",e);
	return 0;
}