"""
2022-03-28 18:50:47
AC
1.0
Accepted | 1 * (5 / 100) | 9 ms | 1688 KB
Accepted | 1 * (35 / 100) | 9 ms | 1744 KB
Accepted | 1 * (60 / 100) | 16 ms | 1696 KB

"""

#include<stdio.h>
int main () {
	int x, i = 0, l = 0, j, k, p, a[10005],b[105];
	scanf("%d", &k);
	for (p = 0; p < k; p++) {
		scanf("%d", &x);
		l=0;
		i=0;
		for (j = 0; j <10005; j++) {
			a[j] = 0;
		}
		
		for (j = 1; j < x; j++) {
			if (x % j == 0) {

				i = i + 1;
				a[i] = j;
			}


		}
		for (i = 1; i < x; i++) {
			l = l + a[i];
		}


		if (l == x) {
			printf("YES\n");
		

		} else {
			printf("NO\n");
		
		}
	}



	return 0;
}