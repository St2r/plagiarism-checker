"""
2022-03-26 09:14:05
AC
1.0
Accepted | 1 * (1 / 10) | 7 ms | 1604 KB
Accepted | 1 * (1 / 10) | 3 ms | 1696 KB
Accepted | 1 * (2 / 10) | 12 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1676 KB
Accepted | 1 * (4 / 10) | 12 ms | 1700 KB

"""

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main() {
	int n;
	double e = 1, a = 1;
	scanf("%d", &n);
	if (n > 17)
		n = 17;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			a *= j;
		a = 1.0 / a;
		e += a;
		a = 1;
	}
	printf("%.14f", e);

	return 0;
}