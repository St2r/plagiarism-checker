"""
2022-03-28 21:52:24
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (2 / 10) | 0 ms | 1748 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (4 / 10) | 1 ms | 1656 KB

"""

#include <stdio.h>

int main() {
	int n;
	double e1 = 1, e2;
	scanf("%d", &n);
	int x = 1;
	for (int i = 1; i <= n; i++) {
		double a = 1;
		for (int m = 1 ; m <= x; m++) {
			a *= m;
		}
		e2 = e1;
		e1 += 1 / a;
		if (e1 == e2)
			break;
		x++;
	}
	printf("%.14f", e1);
	return 0;
}