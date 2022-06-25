"""
2022-03-26 09:22:41
AC
1.0
Accepted | 1 * (1 / 10) | 15 ms | 1572 KB
Accepted | 1 * (1 / 10) | 2 ms | 1572 KB
Accepted | 1 * (2 / 10) | 13 ms | 1572 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (4 / 10) | 14 ms | 1628 KB

"""

#include <stdio.h>
#include<math.h>
int main()
{
	long long n, i;
	double sum = 2.0, fac = 1.0;
	scanf("%lld", &n);
	for (i = 2; i <= n; i++) {
		fac *= 1.0 / i;
		sum += fac;
		if (fac < 10e-15) {
			break;
		}
	}
	printf("%.14f", sum);
	return 0;
}