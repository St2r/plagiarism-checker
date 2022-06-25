"""
2022-03-26 13:29:10
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1724 KB
Accepted | 1 * (1 / 10) | 10 ms | 1620 KB
Accepted | 1 * (2 / 10) | 11 ms | 1708 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (4 / 10) | 2 ms | 1660 KB

"""

#include <stdio.h>

int main() {
	double n, e = 1, sum = 1;
	scanf("%lf", &n);
	if (n >= 20)
		n = 20;
	for (double i = 1; i <= n; i++) {
		sum = sum * i;
		e = e + 1 / sum;

	}

	printf("%.14lf\n", e);
}