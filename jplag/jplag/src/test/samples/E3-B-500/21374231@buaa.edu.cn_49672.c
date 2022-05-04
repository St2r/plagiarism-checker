"""
2022-03-29 20:09:16
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 2108 KB
Accepted | 1 * (35 / 100) | 2 ms | 2028 KB
Accepted | 1 * (60 / 100) | 3 ms | 2092 KB

"""

#include <stdio.h>
#include <math.h>

int main()
{
	int n, sum;
	int i, line, l;
	scanf("%d", &line);
	for (l = 0; l < line; l++)
	{
		scanf("%d", &n);
		for (i = 1; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				if (i == n / i)
				{
					sum += i;
				}
				else
				{
					sum += i + n / i;
				}
			}
		}
		n *= 2;
		if (sum == n)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		sum = 0;
	}
	return 0;
}