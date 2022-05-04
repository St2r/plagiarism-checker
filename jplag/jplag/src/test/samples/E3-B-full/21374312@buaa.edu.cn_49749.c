"""
2022-03-26 15:13:40
AC
1.0
Accepted | 1 * (1 / 10) | 5 ms | 1700 KB
Accepted | 1 * (1 / 10) | 7 ms | 1688 KB
Accepted | 1 * (2 / 10) | 2 ms | 1640 KB
Accepted | 1 * (2 / 10) | 3 ms | 1624 KB
Accepted | 1 * (4 / 10) | 8 ms | 1640 KB


"""

#include <stdio.h>

int main()
{
	int n, a, k, m = 0, i;
	scanf("%d\n", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d\n", a);
		for (k = 1; k <= (a / 2); k++)
		{
			if (a % k == 0)
			{
				m = m + k;
			}
		}
		if (m == a)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}