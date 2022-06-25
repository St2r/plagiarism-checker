"""
2022-03-26 13:37:06
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (1 / 10) | 3 ms | 1644 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1708 KB
Accepted | 1 * (4 / 10) | 2 ms | 1724 KB

"""

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int n, i;

	long a = 1;

	double e=1;

	scanf("%d", &n);
	if (n > 18) {
		n = 18;
	}
	for (i = 1; i <= n; i++) {
		a *= i;	
		e += 1.0 / a;
	}

	printf("%.14lf", e);

	return 0;
}