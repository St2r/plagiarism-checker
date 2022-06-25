"""
2022-03-27 19:56:16
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1528 KB
Accepted | 1 * (1 / 4) | 2 ms | 1544 KB
Accepted | 1 * (1 / 4) | 2 ms | 1624 KB
Accepted | 1 * (1 / 4) | 2 ms | 1636 KB
KB

"""

#include<stdio.h>
int main()
{
	int n;
	double a = 1, sum = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n && i <= 16; i++)
	{
		a /= i;
		sum += a;
	}
	printf("%.14lf", sum);
	return 0;
}