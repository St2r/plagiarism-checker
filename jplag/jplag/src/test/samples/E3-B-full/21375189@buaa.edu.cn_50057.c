"""
2022-03-26 09:24:50
AC
1.0
Accepted | 1 * (5 / 100) | 10 ms | 1704 KB
Accepted | 1 * (35 / 100) | 12 ms | 1692 KB
Accepted | 1 * (60 / 100) | 18 ms | 1648 KB

"""

#include <stdio.h>

int main() {

	int n, i, x, sum = 0, p = 1, a[10000] = {1};
	scanf("%d", &n);

	while (n--) {
		scanf("%d", &x);

		for (i = 2; i < x; i++) {
			if (x % i == 0) {
				a[p] = i;
				++p;
			}

		}

		for (i = 0; i < p; i++) {
			sum = sum + a[i];
		}


		if (sum == x)
			printf("YES\n");
		else
			printf("NO\n");

		sum = 0;
		p = 1;
		i = 2;
	}

	return 0;
}