"""
2022-03-26 12:14:16
AC
1.0
Accepted | 1 * (1 / 4) | 17 ms | 1680 KB
Accepted | 1 * (1 / 4) | 10 ms | 1628 KB
Accepted | 1 * (1 / 4) | 2 ms | 1648 KB
Accepted | 1 * (1 / 4) | 3 ms | 1648 KB

"""

#include <stdio.h>
#define eps 1e-16

int main() {
	int n, a = 1;
	double sum = 1.0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		a *= i;
		if (1.0 / a > -eps && 1.0 / a < eps)
			break;
		sum += 1.0 / a;
	}

	printf("%.14f", sum);

	return 0;
}