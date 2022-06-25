"""
2022-03-29 23:52:56
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1744 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (4 / 10) | 1 ms | 1736 KB

"""

#include<stdio.h>
	long double jie(int n)
	{
		long double c=1;
		for (int i = 1; i <= n; i++)
		{
			c = c * i;
		}
		return c;
	}
	int main()
	{
		int	n;
		long double sum = 1;
		scanf("%d",&n);
		if(n<=200)
		for (int i = 1; i <= n; i++)
		{
			sum = sum + 1 / jie(i);
		}
		else
		for (int i = 1; i <= 200; i++)
		{
			sum = sum + 1 / jie(i);
		}

			printf("%.14llf", sum);
	}