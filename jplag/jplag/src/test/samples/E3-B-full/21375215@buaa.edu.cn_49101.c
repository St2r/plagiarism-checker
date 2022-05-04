"""
2022-03-26 15:08:25
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1608 KB
Accepted | 1 * (1 / 4) | 2 ms | 1640 KB
Accepted | 1 * (1 / 4) | 2 ms | 1688 KB
Accepted | 1 * (1 / 4) | 2 ms | 1588 KB

"""

#include <stdio.h>

int main() {
	int a, i, j, n, count = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		count = 0;
		for (j = 1; j <= a / 2; j++) {
			if (a % j == 0)
				count += j;
		}
		if (count == a)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}