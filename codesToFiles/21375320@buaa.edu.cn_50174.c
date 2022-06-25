"""
2022-03-27 14:11:45
AC
1.0
Accepted | 1 * (1 / 4) | 6 ms | 1644 KB
Accepted | 1 * (1 / 4) | 2 ms | 1700 KB
Accepted | 1 * (1 / 4) | 2 ms | 1668 KB
Accepted | 1 * (1 / 4) | 2 ms | 1648 KB
4) | 3 ms | 1664 KB

"""

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	double ans = 1;
	const int m = 18;
	scanf("%d", &n);
	if (n < m) {
		int i;
		for (i = 1; i <= n; i++) {
			double j, fac = 1;
			for (j = 1; j <= i; j++) {
				fac *= 1 / j;
			}

			ans += fac;
		}
	}
	else {
		ans = 2.71828182845905;
	}

	printf("%.14lf", ans);

	return 0;
}