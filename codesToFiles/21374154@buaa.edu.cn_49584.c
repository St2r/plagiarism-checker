"""
2022-03-28 00:25:22
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1680 KB
Accepted | 1 * (1 / 4) | 12 ms | 1612 KB
Accepted | 1 * (1 / 4) | 7 ms | 1664 KB
Accepted | 1 * (1 / 4) | 2 ms | 1628 KB
2 ms | 1628 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 876 KB

"""

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	double sum = 1.0;
	double a = 1.0;
	int i;
	for (i = 1; i <= n; i++) {
		a = a * 1 / i;
		sum += a;
	}
	printf("%.14f\n", sum);
	return 0;
}