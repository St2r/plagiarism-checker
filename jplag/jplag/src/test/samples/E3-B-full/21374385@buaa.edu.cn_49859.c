"""
2022-03-26 09:08:01
AC
1.0
Accepted | 1 * (5 / 100) | 7 ms | 1660 KB
Accepted | 1 * (35 / 100) | 7 ms | 1720 KB
Accepted | 1 * (60 / 100) | 22 ms | 1660 KB


"""

#include <stdio.h>
#include<math.h>
int main()
{
	int n, i,j, x,sum;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &x);
		sum = 0;
		for (j = 1; j <= x / 2; j++) {
			if (x % j == 0) {
				sum += j;
			}
		}
		if (sum == x) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}

	}
	
	return 0;
}