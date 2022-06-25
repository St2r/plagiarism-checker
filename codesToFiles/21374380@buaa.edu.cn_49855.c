"""
2022-03-26 11:57:14
AC
1.0
Accepted | 1 * (1 / 3) | 2 ms | 1624 KB
Accepted | 1 * (1 / 3) | 2 ms | 1640 KB
Accepted | 1 * (1 / 3) | 358 ms | 1596 KB

"""

#include <stdio.h>

int main() {
	int n;
	double result = 1;
	scanf("%d", &n);
	int a = 1;
	for (int i = 1; i <= n; i++) {
		a = 1;
		for (int j = 1; j <= i; j++) {
			a = a * j;
		}
		result += 1.0 / a;
	}
	printf("%.14lf", result);
}