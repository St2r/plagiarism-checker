"""
2022-03-26 08:09:26
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1984 KB
Accepted | 1 * (35 / 100) | 3 ms | 2092 KB
Accepted | 1 * (60 / 100) | 3 ms | 1908 KB

"""

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main() {
	int n, x, sum = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		for (int j = 2; j <= sqrt(x); j++) {
			if (x % j == 0)
				sum += (j + x / j);
		}
		if (sum == x)
			printf("YES\n");
		else
			printf("NO\n");
		sum = 1;
	}

	return 0;
}