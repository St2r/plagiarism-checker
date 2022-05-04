"""
2022-03-27 17:07:57
AC
1.0
Accepted | 1 * (3 / 5) | 3 ms | 1628 KB
Accepted | 1 * (1 / 5) | 3 ms | 1544 KB
Accepted | 1 * (1 / 5) | 3 ms | 1636 KB
B

"""

#include <stdio.h>

int main() {
	int n, a, sum = 0;
	scanf("%d", &n);
	while (~(scanf("%d", &a))) {
		for (int i = 1; i <= a/2; i++) {
			if (a % i == 0)
				sum += i;
			else
				sum = sum;
		}
		if (sum == a)
			printf("YES\n");
		else
			printf("NO\n");
		sum = 0;
	}

	return 0;
}