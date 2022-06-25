"""
2022-03-29 00:17:41
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 0 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 0 ms | 1636 KB

"""

#include <stdio.h>
int main() {
	long long n, i, j = 1;
	double s = 1.00000000000000;
	scanf("%lld", &n);
	if (n>= 20)
		n = 20;
	for (i = 1; i <= n; i++)
	{
		
		j = j * i;
		s += (1.00000000000000) / j;
	}
	printf("%.14f", s);

	return 0;
}