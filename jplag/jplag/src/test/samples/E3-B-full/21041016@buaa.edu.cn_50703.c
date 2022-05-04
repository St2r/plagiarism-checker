"""
2022-03-27 14:24:11
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1628 KB
Accepted | 1 * (1 / 4) | 11 ms | 1644 KB
Accepted | 1 * (1 / 4) | 2 ms | 1628 KB
Accepted | 1 * (1 / 4) | 13 ms | 1616 KB

"""

#include <stdio.h>

int main()
{
	int n, i, a, sum, d;
	scanf("%d", &n);
	
	for (i=0; i<n; i++)
	{
		sum = 0;
		scanf("%d", &a);
		for (d=a-1; d>0; d--)
		{
			if ( a % d == 0 )
			{
				sum += d;
			}
		}
		if ( a == sum )
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	return 0;
}