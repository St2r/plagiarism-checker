"""
2022-03-26 14:17:28
AC
1.0
Accepted | 1 * (5 / 100) | 13 ms | 1692 KB
Accepted | 1 * (35 / 100) | 14 ms | 1556 KB
Accepted | 1 * (60 / 100) | 17 ms | 1692 KB

"""

#include <stdio.h>

int main() {
	int a[1000], n, i, x,  sum;
	scanf("%d", &n);
	i = 0;
	while (i < n) {
		scanf("%d", &a[i]);
		x = 1;
		sum = 0;
		while (x < a[i]) {
			if (a[i] % x == 0)
				sum = sum + x;
			x++;
		};
		if (sum == a[i])
			printf("YES\n");
		else
			printf("NO\n");
		i++;
	}
}