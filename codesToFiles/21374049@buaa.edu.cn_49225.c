"""
2022-03-26 13:50:44
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1680 KB
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (4 / 10) | 2 ms | 1616 KB

"""

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	double sum = 1;
	if (n < 18) {
		double ch = 1;
		for (int i = 1; i <= n; i++) {
			ch = ch * (1.0 / i);
			sum = sum + ch;
		}
		printf("%.14f", sum);
	} else {
		double ch = 1;
		for (int i = 1; i <= 18; i++) {
			ch = ch * (1.0 / i);
			sum = sum + ch;
		}
		printf("%.14f", sum);
	}
	return 0;
}