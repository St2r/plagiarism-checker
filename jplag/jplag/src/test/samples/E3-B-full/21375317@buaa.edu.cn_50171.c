"""
2022-03-27 21:10:50
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1624 KB
Accepted | 1 * (1 / 4) | 3 ms | 1528 KB
Accepted | 1 * (1 / 4) | 3 ms | 1692 KB
Accepted | 1 * (1 / 4) | 2 ms | 1556 KB

"""

# include <stdio.h>
# include <math.h>

int main() {
	int n, m = 0, a[101] = {0}, b[101] = {0}, c[101] = {0};
	scanf("%d", &n);
	int i = 0;

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++) {
		m = (int)(sqrt(a[i]));

		for (int j = 1; j <= m; j++) {
			if (a[i] % j == 0) {
				b[j] = j;
				c[j] = a[i] / j;
			}
		}

		int sum = 0;

		for (int j = 1; j <= m; j++) {
			sum += (b[j] + c[j]);
		}

		if (sum == 2 * a[i])
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}