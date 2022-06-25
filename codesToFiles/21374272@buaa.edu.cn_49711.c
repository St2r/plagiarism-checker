"""
2022-03-27 12:32:17
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1604 KB
Accepted | 1 * (4 / 10) | 2 ms | 1604 KB

"""

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main() {
	int i = 1, j = 0, n;
	double jie = 1.0, answ = 1.0;
	scanf("%d", &n);
	if (n >= 17) {
		while (i <= 17) {

			while (j < i) {
				jie = (j + 1) * jie;
				j++;
			}
			answ = answ + 1.0 / jie;
			i++;
		}
		printf("%.14f", answ);
	}
	if (n <= 16) {
		while (i <= n) {

			while (j < i) {
				jie = (j + 1) * jie;
				j++;
			}
			answ = answ + 1.0 / jie;
			i++;
		}
		printf("%.14f", answ);
	}




	return 0;
}