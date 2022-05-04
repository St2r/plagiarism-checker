"""
2022-03-26 13:49:31
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1668 KB
Accepted | 1 * (35 / 100) | 2 ms | 1708 KB
Accepted | 1 * (60 / 100) | 4 ms | 1692 KB

"""

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	while (n > 0) {
		int m;
		int sum = 0;
		scanf("%d", &m);
		if (m == 1)
			printf("YES\n");
		else {
			for (int i = 1; i < m; i++) {
				if (m % i == 0) {
					sum = sum + i;
				}
			}
			if (sum == m)
				printf("YES\n");
			else
				printf("NO\n");
		}
		n--;
	}
	return 0;
}