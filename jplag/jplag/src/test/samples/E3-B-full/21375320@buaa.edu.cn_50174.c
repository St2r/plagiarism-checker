"""
2022-03-27 00:50:41
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 3 ms | 1656 KB
Accepted | 1 * (60 / 100) | 4 ms | 1600 KB

"""

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int x, n;
	scanf("%d", &n);

	int i, j, sum = 0;
	for (i = 0; i < n; i++) {
			scanf("%d", &x);
			for (j = 1; j < x; j++) {
				if ((x % j) == 0) {
					//printf("%d", j);
					sum += j;
				}
			}

			if (sum == x) {
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}

			sum = 0;
	}
	
	return 0;
}