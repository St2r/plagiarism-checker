"""
2022-03-31 06:09:02
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1748 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1648 KB

"""

#include <stdio.h>
int main()
{
	int n;
	double b = 1, c = 0;
	scanf("%d", &n);
	if (n >= 20)
	{
		n = 20;
	}
		for (size_t i = 1; i <= n; i++)
		{
			b = b * i;
			c = c + 1 / b;
		}
		c = c + 1;
		printf("%.14lf", c);
	return 0;
}