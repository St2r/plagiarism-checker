"""
2022-03-26 11:51:51
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1644 KB
Accepted | 1 * (1 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1724 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (4 / 10) | 2 ms | 1612 KB

"""

#include <stdio.h>

int main() {
	int n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		int x;
		scanf("%d", &x);

		int a, sum = 0;
		for (a = 1; a < x; a++) {
			if (x % a == 0) {
				sum += a;
			}
		}
		if (sum == x)
			printf("YES\n");
		else
			printf("NO\n");




	}
	return 0;
}