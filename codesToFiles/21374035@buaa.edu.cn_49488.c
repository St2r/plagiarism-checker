"""
2022-03-26 10:13:36
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1652 KB
Accepted | 1 * (1 / 4) | 2 ms | 1708 KB
Accepted | 1 * (1 / 4) | 2 ms | 1680 KB
Accepted | 1 * (1 / 4) | 11 ms | 1612 KB

"""

#include <stdio.h>
#define eps 1e-5

int main() {
	int n;
	scanf("%d", &n);
	double e = 1;
	long long d = 1;
	double sum = 1;
	for (int i = 1; sum > eps, i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			d *= j;
		}
		sum = 1.0 / d;
		e = e + sum;
		d = 1;
	}
	printf("%.14f", e);
	return 0;
}