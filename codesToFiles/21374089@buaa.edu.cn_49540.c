"""
2022-03-29 23:13:59
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (1 / 10) | 0 ms | 1632 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1652 KB
Accepted | 1 * (4 / 10) | 0 ms | 1752 KB

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