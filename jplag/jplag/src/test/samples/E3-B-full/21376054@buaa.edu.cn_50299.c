"""
2022-03-27 15:58:12
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1616 KB
Accepted | 1 * (1 / 4) | 3 ms | 1628 KB
Accepted | 1 * (1 / 4) | 3 ms | 1564 KB
Accepted | 1 * (1 / 4) | 4 ms | 1708 KB

"""

#include<stdio.h>

int main()
{
	int n,i=0;
	int a[200] = { 0 };
	int j, sum;
	scanf("%d", &n);

	while (i < n) {
		scanf("%d", &a[i]);
		for (j = 1,sum = 0; j < a[i]; j++) {
			if (a[i] % j == 0) {
				sum += j;
			}
		}
		if (sum == a[i]) {
			printf("YES\n");
		}
		else printf("NO\n");
		i++;
	}

	return 0;
}