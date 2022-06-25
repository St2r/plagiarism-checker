"""
2022-03-26 15:18:26
AC
1.0
Accepted | 1 * (1 / 4) | 42 ms | 1652 KB
Accepted | 1 * (1 / 4) | 12 ms | 1616 KB
Accepted | 1 * (1 / 4) | 6 ms | 1716 KB
Accepted | 1 * (1 / 4) | 9 ms | 1564 KB

"""

#include <stdio.h>

int main() {
	unsigned long long n, i, c;
	double e = 1, r = 1;
	scanf("%llu", &n);
	for (i = 1; i <= n && r < 1E14; i++) {
		r *= (i * 1.0);
		e += (1 / r);
	}
	printf("%.14f", e);
	return 0;
}