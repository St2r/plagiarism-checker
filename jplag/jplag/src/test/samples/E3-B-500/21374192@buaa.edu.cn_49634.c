"""
2022-03-28 18:07:57
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 9 ms | 1704 KB
Accepted | 1 * (60 / 100) | 12 ms | 1704 KB

"""

#include<stdio.h>

int main()
{
	int n = 0;
	int a[110] = { 0 };
	scanf("%d\n", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d\n", &a[i]);
		if (a[i] == 6 || a[i] == 28 || a[i] == 496 || a[i] == 8128)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}