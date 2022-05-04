"""
2022-03-26 14:42:05
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1688 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 3 ms | 1656 KB

"""

#include <stdio.h>
#include <math.h>

int main(void)
{
	int n = 0;
	int sum = 0;
	int num = 0;

	scanf("%d", &num);
	for (int c = 0; c < num; c++)
	{
		sum = 0;
		scanf("%d", &n);
		for (int i = 1; i <= n / 2; i++)
		{
			if (n % i == 0)
			{
				sum += i;
			}
		}

		if (n == sum)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}

	return 0;
}