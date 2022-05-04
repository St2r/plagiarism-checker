"""
2022-03-27 18:33:31
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 4 ms | 1484 KB
Accepted | 1 * (60 / 100) | 4 ms | 1612 KB
 KB
Accepted | 1 * (1 / 8) | 14 ms | 1628 KB
Accepted | 1 * (1 / 8) | 2 ms | 1696 KB
Accepted | 1 * (1 / 8) | 2 ms | 1624 KB
Time Limit Exceed | 0 * (1 / 8) | 1000 ms | 960 KB
Time Limit Exceed | 0 * (1 / 8) | 1000 ms | 876 KB
B

"""

#include <stdio.h>
int main()
{
	int a[101], i, i1, i2, b;
	int n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i1 = 0; i1 < n; i1++)
	{
		b = 0;
		for (i2 = 1; i2 < a[i1]; i2++)
		{
			
			if (a[i1] % i2 == 0)
			{
				b += i2;
			}
		}
		if (b == a[i1])
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