"""
2022-03-27 15:50:01
AC
1.0
Accepted | 1.0 * (3 / 15) | 9 ms | 1700 KB
Accepted | 1.0 * (2 / 15) | 3 ms | 1604 KB
Accepted | 1.0 * (4 / 15) | 2 ms | 1556 KB
Accepted | 1.0 * (1 / 15) | 5 ms | 1624 KB
Accepted | 1.0 * (5 / 15) | 9 ms | 1636 KB

"""

#include <stdio.h>

int main(void)
{
	int n = 0;
	double res = 1, tmp = 1;

	scanf("%d", &n);
	if (n >= 18)
	{
		printf("2.71828182845905\n");
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			tmp = tmp / i;
			res += tmp;
		}

		printf("%.14lf\n", res);
	}

	return 0;
}