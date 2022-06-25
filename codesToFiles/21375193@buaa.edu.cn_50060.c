"""
2022-03-28 22:23:03
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1664 KB
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 0 ms | 1748 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (4 / 10) | 1 ms | 1736 KB

"""

#include<stdio.h>
int main()
{
	int n, i, j;
	double sum=1, m, x=1;
	scanf("%d", &n);
	
	if(n<=20)
	{
	
		for(i=1; i<=n; i++)
		{
			for(j=1; j<=i; j++)
			{
				x=x * j; 
			}
			m = 1 / x;
			sum = sum + m;
			x = 1;
		}
	}
	
	else
	{
		n=20;
		for(i=1; i<=n; i++)
		{
			for(j=1; j<=i; j++)
			{
				x=x * j; 
			}
			m = 1 / x;
			sum = sum + m;
			x = 1;
		}
	}
	
	printf("%.14lf", sum);
	
	return 0;
}