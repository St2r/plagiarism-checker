"""
2022-03-26 21:56:46
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1684 KB
Accepted | 1 * (4 / 10) | 2 ms | 1684 KB

"""

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	double a = 1;
	double e = 1;
	for (int i = 1; i <= n && i <= 17; i++) {
		for (int j = 1; j <= i; j++) {
			a = a * 1 / j;
		}
		e += a;
		a = 1;

	}

	printf("%.14f", e);







	return 0;
}