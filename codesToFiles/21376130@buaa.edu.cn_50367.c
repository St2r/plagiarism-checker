"""
2022-03-27 13:32:17
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1596 KB
Accepted | 1 * (1 / 10) | 2 ms | 1540 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1596 KB
Accepted | 1 * (4 / 10) | 2 ms | 1700 KB

"""

#include <stdio.h>

int main()
{

	int n;
	double e,  ans = 0;
	scanf("%d", &n);
	if (n < 300)
	{

		for (int i = 1; i < n + 1; i++)
		{
			double m = 1;
			for (int j = 1; j <= i; j++)
			{
				m = m * j;
			}
			e = 1.0 / m;
			ans = ans + e;

		}
		printf("%.14f\n", ans + 1);
	}
	else
		printf("2.71828182845905");
	return 0;
}