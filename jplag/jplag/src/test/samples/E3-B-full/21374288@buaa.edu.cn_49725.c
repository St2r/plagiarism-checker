"""
2022-03-29 00:29:26
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1624 KB
Accepted | 1 * (35 / 100) | 1 ms | 1660 KB
Accepted | 1 * (60 / 100) | 2 ms | 1680 KB

"""

#include <stdio.h>

int main() {
	int n, m;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &m);
		int sum = 1;
		for (int j = 2; j < m; j++) {
			if (m % j == 0) {
				sum += j;
			}
		}
		if (m == sum) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}