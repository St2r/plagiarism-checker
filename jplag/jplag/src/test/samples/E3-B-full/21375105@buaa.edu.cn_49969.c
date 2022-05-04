"""
2022-03-29 16:35:28
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1568 KB
Accepted | 1 * (35 / 100) | 1 ms | 1736 KB
Accepted | 1 * (60 / 100) | 3 ms | 1660 KB

"""

#include<stdio.h>
int main() {
	int n, s = 0;
	int a[100];
	scanf("%d", &n);
	for (int j = 0; j < n; j++) {
		scanf("%d", &a[j]);
		for (int i = 1; i < a[j]; i++) {
			if (a[j] % i == 0) {
				s = s + i;
			}
		}
		if (s == a[j]) {
			s = 0;
			printf("YES\n");
		} else {
			s = 0;
			printf("NO\n");
		}

	}

}