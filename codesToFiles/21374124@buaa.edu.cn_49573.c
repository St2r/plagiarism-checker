"""
2022-03-29 00:48:37
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (1 / 10) | 0 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (4 / 10) | 0 ms | 1636 KB

"""

#include <stdio.h>
int main()
{
	long long n,k=1,m=1;
	double e=1.0;
	scanf("%lld",&n);
	if(n<17)
	{
		for(int j=1;j<=n;j++)
		{
			k*=j;
			e+=1.0/k;
		}
		printf("%.14f",e);
	}
	else if(n>=17)
	{
		for(int i=1;i<=17;i++)
		{
			m*=i;
			e+=1.0/m;
		}
		printf("%.14f",e);
	}
	return 0;
}