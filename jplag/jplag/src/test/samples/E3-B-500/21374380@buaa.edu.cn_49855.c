"""
2022-03-26 13:41:02
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1668 KB
Accepted | 1 * (35 / 100) | 2 ms | 1712 KB
Accepted | 1 * (60 / 100) | 4 ms | 1660 KB

"""

#include <stdio.h>
#define N 1000

int main(void) {
	int n, x[N] = {0};
	int sum;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		sum = 0;
		scanf("%d", &x[i]);
		for (int j = 1; j < x[i]; j++) {
			if (x[i] % j == 0) {
				sum += j;
			}
		}
		if (sum == x[i]) {
			printf("YES\n");
		} else
			printf("NO\n");
	}
	return 0;
}