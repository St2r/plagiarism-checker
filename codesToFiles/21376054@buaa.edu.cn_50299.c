"""
2022-03-27 22:07:50
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (1 / 10) | 2 ms | 1680 KB
Accepted | 1 * (2 / 10) | 2 ms | 1680 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1716 KB

"""

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n, i, j;
	double tmp=1.0,e = 1.0;
	scanf("%d", &n);

	if (n > 19) {
		n = 20;
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			tmp *= j;
		}
		e += 1.0 / tmp;
		tmp = 1.0;
	}

	printf("%.14lf", e);
	return 0;
}