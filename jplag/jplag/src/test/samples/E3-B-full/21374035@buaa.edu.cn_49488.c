"""
2022-03-26 12:36:53
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1548 KB
Accepted | 1 * (35 / 100) | 2 ms | 1540 KB
Accepted | 1 * (60 / 100) | 11 ms | 1640 KB

"""

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int num;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		sum = 0;
		for (int  j = 1; j < num; j++) {
			if (num % j == 0) {
				sum += j;
			}
		}
		if (num == sum)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}