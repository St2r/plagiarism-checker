"""
2022-03-29 23:50:28
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1632 KB
Accepted | 1 * (1 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 0 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1640 KB
Accepted | 1 * (4 / 10) | 1 ms | 1756 KB

"""

#include <stdio.h>
#include <math.h>

int main() {
	int n;
	double i = 1, j = 1; //
	double sumi1 = 1, sumi2 = 1, sum = 1;
	scanf("%d", &n);
	while (i <= n) {
		while (j <= i) {
			sumi1 = sumi1 * j;
			j++;
		}
		sumi2 = 1.0 / sumi1; //1.0
		if (sumi2 < 1E-15) {
			i = n + 1;
		}
		sum = sum + sumi2;
		i++;
		j = 1; //救命，归零
		sumi1 = 1; //呜呜都要清零哦
		sumi2 = 1; //qingling!!
	}
	printf("%.14f", sum);
	return 0;
}