"""
2022-03-26 20:55:25
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1640 KB
Accepted | 1 * (1 / 10) | 2 ms | 1668 KB
Accepted | 1 * (2 / 10) | 2 ms | 1692 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1704 KB

"""

#include <stdio.h>

int main() {
	int n, i, j, sum = 0, x;
	int a[120] = {0};
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &x);
		for (j = 1; j < x; j++) {
			if (x % j == 0) {
				a[i] += j;
			}
		}
		if (a[i] == x) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}