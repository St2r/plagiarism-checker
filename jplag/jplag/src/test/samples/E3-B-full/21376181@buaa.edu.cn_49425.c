"""
2022-03-26 21:13:12
AC
1.0
Accepted | 1 * (5 / 100) | 5 ms | 1660 KB
Accepted | 1 * (35 / 100) | 2 ms | 1552 KB
Accepted | 1 * (60 / 100) | 15 ms | 1632 KB

"""

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int i, j;
	int x[n];
	int sum = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &x[i]);
		for (j = 1; j <= x[i] / 2; j++) {
			if (x[i] % j == 0) {
				sum += j;
			}
		}
		if (sum == x[i])
			printf("YES\n");
		else
			printf("NO\n");
		sum = 0;

	}








	return 0;
}