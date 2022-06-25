"""
2022-03-29 17:03:29
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (1 / 10) | 2 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Accepted | 1 * (4 / 10) | 2 ms | 1636 KB

"""

#include <stdio.h>

main() {
	long long n;
	long long I;
	double e = 1;
	scanf("%lld", &n);
	for (int i = 1; i <= n; i++) {
		I = 1ll;
		for (int j = 1; j <= i; j++) {
			I *= j;
		}
		if (I <= 1e15) {
			e += 1.0 / I;
		} else
			break;
	}
	printf("%.14lf", e);
	return 0;
}