"""
2022-03-26 08:25:36
AC
1.0
Accepted | 1 * (1 / 4) | 5 ms | 1712 KB
Accepted | 1 * (1 / 4) | 11 ms | 1664 KB
Accepted | 1 * (1 / 4) | 2 ms | 1664 KB
Accepted | 1 * (1 / 4) | 16 ms | 1652 KB

"""

#include<stdio.h>
int main() {
	int n, m, sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &m);
		for (int j = 1; j < m; j++) {
			if (m % j == 0) {
				sum += j;
			}
		}
		if (sum == m) {
			printf("YES\n");
			sum = 0;
		} else {
			printf("NO\n");
			sum = 0;
		}
	}


	return  0;
}