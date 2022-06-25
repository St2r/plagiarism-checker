"""
2022-03-26 13:50:53
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1724 KB
Accepted | 1 * (2 / 10) | 2 ms | 1624 KB
Accepted | 1 * (2 / 10) | 2 ms | 1736 KB
Accepted | 1 * (4 / 10) | 2 ms | 1692 KB

"""

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
	int n;
	double e = 1.0;
	scanf("%d", &n);
	long long int factorial = 1;
	if (n > 40)
		n = 40;
	for (int i = 1; i <= n; i++) {
		factorial *= i;
		e += (1.0 / factorial);
	}
	printf("%.14f", e);
	return 0;
}