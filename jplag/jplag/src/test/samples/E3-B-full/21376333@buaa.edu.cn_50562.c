"""
2022-03-27 16:42:01
AC
1.0
Accepted | 1 * (1 / 4) | 12 ms | 2396 KB
Accepted | 1 * (1 / 4) | 16 ms | 2388 KB
Accepted | 1 * (1 / 4) | 18 ms | 2340 KB
Accepted | 1 * (1 / 4) | 10 ms | 2304 KB

"""

#include<stdio.h>
int main()
{
	int n, x, b;
	b = 0;
	x = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int a;
		scanf("%d", &a);
		for (int j = 1; j < a; j++)
		{
			if (a % j == 0)
				x = x + j;

		}
		if (x == a)
			b = b + (1 << (i - 1));
		x = 0;
	}
	for (int k = 0; k < n; k++)
	{
		if (b % 2 == 1)
			printf("YES\n");
		else
			printf("NO\n");
		b = b / 2;
	}
}