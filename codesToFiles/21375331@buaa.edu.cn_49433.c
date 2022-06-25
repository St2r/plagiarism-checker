"""
2022-03-26 15:40:53
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1728 KB
Accepted | 1 * (2 / 10) | 2 ms | 1604 KB
Accepted | 1 * (4 / 10) | 2 ms | 1620 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	double e = 1.0;
	double sum = 1;
	if (n <= 17) {
		for (int i = 1;i <= n;i++) {
			sum *= i;
			e += 1.0 / sum;
		}
	}
	else {
		for (int i = 1;i <= 17;i++) {
			sum *= i;
			e += 1.0 / sum;
		}
	}
	printf("%.14f", e);
	return 0;
}