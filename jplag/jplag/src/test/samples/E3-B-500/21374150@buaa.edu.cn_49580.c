"""
2022-03-26 09:10:10
AC
1.0
Accepted | 1 * (5 / 100) | 16 ms | 1944 KB
Accepted | 1 * (35 / 100) | 17 ms | 1944 KB
Accepted | 1 * (60 / 100) | 11 ms | 1932 KB

"""

#include <stdio.h>
#include <math.h>
int main() {
	int n;
	scanf("%d", &n);
	int x;
	for (int i = 1; i <= n; i++) {
		int arr[10005] = {0};
		scanf("%d", &x);
		for (int i = 1; i <= sqrt(x); i++) {
			if (i == 1)
				arr[i]++;
			if (i != 1 && i != sqrt(x)) {
				int ret = x % i;
				if (ret == 0) {
					arr[i]++;
					int num = x / i;
					arr[num]++;
				}
			}
			if (i == sqrt(x)) {
				int k = sqrt(x);
				if (k * k == x) {
					arr[k]++;
				}

			}
		}
		int count = 0;
		for (int i = 0; i <= x; i++) {
			if (arr[i] != 0)
				count = count + i;
		}
		if (count == x)
			printf("YES\n");
		else
			printf("NO\n");

	}
	return 0;
}