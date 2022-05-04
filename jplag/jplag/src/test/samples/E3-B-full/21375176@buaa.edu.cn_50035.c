"""
2022-03-28 16:00:13
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1620 KB
Accepted | 1 * (35 / 100) | 2 ms | 1620 KB
Accepted | 1 * (60 / 100) | 3 ms | 1644 KB

"""

#include <stdio.h>
	int main() {
		int n, i, j = 0, a, s = 0;
		scanf("%d", &n);
		while (n--)
		{
			s = 0;
			scanf("%d", &a);
			for (i = 1; i <= (a / 2); i++)
			{
				if (a % i == 0)
					s += i;
			}
			if (s == a)
				printf("YES\n");
			else
				printf("NO\n");
		}
		return 0;
	}