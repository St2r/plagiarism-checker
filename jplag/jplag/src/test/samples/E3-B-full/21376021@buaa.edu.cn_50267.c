"""
2022-03-28 23:41:37
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1660 KB
Accepted | 1 * (35 / 100) | 1 ms | 1656 KB
Accepted | 1 * (60 / 100) | 6 ms | 1652 KB

"""

#include <stdio.h>
int main()
{
	long long n,x[101],sum=0;
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&x[i]);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<x[i];j++)
		{
			if(x[i]%j==0)
			sum+=j;
		}
		
		if(sum==x[i])
		printf("YES\n");
		else
		printf("NO\n");
		sum=0;
	}
	return 0;
}