"""
2022-03-26 12:46:50
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1648 KB
Accepted | 1 * (60 / 100) | 3 ms | 1648 KB

"""

#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main() {
	int n,a,sum,j = 1;
	scanf("%d", &n);
	while (j <= n) {
		scanf("%d", &a);
        sum=0;
		for (int i=1; i<(a/2)+1;i++){
			if (a % i == 0) {
				sum += i;
			}
		}
		if (sum == a||a==1) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
		j++;
	}
	return 0;
}