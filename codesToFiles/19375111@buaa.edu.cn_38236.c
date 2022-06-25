"""
2022-03-26 19:01:17
TLE
0.6
Accepted | 1 * (1 / 10) | 2 ms | 1644 KB
Accepted | 1 * (1 / 10) | 3 ms | 1684 KB
Accepted | 1 * (2 / 10) | 5 ms | 1588 KB
Accepted | 1 * (2 / 10) | 6 ms | 1692 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 824 KB

"""

#include <stdio.h>

int main() {
	int n;
	int i, j;
	double a = 1.0;
	double c = 1.0;
	double s;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		s = 1.0;
		for (j = 1; j <= i; j++) {
			s = s * j;
		}
		//printf("%lf\n", 1 / s);
		c = c + 1 / s;
	}
	printf("%.14f", c);
}