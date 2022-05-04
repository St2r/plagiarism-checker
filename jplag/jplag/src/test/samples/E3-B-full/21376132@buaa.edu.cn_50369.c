"""
2022-03-26 19:12:31
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1664 KB
Accepted | 1 * (35 / 100) | 3 ms | 1680 KB
Accepted | 1 * (60 / 100) | 4 ms | 1604 KB

"""

#include<stdio.h>
#include<math.h>

int main() {
	int n, i, a, j,c=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		for (j = 1; j < a; j++) {
			if(a%j==0){
				c+=j;
			}
		}
		if(c==a){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		c=0;
	}
	return 0;
}