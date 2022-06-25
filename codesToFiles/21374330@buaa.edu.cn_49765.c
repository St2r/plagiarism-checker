"""
2022-03-27 16:08:54
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1720 KB
Accepted | 1 * (4 / 10) | 2 ms | 1656 KB

"""

#include <stdio.h>

int main() {
	int n;
	double sum = 1, T = 1;
	scanf("%d", &n);
	if (n <= 18 ) {
		for (int i = 1; i <= n; i++) {
			T *= i;
			sum += 1.0 / T;
		}
	} else {
		for (int i = 1; i <= 18; i++) {
			T *= i;
			sum += 1.0 / T;
		}
	}
	printf("%.14f", sum);
	return 0;
}