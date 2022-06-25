"""
2022-03-28 17:57:55
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1616 KB

"""

#include <stdio.h>

int main()
{
	int n,i,j=1;
	long long s=1;
	scanf("%d",&n);
	double S=1;
	if(n<=16)
	{
	for(i=1;i<=n;i++)
	{
		s*=i;
		
		S+=(1.0)/s;
	}
	printf("%.14f",S);
	}
	else
	{
	for(i=1;i<=17;i++)
	{
		s*=i;
		S+=(1.0)/s;
	}
	printf("%.14f",S);
	}
	return 0;
}