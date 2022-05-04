"""
2022-03-26 13:44:40
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1644 KB
Accepted | 1 * (35 / 100) | 2 ms | 1708 KB
Accepted | 1 * (60 / 100) | 4 ms | 1640 KB

"""

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
	int n;
	int *a;
	int *b;
	scanf("%d", &n);
	a = (int *)malloc(sizeof(int) * n);
	b = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		b[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] <= 5)
			continue;
		else {
			int index = 1;
			for (int j = 2; j < a[i]; j++) {
				if (a[i] % j == 0)
					index += j;
			}
			if (index == a[i])
				b[i] = 1;
		}
	}
	for (int i = 0; i < n; i++) {
		if (i != 0)
			printf("\n");
		if (b[i] == 0)
			printf("NO");
		if (b[i] != 0)
			printf("YES");
	}
	free(a);
	free(b);
	return 0;
}