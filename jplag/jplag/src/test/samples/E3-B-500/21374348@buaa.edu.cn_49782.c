"""
2022-03-26 12:40:54
AC
1.0
Accepted | 1 * (5 / 100) | 9 ms | 1716 KB
Accepted | 1 * (35 / 100) | 9 ms | 1608 KB
Accepted | 1 * (60 / 100) | 11 ms | 1712 KB

"""

#include <stdio.h>

int main() {
	int n, x[1000], i, j, count = 0, result;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &x[i]);
		for (j = 1, count = 0; j < x[i]; j++) {
			result = x[i] % j;
			if (result == 0) {
				count = count + j;
			}
		}
		if (count == x[i]) {
			printf("YES\n");
		} else
			printf("NO\n");
	}



	return 0;




}