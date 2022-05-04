"""
2022-03-29 21:54:00
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1684 KB
Accepted | 1 * (35 / 100) | 0 ms | 1660 KB
Accepted | 1 * (60 / 100) | 2 ms | 1692 KB

"""

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int x;
		scanf("%d", &x);
		int i, sum = 0;
		for (i = 1; i < x - 1; i++) {
			if (x % i == 0) {
				sum += i;
			}
		}
		if (sum == x) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}