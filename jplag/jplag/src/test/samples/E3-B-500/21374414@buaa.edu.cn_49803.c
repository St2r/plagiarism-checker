"""
2022-03-29 13:10:36
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1732 KB
Accepted | 1 * (35 / 100) | 1 ms | 1676 KB
Accepted | 1 * (60 / 100) | 3 ms | 1572 KB

"""

#include <stdio.h>

int main() {
	int i, n, x;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &x);
		int a = 0;
		for (int m = 1; m < x; m++) {
			if ((x % m) == 0)
				a += m;
		}
		if (x == a)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}