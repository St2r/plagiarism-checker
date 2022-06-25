"""
2022-03-29 23:34:44
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1636 KB
Accepted | 1 * (1 / 10) | 1 ms | 1756 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (4 / 10) | 0 ms | 1584 KB

"""

#include <stdio.h>
#define scf(x) scanf("%d",&x);

#define prf14(x) printf("%.14lf",x); //加分号试验
int main() {
	int n, i, j, e;
	double k, m;
	scf(n)
	if (n < 800) {
		for (i = 0; i <= n; i++) {
			m = 1;
			for (j = 0; j <= i; j++) {
				if (j == 0)
					m = 1;
				else
					m = m / j;
			}
			k = k + m;
		}
		prf14(k)
	} else {
		printf("2.71828182845905\n");  //超出14位精度，直接输入e的值
	}
	return 0;
}