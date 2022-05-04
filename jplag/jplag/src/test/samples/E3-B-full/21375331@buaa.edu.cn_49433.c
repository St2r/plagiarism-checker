"""
2022-03-26 15:14:55
AC
1.0
nan
"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	while (~scanf("%d", &n)) {
		int sum = 0;
		for (int i = 1;i <= (int)sqrt(n);i++) {
			if (i * (n / i) == n) {
				sum += i;
				if (n / i != n) {
					sum += n / i;
				}
			}
		}
		if (sum == n) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}