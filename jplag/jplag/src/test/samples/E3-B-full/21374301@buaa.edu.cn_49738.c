"""
2022-03-26 08:56:26
AC
1.0
Accepted | 1 * (5 / 100) | 14 ms | 1608 KB
Accepted | 1 * (35 / 100) | 12 ms | 1608 KB
Accepted | 1 * (60 / 100) | 8 ms | 1524 KB

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