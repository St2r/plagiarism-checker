"""
2022-03-28 19:01:14
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1600 KB
Accepted | 1 * (1 / 10) | 2 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1640 KB
Accepted | 1 * (4 / 10) | 2 ms | 1640 KB

"""

#include <stdio.h>

int main() {

	long long  n, i;

	double e = 1, r = 1;
	scanf("%lld", &n);
	if (n > 105)
		n = 105;

	for (i = 1; i <= n; i++) {
		r *= i;
		e += (1.0 / r);
	}
	printf("%.14f", e);

	return 0;
}