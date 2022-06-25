"""
2022-03-26 17:01:05
AC
1.0
Accepted | 1 * (1 / 5) | 2 ms | 1724 KB
Accepted | 1 * (1 / 5) | 16 ms | 1632 KB
Accepted | 1 * (1 / 5) | 14 ms | 1724 KB
Accepted | 1 * (1 / 5) | 2 ms | 1728 KB
Accepted | 1 * (1 / 5) | 7 ms | 1692 KB

"""

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


int main() {
	int m = 1, n;
	double e = 1;
	scanf("%d", &n);
	for (int i = 1; i < n + 1; i++) {
		m *= i;
		e += (double)1 / m;
		if (i > 17)
			break;
	}
	printf("%.14f", e);

	return 0;
}