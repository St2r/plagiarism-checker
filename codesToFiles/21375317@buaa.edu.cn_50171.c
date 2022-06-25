"""
2022-03-27 21:04:33
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1476 KB
Accepted | 1 * (35 / 100) | 2 ms | 1624 KB
Accepted | 1 * (60 / 100) | 3 ms | 1604 KB



"""

# include <stdio.h>

int main() {
	long long int n, i;
	double part, a = 1, e = 2;
	scanf("%lld", &n);

	if (n == 1)
		printf("%.14lf", 2 * a);
	else if (n == 2)
		printf("%.14lf", 2.5);
	else {
		double m = 1;

		for (i = 3; i <= n + 1; i++) {
			m *= (i - 1);
			part = 1.0 / m;
			e += part;
		}

		printf("%.14lf", e);
	}

	return 0;
}