"""
2022-03-29 22:43:46
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1652 KB
Accepted | 1 * (35 / 100) | 1 ms | 1688 KB
Accepted | 1 * (60 / 100) | 2 ms | 1692 KB

"""

#include <stdio.h>
int main()
{
	int n, x, i = 1, fac, factor = 0;
	scanf("%d", &n);
	while (i <= n)
	{
		factor = 0;
		scanf("%d", &x);
		for (fac = 1; fac <= x / 2; fac++)
		{
			if (x % fac == 0)
			{
				factor += fac;
			}
		}
		if (factor == x)
			printf("YES\n");
		else
			printf("NO\n");
		i++;
	}
	return 0;
}