"""
2022-03-26 20:15:42
AC
1.0
Accepted | 1 * (1 / 3) | 5 ms | 2004 KB
Accepted | 1 * (1 / 3) | 4 ms | 2064 KB
Accepted | 1 * (1 / 3) | 3 ms | 2036 KB

"""

#include<stdio.h>
int main()
{
	int i = 0, m, n, n1 = 0, j = 0;
	scanf("%d", &m);
	for (i = 0; i < m; i++)
	{
		scanf("%d", &n);
		n1 = 0;
		for (j = 1; j < n; j++)
		{
			if (n % j == 0)
				n1 += j;
		}
		if (n1 == n)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}