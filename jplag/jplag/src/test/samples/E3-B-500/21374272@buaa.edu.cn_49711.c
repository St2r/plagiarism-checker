"""
2022-03-27 11:29:34
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1552 KB
Accepted | 1 * (35 / 100) | 2 ms | 1632 KB
Accepted | 1 * (60 / 100) | 4 ms | 1684 KB

"""

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main() {
	int n, sigma = 0, a[101],  i = 0, j1 = 0, j2 = 1;
	scanf("%d", &n);
	while (i < n) {
		scanf("%d", &a[i]);
		i++;
	}

	while (j1 < n) {
		sigma = 0;
		j2 = 1;
		while (j2 < a[j1]) {
			if (a[j1] % j2 == 0)
				sigma = sigma + j2;
			j2++;
		}

		if (sigma == a[j1])
			printf("YES\n");
		else
			printf("NO\n");
		j1++;

	}


	return 0;
}