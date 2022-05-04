"""
2022-03-26 23:39:39
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include <stdio.h>

int main()
{
	int a[105];
	int n,  m = 0;
	scanf("%d", &n);
	for (int k = 0; k < n; k++)
		scanf("%d", &a[k]);
	int j;
	for (int i = 0; i < n; i++)
	{
		m = 0;
		for (j = a[i] - 1; j >= 1; j--)
		{

			if (a[i] % j == 0)
			{
				m = m + j;

			}


		}

		if (m == a[i])
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