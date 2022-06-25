"""
2022-03-26 16:27:11
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1548 KB
Accepted | 1 * (2 / 10) | 2 ms | 1556 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include <stdio.h>

int main()
{
	int n, i, k;
	double h = 1, sum = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		h = 1;
		for (k = 1; k <= i; k++)
		{
			h = h * k;
		}
		sum = sum + 1.0 / h;
		if (i >= 40)
			break;
	}
	printf("%.14lf", sum);

	return 0;
}