"""
2022-03-28 07:50:07
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1680 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include <stdio.h>

int main() {
	int n, o = 0;
	double w = 1, e = 1, m = 1;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {

		w = w * i;

		if ((i / w) < 1e-14) {
			o = i;
			break;
		}
	}

	if (o != 0 && n > o) {
		for (int i = 1; i <= o; i++, m = 1) {

			for (int j = 1; j <= i; j++) {

				m = j * m;
			}

			e = e + 1 / m;
		}

		printf("%.14f", e);
	} else {
		for (int i = 1; i <= n; i++, m = 1) {

			for (int j = 1; j <= i; j++) {

				m = j * m;
			}

			e = e + 1 / m;
		}

		printf("%.14f", e);
	}

	return 0;
}