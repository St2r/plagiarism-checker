"""
2022-03-26 12:29:42
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1528 KB
Accepted | 1 * (35 / 100) | 5 ms | 1636 KB
Accepted | 1 * (60 / 100) | 12 ms | 1588 KB


"""

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#define ll long long
#define maxn +1145141919
#define eps 1e-10

int main(void) {
	int n, num, i, j, k, sum;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &num);
		sum = 0;
		for (j = 1; j < num; j++) {
			if (num % j == 0)
				sum += j;
		}
		if (num == sum)
			printf("YES\n");
		else
			printf("NO\n");
	}


	return 0;
}