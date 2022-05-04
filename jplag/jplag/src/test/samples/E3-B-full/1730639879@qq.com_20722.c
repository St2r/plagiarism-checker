"""
2022-03-28 19:49:56
TLE
0.0
Time Limit Exceed | 0 * (5 / 100) | 1000 ms | 0 KB
Time Limit Exceed | 0 * (35 / 100) | 1000 ms | 0 KB
Time Limit Exceed | 0 * (60 / 100) | 1000 ms | 0 KB

"""

#include <stdio.h>

int main() {
	int n, x, sum;
	scanf("%d", &n);
	while (n--) {
		sum = 0;
		scanf("%d", &x);
		while (getchar() != '\n');
		for (int i = 1; i < x; i++) {
			if (x % i == 0) {
				sum += i;
			}
		}
		if (sum == x)
			printf("YES\n");
		else
			printf("NO\n");

	}

	return 0;
}