"""
2022-03-28 23:16:27
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1736 KB
Accepted | 1 * (35 / 100) | 0 ms | 1688 KB
Accepted | 1 * (60 / 100) | 3 ms | 1732 KB

"""

#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n, a[102], sum ;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		sum = 0.0;
		for (int j = 1; j < a[i]; j++) {
			if (a[i] % j == 0) {
				sum += j;
			}
		}
			if (a[i] == sum) {
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		
	}
	return 0;
}