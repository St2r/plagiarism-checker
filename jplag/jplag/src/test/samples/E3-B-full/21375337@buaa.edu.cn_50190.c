"""
2022-03-26 12:29:50
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 6 ms | 1708 KB

"""

#include<stdio.h>
int main()
{
	int n,x;
	int i = 0;
	scanf("%d", &n);

	while (i < n) {
		scanf("%d", &x);
		int sum = 0;
		for (int j = 1; j <x; j++) {
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
		i++;
	}

	return 0;
}