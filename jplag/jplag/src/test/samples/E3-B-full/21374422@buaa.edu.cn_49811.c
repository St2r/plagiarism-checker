"""
2022-03-26 16:14:54
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1716 KB
Accepted | 1 * (35 / 100) | 11 ms | 1700 KB
Accepted | 1 * (60 / 100) | 12 ms | 1504 KB

"""

#include<stdio.h>
int main(void) {
	int a[10000], i, n;
	scanf("%d", &n);
	for (i = 0;i < n;i++) {
		scanf("%d", &a[i]);
		if (a[i] == 6 || a[i ]== 28 || a[i] == 496 || a[i] == 8128) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}