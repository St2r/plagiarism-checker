"""
2022-03-26 14:21:48
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 2092 KB
Accepted | 1 * (35 / 100) | 3 ms | 2096 KB
Accepted | 1 * (60 / 100) | 2 ms | 2064 KB

"""

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


int main() {
	int n, a, sum = 0, flag[100] = {0};
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		for (int j = 1; j < sqrt(a + 1); j++) {
			if (a % j == 0)
				sum += (j + a / j);
		}
		if (sum == 2 * a)
			flag[i] = 1;
		else
			flag[i] = 0;
		sum = 0;
	}
	for (int k = 0; k < n; k++) {
		if (flag[k] == 0)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}