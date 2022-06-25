"""
2022-03-29 21:56:52
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (1 / 10) | 0 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1648 KB
Accepted | 1 * (4 / 10) | 0 ms | 1692 KB

"""

#include <stdio.h>

int main() {
	int n, i;
	long long p;
	double sum;
	scanf("%d", &n);
	if (n >= 17)
		n = 17;
	for (p = i = 1; i <= n; i++) {
		p *= i;
		sum += 1.0 / (double)p;
	}
	printf("%.14lf", sum + 1.0);

	return 0;
}