"""
2022-03-29 20:09:25
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1684 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 2 ms | 1548 KB

"""

#include <stdio.h>
int main()
{
	int n, i;
	int a[101];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for ( i = 0; i < n; i++)
	{
		if (a[i]==6|| a[i] == 28 || a[i] == 496 || a[i] == 8128)
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