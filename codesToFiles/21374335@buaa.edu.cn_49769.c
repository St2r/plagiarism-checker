"""
2022-03-26 20:09:28
AC
1.0
Accepted | 1 * (1 / 8) | 23 ms | 1620 KB
Accepted | 1 * (1 / 8) | 15 ms | 1640 KB
Accepted | 1 * (1 / 8) | 15 ms | 1620 KB
Accepted | 1 * (1 / 8) | 23 ms | 1708 KB
Accepted | 1 * (1 / 8) | 15 ms | 1704 KB
Accepted | 1 * (1 / 8) | 8 ms | 1660 KB
Accepted | 1 * (1 / 8) | 9 ms | 1708 KB
Accepted | 1 * (1 / 8) | 9 ms | 1616 KB
KB

"""

#include <stdio.h>
#include <math.h>

int main() {
	int n;
	double a[17], e = 1.0;
	scanf("%d", &n);
	a[0] = 1;
	for (int i = 1; i < n + 1; i++) {
		a[i] = (1.0 * a[i - 1]) / (1.0 * i);
		e += a[i];
	}
	printf("%.14lf", e);
	return 0;
}