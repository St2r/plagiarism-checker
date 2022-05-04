"""
2022-03-28 17:00:28
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 4 ms | 1632 KB

"""

#include<stdio.h>
int main() {
	int n, num, x[100], sum;
	sum = 0;
	scanf("%d",&n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		x[i] = num;
	}
	for (int k = 0; k < n; k++) {
		for (int j = 1; j < x[k]; j++) {
			if ((x[k] % j) == 0) {
				sum += j;
			}
		}
		if(sum == x[k]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		sum = 0;
	}

	return 0;
}