"""
2022-03-28 18:34:10
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1552 KB
Accepted | 1 * (35 / 100) | 2 ms | 1660 KB
Accepted | 1 * (60 / 100) | 5 ms | 1664 KB


"""

#include <stdio.h>

int main () {
	int n;
	scanf("%d", &n);
	int  sum;
	double sum1 = 1;
	for (int i = 1; i <= n; i++) {
		if (i > 16)
			break;
		sum = 1;
		for (int k = i; k > 0; k--) {
			sum = sum * k;
		}
		sum1 = sum1 + 1.0 / sum;
	}
	printf("%.14f", sum1);
	return 0;
}