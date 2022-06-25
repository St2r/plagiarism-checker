"""
2022-03-29 23:12:29
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (2 / 10) | 0 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1684 KB

"""

#include<stdio.h>
int main()
{
	long long n,i=1,j=1;
	double e=1.0,k;
	scanf("%lld",&n);
	while(i<=n&&i<20)
	{
		j=j*i;
		k=1.0/j;	
	    e=e+k;
		i++;
	}
	printf("%.14lf",e);
	return 0;
}