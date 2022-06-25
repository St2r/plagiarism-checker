"""
2022-03-29 13:54:10
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1640 KB
Accepted | 1 * (1 / 10) | 1 ms | 1676 KB
Accepted | 1 * (2 / 10) | 0 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (4 / 10) | 1 ms | 1752 KB

"""

#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	long long i;
	double e = 1;
	long long num = 1;
	for (i = 1; i <= n; i++)
	{
		num *= i;
		if (num > 1000000000000000)
			break;
		e += 1.0 / num;
	}
	printf("%.14f", e);

	return 0;
}