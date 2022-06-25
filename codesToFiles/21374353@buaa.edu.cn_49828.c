"""
2022-03-27 10:49:02
AC
1.0
Accepted | 1 * (3 / 5) | 2 ms | 1708 KB
Accepted | 1 * (1 / 5) | 2 ms | 1660 KB
Accepted | 1 * (1 / 5) | 8 ms | 1592 KB

"""

#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	long long n,i,j;
	scanf("%lld", &n);
	double sum=1.0;
	if (n < 50) {
		for (i = 1; i <= n; i++) {
			double a= 1.0;
			for (j = 1; j <=i; j++) {
				a = a / j;
			}
			sum += a;
		}
	}
	else {
		for (i = 1; i <= 50; i++) {
			double a = 1.0;
			for (j = i; j > 1; j--) {
				a = a/ j;
			}
			sum += a;
		}
	}
	printf("%.14f", sum);
	return 0;
}