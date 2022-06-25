"""
2022-03-26 14:31:35
AC
1.0
Accepted | 1 * (1 / 10) | 6 ms | 1656 KB
Accepted | 1 * (1 / 10) | 3 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1624 KB
Accepted | 1 * (4 / 10) | 2 ms | 1612 KB

"""

#include<stdio.h>
int main()
{
	long long n;
	double e=1;
	scanf("%lld", &n);
	long long i, j, k=1;
	for (i = 1;i <= n;i++) {
		k = k * i;
		if (i == 64) {
			break;
		}
		e += 1 / (1.0 * k);
	}
	printf("%.14lf", e);
}