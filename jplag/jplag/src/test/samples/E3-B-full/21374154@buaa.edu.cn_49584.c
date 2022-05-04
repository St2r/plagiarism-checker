"""
2022-03-27 21:16:03
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1696 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 3 ms | 1648 KB

"""

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int x[101] = {0};
	int sum = 0;
	int i, a, b, t;
	for (i = 1; i <= n; i++) {
		scanf("%d", &x[i]);
	}
	for (a = 1; a <= n; a++) {
		t = (x[a] / 2);
		for (b = 1; b <= t; b++ ) {
			if (x[a] % b == 0) {
				sum += b;
			}
		}
		if (sum == x[a]) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
		sum = 0;
	}
	return 0;
}