"""
2022-03-26 17:28:59
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1616 KB

"""

#include <stdio.h>

long long f(int n)
{
	long long s;
	if(n==1)
	{
		s=1;
	}
	else
	{
		s=n*f(n-1);
	}
	
	return s;
}

int main()
{
	int n,i;
	double e=1.0;
	scanf("%d",&n);
	if(n<=17)
	{
		for(i=1;i<=n;i++)
		{
			e+=1.0/f(i);
		}
	}
	else
	{
		for(i=1;i<18;i++)
		{
			e+=1.0/f(i);
		}
	}
	printf("%.14f",e);

	return 0;
}