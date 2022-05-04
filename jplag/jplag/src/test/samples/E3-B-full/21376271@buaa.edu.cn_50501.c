"""
2022-03-27 09:17:19
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1540 KB
Accepted | 1 * (35 / 100) | 3 ms | 1648 KB
Accepted | 1 * (60 / 100) | 6 ms | 1660 KB

"""

#include <stdio.h>

int main()
{
	int n, i, j, a, sum;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = 0;
		int f[10000] = {0};
		scanf("%d", &a);
		for (j = 1; j < a; j++)
		{
			if (a % j == 0)
				sum += j;
		}
		if (sum == a)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}