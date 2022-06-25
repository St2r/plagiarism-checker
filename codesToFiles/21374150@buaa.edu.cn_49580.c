"""
2022-03-26 13:38:25
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1644 KB
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1708 KB
Accepted | 1 * (2 / 10) | 3 ms | 1648 KB
Accepted | 1 * (4 / 10) | 2 ms | 1640 KB

"""

#include <stdio.h>
int main() {
	int n = 0;
	scanf("%d", &n);
	double ret = 1.0;
	double num = 1;
	if (n > 17)
		n = 17;
	for (int i = 1; i <= n; i++) {
		num *= i;
		ret = ret + 1.0 / num;
	}
	printf("%.14lf", ret);
	return 0;
}