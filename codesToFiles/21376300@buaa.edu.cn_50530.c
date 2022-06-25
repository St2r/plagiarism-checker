"""
2022-03-26 09:30:17
AC
1.0
Accepted | 1 * (1 / 4) | 8 ms | 1612 KB
Accepted | 1 * (1 / 4) | 2 ms | 1608 KB
Accepted | 1 * (1 / 4) | 3 ms | 1608 KB
Accepted | 1 * (1 / 4) | 3 ms | 1596 KB

"""

#include<stdio.h>
int main()
{
	int n, k;
	scanf("%d", &n);
	double sum = 1;
	if (n < 18)
	{
	
	for (int i = 1; i <= n; i++)
	{
		k = i;
		long long  fac = 1;
		for (int i = 1; i <= k; i++)
		{
			fac = fac*i;
		}
		sum = sum + 1.0 / fac;
	}
	printf("%.14lf", sum);
}
	else if (n > 17)
	{
		printf("2.71828182845905");
	}

	return 0;
}