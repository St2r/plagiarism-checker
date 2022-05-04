"""
2022-03-27 19:41:19
AC
1.0
Accepted | 1 * (1 / 4) | 13 ms | 1540 KB
Accepted | 1 * (1 / 4) | 8 ms | 1604 KB
Accepted | 1 * (1 / 4) | 6 ms | 1616 KB
Accepted | 1 * (1 / 4) | 10 ms | 1616 KB

"""

#include <stdio.h>
#include <math.h>

int main()
{
	int n, i,j, x, sum=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x);
		for (j = 1; j <= sqrt(x); j++)
		{
			if (x % j == 0&&j!=sqrt(x)&&j!=1)
			{
				sum += j + x / j;
			}
			else if (x % j == 0)
			{
				sum += j;
			}
		}
		if (sum == x)
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
                sum=0;
	}
	return 0;
}