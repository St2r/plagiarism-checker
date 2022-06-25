"""
2022-03-26 21:05:20
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1648 KB
Accepted | 1 * (1 / 4) | 2 ms | 1696 KB
Accepted | 1 * (1 / 4) | 2 ms | 1620 KB
Accepted | 1 * (1 / 4) | 4 ms | 1708 KB

"""

#include <stdio.h>

int main() {
	int n, i, j;
	double sum = 1.0, b = 1.0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		b *= 1.0 / i;
		sum += b;
	}
	printf("%.14lf\n", sum);
	return 0;
}