"""
2022-03-26 10:06:39
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1636 KB
Accepted | 1 * (1 / 4) | 2 ms | 1708 KB
Accepted | 1 * (1 / 4) | 2 ms | 1600 KB
Accepted | 1 * (1 / 4) | 3 ms | 1652 KB

"""

#include <stdio.h>
#include <math.h>

int main() {
	int n, x[10000], sum = 0;
	scanf("%d\n", &n);
	for (int i = 0; i < n - 1; i++) {
		scanf("%d\n", &x[i]);
	}
	for (int k = 0; k < n; k++) {
		for (int j = x[k] - 1; j > 0; j--) {
			if (x[k] % j == 0)
				sum += j;
		}
		if (sum == x[k]) {
			printf("YES\n");
			sum = 0;
		} else {
			printf("NO\n");
			sum = 0;
		}

	}
	return 0;
}