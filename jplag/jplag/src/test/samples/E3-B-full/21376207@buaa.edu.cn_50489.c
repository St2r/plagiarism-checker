"""
2022-03-29 23:05:22
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1680 KB
Accepted | 1 * (35 / 100) | 1 ms | 1652 KB
Accepted | 1 * (60 / 100) | 2 ms | 1584 KB

"""

#include <stdio.h>
#include <math.h>

int main() {
	int n, i = 0;
	int x;
	int sum = 0;
	scanf("%d", &n);
	while (i < n) {
		scanf("%d", &x);
		for (int in = x - 1; in > 0; in--) {
			if (x % in == 0) {
				sum = sum + in;
			}
		}
		if (sum == x) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
		i++;
		sum = 0; //清零！
	}

	return 0;
}