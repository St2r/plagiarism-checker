"""
2022-03-26 09:28:57
AC
1.0
Accepted | 1 * (1 / 10) | 18 ms | 1656 KB
Accepted | 1 * (1 / 10) | 17 ms | 1596 KB
Accepted | 1 * (2 / 10) | 2 ms | 1592 KB
Accepted | 1 * (2 / 10) | 9 ms | 1604 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include<stdio.h>
int main() {
	long long n, j = 1, m = 1;
	double e = 1;
	scanf("%lld", &n);
	if(n>=17){
			printf("2.71828182845905");
		}
	else{for (int i = 1; i <= n; i++) {
		m = 1;
		for (j = 1; j <= i; j++) {
			
			m *= j;
		}
		e += 1.0 / m;
	}
	printf("%.14f", e);
	}
	return 0;
}