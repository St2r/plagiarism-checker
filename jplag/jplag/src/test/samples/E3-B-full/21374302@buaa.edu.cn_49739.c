"""
2022-03-29 22:07:54
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1680 KB
Accepted | 1 * (35 / 100) | 0 ms | 1660 KB
Accepted | 1 * (60 / 100) | 2 ms | 1736 KB

"""

#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[n], i, j, sum = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		for (j = a[i] / 2; j > 0; j--) {
			if ((a[i] % j) == 0) {
				sum += j;
			}
		}
		if (sum == a[i]) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
		sum = 0;
	}
	return 0;
}