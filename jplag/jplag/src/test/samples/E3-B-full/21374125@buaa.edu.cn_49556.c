"""
2022-03-28 07:37:52
AC
1.0
Accepted | 1 * (5 / 100) | 17 ms | 1896 KB
Accepted | 1 * (35 / 100) | 13 ms | 2028 KB
Accepted | 1 * (60 / 100) | 9 ms | 2016 KB

"""

#include <stdio.h>
#include <math.h>

int main() {
	int n, x, a, b, sum = 0, c;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++, sum = 0) {

		scanf("%d", &x);
		c = (int)sqrt(x);

		for (int j = 1; j <= c; j++) {

			if (x % j == 0) {
				a = j, b = x / j;

				if (a == b) {
					sum = sum + a;
				} else if (a != x && b != x) {
					sum = sum + a + b;
				} else {
					sum = sum + 1;
				}

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