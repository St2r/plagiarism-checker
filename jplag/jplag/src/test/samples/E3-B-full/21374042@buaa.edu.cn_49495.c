"""
2022-03-26 14:41:05
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1632 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 4 ms | 1552 KB

"""

#include <stdio.h>
#include <math.h>

int main() {
	int n, a[101], b = 0;
	int c[101];
	scanf("%d\n", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", & a[i]);
		for (int j = 1; j < a[i] ; j++) {


			if (a[i] % j == 0) {
				b += j;
			}

		}

		if (b == a[i]) {
			c[i] = 1 ;
			b = 0;
		} else {
			c[i] = 0 ;
			b = 0;
		}

	}
	for (int i = 1; i <= n; i++) {
		if (c[i] == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;


}