"""
2022-03-29 13:40:49
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1688 KB
Accepted | 1 * (35 / 100) | 1 ms | 1656 KB
Accepted | 1 * (60 / 100) | 3 ms | 1740 KB

"""

#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i, j;
	int a, sum = 0;
	for (i = 0; i < n; i++)
	{
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
		sum = 0;
	}

	return 0;
}