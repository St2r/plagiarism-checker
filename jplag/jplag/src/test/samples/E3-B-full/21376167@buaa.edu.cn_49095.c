"""
2022-03-26 08:22:00
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1636 KB
Accepted | 1 * (35 / 100) | 12 ms | 1660 KB
Accepted | 1 * (60 / 100) | 12 ms | 1656 KB


"""

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define LL long long
#define eps 1e-10
#define U unsigned

int main() {
	int n, x, i = 0;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &x);
		if (x == 6 || x == 28 || x == 496 || x == 8128)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}