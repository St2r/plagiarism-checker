"""
2022-03-27 10:52:39
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1704 KB

"""

#include<stdio.h>
int main()
{
	long long int n,j,a=1;
	double e=1,esp=1e-14;
	scanf("%lld",&n);
	
	for(j=1;j<=n;j=j+1)
	{
		a=a*j;
		e=e+(double)1/a;
		if((double)1/a<esp)
		break;
	}
	printf("%0.14lf",e);
	return 0;
}