"""
2022-03-26 11:59:52
AC
1.0
Accepted | 1 * (1 / 10) | 5 ms | 1596 KB
Accepted | 1 * (1 / 10) | 12 ms | 1696 KB
Accepted | 1 * (2 / 10) | 13 ms | 1668 KB
Accepted | 1 * (2 / 10) | 2 ms | 1640 KB
Accepted | 1 * (4 / 10) | 11 ms | 1640 KB

"""

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define LL long long
#define eps 1e-10
#define U unsigned

int main() {
	int n, i, j;
	double e = 0, a = 1;
	scanf("%d", &n);
	if (n <= 20) {
		for (i = 1; i <= n; i++) {
			a = 1;
			for (j = i; j >= 1; j--) {
				a = 1.0 * a * j;
			}
			e = e + 1.0 / a;
		}
		printf("%.14f", e + 1);
	} else {
		for (i = 1; i <= 20; i++) {
			a = 1;
			for (j = i; j >= 1; j--) {
				a = 1.0 * a * j;
			}
			e = e + 1.0 / a;
		}
		printf("%.14f", e + 1);
	}
	return 0;
}