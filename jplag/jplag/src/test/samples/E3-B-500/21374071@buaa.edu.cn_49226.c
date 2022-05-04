"""
2022-03-26 12:47:12
AC
1.0
Accepted | 1.0 * (3 / 15) | 2 ms | 1708 KB
Accepted | 1.0 * (2 / 15) | 2 ms | 1720 KB
Accepted | 1.0 * (4 / 15) | 2 ms | 1720 KB
Accepted | 1.0 * (1 / 15) | 5 ms | 1708 KB
Accepted | 1.0 * (5 / 15) | 6 ms | 1644 KB
KB

"""

#include <stdio.h>

int main() {
	int n, x, sum;
	scanf("%d", &n);
	while (n--) {
		sum = 0;
		scanf("%d", &x);
		while (getchar() != '\n');
		for (int i = 1; i < x; i++) {
			if (x % i == 0) {
				sum += i;
			}
		}
		if (sum == x)
			printf("YES\n");
		else
			printf("NO\n");

	}

	return 0;
}