"""
2022-03-28 21:49:02
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1664 KB
Accepted | 1 * (35 / 100) | 1 ms | 1580 KB
Accepted | 1 * (60 / 100) | 3 ms | 1732 KB

"""

#include <stdio.h>

int main() {
	int n, x, i, a, sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		sum = 0;
		scanf("%d", &x);
		if(x==1){
			printf("NO\n");
			continue;
		}
		for (a = 1; a < x; a++) {
			if (x % a == 0) {
				sum += a;
			}
		}

		if (sum == x) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}