"""
2022-03-26 14:31:23
AC
1.0
Accepted | 1 * (1 / 10) | 6 ms | 1656 KB
Accepted | 1 * (1 / 10) | 3 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1624 KB
Accepted | 1 * (4 / 10) | 2 ms | 1612 KB

"""

#include <stdio.h>
#include <math.h>

int main() {
	int n;
	double a = 1, b = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		a *= i;
		b += 1.0 / a;

		if (a > 100000000000000) {
			break;
		}
	}

	printf("%.14f", b);


	return 0;


}