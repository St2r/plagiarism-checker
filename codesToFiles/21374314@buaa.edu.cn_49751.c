"""
2022-03-28 20:47:05
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (1 / 10) | 0 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1716 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 1 ms | 1688 KB

"""

#include <stdio.h>
double tu(double n) 
{
	double k = 1;
	for (int j = 1; j<= n ; j++)
 {
		k =  k / j;
	}
	return k;
}
int main() {
	int n;
	scanf("%d", &n);
	double sum = 1;
	int i;
	for (i = 1; i <= n; i++) {
		sum += tu(i);
		if (tu(i) < 1e-14) {
			break;
		}
	}
	printf("%.14f", sum);
	return 0;
}