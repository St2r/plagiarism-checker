"""
2022-03-26 13:02:09
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1644 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 3 ms | 1668 KB

"""

#include<stdio.h>
int main(void)
{
	long long int n, i, j, k;
	long double ans = 0;
	scanf("%lld", &n);
	if (n >= 45)
	{
		n = 45;
	}
	for (j = 1,k=1; j <= n; j++)
		{
			k *= j;
			ans += 1.0 / k;
		}
	ans += 1;
	printf("%.14llf", ans);
}