"""
2022-03-26 21:14:35
AC
1.0
Accepted | 1 * (5 / 100) | 6 ms | 1648 KB
Accepted | 1 * (35 / 100) | 11 ms | 1688 KB
Accepted | 1 * (60 / 100) | 15 ms | 1608 KB

"""

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	int sum[n];
	int i, x;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		sum[i] = 0;
	}
	for (i = 0; i < n; i++) {
		for (x = 1; x < a[i]; x++) {
			if (a[i] % x == 0) {
				sum[i] = sum[i] + x;
			}
		}
	}
	for (i = 0; i < n; i++) {
		if (a[i] == sum[i]) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}