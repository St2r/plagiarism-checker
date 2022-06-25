"""
2022-03-29 00:29:04
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1716 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 1 ms | 1744 KB

"""

#include <stdio.h>

int main() {
	int n;
	double sum = 1.0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		long long m = 1;
		for (int j = 2; j <= i; j++) {
			m *= j;
		}
		sum += 1.0 / m;
		if (i >= 18)
			break;
	}
	printf("%.14f\n", sum);
	return 0;
}