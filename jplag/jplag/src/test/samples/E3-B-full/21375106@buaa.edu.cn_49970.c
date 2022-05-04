"""
2022-03-27 13:18:05
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1632 KB
Accepted | 1 * (35 / 100) | 3 ms | 1696 KB
Accepted | 1 * (60 / 100) | 4 ms | 1628 KB

"""

#include <stdio.h>

int main() {
	int n, i, j, sum = 0;
	scanf("%d", &n);
	int a[200];
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n; i++) {
		for (j = 1; j < a[i]; j++) {
			if (a[i] % j == 0)
				sum += j;
		}
		if (sum == a[i])
			printf("YES\n");
		else
			printf("NO\n");
		sum = 0;
	}

	return 0;
}