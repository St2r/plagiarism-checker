"""
2022-03-28 15:49:07
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (1 / 10) | 2 ms | 1672 KB
Accepted | 1 * (2 / 10) | 2 ms | 1676 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1616 KB

"""

#include <stdio.h>
#include <math.h>
#define  E 2.7182818284590455;

int main()
{
	int n, i, j, bound;
	double e, f;
	scanf("%d", &n);
	if (n < 17 && n >= 10)
	{
		e = E;
		for (i = n + 1; i <= 17; i++)
		{
			f = 1;
			for (j = 2; j <= i; j++)
			{
				f *= j;
			}
			e -= 1 / f;
		}
	}
	else if (n < 10)
	{
		e = 1;
		for (i = 1; i <= n; i++)
		{
			f = 1;
			for (j = 2; j <= i; j++)
			{
				f *= j;
			}
			e += 1 / f;
		}
	}
	else
	{
		e = E;
	}
	printf("%.14f", e);
	return 0;
}