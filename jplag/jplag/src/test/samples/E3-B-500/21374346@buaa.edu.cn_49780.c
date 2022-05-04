"""
2022-03-26 13:14:20
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 2048 KB
Accepted | 1 * (35 / 100) | 3 ms | 2120 KB
Accepted | 1 * (60 / 100) | 35 ms | 2112 KB

"""

#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	int a;
	while (n--) {
		scanf("%d", &a);
		int i, sum = 0, cnt = 0, k;
		for (i = 1; i <= sqrt(a); i++) {
			for (k = i ; k <= a; k++) {
				if (i * k == a)
					cnt = i + k;
			}
			sum += cnt;
			cnt = 0;
		}
		if (sum == a * 2)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}