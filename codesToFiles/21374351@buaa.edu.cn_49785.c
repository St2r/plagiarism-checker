"""
2022-03-26 15:34:29
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1696 KB
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 7 ms | 1624 KB
Accepted | 1 * (4 / 10) | 2 ms | 1692 KB

"""

#include <stdio.h>

int main() {
	unsigned n, i;

	double a, t, s[17]	;
	a = 1;
	i = 0;
	scanf("%d", &n);
	if (n >= 17)
		n = 17;
	while (n > 0) {
		s[i] = 1;
		for (t = n; t > 0; t--) {
			s[i] = s[i] * 1 / t;

		}
		a = a + s[i];
		i++;
		n--;
	}
	printf("%.14lf", a);


}