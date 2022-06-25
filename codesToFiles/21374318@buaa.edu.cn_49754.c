"""
2022-03-29 21:59:38
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 0 ms | 1716 KB
Accepted | 1 * (4 / 10) | 1 ms | 1680 KB

"""

#include <stdio.h>

double tu(double n) {
	int o;
	double k = 1;
	for (o = 1; o <= n ; o++) {
		k =  k / o;
	}
	return k;
}

int main() {
	int n;
	scanf("%d", &n);
	double sum = 1;
	int i;
	for (i = 1; i <= n; i++) {
		sum += tu(i);
		if (tu(i) < 1e-14) {
			break;
		}
	}
	printf("%.14f", sum);
	return 0;
}