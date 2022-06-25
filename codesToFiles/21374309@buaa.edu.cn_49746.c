"""
2022-03-26 19:52:09
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1720 KB
Accepted | 1 * (2 / 10) | 2 ms | 1724 KB
Accepted | 1 * (4 / 10) | 2 ms | 1612 KB

"""

#include <stdio.h>

int main(void) {
	long long n;
	scanf("%lld", &n);

	double e = 1.0, d = 1;

	for (int i = 1; i <= n && i <= 17; i++) {
		d *= (double)1 / i;
		e += d;
	}
	printf("%.14lf", e);
	return 0;
}