"""
2022-03-26 20:42:21
AC
1.0
Accepted | 1 * (1 / 4) | 3 ms | 1660 KB
Accepted | 1 * (1 / 4) | 2 ms | 1640 KB
Accepted | 1 * (1 / 4) | 3 ms | 1628 KB
Accepted | 1 * (1 / 4) | 4 ms | 1640 KB


"""

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	unsigned int n, i;
	long long int j = 1;
	const double eps = 1e-15;
	double x,sum=0;
	scanf("%u", &n);
	for (i = 1; i <= n; i++)
	{
		j = j * i;
		x = (1.0 / j);
		if (x < eps)
			break;
		sum = sum + x;
	}
	printf("%.14lf ", sum+1);
	return 0;
}