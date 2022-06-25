"""
2022-03-27 15:03:37
WA
0.5
Accepted | 1 * (1 / 4) | 2 ms | 1660 KB
Accepted | 1 * (1 / 4) | 6 ms | 1708 KB
Wrong Answer | 0 * (1 / 4) | 10 ms | 1712 KB
Wrong Answer | 0 * (1 / 4) | 2 ms | 1708 KB

"""

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int i, j;
	double sum = 1.0;
	for (i = 1; i <= n; i++) {
		int x = 1;
		for (j = 1; j <= i; j++) {

			x *= j;


		}
		sum += 1.0 / x;
	}
	printf("%.14f", sum);
	return 0;




}