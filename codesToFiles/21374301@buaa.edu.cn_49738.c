"""
2022-03-26 09:14:46
AC
1.0
Accepted | 1 * (1 / 10) | 12 ms | 1672 KB
Accepted | 1 * (1 / 10) | 16 ms | 1668 KB
Accepted | 1 * (2 / 10) | 18 ms | 1704 KB
Accepted | 1 * (2 / 10) | 14 ms | 1652 KB
Accepted | 1 * (4 / 10) | 12 ms | 1600 KB

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