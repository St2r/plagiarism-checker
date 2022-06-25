"""
2022-03-26 12:08:53
AC
1.0
Accepted | 1 * (3 / 5) | 6 ms | 1644 KB
Accepted | 1 * (1 / 5) | 9 ms | 1636 KB
Accepted | 1 * (1 / 5) | 9 ms | 1640 KB
B

"""

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define eps 1e-15
int main ()
{
	long long n,k,kj,i;
	double e;
	scanf("%lld",&n);
	if(n>17)
	{
		n=17;
	}
	for(e=1,i=1;i<=n;i=i+1)
	{
		for(k=i,kj=1;k>=1;k=k-1)
		{
			kj=kj*k;
		}
		e=(e*kj+1)/kj;
	}
	printf("%.14lf",e);
	return 0;
}