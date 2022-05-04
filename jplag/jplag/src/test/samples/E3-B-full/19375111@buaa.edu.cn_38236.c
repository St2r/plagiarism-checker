"""
2022-03-26 10:24:33
AC
1.0
Accepted | 1 * (5 / 100) | 11 ms | 1564 KB
Accepted | 1 * (35 / 100) | 11 ms | 1584 KB
Accepted | 1 * (60 / 100) | 18 ms | 1572 KB

"""

#include <math.h>
#define M 100
//#define eps 1e-9

int main() {
	int n;
	int x[M];
	int i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &x[i]);
		int y = 0;
		for (j = 1; j < x[i]; j++) {
			if (x[i] % j == 0) {
				y = y + j;
			}
		}
		if (y == x[i]) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
}