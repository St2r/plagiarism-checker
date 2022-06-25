"""
2022-03-27 22:07:52
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (1 / 10) | 2 ms | 1668 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (4 / 10) | 2 ms | 1680 KB

"""

#include <stdio.h>

int main() {
	long long n;
	double e = 1.0, sum = 1.0;
	scanf("%lld", &n);
	if (n <= 18) {
		for (int i = 1; i <= n; i++) {
			sum *= (1.0 / i);
			e += sum;
		}
		printf("%.14f", e);
	} else
		printf("2.71828182845905");
	return 0;
}