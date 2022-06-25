"""
2022-03-26 20:32:27
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (4 / 10) | 2 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	double e = 1.0, c = 1.0;
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i < n && i < 17; i++)
	{
		c *= 1.0 / (i + 1);
		e += c;
	}
	printf("%.14lf", e);
	return 0;
}